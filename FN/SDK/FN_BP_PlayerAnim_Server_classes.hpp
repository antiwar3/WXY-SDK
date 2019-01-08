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

// AnimBlueprintGeneratedClass BP_PlayerAnim_Server.BP_PlayerAnim_Server_C
// 0x00F0 (0x0490 - 0x03A0)
class UBP_PlayerAnim_Server_C : public UWuXia_AnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_54357747451C0BDAF7109D85CD564F2E;      // 0x03A8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A58312434F23A30A982035882C9C8FBE;// 0x03E8(0x00A0)
	class USkeletalMeshComponent*                      MeshComponent;                                            // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_PlayerAnim_Server.BP_PlayerAnim_Server_C");
		return ptr;
	}


	float WuXia_Montage_Play(class UAnimMontage** MontageToPlay, float* delay_time, struct FName* section_name);
	void OnNotifyEnd_075E808649095A4B0EC3CB90F7262E3B(const struct FName& NotifyName);
	void OnNotifyBegin_075E808649095A4B0EC3CB90F7262E3B(const struct FName& NotifyName);
	void OnInterrupted_075E808649095A4B0EC3CB90F7262E3B(const struct FName& NotifyName);
	void OnBlendOut_075E808649095A4B0EC3CB90F7262E3B(const struct FName& NotifyName);
	void OnCompleted_075E808649095A4B0EC3CB90F7262E3B(const struct FName& NotifyName);
	void PlaySkill(class UAnimMontage* MontageToPlay, float StartingPosition, const struct FName& StartingSection);
	void BlueprintInitializeAnimation();
	void AnimNotify_TSBW();
	void ExecuteUbergraph_BP_PlayerAnim_Server(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
