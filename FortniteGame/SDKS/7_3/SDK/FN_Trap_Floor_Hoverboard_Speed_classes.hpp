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

// BlueprintGeneratedClass Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C
// 0x0050 (0x0E98 - 0x0E48)
class ATrap_Floor_Hoverboard_Speed_C : public ABuildingTrapFloor_Hoverboard
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E48(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDecalComponent*                             Decal;                                                    // 0x0E50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_SpeedBoost_Idle;                                        // 0x0E58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Trigger;                                                  // 0x0E60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene1;                                                   // 0x0E68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundCue*                                   Trap_Placed_Sound;                                        // 0x0E70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Ready_Sound;                                         // 0x0E78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Fire_Sound;                                          // 0x0E80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Reload_Sound;                                        // 0x0E88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Explode_Sound;                                       // 0x0E90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C");
		return ptr;
	}


	bool BP_ShouldTrigger(TArray<class AActor*> TouchingActors);
	void UserConstructionScript();
	void OnPlaced();
	void OnOutOfDurability();
	void OnFinishedBuilding();
	void OnWorldReady();
	void ExecuteUbergraph_Trap_Floor_Hoverboard_Speed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
