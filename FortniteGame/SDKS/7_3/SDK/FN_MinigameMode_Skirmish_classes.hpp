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

// BlueprintGeneratedClass MinigameMode_Skirmish.MinigameMode_Skirmish_C
// 0x001C (0x06BC - 0x06A0)
class AMinigameMode_Skirmish_C : public AFortMinigame
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFortWorldItemDefinition*                    StartingWeapon;                                           // 0x06A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortWorldItemDefinition*                    StartingAmmo;                                             // 0x06B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StartingAmmoAmmount;                                      // 0x06B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MinigameMode_Skirmish.MinigameMode_Skirmish_C");
		return ptr;
	}


	void GiveStartingWeapon();
	void SetSinglePlayerToStart(class AFortPlayerController* Player);
	void SetPlayerPositionToStart();
	void UserConstructionScript();
	void HandleMinigameWarmup();
	void ExecuteUbergraph_MinigameMode_Skirmish(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
