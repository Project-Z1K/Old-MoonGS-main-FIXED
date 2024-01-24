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

// BlueprintGeneratedClass B_Athena_VendingMachine.B_Athena_VendingMachine_C
// 0x0140 (0x0A18 - 0x08D8)
class AB_Athena_VendingMachine_C : public ABuildingItemCollectorActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                         SpotLight;                                                // 0x08E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UForceFeedbackComponent*                     ForceFeedbackFail;                                        // 0x08E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UForceFeedbackComponent*                     ForceFeedbackSuccess;                                     // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             VendingMachine_Ambient;                                   // 0x08F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Loot_Effect_Vending;                                    // 0x0900(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_VendingMachineQuest;                                   // 0x0908(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0910(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              VendWobble_Flash;                                         // 0x0918(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              VendWobble_WobbleTime;                                    // 0x091C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    VendWobble__Direction;                                    // 0x0920(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0921(0x0007) MISSED OFFSET
	class UTimelineComponent*                          VendWobble;                                               // 0x0928(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SwitchHitch_Slide_A93D31CA462BFD95FDDD9E8A0BE99DA5;       // 0x0930(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SwitchHitch_Flash_A93D31CA462BFD95FDDD9E8A0BE99DA5;       // 0x0934(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SwitchHitch_Wobble_A93D31CA462BFD95FDDD9E8A0BE99DA5;      // 0x0938(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SwitchHitch__Direction_A93D31CA462BFD95FDDD9E8A0BE99DA5;  // 0x093C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x093D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          SwitchHitch;                                              // 0x0940(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MontiorMat;                                               // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MetalMat;                                                 // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentCaptureCount;                                      // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x095C(0x0004) MISSED OFFSET
	struct FText                                       Vend_String;                                              // 0x0960(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  SearchSound;                                              // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  VendFailedSound;                                          // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CycleSound;                                               // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CostAmount;                                               // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0994(0x0004) MISSED OFFSET
	class UTexture*                                    MaterialType;                                             // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Vend_Succeeded_Sound;                                     // 0x09A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               VendSuccess;                                              // 0x09A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WasHit;                                                   // 0x09A9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x09AA(0x0002) MISSED OFFSET
	float                                              CycleSoundVolume;                                         // 0x09AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCurveTableRowHandle                        TossOnGroundSetting;                                      // 0x09B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Wood_String;                                              // 0x09C0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Stone_String;                                             // 0x09D8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Metal_String;                                             // 0x09F0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	EFortRarity                                        OverrideVendingMachineRarity;                             // 0x0A08(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0A09(0x0007) MISSED OFFSET
	class USoundBase*                                  Ambient_SoundCue;                                         // 0x0A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Athena_VendingMachine.B_Athena_VendingMachine_C");
		return ptr;
	}


	bool GetOverrideRarity(EFortRarity* Rarity);
	void SetRarityColors(struct FLinearColor Color);
	struct FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn);
	void UserConstructionScript();
	void SwitchHitch__FinishedFunc();
	void SwitchHitch__UpdateFunc();
	void VendWobble__FinishedFunc();
	void VendWobble__UpdateFunc();
	void VendWobble__Start_FF_Time__EventFunc();
	void BlueprintOnInteract(class AFortPawn* InteractingPawn);
	void BlueprintOnBeginInteract();
	void PlayVendFX();
	void UpdateCollectorsActiveItem(int StartingSeedValue, class UFortWorldItemDefinition* InputItem, class UTexture* InputTexture, int CurrentGoal, int CurrentCollectedAmount, int CurrentCaptureCount, class UTexture* OutputTexture);
	void PlayVendFailFX();
	void OnForcedCycle();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Athena_VendingMachine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
