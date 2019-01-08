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

// Function ResultWidget.ResultWidget_C.SetResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            InviteType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResultWidget_C::SetResult(const struct FString& Name, int InviteType, int result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultWidget.ResultWidget_C.SetResult");

	UResultWidget_C_SetResult_Params params;
	params.Name = Name;
	params.InviteType = InviteType;
	params.result = result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResultWidget.ResultWidget_C.BndEvt__Sure_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UResultWidget_C::BndEvt__Sure_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultWidget.ResultWidget_C.BndEvt__Sure_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UResultWidget_C_BndEvt__Sure_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResultWidget.ResultWidget_C.BndEvt__Sure_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UResultWidget_C::BndEvt__Sure_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultWidget.ResultWidget_C.BndEvt__Sure_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UResultWidget_C_BndEvt__Sure_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResultWidget.ResultWidget_C.BndEvt__Sure_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UResultWidget_C::BndEvt__Sure_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultWidget.ResultWidget_C.BndEvt__Sure_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");

	UResultWidget_C_BndEvt__Sure_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResultWidget.ResultWidget_C.BndEvt__Sure_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UResultWidget_C::BndEvt__Sure_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultWidget.ResultWidget_C.BndEvt__Sure_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UResultWidget_C_BndEvt__Sure_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResultWidget.ResultWidget_C.BndEvt__Sure_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UResultWidget_C::BndEvt__Sure_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultWidget.ResultWidget_C.BndEvt__Sure_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UResultWidget_C_BndEvt__Sure_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResultWidget.ResultWidget_C.ExecuteUbergraph_ResultWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResultWidget_C::ExecuteUbergraph_ResultWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultWidget.ResultWidget_C.ExecuteUbergraph_ResultWidget");

	UResultWidget_C_ExecuteUbergraph_ResultWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
