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

// Function BP_ConfigEnvironmentActor.BP_ConfigEnvironmentActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ConfigEnvironmentActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConfigEnvironmentActor.BP_ConfigEnvironmentActor_C.UserConstructionScript");

	ABP_ConfigEnvironmentActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConfigEnvironmentActor.BP_ConfigEnvironmentActor_C.EffectSoundVolume
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_ConfigEnvironmentActor_C::EffectSoundVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConfigEnvironmentActor.BP_ConfigEnvironmentActor_C.EffectSoundVolume");

	ABP_ConfigEnvironmentActor_C_EffectSoundVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConfigEnvironmentActor.BP_ConfigEnvironmentActor_C.ExecuteUbergraph_BP_ConfigEnvironmentActor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ConfigEnvironmentActor_C::ExecuteUbergraph_BP_ConfigEnvironmentActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConfigEnvironmentActor.BP_ConfigEnvironmentActor_C.ExecuteUbergraph_BP_ConfigEnvironmentActor");

	ABP_ConfigEnvironmentActor_C_ExecuteUbergraph_BP_ConfigEnvironmentActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
