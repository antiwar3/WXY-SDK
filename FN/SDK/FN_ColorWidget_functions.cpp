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

// Function ColorWidget.ColorWidget_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UColorBoxWidget_C*       ParentWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UColorWidget_C::Init(int ID, int index, const struct FLinearColor& Color, class UColorBoxWidget_C* ParentWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ColorWidget.ColorWidget_C.Init");

	UColorWidget_C_Init_Params params;
	params.ID = ID;
	params.index = index;
	params.Color = Color;
	params.ParentWidget = ParentWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ColorWidget.ColorWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UColorWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ColorWidget.ColorWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");

	UColorWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ColorWidget.ColorWidget_C.SetState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UColorWidget_C::SetState(bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ColorWidget.ColorWidget_C.SetState");

	UColorWidget_C_SetState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ColorWidget.ColorWidget_C.ExecuteUbergraph_ColorWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UColorWidget_C::ExecuteUbergraph_ColorWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ColorWidget.ColorWidget_C.ExecuteUbergraph_ColorWidget");

	UColorWidget_C_ExecuteUbergraph_ColorWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ColorWidget.ColorWidget_C.ResetColor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UColorWidget_C::ResetColor__DelegateSignature(int Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ColorWidget.ColorWidget_C.ResetColor__DelegateSignature");

	UColorWidget_C_ResetColor__DelegateSignature_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
