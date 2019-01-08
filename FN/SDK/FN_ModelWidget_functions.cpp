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

// Function ModelWidget.ModelWidget_C.SetButtonIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EButtonState>      State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UModelWidget_C::SetButtonIcon(TEnumAsByte<EButtonState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelWidget.ModelWidget_C.SetButtonIcon");

	UModelWidget_C_SetButtonIcon_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModelWidget.ModelWidget_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UModelWidget_C::Init(int ID, int index, class UTexture2D* Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelWidget.ModelWidget_C.Init");

	UModelWidget_C_Init_Params params;
	params.ID = ID;
	params.index = index;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModelWidget.ModelWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UModelWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelWidget.ModelWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");

	UModelWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModelWidget.ModelWidget_C.SetState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UModelWidget_C::SetState(bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelWidget.ModelWidget_C.SetState");

	UModelWidget_C_SetState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModelWidget.ModelWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UModelWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelWidget.ModelWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature");

	UModelWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModelWidget.ModelWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UModelWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelWidget.ModelWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonReleasedEvent__DelegateSignature");

	UModelWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModelWidget.ModelWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UModelWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelWidget.ModelWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature");

	UModelWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModelWidget.ModelWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UModelWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelWidget.ModelWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature");

	UModelWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModelWidget.ModelWidget_C.ExecuteUbergraph_ModelWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UModelWidget_C::ExecuteUbergraph_ModelWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelWidget.ModelWidget_C.ExecuteUbergraph_ModelWidget");

	UModelWidget_C_ExecuteUbergraph_ModelWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModelWidget.ModelWidget_C.ResetModel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UModelWidget_C::ResetModel__DelegateSignature(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelWidget.ModelWidget_C.ResetModel__DelegateSignature");

	UModelWidget_C_ResetModel__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
