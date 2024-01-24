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

// BlueprintGeneratedClass Athena_PlayerController.Athena_PlayerController_C
// 0x00B8 (0x2B88 - 0x2AD0)
class AAthena_PlayerController_C : public AFortPlayerControllerAthena
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2AD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             ListenerOverride;                                         // 0x2AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             VictoryRoyaleAudio;                                       // 0x2AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             VictoryRoyaleMusic;                                       // 0x2AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  VictoryRoyaleMenuMusicAsset;                              // 0x2AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x2AF8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Athena_PlayerController.Athena_PlayerController_C.CreativeTool
	struct FGameplayTagContainer                       BladeWielderTag;                                          // 0x2B20(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	EFortItemType                                      InteractingItemType;                                      // 0x2B40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x2B41(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       InteractionTags;                                          // 0x2B48(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    PawnPossessedDispatcher;                                  // 0x2B68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              PermissionRecheckTime;                                    // 0x2B78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x2B7C(0x0004) MISSED OFFSET
	struct FTimerHandle                                PermissionsRecheckTimerHandle;                            // 0x2B80(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Athena_PlayerController.Athena_PlayerController_C");
		return ptr;
	}


	void SetupPermissionRecheckTimer();
	void LeftAllVolumes(bool* bLeftVolumes);
	void UserConstructionScript();
	void OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D(class UObject* Loaded);
	void ReceiveBeginPlay();
	void PlayWinEffects(class APawn* FinisherPawn, class UFortWeaponItemDefinition* FinishingWeapon, EDeathCause DeathCause);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void Start_Victory_Royale_Music();
	void OnMusicPackLoaded(class UAthenaMusicPackItemDefinition* NewMusicPack);
	void OnLeaveVolume(class AFortVolume* Volume);
	void OnEnterVolume(class AFortVolume* Volume);
	void HandlePermissions(class AFortVolume* Volume);
	void GrantItem();
	void RevokeItem();
	void PermissionsChanged();
	void OnLocalInteraction(class AActor* ReceivingActor);
	void RemoveItem();
	void RevokeCreativeTool();
	void ReactToPawnPossession(class APawn* PossessedPawn);
	void ExecuteUbergraph_Athena_PlayerController(int EntryPoint);
	void PawnPossessedDispatcher__DelegateSignature(class APawn* PossessedPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
