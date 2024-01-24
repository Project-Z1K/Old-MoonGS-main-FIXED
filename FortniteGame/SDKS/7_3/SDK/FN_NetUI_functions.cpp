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

// Function NetUI.ConnectionTimeoutWidget.StopTimeoutUICheck
// (Final, Native, Protected, BlueprintCallable)

void UConnectionTimeoutWidget::StopTimeoutUICheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function NetUI.ConnectionTimeoutWidget.StopTimeoutUICheck");

	UConnectionTimeoutWidget_StopTimeoutUICheck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NetUI.ConnectionTimeoutWidget.StartTimeoutUICheck
// (Final, Native, Protected, BlueprintCallable)

void UConnectionTimeoutWidget::StartTimeoutUICheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function NetUI.ConnectionTimeoutWidget.StartTimeoutUICheck");

	UConnectionTimeoutWidget_StartTimeoutUICheck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NetUI.NetDebugWidget.StopTimer
// (Final, Native, Protected, BlueprintCallable)

void UNetDebugWidget::StopTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function NetUI.NetDebugWidget.StopTimer");

	UNetDebugWidget_StopTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NetUI.NetDebugWidget.StartTimer
// (Final, Native, Protected, BlueprintCallable)

void UNetDebugWidget::StartTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function NetUI.NetDebugWidget.StartTimer");

	UNetDebugWidget_StartTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
