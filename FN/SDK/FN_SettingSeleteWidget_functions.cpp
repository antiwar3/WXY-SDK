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

// Function SettingSeleteWidget.SettingSeleteWidget_C.On_ComboBox_GenerateWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* USettingSeleteWidget_C::On_ComboBox_GenerateWidget_1(const struct FString& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingSeleteWidget.SettingSeleteWidget_C.On_ComboBox_GenerateWidget_1");

	USettingSeleteWidget_C_On_ComboBox_GenerateWidget_1_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SettingSeleteWidget.SettingSeleteWidget_C.SetChildState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingSeleteWidget_C::SetChildState(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingSeleteWidget.SettingSeleteWidget_C.SetChildState");

	USettingSeleteWidget_C_SetChildState_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingSeleteWidget.SettingSeleteWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USettingSeleteWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingSeleteWidget.SettingSeleteWidget_C.Construct");

	USettingSeleteWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingSeleteWidget.SettingSeleteWidget_C.InitIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingSeleteWidget_C::InitIndex(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingSeleteWidget.SettingSeleteWidget_C.InitIndex");

	USettingSeleteWidget_C_InitIndex_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingSeleteWidget.SettingSeleteWidget_C.ResetSetting
// (Public, BlueprintCallable, BlueprintEvent)

void USettingSeleteWidget_C::ResetSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingSeleteWidget.SettingSeleteWidget_C.ResetSetting");

	USettingSeleteWidget_C_ResetSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingSeleteWidget.SettingSeleteWidget_C.ResetDefaultSetting
// (Public, BlueprintCallable, BlueprintEvent)

void USettingSeleteWidget_C::ResetDefaultSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingSeleteWidget.SettingSeleteWidget_C.ResetDefaultSetting");

	USettingSeleteWidget_C_ResetDefaultSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingSeleteWidget.SettingSeleteWidget_C.SaveSetting
// (Public, BlueprintCallable, BlueprintEvent)

void USettingSeleteWidget_C::SaveSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingSeleteWidget.SettingSeleteWidget_C.SaveSetting");

	USettingSeleteWidget_C_SaveSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingSeleteWidget.SettingSeleteWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingSeleteWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingSeleteWidget.SettingSeleteWidget_C.Tick");

	USettingSeleteWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingSeleteWidget.SettingSeleteWidget_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_107_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingSeleteWidget_C::BndEvt__ComboBox_K2Node_ComponentBoundEvent_107_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingSeleteWidget.SettingSeleteWidget_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_107_OnSelectionChangedEvent__DelegateSignature");

	USettingSeleteWidget_C_BndEvt__ComboBox_K2Node_ComponentBoundEvent_107_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingSeleteWidget.SettingSeleteWidget_C.SelectDestroy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UComboxItem_C*           ComboItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USettingSeleteWidget_C::SelectDestroy(class UComboxItem_C* ComboItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingSeleteWidget.SettingSeleteWidget_C.SelectDestroy");

	USettingSeleteWidget_C_SelectDestroy_Params params;
	params.ComboItem = ComboItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingSeleteWidget.SettingSeleteWidget_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_119_OnOpeningEvent__DelegateSignature
// (BlueprintEvent)

void USettingSeleteWidget_C::BndEvt__ComboBox_K2Node_ComponentBoundEvent_119_OnOpeningEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingSeleteWidget.SettingSeleteWidget_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_119_OnOpeningEvent__DelegateSignature");

	USettingSeleteWidget_C_BndEvt__ComboBox_K2Node_ComponentBoundEvent_119_OnOpeningEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingSeleteWidget.SettingSeleteWidget_C.ChildCreate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UComboxItem_C*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USettingSeleteWidget_C::ChildCreate(class UComboxItem_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingSeleteWidget.SettingSeleteWidget_C.ChildCreate");

	USettingSeleteWidget_C_ChildCreate_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingSeleteWidget.SettingSeleteWidget_C.BndEvt__OutBoxButton_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USettingSeleteWidget_C::BndEvt__OutBoxButton_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingSeleteWidget.SettingSeleteWidget_C.BndEvt__OutBoxButton_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature");

	USettingSeleteWidget_C_BndEvt__OutBoxButton_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingSeleteWidget.SettingSeleteWidget_C.BndEvt__OutBoxButton_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USettingSeleteWidget_C::BndEvt__OutBoxButton_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingSeleteWidget.SettingSeleteWidget_C.BndEvt__OutBoxButton_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature");

	USettingSeleteWidget_C_BndEvt__OutBoxButton_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingSeleteWidget.SettingSeleteWidget_C.CloseAllItemState
// (BlueprintCallable, BlueprintEvent)

void USettingSeleteWidget_C::CloseAllItemState()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingSeleteWidget.SettingSeleteWidget_C.CloseAllItemState");

	USettingSeleteWidget_C_CloseAllItemState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingSeleteWidget.SettingSeleteWidget_C.ReConstructComboBox
// (BlueprintCallable, BlueprintEvent)

void USettingSeleteWidget_C::ReConstructComboBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingSeleteWidget.SettingSeleteWidget_C.ReConstructComboBox");

	USettingSeleteWidget_C_ReConstructComboBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingSeleteWidget.SettingSeleteWidget_C.SwitchOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Append                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingSeleteWidget_C::SwitchOffset(int* Append)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingSeleteWidget.SettingSeleteWidget_C.SwitchOffset");

	USettingSeleteWidget_C_SwitchOffset_Params params;
	params.Append = Append;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingSeleteWidget.SettingSeleteWidget_C.OutEdit
// (Public, BlueprintCallable, BlueprintEvent)

void USettingSeleteWidget_C::OutEdit()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingSeleteWidget.SettingSeleteWidget_C.OutEdit");

	USettingSeleteWidget_C_OutEdit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingSeleteWidget.SettingSeleteWidget_C.StartEdit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsForward                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingSeleteWidget_C::StartEdit(bool* IsForward)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingSeleteWidget.SettingSeleteWidget_C.StartEdit");

	USettingSeleteWidget_C_StartEdit_Params params;
	params.IsForward = IsForward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingSeleteWidget.SettingSeleteWidget_C.SetVerticleState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsDown                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingSeleteWidget_C::SetVerticleState(bool* State, bool* IsDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingSeleteWidget.SettingSeleteWidget_C.SetVerticleState");

	USettingSeleteWidget_C_SetVerticleState_Params params;
	params.State = State;
	params.IsDown = IsDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingSeleteWidget.SettingSeleteWidget_C.SetEditState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingSeleteWidget_C::SetEditState(bool* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingSeleteWidget.SettingSeleteWidget_C.SetEditState");

	USettingSeleteWidget_C_SetEditState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingSeleteWidget.SettingSeleteWidget_C.SetComboValid
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingSeleteWidget_C::SetComboValid(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingSeleteWidget.SettingSeleteWidget_C.SetComboValid");

	USettingSeleteWidget_C_SetComboValid_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingSeleteWidget.SettingSeleteWidget_C.ExecuteUbergraph_SettingSeleteWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingSeleteWidget_C::ExecuteUbergraph_SettingSeleteWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingSeleteWidget.SettingSeleteWidget_C.ExecuteUbergraph_SettingSeleteWidget");

	USettingSeleteWidget_C_ExecuteUbergraph_SettingSeleteWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingSeleteWidget.SettingSeleteWidget_C.OnSelectChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESelectInfo>       SelectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingSeleteWidget_C::OnSelectChange__DelegateSignature(int CurrentIndex, TEnumAsByte<ESelectInfo> SelectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingSeleteWidget.SettingSeleteWidget_C.OnSelectChange__DelegateSignature");

	USettingSeleteWidget_C_OnSelectChange__DelegateSignature_Params params;
	params.CurrentIndex = CurrentIndex;
	params.SelectType = SelectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
