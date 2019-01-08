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

// AnimBlueprintGeneratedClass BP_FakeHorseAnim.BP_FakeHorseAnim_C
// 0x0260 (0x05C0 - 0x0360)
class UBP_FakeHorseAnim_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B3DC34F7412C15FA4E7173BF09B992AA;      // 0x0368(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_68BAEB8B47A5012AA848349860FBF786;// 0x03A8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_41DA0A6C4ED6CE7A901B57AF25121643;// 0x0448(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8264BC4544826FFBC1A21E9B5C8724D4;// 0x04E8(0x00D0)
	class ABP_FakePlayer_C*                            OwerPlayer;                                               // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_FakeHorseAnim.BP_FakeHorseAnim_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FakeHorseAnim_AnimGraphNode_BlendListByBool_8264BC4544826FFBC1A21E9B5C8724D4();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_BP_FakeHorseAnim(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
