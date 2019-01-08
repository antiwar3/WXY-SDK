// Fortnite (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FakeHorseAnim.BP_FakeHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FakeHorseAnim_AnimGraphNode_BlendListByBool_8264BC4544826FFBC1A21E9B5C8724D4
// (BlueprintEvent)

void UBP_FakeHorseAnim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FakeHorseAnim_AnimGraphNode_BlendListByBool_8264BC4544826FFBC1A21E9B5C8724D4()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FakeHorseAnim.BP_FakeHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FakeHorseAnim_AnimGraphNode_BlendListByBool_8264BC4544826FFBC1A21E9B5C8724D4");

	UBP_FakeHorseAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_FakeHorseAnim_AnimGraphNode_BlendListByBool_8264BC4544826FFBC1A21E9B5C8724D4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FakeHorseAnim.BP_FakeHorseAnim_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UBP_FakeHorseAnim_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FakeHorseAnim.BP_FakeHorseAnim_C.BlueprintInitializeAnimation");

	UBP_FakeHorseAnim_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FakeHorseAnim.BP_FakeHorseAnim_C.ExecuteUbergraph_BP_FakeHorseAnim
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FakeHorseAnim_C::ExecuteUbergraph_BP_FakeHorseAnim(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FakeHorseAnim.BP_FakeHorseAnim_C.ExecuteUbergraph_BP_FakeHorseAnim");

	UBP_FakeHorseAnim_C_ExecuteUbergraph_BP_FakeHorseAnim_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
