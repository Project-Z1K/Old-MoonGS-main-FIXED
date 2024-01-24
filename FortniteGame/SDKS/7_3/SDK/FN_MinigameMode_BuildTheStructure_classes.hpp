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

// BlueprintGeneratedClass MinigameMode_BuildTheStructure.MinigameMode_BuildTheStructure_C
// 0x000C (0x06AC - 0x06A0)
class AMinigameMode_BuildTheStructure_C : public AFortMinigame
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                AmmountOfWood;                                            // 0x06A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MinigameMode_BuildTheStructure.MinigameMode_BuildTheStructure_C");
		return ptr;
	}


	void GiveWood();
	void UserConstructionScript();
	void HandleMinigameWarmup();
	void HandleMinigameEnded();
	void ExecuteUbergraph_MinigameMode_BuildTheStructure(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
