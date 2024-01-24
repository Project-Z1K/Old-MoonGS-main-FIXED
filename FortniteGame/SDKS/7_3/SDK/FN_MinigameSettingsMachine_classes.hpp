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

// BlueprintGeneratedClass MinigameSettingsMachine.MinigameSettingsMachine_C
// 0x0040 (0x0CD0 - 0x0C90)
class AMinigameSettingsMachine_C : public AFortMinigameSettingsBuilding
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C90(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UToyOptionsComponent_C*                      ToyOptionsComponent;                                      // 0x0C98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Outpost_Console;                                          // 0x0CA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                GameModeIndex;                                            // 0x0CA8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                CachedGameModeIndex;                                      // 0x0CAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeLimit;                                                // 0x0CB0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	EFortMinigamePlayerSpawnLocationSetting            SpawnLocationSetting;                                     // 0x0CB4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0CB5(0x0003) MISSED OFFSET
	int                                                NumTeams;                                                 // 0x0CB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EFortMinigamePostGameSpawnLocationSetting          PostGameSpawnLocationSetting;                             // 0x0CBC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0CBD(0x0003) MISSED OFFSET
	int                                                PlayerLives;                                              // 0x0CC0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AutoEndTeamThreshold;                                     // 0x0CC4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TeamToMoveToWhenOutOfSpawns;                              // 0x0CC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumKillsForEndCondition;                                  // 0x0CCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MinigameSettingsMachine.MinigameSettingsMachine_C");
		return ptr;
	}


	void UpdateEndConditions();
	void UpdateTeamToMoveToWhenOutOfSpawns();
	void UpdateAutoEndTeamThreshold();
	void UpdatePlayerLives();
	void UpdatePostGameSpawnLocationSetting();
	struct FText BlueprintGetFailedInteractionString(class AFortPawn* InteractingPawn);
	void UpdateTeamSetting();
	void UpdateSpawnLocationSetting();
	void GetCurrentMinigame(class AFortMinigame** Minigame);
	void UpdateTimeLimit();
	void UpdateGameMode();
	void HasMinigameStarted(bool* bHasStarted);
	void IsValidGame(bool* bCanStartGame);
	void GetPickupSpawnLocation(struct FVector* SpawnLocation);
	bool BlueprintOnLocalInteract(class AFortPlayerPawn* InteractingPawn);
	struct FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn);
	void UserConstructionScript();
	void BlueprintOnInteract(class AFortPawn* InteractingPawn);
	void ReceiveBeginPlay();
	void OnGameSettingsUpdated();
	void StartMinigameHelper();
	void AbandonMinigameHelper();
	void SetGameModeToDeathmatch();
	void ExecuteUbergraph_MinigameSettingsMachine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
