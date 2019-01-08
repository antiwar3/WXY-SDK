#pragma once

// Fortnite (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass PlayerCaptureABP.PlayerCaptureABP_C
// 0x0AA8 (0x0E08 - 0x0360)
class UPlayerCaptureABP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C1A9AE9240C6FE36BD1A02AEB6E2CF26;      // 0x0368(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6CEC267E46F8D75D2108098FCA7352B1;// 0x03A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DA1EF4C144C16E125C91AFBA3D2C23BF;// 0x03F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5BECC25B423ADF60B2EC12AEF4A26BB9;// 0x0438(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ECF1D75F488AF3E471639882C36EB54D;// 0x04D8(0x00A0)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_789F9F82468828D0620B1C9058F8FA8A;// 0x0578(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F1B833FA4341E1AB200578813F4C4175;// 0x0648(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_796606A64D4D2FF56A2651A98E4BA0BD;// 0x06E8(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AA7780364280495E506C52A9B225BADA;// 0x07B8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4AE7B49A4F4F21A5E24F56A9BCAFF8FC;// 0x0858(0x00A0)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_CCC213D44D8D9273C2C3A69401E5B512;// 0x08F8(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CF4668144E0D0D6B02F31D8465121EC9;// 0x09C8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_496C835848D18101D3D92596F15B8E76;// 0x0A68(0x0040)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_38E01DEB464A8D16B78B73A31D854804;// 0x0AA8(0x00F0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C12AC9734D8C7EFF2F4CC09DE0F24BA3;// 0x0B98(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BAE940B34EEA9D71B126B688FD5ECBC3;// 0x0C38(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_00AFAA2E4B9DB4FACE8928A54C075CFC;// 0x0CD8(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_634C9EFE406D5E535CB506B094C8784D;// 0x0D18(0x00E0)
	int                                                weapon_anim_type;                                         // 0x0DF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               weapon_show;                                              // 0x0DFC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0DFD(0x0003) MISSED OFFSET
	int                                                RandomXiuXianID_Femal;                                    // 0x0E00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RandomXiuXianID_Man;                                      // 0x0E04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass PlayerCaptureABP.PlayerCaptureABP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerCaptureABP_AnimGraphNode_TransitionResult_DA1EF4C144C16E125C91AFBA3D2C23BF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerCaptureABP_AnimGraphNode_TransitionResult_6CEC267E46F8D75D2108098FCA7352B1();
	void AnimNotify_Enter_XiuXianState();
	void ExecuteUbergraph_PlayerCaptureABP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
