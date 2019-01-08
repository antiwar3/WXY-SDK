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

// Function ItemPageWIdget.ItemPageWIdget_C.SetValidState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemPageWIdget_C::SetValidState(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemPageWIdget.ItemPageWIdget_C.SetValidState");

	UItemPageWIdget_C_SetValidState_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemPageWIdget.ItemPageWIdget_C.ExecuteUbergraph_ItemPageWIdget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemPageWIdget_C::ExecuteUbergraph_ItemPageWIdget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemPageWIdget.ItemPageWIdget_C.ExecuteUbergraph_ItemPageWIdget");

	UItemPageWIdget_C_ExecuteUbergraph_ItemPageWIdget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
