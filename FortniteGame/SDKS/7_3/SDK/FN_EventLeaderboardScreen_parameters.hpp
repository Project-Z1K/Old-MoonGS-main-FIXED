#pragma once

// Fortnite (7.3) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EventLeaderboardScreen.EventLeaderboardScreen_C.Init
struct UEventLeaderboardScreen_C_Init_Params
{
	struct FString                                     EventId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__Button_Back2_K2Node_ComponentBoundEvent
struct UEventLeaderboardScreen_C_BndEvt__Button_Back2_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventColorize
struct UEventLeaderboardScreen_C_EventColorize_Params
{
	struct FFortTournamentDisplayInfo                  TournamentDisplayInfo;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventIntro
struct UEventLeaderboardScreen_C_EventIntro_Params
{
};

// Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardRequestUserInfoComplete
struct UEventLeaderboardScreen_C_OnLeaderboardRequestUserInfoComplete_Params
{
};

// Function EventLeaderboardScreen.EventLeaderboardScreen_C.ExecuteUbergraph_EventLeaderboardScreen
struct UEventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventCloseButton__DelegateSignature
struct UEventLeaderboardScreen_C_EventCloseButton__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
