#pragma once

// Fortnite (7.3) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Minigame_PlayerCreated.Minigame_PlayerCreated_C
// 0x0020 (0x06C0 - 0x06A0)
class AMinigame_PlayerCreated_C : public AFortMinigame
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Music_Loop;                                               // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                NumTeams;                                                 // 0x06B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxTeams;                                                 // 0x06B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCommonActivatablePanel*                     ScoreboardPanel;                                          // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Minigame_PlayerCreated.Minigame_PlayerCreated_C");
		return ptr;
	}


	void IsVolumeEventRelevant(class APlayerState* PlayerState, class AFortVolume* EventVolume, bool* bResult);
	void UnbindVolumeDelegates();
	void BindVolumeDelegates();
	void ShouldShowScoreboard(class APlayerController* PlayerController, bool* bResult);
	void AssignTeams();
	void SetMusicActive(bool bShouldPlayMusic, class APlayerState* PlayerState);
	void UserConstructionScript();
	void OnComplete_D9496DB6400ADA561B9C749CD6D8B5BC(class UUserWidget* UserWidget);
	void PlayerTeleportedFX(class AFortPlayerPawnAthena* PlayerPawn, bool bToSky);
	void OnPlayerAdded(class APlayerState* PlayerState);
	void OnPlayerRemoved(class APlayerState* PlayerState);
	void HandleMinigameWarmup();
	void HandleMinigameStarted();
	void HandleMinigameEnded();
	void OnPlayerTeleportedForMinigameStart(class APlayerState* PlayerState, bool bTeleportedToSky);
	void ShowScoreboardPanel();
	void HideScoreboardPanel();
	void HandleStateChanged(EFortMinigameState MinigameState);
	void ReceiveBeginPlay();
	void OnClientEnterVolume(class APlayerState* PlayerState, class AFortVolume* Volume);
	void OnClientExitVolume(class APlayerState* PlayerState, class AFortVolume* Volume);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_Minigame_PlayerCreated(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
