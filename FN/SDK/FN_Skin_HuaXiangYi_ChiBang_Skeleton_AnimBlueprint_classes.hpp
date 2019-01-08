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

// AnimBlueprintGeneratedClass Skin_HuaXiangYi_ChiBang_Skeleton_AnimBlueprint.Skin_HuaXiangYi_ChiBang_Skeleton_AnimBlueprint_C
// 0x02F8 (0x0658 - 0x0360)
class USkin_HuaXiangYi_ChiBang_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6F7097D94FDADEC53C88188732C61BF6;      // 0x0368(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_36F9D1F94661EA2938B6ECB1441717C7;// 0x03A8(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_463349FC4E293BDC06C8AA8DB8FE7325;// 0x0448(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F34DAE3042E335F9D6D1799B92C33105;// 0x0518(0x0128)
	bool                                               IsOpen_;                                                  // 0x0640(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0641(0x0003) MISSED OFFSET
	float                                              Input_x;                                                  // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Input_y;                                                  // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x064C(0x0004) MISSED OFFSET
	class ABP_WuXiaX_Character_C*                      Player;                                                   // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Skin_HuaXiangYi_ChiBang_Skeleton_AnimBlueprint.Skin_HuaXiangYi_ChiBang_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Skin_HuaXiangYi_ChiBang_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
