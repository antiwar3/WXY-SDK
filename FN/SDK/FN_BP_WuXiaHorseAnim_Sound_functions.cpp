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

// Function BP_WuXiaHorseAnim_Sound.BP_WuXiaHorseAnim_Sound_C.AnimNotify_Sound_Footstep
// (BlueprintCallable, BlueprintEvent)

void UBP_WuXiaHorseAnim_Sound_C::AnimNotify_Sound_Footstep()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorseAnim_Sound.BP_WuXiaHorseAnim_Sound_C.AnimNotify_Sound_Footstep");

	UBP_WuXiaHorseAnim_Sound_C_AnimNotify_Sound_Footstep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorseAnim_Sound.BP_WuXiaHorseAnim_Sound_C.ExecuteUbergraph_BP_WuXiaHorseAnim_Sound
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WuXiaHorseAnim_Sound_C::ExecuteUbergraph_BP_WuXiaHorseAnim_Sound(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorseAnim_Sound.BP_WuXiaHorseAnim_Sound_C.ExecuteUbergraph_BP_WuXiaHorseAnim_Sound");

	UBP_WuXiaHorseAnim_Sound_C_ExecuteUbergraph_BP_WuXiaHorseAnim_Sound_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
