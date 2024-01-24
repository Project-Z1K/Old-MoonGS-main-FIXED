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

// Function SocialPanelView_UserLists.SocialPanelView_UserLists_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply USocialPanelView_UserLists_C::OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanelView_UserLists.SocialPanelView_UserLists_C.OnKeyUp");

	USocialPanelView_UserLists_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SocialPanelView_UserLists.SocialPanelView_UserLists_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply USocialPanelView_UserLists_C::OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanelView_UserLists.SocialPanelView_UserLists_C.OnKeyDown");

	USocialPanelView_UserLists_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SocialPanelView_UserLists.SocialPanelView_UserLists_C.OnSocialPanelTabChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            PanelIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USocialPanelView_UserLists_C::OnSocialPanelTabChanged(int PanelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanelView_UserLists.SocialPanelView_UserLists_C.OnSocialPanelTabChanged");

	USocialPanelView_UserLists_C_OnSocialPanelTabChanged_Params params;
	params.PanelIndex = PanelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialPanelView_UserLists.SocialPanelView_UserLists_C.ExecuteUbergraph_SocialPanelView_UserLists
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USocialPanelView_UserLists_C::ExecuteUbergraph_SocialPanelView_UserLists(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanelView_UserLists.SocialPanelView_UserLists_C.ExecuteUbergraph_SocialPanelView_UserLists");

	USocialPanelView_UserLists_C_ExecuteUbergraph_SocialPanelView_UserLists_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
