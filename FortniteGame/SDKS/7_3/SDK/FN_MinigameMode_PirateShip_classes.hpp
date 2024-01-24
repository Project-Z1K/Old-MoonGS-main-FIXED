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

// BlueprintGeneratedClass MinigameMode_PirateShip.MinigameMode_PirateShip_C
// 0x002C (0x06E8 - 0x06BC)
class AMinigameMode_PirateShip_C : public AMinigameMode_Skirmish_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x06BC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UFortWorldItemDefinition*>            Pirate_Ship_Weapons;                                      // 0x06C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UFortWorldItemDefinition*>            Pirate_Ship_Ammo;                                         // 0x06D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MinigameMode_PirateShip.MinigameMode_PirateShip_C");
		return ptr;
	}


	struct FGameplayTagQuery GetStartQueryForPlayer(class APlayerState* Player);
	void UserConstructionScript();
	void GiveStartingWeapon();
	void ExecuteUbergraph_MinigameMode_PirateShip(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
