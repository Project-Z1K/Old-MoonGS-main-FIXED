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

// BlueprintGeneratedClass PartyDisplayManagerBP.PartyDisplayManagerBP_C
// 0x01B0 (0x0610 - 0x0460)
class APartyDisplayManagerBP_C : public APartyDisplayManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0460(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        PrefabActorComp;                                          // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ScalePivot;                                               // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        PivotHolder;                                              // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    CelebratoryFX;                                            // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              HoloMatColorPulse_Alpha_E6C257BB472EFEF7971B66A1E8FAE3D8; // 0x04A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    HoloMatColorPulse__Direction_E6C257BB472EFEF7971B66A1E8FAE3D8;// 0x04A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          HoloMatColorPulse;                                        // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ScaleAnimEvolve_Scaling;                                  // 0x04B0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScaleAnimEvolve__Direction;                               // 0x04B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04B5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScaleAnimEvolve;                                          // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ScaleAnimLevel_Scaling_CC68128E49202D0C982B7A945E41AF43;  // 0x04C0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScaleAnimLevel__Direction_CC68128E49202D0C982B7A945E41AF43;// 0x04C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04C5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScaleAnimLevel;                                           // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                TimerHandle;                                              // 0x04D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Rotation;                                                 // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04DC(0x0004) MISSED OFFSET
	class UFortItem*                                   ItemToRepresent;                                          // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PreviewRotation;                                          // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x04E9(0x0007) MISSED OFFSET
	class UCurveFloat*                                 RotationAnimation;                                        // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             LevelUpFX;                                                // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             EvolveUpFX;                                               // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FXTargetLocation;                                         // 0x0508(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCharacter;                                              // 0x0514(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsEvolve;                                                 // 0x0515(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0516(0x0002) MISSED OFFSET
	class UParticleSystem*                             CharLevelUpFX;                                            // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             CharEvolveUpFX;                                           // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    UIoverrideMID;                                            // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasResetVisuals;                                          // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0531(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem2;                                          // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             CharSwapTransitionFX;                                     // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCharacterVisible;                                       // 0x0550(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0551(0x0007) MISSED OFFSET
	class AFortPlayerPawn*                             HeroPawn;                                                 // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               SanityChecker;                                            // 0x0560(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0561(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MID_HoloMaterial;                                         // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HideElement_2;                                            // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       VertexRange;                                              // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HideElement_3;                                            // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HideElement_4;                                            // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HideElement_5;                                            // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HideElement_6;                                            // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HideElement_7;                                            // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HideElement_8;                                            // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HideElement_9;                                            // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HideElement_10;                                           // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HideElement_11;                                           // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ScalePivotPreScaleLocation;                               // 0x05C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StaticMeshPreScaleLocation;                               // 0x05D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SkelMeshPreScaleLocation;                                 // 0x05E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PrefabPreScaleLocation;                                   // 0x05EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InScaleFx;                                                // 0x05F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x05F9(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    GhostPistolVFX;                                           // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Ghost_Sword_VFX;                                          // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PartyDisplayManagerBP.PartyDisplayManagerBP_C");
		return ptr;
	}


	void ResetPreScaleLocations();
	void StorePreScaleLocations();
	void RestoreTeleportMIDsInProgress(class AFortPlayerPawn* Pawn);
	void HandlePartyMemberInProgressDisplayChanges(class AFortPlayerPawn* Pawn);
	void PartyMemberInProgressCheck(class AFortPlayerPawn* Pawn);
	class AActor* GetPrefabActorForCurrentDisplayedItem();
	void PostSetupPrefabVisuals();
	void GetMeshForCurrentDisplayedItem(class UMeshComponent** OutDisplayedMesh);
	void GetItemDefinitionToShow(class UFortItemDefinition** ItemDefinition);
	void SetUIOverrideVisuals(class UTexture2D* Large_Texture, class UFortItemDefinition* Item, EFortRarity Rarity);
	struct FTransform GetWeaponPlacementTransform();
	void UpdatePreviewMeshTransforms();
	struct FTransform GetItemPreviewOffset(class UFortItemDefinition* ItemDefinition);
	struct FTransform GetPreviewMeshWorldTransform();
	void SetupStaticMeshVisuals(class UStaticMesh* NewMesh);
	void SetupSkeletalMeshVisuals(class USkeletalMesh* NewMesh);
	void ResetVisuals();
	void UserConstructionScript();
	void ScaleAnimLevel__FinishedFunc();
	void ScaleAnimLevel__UpdateFunc();
	void ScaleAnimEvolve__FinishedFunc();
	void ScaleAnimEvolve__UpdateFunc();
	void HoloMatColorPulse__FinishedFunc();
	void HoloMatColorPulse__UpdateFunc();
	void Completed(class UFortItem* Item, struct FGuid RequestId);
	void ShowLoading();
	void HideLoading();
	void ShowItem(class UFortItem* ItemToView, struct FGuid RequestId);
	void PlayLevelUpEffect();
	void PlayEvolutionEffect();
	void CelebrateWithFX();
	void PerformScaleMeshFX();
	void HandleLoadingAssetsForItemCompleted(class UFortItem* ItemWhoseAssetsWereLoaded, TArray<class UObject*> LoadedAssets, struct FGuid RequestId);
	void ReceiveTick(float DeltaSeconds);
	void Set_Character_Parts_Visibility(bool NewVisible);
	void CharacterCustomizationFinished(class AFortPlayerPawn* Pawn);
	void ReceiveBeginPlay();
	void OnPlayerPawnAddedToLobby(class AFortPlayerPawn* Pawn);
	void ResOutPawnFromLobby(class AFortPlayerPawn* Pawn, int PartyIndex);
	void SetupPrefabVisuals();
	void ExecuteUbergraph_PartyDisplayManagerBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
