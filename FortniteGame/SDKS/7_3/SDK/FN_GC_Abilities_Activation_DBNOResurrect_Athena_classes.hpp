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

// BlueprintGeneratedClass GC_Abilities_Activation_DBNOResurrect_Athena.GC_Abilities_Activation_DBNOResurrect_Athena_C
// 0x0000 (0x01A0 - 0x01A0)
class UGC_Abilities_Activation_DBNOResurrect_Athena_C : public UFortGameplayCueNotify_Burst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_Abilities_Activation_DBNOResurrect_Athena.GC_Abilities_Activation_DBNOResurrect_Athena_C");
		return ptr;
	}


	void OnBurst(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
