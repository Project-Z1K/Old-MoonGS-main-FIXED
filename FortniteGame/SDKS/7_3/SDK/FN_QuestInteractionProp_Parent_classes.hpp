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

// BlueprintGeneratedClass QuestInteractionProp_Parent.QuestInteractionProp_Parent_C
// 0x03A8 (0x1080 - 0x0CD8)
class AQuestInteractionProp_Parent_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_PreActivationEffect;                                    // 0x0CE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            ContributionTrigger;                                      // 0x0CE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_ObjectUsed;                                             // 0x0CF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_QuestMarkerBang;                                        // 0x0CF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_InteractionSuccess;                                     // 0x0D00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortMiniMapComponent*                       FortMiniMap;                                              // 0x0D08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_InteractionHint;                                        // 0x0D10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       InteractText;                                             // 0x0D18(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               InteractionEffects;                                       // 0x0D30(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0D31(0x0003) MISSED OFFSET
	int                                                CurrentQuestState;                                        // 0x0D34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerController*                       InteractedController;                                     // 0x0D38(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UFortQuestItemDefinition*                    QuestItemReference;                                       // 0x0D40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       QuestObjectiveBackendName;                                // 0x0D48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PrerequisiteQuestObjectiveBackendName;                    // 0x0D50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableRowHandle                         CustomObjectiveStatEvent;                                 // 0x0D58(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortWorldItemDefinition*                    QuestItemReward;                                          // 0x0D68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              QuestItemDropChancePercent;                               // 0x0D70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                QuestItemQuantity;                                        // 0x0D74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_InteractionMarkerBang>            EnumInteractionBang;                                      // 0x0D78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0D79(0x0007) MISSED OFFSET
	class UParticleSystem*                             ParticleInteractionHint;                                  // 0x0D80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ParticleInteractionHintOffset;                            // 0x0D88(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0D94(0x0004) MISSED OFFSET
	class UParticleSystem*                             ParticleInteractionSucceeded;                             // 0x0D98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ParticleInteractionSuccessOffset;                         // 0x0DA0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    ParticleInteractionSuccessRotationOffset;                 // 0x0DAC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ParticleQuestMarkerBangOffset;                            // 0x0DB8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0DC4(0x0004) MISSED OFFSET
	class USoundCue*                                   AmbientSoundLoop;                                         // 0x0DC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SoundInteractionSucceeded;                                // 0x0DD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortConversation*                           Conversation_Init;                                        // 0x0DD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Conversation_Init_Radius;                                 // 0x0DE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0DE4(0x0004) MISSED OFFSET
	class UFortConversation*                           Conversation_Stage_2;                                     // 0x0DE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortConversation*                           Conversation_Stage_3;                                     // 0x0DF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortConversation*                           Conversation_Stage_4;                                     // 0x0DF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortConversation*                           Conversation_Stage_5;                                     // 0x0E00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortConversation*                           Conversation_Stage_6;                                     // 0x0E08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortConversation*                           Conversation_Stage_7;                                     // 0x0E10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortConversation*                           Conversation_Stage_8;                                     // 0x0E18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortConversation*                           Conversation_Stage_9;                                     // 0x0E20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortConversation*                           Conversation_Stage_10;                                    // 0x0E28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortConversation*                           Conversation_Stage_11;                                    // 0x0E30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ContributionTriggerOffset;                                // 0x0E38(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ContributionTriggerRadiius;                               // 0x0E44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PreActivateEffectsLocation;                               // 0x0E48(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0E54(0x0004) MISSED OFFSET
	class UParticleSystem*                             ParticlePreActivate;                                      // 0x0E58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInvulnerable;                                           // 0x0E60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsVolatile;                                               // 0x0E61(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowScaningDrone;                                        // 0x0E62(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x5];                                       // 0x0E63(0x0005) MISSED OFFSET
	class UClass*                                      ScanningDroneActor;                                       // 0x0E68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  MinimapIconTexture;                                       // 0x0E70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    DebugParticleRef;                                         // 0x0E78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FText                                       QuestItemNotNeededText;                                   // 0x0E80(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       QuestItemDamagedWarningText;                              // 0x0E98(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AController*                                 PlayerNotOnQuestRef;                                      // 0x0EB0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 InteractedMeshSwapRef;                                    // 0x0EB8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           OverrideMeshMI;                                           // 0x0EC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           InteractedMeshSwapMI_Override;                            // 0x0EC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           InteractedMeshSwapMI;                                     // 0x0ED0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           InteractedMeshSwapMI02;                                   // 0x0ED8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           InteractedMeshCosmetic1_MI_Override;                      // 0x0EE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           InteractedMeshCosmetic2_MI_Override;                      // 0x0EE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             AmbientLoopingSoundRef;                                   // 0x0EF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UStaticMesh*                                 CosmeticMesh_2;                                           // 0x0EF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 CosmeticMesh_3;                                           // 0x0F00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                                       // 0x0F08(0x0008) MISSED OFFSET
	struct FTransform                                  CosmeticMesh;                                             // 0x0F10(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        CosmeticMeshRef;                                          // 0x0F40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData08[0x8];                                       // 0x0F48(0x0008) MISSED OFFSET
	struct FTransform                                  CosmeticMesh02;                                           // 0x0F50(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        CosmeticMesh2Ref;                                         // 0x0F80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class AFortPlayerController*>               ContributedPlayers;                                       // 0x0F88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               AllowContributors;                                        // 0x0F98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0F99(0x0007) MISSED OFFSET
	TArray<struct FUniqueNetIdRepl>                    InteractedPlayerNetIDRef;                                 // 0x0FA0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystemComponent*                    PreActivateEmitterRef;                                    // 0x0FB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UClass*                                      VolatileGameplayEffect;                                   // 0x0FB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VolatileNearActorDistance;                                // 0x0FC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0FC4(0x0004) MISSED OFFSET
	class UParticleSystem*                             VolatileExplosionParticleEmitter;                         // 0x0FC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VolatileExplosionParticleOffset;                          // 0x0FD0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               VolatileDeconstructorVolume;                              // 0x0FDC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0FDD(0x0003) MISSED OFFSET
	struct FVector                                     VolatileDeconstructorBoxExtents;                          // 0x0FE0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0FEC(0x0004) MISSED OFFSET
	class USoundBase*                                  VolatileExplosionSoundCue;                                // 0x0FF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      VolatileExplosionCameraShake;                             // 0x0FF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     QuestItemSpawnVector;                                     // 0x1000(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x100C(0x0004) MISSED OFFSET
	class AFortPlayerController*                       ContributingController;                                   // 0x1010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerController*                       ControllerForDialog;                                      // 0x1018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UFortConversation*                           Conversation_Stage_12;                                    // 0x1020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortConversation*                           Conversation_Stage_13;                                    // 0x1028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortConversation*                           Conversation_Stage_14;                                    // 0x1030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortConversation*                           Conversation_Stage_15;                                    // 0x1038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortConversation*                           Conversation_Stage_16;                                    // 0x1040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        NewInteractedMesh;                                        // 0x1048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class AFortPlayerController*>               Controllers_Init_Played;                                  // 0x1050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UClass*                                      InteractionActorToSpawn;                                  // 0x1060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InteractionActorQuantity;                                 // 0x1068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x106C(0x0004) MISSED OFFSET
	class AActor*                                      ClientInteractionActorRef;                                // 0x1070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ClientInteractionActorToSpawn;                            // 0x1078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass QuestInteractionProp_Parent.QuestInteractionProp_Parent_C");
		return ptr;
	}


	void ClientInteractActor();
	void OverrideDefaultMaterialInstance();
	void FadeInAmbientSound();
	void ChangeMaterialElements();
	void SpawnAmbientSound();
	void FadeOutAmbientSound();
	void SwapMeshOnInteract();
	void ScaleEffects();
	void OnRep_InteractedPlayerNetIDRef();
	void StorePlayerInteract(class AFortPlayerController* InteractingPlayer);
	void OnRep_InteractionEffects();
	void WhereToSpawnRobot(class AFortPlayerPawn* InteractingPlayerPawnRef, struct FTransform* RobotSpawnTransform);
	void DoesPlayerHaveQuest(class AFortPlayerController* PlayerController, bool* QuestValid, class AFortPlayerController** PlayerControllerRef);
	void GiveQuestItemToInteractingPlayer(class AFortPlayerController* Player_Controller_Ref);
	void WhatStageIsPlayerOn(class AFortPlayerController* PlayerControllerRef, int* Stage);
	struct FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn);
	void UserConstructionScript();
	void OnCanceled();
	void OnAllClientsReady();
	void BlueprintOnInteract(class AFortPawn* InteractingPawn);
	void PlayDialogOrLocalizedAudio(int QuestCountInt, class AFortPlayerController* InteractedController);
	void BlueprintOnBeginInteract();
	void SpawnRobot(class AFortPlayerPawn* InteractingPlayerPawnRef);
	void EffectsEvents(class AFortPlayerPawn* InteractingPlayerPawn);
	void ReceiveBeginPlay();
	void OnQuestUpdated();
	void UpdateQuestState();
	void ServerSuccessfulInteract(class AFortPlayerController* PlayerController);
	void BindActorHit();
	void Damaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, struct FVector HitLocation, class UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum);
	void resethitcheck();
	void HandleMissionEvent_LocateQuestItem(struct FGuid InMissionGuid, struct FGameplayTagContainer ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, struct FText GenericText, struct FGameplayTagContainer GameplayTags, struct FFortMissionEvent MissionEvent);
	void SpawnDebugParticle();
	void QuestItemNoQuestMessage(class AFortPlayerController* PlayerControllerRef);
	void BndEvt__ContributionTrigger_K2Node_ComponentBoundEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult);
	void OnDamageServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext);
	void Explode();
	void CheckProximity();
	void IsPlayerNear();
	void Proximity_Conversation();
	void TouchedMe(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult);
	void InteractionSpawnActor();
	void TriggerParticlePreActivate();
	void TriggerParticleInteractionSucceeded();
	void ExecuteUbergraph_QuestInteractionProp_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
