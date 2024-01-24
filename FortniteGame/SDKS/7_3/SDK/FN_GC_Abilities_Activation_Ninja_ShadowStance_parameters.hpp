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

// Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.Restore Material on Weapon Mesh
struct AGC_Abilities_Activation_Ninja_ShadowStance_C_Restore_Material_on_Weapon_Mesh_Params
{
	class AFortPlayerPawn*                             Player_Pawn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortWeapon*                                 Weapon_to_Restore__Defaults_to_Current_;                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.Override Material and Copy Parameters on Weapon Mesh
struct AGC_Abilities_Activation_Ninja_ShadowStance_C_Override_Material_and_Copy_Parameters_on_Weapon_Mesh_Params
{
	class AFortPlayerPawn*                             Player_Pawn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.Restore OG Materials
struct AGC_Abilities_Activation_Ninja_ShadowStance_C_Restore_OG_Materials_Params
{
	class AFortPlayerPawn*                             NInja_Pawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.Destroy Duplicate Mesh
struct AGC_Abilities_Activation_Ninja_ShadowStance_C_Destroy_Duplicate_Mesh_Params
{
};

// Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.Create Duplicate Mesh
struct AGC_Abilities_Activation_Ninja_ShadowStance_C_Create_Duplicate_Mesh_Params
{
	class AFortPlayerPawn*                             NinjaPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.Override Material to Dissolve Material
struct AGC_Abilities_Activation_Ninja_ShadowStance_C_Override_Material_to_Dissolve_Material_Params
{
	class AFortPlayerPawn*                             NInja_Pawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.Save Material
struct AGC_Abilities_Activation_Ninja_ShadowStance_C_Save_Material_Params
{
	class AFortPlayerPawn*                             NInja_Pawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.UserConstructionScript
struct AGC_Abilities_Activation_Ninja_ShadowStance_C_UserConstructionScript_Params
{
};

// Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.Animate Ninja ShadowStance Dissolve__FinishedFunc
struct AGC_Abilities_Activation_Ninja_ShadowStance_C_Animate_Ninja_ShadowStance_Dissolve__FinishedFunc_Params
{
};

// Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.Animate Ninja ShadowStance Dissolve__UpdateFunc
struct AGC_Abilities_Activation_Ninja_ShadowStance_C_Animate_Ninja_ShadowStance_Dissolve__UpdateFunc_Params
{
};

// Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.Shadow Stance Dissolve Timeline
struct AGC_Abilities_Activation_Ninja_ShadowStance_C_Shadow_Stance_Dissolve_Timeline_Params
{
	bool                                               Reverse;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.K2_HandleGameplayCue
struct AGC_Abilities_Activation_Ninja_ShadowStance_C_K2_HandleGameplayCue_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.OnWeaponEquipped
struct AGC_Abilities_Activation_Ninja_ShadowStance_C_OnWeaponEquipped_Params
{
	class AFortWeapon*                                 NewWeapon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortWeapon*                                 PrevWeapon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.ExecuteUbergraph_GC_Abilities_Activation_Ninja_ShadowStance
struct AGC_Abilities_Activation_Ninja_ShadowStance_C_ExecuteUbergraph_GC_Abilities_Activation_Ninja_ShadowStance_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
