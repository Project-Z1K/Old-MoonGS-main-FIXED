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

// BlueprintGeneratedClass QuestScanningRobot.QuestScanningRobot_C
// 0x0020 (0x07B0 - 0x0790)
class AQuestScanningRobot_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0790(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        BaseBotGame;                                              // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass QuestScanningRobot.QuestScanningRobot_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void animdone(class UAnimMontage* Montage, bool bInterrupted);
	void ExecuteUbergraph_QuestScanningRobot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
