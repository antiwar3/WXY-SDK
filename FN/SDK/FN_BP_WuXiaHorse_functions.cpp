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

// Function BP_WuXiaHorse.BP_WuXiaHorse_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WuXiaHorse_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorse.BP_WuXiaHorse_C.UserConstructionScript");

	ABP_WuXiaHorse_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorse.BP_WuXiaHorse_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WuXiaHorse_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorse.BP_WuXiaHorse_C.ReceiveTick");

	ABP_WuXiaHorse_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorse.BP_WuXiaHorse_C.CE_CharacterEnter
// (BlueprintCallable, BlueprintEvent)

void ABP_WuXiaHorse_C::CE_CharacterEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorse.BP_WuXiaHorse_C.CE_CharacterEnter");

	ABP_WuXiaHorse_C_CE_CharacterEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorse.BP_WuXiaHorse_C.CE_CharacterLeave
// (BlueprintCallable, BlueprintEvent)

void ABP_WuXiaHorse_C::CE_CharacterLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorse.BP_WuXiaHorse_C.CE_CharacterLeave");

	ABP_WuXiaHorse_C_CE_CharacterLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorse.BP_WuXiaHorse_C.ExecuteUbergraph_BP_WuXiaHorse
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WuXiaHorse_C::ExecuteUbergraph_BP_WuXiaHorse(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorse.BP_WuXiaHorse_C.ExecuteUbergraph_BP_WuXiaHorse");

	ABP_WuXiaHorse_C_ExecuteUbergraph_BP_WuXiaHorse_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
