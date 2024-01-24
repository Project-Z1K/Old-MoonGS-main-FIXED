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

// Function EventLeaderboardScreen.EventLeaderboardScreen_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UEventLeaderboardScreen_C::Init(struct FString EventId)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.Init");

	UEventLeaderboardScreen_C_Init_Params params;
	params.EventId = EventId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__Button_Back2_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEventLeaderboardScreen_C::BndEvt__Button_Back2_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__Button_Back2_K2Node_ComponentBoundEvent");

	UEventLeaderboardScreen_C_BndEvt__Button_Back2_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventColorize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo TournamentDisplayInfo          (BlueprintVisible, BlueprintReadOnly, Parm)

void UEventLeaderboardScreen_C::EventColorize(struct FFortTournamentDisplayInfo TournamentDisplayInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventColorize");

	UEventLeaderboardScreen_C_EventColorize_Params params;
	params.TournamentDisplayInfo = TournamentDisplayInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventIntro
// (BlueprintCallable, BlueprintEvent)

void UEventLeaderboardScreen_C::EventIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventIntro");

	UEventLeaderboardScreen_C_EventIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardRequestUserInfoComplete
// (Event, Protected, BlueprintEvent)

void UEventLeaderboardScreen_C::OnLeaderboardRequestUserInfoComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardRequestUserInfoComplete");

	UEventLeaderboardScreen_C_OnLeaderboardRequestUserInfoComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.ExecuteUbergraph_EventLeaderboardScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventLeaderboardScreen_C::ExecuteUbergraph_EventLeaderboardScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.ExecuteUbergraph_EventLeaderboardScreen");

	UEventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventCloseButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UEventLeaderboardScreen_C::EventCloseButton__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventCloseButton__DelegateSignature");

	UEventLeaderboardScreen_C_EventCloseButton__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
