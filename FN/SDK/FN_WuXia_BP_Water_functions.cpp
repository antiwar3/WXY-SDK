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

// Function WuXia_BP_Water.WuXia_BP_Water_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWuXia_BP_Water_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXia_BP_Water.WuXia_BP_Water_C.UserConstructionScript");

	AWuXia_BP_Water_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXia_BP_Water.WuXia_BP_Water_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWuXia_BP_Water_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXia_BP_Water.WuXia_BP_Water_C.ReceiveBeginPlay");

	AWuXia_BP_Water_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXia_BP_Water.WuXia_BP_Water_C.Update Water Surface
// (BlueprintCallable, BlueprintEvent)

void AWuXia_BP_Water_C::Update_Water_Surface()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXia_BP_Water.WuXia_BP_Water_C.Update Water Surface");

	AWuXia_BP_Water_C_Update_Water_Surface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXia_BP_Water.WuXia_BP_Water_C.ExecuteUbergraph_WuXia_BP_Water
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWuXia_BP_Water_C::ExecuteUbergraph_WuXia_BP_Water(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXia_BP_Water.WuXia_BP_Water_C.ExecuteUbergraph_WuXia_BP_Water");

	AWuXia_BP_Water_C_ExecuteUbergraph_WuXia_BP_Water_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
