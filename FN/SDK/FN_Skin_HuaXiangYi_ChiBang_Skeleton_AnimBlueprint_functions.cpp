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

// Function Skin_HuaXiangYi_ChiBang_Skeleton_AnimBlueprint.Skin_HuaXiangYi_ChiBang_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkin_HuaXiangYi_ChiBang_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skin_HuaXiangYi_ChiBang_Skeleton_AnimBlueprint.Skin_HuaXiangYi_ChiBang_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation");

	USkin_HuaXiangYi_ChiBang_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Skin_HuaXiangYi_ChiBang_Skeleton_AnimBlueprint.Skin_HuaXiangYi_ChiBang_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Skin_HuaXiangYi_ChiBang_Skeleton_AnimBlueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkin_HuaXiangYi_ChiBang_Skeleton_AnimBlueprint_C::ExecuteUbergraph_Skin_HuaXiangYi_ChiBang_Skeleton_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skin_HuaXiangYi_ChiBang_Skeleton_AnimBlueprint.Skin_HuaXiangYi_ChiBang_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Skin_HuaXiangYi_ChiBang_Skeleton_AnimBlueprint");

	USkin_HuaXiangYi_ChiBang_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Skin_HuaXiangYi_ChiBang_Skeleton_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
