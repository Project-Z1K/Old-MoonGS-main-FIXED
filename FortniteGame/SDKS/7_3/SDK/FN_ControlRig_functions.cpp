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

// Function ControlRig.ControlRig.SetGlobalTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   JointName                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              InTransform                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UControlRig::SetGlobalTransform(struct FName JointName, struct FTransform InTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.SetGlobalTransform");

	UControlRig_SetGlobalTransform_Params params;
	params.JointName = JointName;
	params.InTransform = InTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRig.GetGlobalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   JointName                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UControlRig::GetGlobalTransform(struct FName JointName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.GetGlobalTransform");

	UControlRig_GetGlobalTransform_Params params;
	params.JointName = JointName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRig.GetDeltaTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UControlRig::GetDeltaTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.GetDeltaTime");

	UControlRig_GetDeltaTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.OnPreInitialize
// (Native, Event, Public, BlueprintEvent)

void UControlRigComponent::OnPreInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.OnPreInitialize");

	UControlRigComponent_OnPreInitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.OnPreEvaluate
// (Native, Event, Public, BlueprintEvent)

void UControlRigComponent::OnPreEvaluate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.OnPreEvaluate");

	UControlRigComponent_OnPreEvaluate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.OnPostInitialize
// (Native, Event, Public, BlueprintEvent)

void UControlRigComponent::OnPostInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.OnPostInitialize");

	UControlRigComponent_OnPostInitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.OnPostEvaluate
// (Native, Event, Public, BlueprintEvent)

void UControlRigComponent::OnPostEvaluate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.OnPostEvaluate");

	UControlRigComponent_OnPostEvaluate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.BP_GetControlRig
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UControlRig*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UControlRig* UControlRigComponent::BP_GetControlRig()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.BP_GetControlRig");

	UControlRigComponent_BP_GetControlRig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRigControl.OnTransformChanged
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTransform              NewTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AControlRigControl::OnTransformChanged(struct FTransform NewTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigControl.OnTransformChanged");

	AControlRigControl_OnTransformChanged_Params params;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigControl.OnSelectionChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (Parm, ZeroConstructor, IsPlainOldData)

void AControlRigControl::OnSelectionChanged(bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigControl.OnSelectionChanged");

	AControlRigControl_OnSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigControl.OnManipulatingChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsManipulating                (Parm, ZeroConstructor, IsPlainOldData)

void AControlRigControl::OnManipulatingChanged(bool bIsManipulating)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigControl.OnManipulatingChanged");

	AControlRigControl_OnManipulatingChanged_Params params;
	params.bIsManipulating = bIsManipulating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigControl.OnHoveredChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (Parm, ZeroConstructor, IsPlainOldData)

void AControlRigControl::OnHoveredChanged(bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigControl.OnHoveredChanged");

	AControlRigControl_OnHoveredChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigControl.OnEnabledChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsEnabled                     (Parm, ZeroConstructor, IsPlainOldData)

void AControlRigControl::OnEnabledChanged(bool bIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigControl.OnEnabledChanged");

	AControlRigControl_OnEnabledChanged_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
