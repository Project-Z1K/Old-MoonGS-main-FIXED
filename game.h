#pragma once

#include "ue4.h"
namespace Game
{
    void Start()
    {
        printf("[+] SWITCHING LEVEL!\n");
        GetPlayerController()->SwitchLevel(L"Athena_Terrain?game=/Game/Athena/Athena_GameMode.Athena_GameMode_C");
        bTraveled = true;
    }

    void OnReadyToStartMatch()
    {
        auto GameState = reinterpret_cast<AFortGameStateAthena*>(GetWorld()->GameState);
        auto GameMode = reinterpret_cast<AFortGameModeAthena*>(GetWorld()->AuthorityGameMode);

        //auto InProgress = GetKismetString()->STATIC_Conv_StringToName(L"InProgress");
        FName InProgress = {};

        ((AFortGameStateAthena*)::GetWorld()->GameState)->GamePhase = EAthenaGamePhase::Warmup;
        ((AFortGameStateAthena*)::GetWorld()->GameState)->OnRep_GamePhase(EAthenaGamePhase::None);

        GameMode->bDisableGCOnServerDuringMatch = true;
        GameMode->bAllowSpectateAfterDeath = !bRespawn;

        GameMode->bEnableReplicationGraph = true;

        GameMode->MatchState = InProgress;
        GameMode->K2_OnSetMatchState(InProgress);


        //Solo: 0, Duo: 1, Squad: 2
        static int PlaylistMode = 1;


        UFortPlaylistAthena* Playlist = 0;

        switch (PlaylistMode)
        {
        case 0:
            Playlist = UObject::FindObject<UFortPlaylistAthena>("FortPlaylistAthena Playlist_DefaultSolo.Playlist_DefaultSolo");
            break;
        case 1:
            Playlist = UObject::FindObject<UFortPlaylistAthena>("FortPlaylistAthena Playlist_DefaultDuo.Playlist_DefaultDuo");
            break;
        case 2:
            Playlist = UObject::FindObject<UFortPlaylistAthena>("FortPlaylistAthena Playlist_DefaultSquad.Playlist_DefaultSquad");
            break;
        }

#ifndef VERSION_7_3
        Playlist->bNoDBNO = PlaylistMode == 1;
#endif
        GameMode->bAlwaysDBNO = !(PlaylistMode == 1);

        if (bRespawn)
        {
#ifndef VERSION_7_3
            Playlist->RespawnLocation = EAthenaRespawnLocation::Air;
            Playlist->RespawnType = EAthenaRespawnType::InfiniteRespawn;
            Playlist->bNoDBNO = true;
#endif

            Playlist->bRespawnInAir = true;
            Playlist->RespawnType = EAthenaRespawnType::InfiniteRespawn;
            Playlist->DBNOType = EDBNOType::Off;
            GameMode->MinRespawnDelay = 5.0f;
            GameMode->bAlwaysDBNO = false;
        }

        GameState->CurrentPlaylistId = Playlist->PlaylistId;
        GameState->OnRep_CurrentPlaylistId();

#ifdef VERSION_7_3
        GameState->CurrentPlaylistInfo.BasePlaylist = Playlist;
        GameState->OnRep_CurrentPlaylistInfo();
#else
        GameState->CurrentPlaylistData = Playlist;
        GameState->OnRep_CurrentPlaylistData();

        if (Function == "ServerClientIsReadyToRespawn")
        {
            auto PC = (AFortPlayerControllerAthena*)Obj;
            auto GameMode = (AFortGameModeAthena*)GetWorld()->AuthorityGameMode;

            auto Location = PC->PreviousPawn->K2_GetActorLocation();

            FTransform transform;
            transform.Translation = Location;
            transform.Scale3D = { 1, 1 , 1 };

            auto NewPawn = (AFortPlayerPawnAthena*)GameMode->SpawnDefaultPawnAtTransform(PC, transform);

            PC->Possess(NewPawn);
            PC->RespawnPlayerAfterDeath(true);

            NewPawn->TeleportToSkyDive(15000);

            NewPawn->SetHealth(100);
            NewPawn->SetShield(100);
        }

#endif
        //GameMode->FriendlyFireType = EFriendlyFireType::Off;

        GameMode->StartPlay();

        GameState->bReplicatedHasBegunPlay = true;
        GameState->OnRep_ReplicatedHasBegunPlay();

        GameMode->StartMatch();
    }
}
