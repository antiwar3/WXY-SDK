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

// Function SettingBoolWidget.SettingBoolWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingBoolWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingBoolWidget.SettingBoolWidget_C.Tick");

	USettingBoolWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingBoolWidget.SettingBoolWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USettingBoolWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingBoolWidget.SettingBoolWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature");

	USettingBoolWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingBoolWidget.SettingBoolWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USettingBoolWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingBoolWidget.SettingBoolWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature");

	USettingBoolWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingBoolWidget.SettingBoolWidget_C.InitState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingBoolWidget_C::InitState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingBoolWidget.SettingBoolWidget_C.InitState");

	USettingBoolWidget_C_InitState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingBoolWidget.SettingBoolWidget_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_32_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingBoolWidget_C::BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_32_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingBoolWidget.SettingBoolWidget_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_32_OnCheckBoxComponentStateChanged__DelegateSignature");

	USettingBoolWidget_C_BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_32_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingBoolWidget.SettingBoolWidget_C.ResetSetting
// (Public, BlueprintCallable, BlueprintEvent)

void USettingBoolWidget_C::ResetSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingBoolWidget.SettingBoolWidget_C.ResetSetting");

	USettingBoolWidget_C_ResetSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingBoolWidget.SettingBoolWidget_C.ResetDefaultSetting
// (Public, BlueprintCallable, BlueprintEvent)

void USettingBoolWidget_C::ResetDefaultSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingBoolWidget.SettingBoolWidget_C.ResetDefaultSetting");

	USettingBoolWidget_C_ResetDefaultSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingBoolWidget.SettingBoolWidget_C.SaveSetting
// (Public, BlueprintCallable, BlueprintEvent)

void USettingBoolWidget_C::SaveSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingBoolWidget.SettingBoolWidget_C.SaveSetting");

	USettingBoolWidget_C_SaveSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingBoolWidget.SettingBoolWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USettingBoolWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingBoolWidget.SettingBoolWidget_C.Construct");

	USettingBoolWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingBoolWidget.SettingBoolWidget_C.SwitchOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Append                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingBoolWidget_C::SwitchOffset(int* Append)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingBoolWidget.SettingBoolWidget_C.SwitchOffset");

	USettingBoolWidget_C_SwitchOffset_Params params;
	params.Append = Append;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingBoolWidget.SettingBoolWidget_C.OnClick
// (Public, BlueprintCallable, BlueprintEvent)

void USettingBoolWidget_C::OnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingBoolWidget.SettingBoolWidget_C.OnClick");

	USettingBoolWidget_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingBoolWidget.SettingBoolWidget_C.OutEdit
// (Public, BlueprintCallable, BlueprintEvent)

void USettingBoolWidget_C::OutEdit()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingBoolWidget.SettingBoolWidget_C.OutEdit");

	USettingBoolWidget_C_OutEdit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingBoolWidget.SettingBoolWidget_C.StartEdit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsForward                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingBoolWidget_C::StartEdit(bool* IsForward)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingBoolWidget.SettingBoolWidget_C.StartEdit");

	USettingBoolWidget_C_StartEdit_Params params;
	params.IsForward = IsForward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingBoolWidget.SettingBoolWidget_C.SetEditState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingBoolWidget_C::SetEditState(bool* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingBoolWidget.SettingBoolWidget_C.SetEditState");

	USettingBoolWidget_C_SetEditState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingBoolWidget.SettingBoolWidget_C.SetSettingState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingBoolWidget_C::SetSettingState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingBoolWidget.SettingBoolWidget_C.SetSettingState");

	USettingBoolWidget_C_SetSettingState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingBoolWidget.SettingBoolWidget_C.ExecuteUbergraph_SettingBoolWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingBoolWidget_C::ExecuteUbergraph_SettingBoolWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingBoolWidget.SettingBoolWidget_C.ExecuteUbergraph_SettingBoolWidget");

	USettingBoolWidget_C_ExecuteUbergraph_SettingBoolWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingBoolWidget.SettingBoolWidget_C.OnStateChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsDirect                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingBoolWidget_C::OnStateChange__DelegateSignature(bool NewState, bool IsDirect)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingBoolWidget.SettingBoolWidget_C.OnStateChange__DelegateSignature");

	USettingBoolWidget_C_OnStateChange__DelegateSignature_Params params;
	params.NewState = NewState;
	params.IsDirect = IsDirect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
