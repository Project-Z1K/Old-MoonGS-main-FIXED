// Fortnite (7.3) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.IsVolumeEventRelevant
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerState*            PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortVolume*             EventVolume                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMinigame_PlayerCreated_C::IsVolumeEventRelevant(class APlayerState* PlayerState, class AFortVolume* EventVolume, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.IsVolumeEventRelevant");

	AMinigame_PlayerCreated_C_IsVolumeEventRelevant_Params params;
	params.PlayerState = PlayerState;
	params.EventVolume = EventVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.UnbindVolumeDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void AMinigame_PlayerCreated_C::UnbindVolumeDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.UnbindVolumeDelegates");

	AMinigame_PlayerCreated_C_UnbindVolumeDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.BindVolumeDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void AMinigame_PlayerCreated_C::BindVolumeDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.BindVolumeDelegates");

	AMinigame_PlayerCreated_C_BindVolumeDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.ShouldShowScoreboard
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMinigame_PlayerCreated_C::ShouldShowScoreboard(class APlayerController* PlayerController, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.ShouldShowScoreboard");

	AMinigame_PlayerCreated_C_ShouldShowScoreboard_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.AssignTeams
// (Public, BlueprintCallable, BlueprintEvent)

void AMinigame_PlayerCreated_C::AssignTeams()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.AssignTeams");

	AMinigame_PlayerCreated_C_AssignTeams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.SetMusicActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShouldPlayMusic               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerState*            PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMinigame_PlayerCreated_C::SetMusicActive(bool bShouldPlayMusic, class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.SetMusicActive");

	AMinigame_PlayerCreated_C_SetMusicActive_Params params;
	params.bShouldPlayMusic = bShouldPlayMusic;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMinigame_PlayerCreated_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.UserConstructionScript");

	AMinigame_PlayerCreated_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.OnComplete_D9496DB6400ADA561B9C749CD6D8B5BC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             UserWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AMinigame_PlayerCreated_C::OnComplete_D9496DB6400ADA561B9C749CD6D8B5BC(class UUserWidget* UserWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.OnComplete_D9496DB6400ADA561B9C749CD6D8B5BC");

	AMinigame_PlayerCreated_C_OnComplete_D9496DB6400ADA561B9C749CD6D8B5BC_Params params;
	params.UserWidget = UserWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.PlayerTeleportedFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawnAthena*   PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bToSky                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMinigame_PlayerCreated_C::PlayerTeleportedFX(class AFortPlayerPawnAthena* PlayerPawn, bool bToSky)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.PlayerTeleportedFX");

	AMinigame_PlayerCreated_C_PlayerTeleportedFX_Params params;
	params.PlayerPawn = PlayerPawn;
	params.bToSky = bToSky;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.OnPlayerAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMinigame_PlayerCreated_C::OnPlayerAdded(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.OnPlayerAdded");

	AMinigame_PlayerCreated_C_OnPlayerAdded_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.OnPlayerRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMinigame_PlayerCreated_C::OnPlayerRemoved(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.OnPlayerRemoved");

	AMinigame_PlayerCreated_C_OnPlayerRemoved_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.HandleMinigameWarmup
// (Event, Protected, BlueprintEvent)

void AMinigame_PlayerCreated_C::HandleMinigameWarmup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.HandleMinigameWarmup");

	AMinigame_PlayerCreated_C_HandleMinigameWarmup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.HandleMinigameStarted
// (Event, Protected, BlueprintEvent)

void AMinigame_PlayerCreated_C::HandleMinigameStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.HandleMinigameStarted");

	AMinigame_PlayerCreated_C_HandleMinigameStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.HandleMinigameEnded
// (Event, Protected, BlueprintEvent)

void AMinigame_PlayerCreated_C::HandleMinigameEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.HandleMinigameEnded");

	AMinigame_PlayerCreated_C_HandleMinigameEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.OnPlayerTeleportedForMinigameStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTeleportedToSky               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMinigame_PlayerCreated_C::OnPlayerTeleportedForMinigameStart(class APlayerState* PlayerState, bool bTeleportedToSky)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.OnPlayerTeleportedForMinigameStart");

	AMinigame_PlayerCreated_C_OnPlayerTeleportedForMinigameStart_Params params;
	params.PlayerState = PlayerState;
	params.bTeleportedToSky = bTeleportedToSky;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.ShowScoreboardPanel
// (BlueprintCallable, BlueprintEvent)

void AMinigame_PlayerCreated_C::ShowScoreboardPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.ShowScoreboardPanel");

	AMinigame_PlayerCreated_C_ShowScoreboardPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.HideScoreboardPanel
// (BlueprintCallable, BlueprintEvent)

void AMinigame_PlayerCreated_C::HideScoreboardPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.HideScoreboardPanel");

	AMinigame_PlayerCreated_C_HideScoreboardPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.HandleStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortMinigameState             MinigameState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMinigame_PlayerCreated_C::HandleStateChanged(EFortMinigameState MinigameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.HandleStateChanged");

	AMinigame_PlayerCreated_C_HandleStateChanged_Params params;
	params.MinigameState = MinigameState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMinigame_PlayerCreated_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.ReceiveBeginPlay");

	AMinigame_PlayerCreated_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.OnClientEnterVolume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortVolume*             Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMinigame_PlayerCreated_C::OnClientEnterVolume(class APlayerState* PlayerState, class AFortVolume* Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.OnClientEnterVolume");

	AMinigame_PlayerCreated_C_OnClientEnterVolume_Params params;
	params.PlayerState = PlayerState;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.OnClientExitVolume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortVolume*             Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMinigame_PlayerCreated_C::OnClientExitVolume(class APlayerState* PlayerState, class AFortVolume* Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.OnClientExitVolume");

	AMinigame_PlayerCreated_C_OnClientExitVolume_Params params;
	params.PlayerState = PlayerState;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMinigame_PlayerCreated_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.ReceiveEndPlay");

	AMinigame_PlayerCreated_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.ExecuteUbergraph_Minigame_PlayerCreated
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMinigame_PlayerCreated_C::ExecuteUbergraph_Minigame_PlayerCreated(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.ExecuteUbergraph_Minigame_PlayerCreated");

	AMinigame_PlayerCreated_C_ExecuteUbergraph_Minigame_PlayerCreated_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
