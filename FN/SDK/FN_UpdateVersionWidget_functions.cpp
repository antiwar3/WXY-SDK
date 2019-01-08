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

// Function UpdateVersionWidget.UpdateVersionWidget_C.BndEvt__QuitGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUpdateVersionWidget_C::BndEvt__QuitGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UpdateVersionWidget.UpdateVersionWidget_C.BndEvt__QuitGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUpdateVersionWidget_C_BndEvt__QuitGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UpdateVersionWidget.UpdateVersionWidget_C.ExecuteUbergraph_UpdateVersionWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUpdateVersionWidget_C::ExecuteUbergraph_UpdateVersionWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UpdateVersionWidget.UpdateVersionWidget_C.ExecuteUbergraph_UpdateVersionWidget");

	UUpdateVersionWidget_C_ExecuteUbergraph_UpdateVersionWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
