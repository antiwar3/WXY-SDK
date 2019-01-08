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

// Function PickItemText.PickItemText_C.WUXUEUseState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickItemText_C::WUXUEUseState(bool* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickItemText.PickItemText_C.WUXUEUseState");

	UPickItemText_C_WUXUEUseState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickItemText.PickItemText_C.SetItemName
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPickItemText_C::SetItemName(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickItemText.PickItemText_C.SetItemName");

	UPickItemText_C_SetItemName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickItemText.PickItemText_C.ExecuteUbergraph_PickItemText
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickItemText_C::ExecuteUbergraph_PickItemText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickItemText.PickItemText_C.ExecuteUbergraph_PickItemText");

	UPickItemText_C_ExecuteUbergraph_PickItemText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
