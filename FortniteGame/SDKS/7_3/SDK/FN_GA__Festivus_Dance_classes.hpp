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

// BlueprintGeneratedClass GA__Festivus_Dance.GA__Festivus_Dance_C
// 0x0024 (0x095C - 0x0938)
class UGA__Festivus_Dance_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FActiveGameplayEffectHandle                 EffectHandle;                                             // 0x0940(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                AnimMontage;                                              // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldUseSharedAnim;                                      // 0x0950(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0951(0x0003) MISSED OFFSET
	struct FName                                       DanceGrenadeHolsterId;                                    // 0x0954(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA__Festivus_Dance.GA__Festivus_Dance_C");
		return ptr;
	}


	void InvalidHandle(struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo);
	void OnRemoved(struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA__Festivus_Dance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
