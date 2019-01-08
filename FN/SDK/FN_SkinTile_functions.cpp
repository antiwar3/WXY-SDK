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

// Function SkinTile.SkinTile_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkinTile_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinTile.SkinTile_C.Construct");

	USkinTile_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinTile.SkinTile_C.ExecuteUbergraph_SkinTile
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkinTile_C::ExecuteUbergraph_SkinTile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinTile.SkinTile_C.ExecuteUbergraph_SkinTile");

	USkinTile_C_ExecuteUbergraph_SkinTile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
