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

// AnimBlueprintGeneratedClass FerretVehicle_Driver_AnimBP.FerretVehicle_Driver_AnimBP_C
// 0x1BB8 (0x6048 - 0x4490)
class UFerretVehicle_Driver_AnimBP_C : public UFortPlayerAnimInstance_FerretDriver
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x4490(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x4498(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E3AEC5AF45CE09AEC07D75AE68E57058;// 0x44B8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x44E0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult02;                         // 0x4508(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult03;                         // 0x4530(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult04;                         // 0x4558(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A6A0BD2A48FB499BE2CFF7B6D2CF1B35;// 0x4580(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult05;                         // 0x45A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult06;                         // 0x45D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult07;                         // 0x45F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BB05E1DB487F856A5CB7FE89F0933AF9;// 0x4620(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E134B39B462EACCE3BE6B6A6089B661D;// 0x4648(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult08;                         // 0x4670(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x4698(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_BA91DF144EE8CD92D10E479976ECE42D;// 0x46C0(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose02;                            // 0x46E0(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_F97480C5488B05F23048F5AAA4D460BF;// 0x4708(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x4728(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x47A0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer02;                           // 0x47C0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_BF067950493C9F208903EA951CFC7D0B;// 0x4838(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer03;                           // 0x4858(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult02;                              // 0x48D0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer04;                           // 0x48F0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult03;                              // 0x4968(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer05;                           // 0x4988(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult04;                              // 0x4A00(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                           // 0x4A20(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult05;                              // 0x4B00(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A516451A490F8930F83E7194E45C37B8;// 0x4B20(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult06;                              // 0x4B48(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x4B68(0x00B0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace;                   // 0x4C18(0x0188)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_CBD55E9A452F43DF361952800637AC3E;// 0x4DA0(0x00C8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E817796447A309134CC743B77AA8527F;// 0x4E68(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult09;                         // 0x4E90(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult10;                         // 0x4EB8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult11;                         // 0x4EE0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FC030264429B308784ECEABA72EC5704;// 0x4F08(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult07;                              // 0x4F80(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer06;                           // 0x4FA0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A132C467450CCDB6C4BE13B70CBD7ACF;// 0x5018(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer07;                           // 0x5038(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BC5DDF9548D05B983B963FA730E49DC7;// 0x50B0(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer08;                           // 0x5150(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x51C8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BA12F0A54465EC3813987BAB27005B78;// 0x5268(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E7B0ADDE42003546F937CA876DA1D79A;// 0x52E0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D966F8F04E48F58A5EDA7ABD527E4ED0;// 0x5300(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x53B0(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive;                              // 0x53F8(0x00C8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                            // 0x54C0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer09;                           // 0x5570(0x0078)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_B6A682B54F3DFF61A2A7D88EA1C7DADD;// 0x55E8(0x0018)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_BB414B9745FA480D18DFA0A18AE47F8B;// 0x5600(0x00C8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D991A3054A0E46F8CA1D0DA4B83D1671;// 0x56C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E7ACB6A94A9B3436022AE4BA1572518B;// 0x56F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult12;                         // 0x5718(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DBCD4DB444153C4E494294A754F8650C;// 0x5740(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C3CB00024A9941D2C6FD6791FB82B1F2;// 0x5768(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer10;                           // 0x5790(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult08;                              // 0x5808(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B99D61F54A29596B5AC36AB09F9118E5;// 0x5828(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult09;                              // 0x58A0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer11;                           // 0x58C0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult10;                              // 0x5938(0x0020)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose;                               // 0x5958(0x0018)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_FE35B727416B2615B22862A2CE193F1C;// 0x5970(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F6367532453DDCE55D25CC86EDDED804;// 0x5990(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x5A40(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone02;                               // 0x5B48(0x0108)
	struct FAnimNode_LegIK                             AnimGraphNode_LegIK;                                      // 0x5C50(0x00F8)
	struct FAnimNode_LegIK                             AnimGraphNode_LegIK02;                                    // 0x5D48(0x00F8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x5E40(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x5E60(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_C57DEA9E4C233E4D60A0F1A26381BC21;// 0x5E80(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_B35E9318416FBAA2C93DC193BD494562;// 0x5F60(0x00B8)
	struct FRotator                                    HandLocalRotationOffsetLeft;                              // 0x6018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    HandLocalRotationOffsetRight;                             // 0x6024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HandLocalTranslateOffsetRight;                            // 0x6030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HandLocalTranslateOffsetLeft;                             // 0x603C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FerretVehicle_Driver_AnimBP.FerretVehicle_Driver_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_FerretVehicle_Driver_AnimBP_AnimGraphNode_BlendSpacePlayer();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_FerretVehicle_Driver_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
