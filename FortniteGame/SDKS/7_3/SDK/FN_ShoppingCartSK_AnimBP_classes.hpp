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

// AnimBlueprintGeneratedClass ShoppingCartSK_AnimBP.ShoppingCartSK_AnimBP_C
// 0x34DE (0x782E - 0x4350)
class UShoppingCartSK_AnimBP_C : public UFortPlayerAnimInstance_ShoppingCartDriver
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x4350(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D69187834447F31ECA858CA29C17F05A;      // 0x4358(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DA7934C54CFA9F6D8729DC9AD25C2F6C;// 0x4378(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x43A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D618E00E4F3A0C8DB7AD50BA4CCEEAF7;// 0x43C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D15F04D04FA2FF56BBE898B7CDDBB12C;// 0x43F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult02;                         // 0x4418(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult03;                         // 0x4440(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult04;                         // 0x4468(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult05;                         // 0x4490(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D7112D9C4CB74D898358A38C81EE8C69;// 0x44B8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult06;                         // 0x44E0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult07;                         // 0x4508(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult08;                         // 0x4530(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult09;                         // 0x4558(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A8B0A97A4950F1B86ACCBFB3CE175F1D;// 0x4580(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F28EB0C94B239B9D666A7CA4E0F9202D;// 0x45A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FD189F3A432DE287C6F23E97BFDD7A6F;// 0x45D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CC5276CE43F7F324A41E238271CDF390;// 0x45F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult10;                         // 0x4620(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult11;                         // 0x4648(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult12;                         // 0x4670(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult13;                         // 0x4698(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x46C0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A50607F044D9C32FE6D1C69FA109C9DF;// 0x4738(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer02;                           // 0x4758(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x47D0(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                           // 0x47F0(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x48D0(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_E73DD792499C8270A7431EA39FF30A94;// 0x4970(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult02;                              // 0x4A50(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool02;                          // 0x4A70(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_BFE231524FD74681F94AE68E532CB289;// 0x4B10(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_A491765E4ACC5539E52141BFA4D50460;// 0x4BF0(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A0DA89514495893E3E94DA9C0A1C76A1;// 0x4CD0(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BF234A9A42F2CFC1D8F29DADAA0BBD48;// 0x4CF0(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer02;                         // 0x4D90(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_AC8EC75A4B068EC5ED9EB294F51C2067;// 0x4E70(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult03;                              // 0x4F50(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer03;                           // 0x4F70(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult04;                              // 0x4FE8(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x5008(0x00B0)
	struct FAnimNode_LegIK                             AnimGraphNode_LegIK;                                      // 0x50B8(0x00F8)
	struct FAnimNode_LegIK                             AnimGraphNode_LegIK02;                                    // 0x51B0(0x00F8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x52A8(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D59798E44FB9F8DFEBC42F85DB5C943F;// 0x52C8(0x0108)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x53D0(0x00B8)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace;                   // 0x5488(0x0188)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace02;                 // 0x5610(0x0188)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult14;                         // 0x5798(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult15;                         // 0x57C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult16;                         // 0x57E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult17;                         // 0x5810(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult18;                         // 0x5838(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BF2336AA4C6E6528E2DA89AE2FC690F2;// 0x5860(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult19;                         // 0x5888(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult20;                         // 0x58B0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E24154934C6E7084D6DA459A97AA5A14;// 0x58D8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AD0F576B45C8DFD0DF3123AFD7B2A40C;// 0x5900(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BACD6910483D492C454401AEC02F7515;// 0x5928(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult21;                         // 0x5950(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A04CD1444ACE4228C3468BB88AAE9718;// 0x5978(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult22;                         // 0x59A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FC48DE5D4E9ED73D34635AB300D2ED77;// 0x59C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult23;                         // 0x59F0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer04;                           // 0x5A18(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A72F387F47D1A05A4A4BB8A0E68D10B2;// 0x5A90(0x0020)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace03;                 // 0x5AB0(0x0188)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FC98344B4D4C4B969143AD986A08B646;// 0x5C38(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E01BDD7F4DB588B3EC0BAE9AD896EC1E;// 0x5CB0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer05;                           // 0x5CD0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult05;                              // 0x5D48(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer06;                           // 0x5D68(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult06;                              // 0x5DE0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer07;                           // 0x5E00(0x0078)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace04;                 // 0x5E78(0x0188)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult07;                              // 0x6000(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer08;                           // 0x6020(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult08;                              // 0x6098(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DD687FAB4DB0A8A15B44AFB1B0FA0F3A;// 0x60B8(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult09;                              // 0x60E0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C74669A743FAA85FC731CE898B04A903;// 0x6100(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose02;                           // 0x61B0(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose03;                           // 0x6268(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x6320(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult24;                         // 0x6348(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CFBEDBC44C9A7D840B9E29B5CDA4D7CB;// 0x6370(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult25;                         // 0x6398(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B163CFC44AB51D74493ABCA2997CE784;// 0x63C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult26;                         // 0x63E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult27;                         // 0x6410(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D58867484C8306C65AD25698EB1A9BB2;// 0x6438(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult28;                         // 0x6460(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer09;                           // 0x6488(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult10;                              // 0x6500(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer10;                           // 0x6520(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_C2311F184EC6E66CF553759AB29D8805;// 0x6598(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer11;                           // 0x65B8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult11;                              // 0x6630(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D1477C7843DA14D92F16119C4DA2E996;// 0x6650(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E47AD0B54F3F0C2A484C88B75BDD8C87;// 0x6678(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer12;                           // 0x6698(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult12;                              // 0x6710(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DDDBE88642A0F3BD26FCADA21B418852;// 0x6730(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_BD6B46804C86BB337CC356B6D9D275D3;// 0x67A8(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine02;                             // 0x67C8(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool03;                          // 0x6878(0x00A0)
	struct FAnimNode_LegIK                             AnimGraphNode_LegIK03;                                    // 0x6918(0x00F8)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_CF8A595548A038D6041A2A88E1560623;// 0x6A10(0x0188)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EE1890224587B107804FE4B30F7B9AB4;// 0x6B98(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                           // 0x6C38(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose04;                           // 0x6CF0(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose02;                            // 0x6DA8(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x6DD0(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend02;                         // 0x6E18(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_CE892EFE46149E9D72A41B98A6DE7247;// 0x6ED0(0x0108)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AE12D23C4FFE5035FC4AA78A2EFBFA69;// 0x6FD8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A9ED17C141AB7CD29C5EB6826A07DFF9;// 0x7000(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B4CB8199483C4E6F76F8879E086D0BF0;// 0x7028(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B4E455A9454DCF1BFCC1C5A189A5FDFD;// 0x70C8(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend03;                         // 0x7168(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose03;                            // 0x7220(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose05;                           // 0x7248(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F3A4629B48021DD9C9B8E79EBE7AC407;// 0x7300(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose04;                            // 0x7328(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace05;                 // 0x7350(0x0188)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend04;                         // 0x74D8(0x00B8)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace06;                 // 0x7590(0x0188)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x7718(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace02;                    // 0x7738(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace02;                    // 0x7758(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D66D881644F349540CFCF99E5AFD0D78;// 0x7778(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose05;                            // 0x77A0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose06;                            // 0x77C8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose07;                            // 0x77F0(0x0028)
	struct FScriptMulticastDelegate                    OnPedal;                                                  // 0x7818(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              FallDistanceValue;                                        // 0x7828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ECoastState                                        CoastState;                                               // 0x782C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WasCoastingOnFallingStart;                                // 0x782D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ShoppingCartSK_AnimBP.ShoppingCartSK_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartSK_AnimBP_AnimGraphNode_TransitionResult_D58867484C8306C65AD25698EB1A9BB2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartSK_AnimBP_AnimGraphNode_TransitionResult();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartSK_AnimBP_AnimGraphNode_TransitionResult_E24154934C6E7084D6DA459A97AA5A14();
	void AnimNotify_StartPedal();
	void AnimNotify_EventFallingStarted();
	void ExecuteUbergraph_ShoppingCartSK_AnimBP(int EntryPoint);
	void OnPedal__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
