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

// Function SettingColorSelectWidget.SettingColorSelectWidget_C.On_ComboColor_GenerateWidget_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* USettingColorSelectWidget_C::On_ComboColor_GenerateWidget_1(const struct FString& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingColorSelectWidget.SettingColorSelectWidget_C.On_ComboColor_GenerateWidget_1");

	USettingColorSelectWidget_C_On_ComboColor_GenerateWidget_1_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SettingColorSelectWidget.SettingColorSelectWidget_C.InitColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingColorSelectWidget_C::InitColor(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingColorSelectWidget.SettingColorSelectWidget_C.InitColor");

	USettingColorSelectWidget_C_InitColor_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingColorSelectWidget.SettingColorSelectWidget_C.ResetSetting
// (Public, BlueprintCallable, BlueprintEvent)

void USettingColorSelectWidget_C::ResetSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingColorSelectWidget.SettingColorSelectWidget_C.ResetSetting");

	USettingColorSelectWidget_C_ResetSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingColorSelectWidget.SettingColorSelectWidget_C.ResetDefaultSetting
// (Public, BlueprintCallable, BlueprintEvent)

void USettingColorSelectWidget_C::ResetDefaultSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingColorSelectWidget.SettingColorSelectWidget_C.ResetDefaultSetting");

	USettingColorSelectWidget_C_ResetDefaultSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingColorSelectWidget.SettingColorSelectWidget_C.SaveSetting
// (Public, BlueprintCallable, BlueprintEvent)

void USettingColorSelectWidget_C::SaveSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingColorSelectWidget.SettingColorSelectWidget_C.SaveSetting");

	USettingColorSelectWidget_C_SaveSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingColorSelectWidget.SettingColorSelectWidget_C.BndEvt__ComboColor_K2Node_ComponentBoundEvent_10_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingColorSelectWidget_C::BndEvt__ComboColor_K2Node_ComponentBoundEvent_10_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingColorSelectWidget.SettingColorSelectWidget_C.BndEvt__ComboColor_K2Node_ComponentBoundEvent_10_OnSelectionChangedEvent__DelegateSignature");

	USettingColorSelectWidget_C_BndEvt__ComboColor_K2Node_ComponentBoundEvent_10_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingColorSelectWidget.SettingColorSelectWidget_C.SetColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingColorSelectWidget_C::SetColor(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingColorSelectWidget.SettingColorSelectWidget_C.SetColor");

	USettingColorSelectWidget_C_SetColor_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingColorSelectWidget.SettingColorSelectWidget_C.SwitchOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Append                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingColorSelectWidget_C::SwitchOffset(int* Append)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingColorSelectWidget.SettingColorSelectWidget_C.SwitchOffset");

	USettingColorSelectWidget_C_SwitchOffset_Params params;
	params.Append = Append;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingColorSelectWidget.SettingColorSelectWidget_C.OnClick
// (Public, BlueprintCallable, BlueprintEvent)

void USettingColorSelectWidget_C::OnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingColorSelectWidget.SettingColorSelectWidget_C.OnClick");

	USettingColorSelectWidget_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingColorSelectWidget.SettingColorSelectWidget_C.OutEdit
// (Public, BlueprintCallable, BlueprintEvent)

void USettingColorSelectWidget_C::OutEdit()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingColorSelectWidget.SettingColorSelectWidget_C.OutEdit");

	USettingColorSelectWidget_C_OutEdit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingColorSelectWidget.SettingColorSelectWidget_C.StartEdit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsForward                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingColorSelectWidget_C::StartEdit(bool* IsForward)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingColorSelectWidget.SettingColorSelectWidget_C.StartEdit");

	USettingColorSelectWidget_C_StartEdit_Params params;
	params.IsForward = IsForward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingColorSelectWidget.SettingColorSelectWidget_C.SetVerticleState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsDown                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingColorSelectWidget_C::SetVerticleState(bool* State, bool* IsDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingColorSelectWidget.SettingColorSelectWidget_C.SetVerticleState");

	USettingColorSelectWidget_C_SetVerticleState_Params params;
	params.State = State;
	params.IsDown = IsDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingColorSelectWidget.SettingColorSelectWidget_C.BndEvt__OutBoxButton_K2Node_ComponentBoundEvent_143_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USettingColorSelectWidget_C::BndEvt__OutBoxButton_K2Node_ComponentBoundEvent_143_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingColorSelectWidget.SettingColorSelectWidget_C.BndEvt__OutBoxButton_K2Node_ComponentBoundEvent_143_OnButtonHoverEvent__DelegateSignature");

	USettingColorSelectWidget_C_BndEvt__OutBoxButton_K2Node_ComponentBoundEvent_143_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingColorSelectWidget.SettingColorSelectWidget_C.BndEvt__OutBoxButton_K2Node_ComponentBoundEvent_162_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USettingColorSelectWidget_C::BndEvt__OutBoxButton_K2Node_ComponentBoundEvent_162_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingColorSelectWidget.SettingColorSelectWidget_C.BndEvt__OutBoxButton_K2Node_ComponentBoundEvent_162_OnButtonHoverEvent__DelegateSignature");

	USettingColorSelectWidget_C_BndEvt__OutBoxButton_K2Node_ComponentBoundEvent_162_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingColorSelectWidget.SettingColorSelectWidget_C.ReConstructComboBox
// (BlueprintCallable, BlueprintEvent)

void USettingColorSelectWidget_C::ReConstructComboBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingColorSelectWidget.SettingColorSelectWidget_C.ReConstructComboBox");

	USettingColorSelectWidget_C_ReConstructComboBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingColorSelectWidget.SettingColorSelectWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USettingColorSelectWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingColorSelectWidget.SettingColorSelectWidget_C.Construct");

	USettingColorSelectWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingColorSelectWidget.SettingColorSelectWidget_C.ExecuteUbergraph_SettingColorSelectWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingColorSelectWidget_C::ExecuteUbergraph_SettingColorSelectWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingColorSelectWidget.SettingColorSelectWidget_C.ExecuteUbergraph_SettingColorSelectWidget");

	USettingColorSelectWidget_C_ExecuteUbergraph_SettingColorSelectWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingColorSelectWidget.SettingColorSelectWidget_C.OnIndexChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingColorSelectWidget_C::OnIndexChange__DelegateSignature(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingColorSelectWidget.SettingColorSelectWidget_C.OnIndexChange__DelegateSignature");

	USettingColorSelectWidget_C_OnIndexChange__DelegateSignature_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
