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

// Function BP_UserSettingUI.BP_UserSettingUI_C.GetHotKeyTexts
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         hotkeys                        (Parm, OutParm, ZeroConstructor)

void UBP_UserSettingUI_C::GetHotKeyTexts(TArray<struct FString>* hotkeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.GetHotKeyTexts");

	UBP_UserSettingUI_C_GetHotKeyTexts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (hotkeys != nullptr)
		*hotkeys = params.hotkeys;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.GetKeyName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputChord             Key1                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FInputChord             Key2                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor)

void UBP_UserSettingUI_C::GetKeyName(const struct FInputChord& Key1, const struct FInputChord& Key2, struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.GetKeyName");

	UBP_UserSettingUI_C_GetKeyName_Params params;
	params.Key1 = Key1;
	params.Key2 = Key2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.SetLabelSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UScrollBox*              scroll                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsForward                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::SetLabelSelect(class UPanelWidget* Panel, class UScrollBox* scroll, int index, bool IsForward)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.SetLabelSelect");

	UBP_UserSettingUI_C_SetLabelSelect_Params params;
	params.Panel = Panel;
	params.scroll = scroll;
	params.index = index;
	params.IsForward = IsForward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.SetLabelDefaultSelect
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_UserSettingUI_C::SetLabelDefaultSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.SetLabelDefaultSelect");

	UBP_UserSettingUI_C_SetLabelDefaultSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.ReConstructComboBoxSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            ParentPanel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_UserSettingUI_C::ReConstructComboBoxSelect(class UPanelWidget* ParentPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.ReConstructComboBoxSelect");

	UBP_UserSettingUI_C_ReConstructComboBoxSelect_Params params;
	params.ParentPanel = ParentPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.GetMouseDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RetValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::GetMouseDirection(bool State, float* RetValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.GetMouseDirection");

	UBP_UserSettingUI_C_GetMouseDirection_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetValue != nullptr)
		*RetValue = params.RetValue;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.InitSettingChildWIdgetParent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_UserSettingUI_C::InitSettingChildWIdgetParent(class UPanelWidget* Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.InitSettingChildWIdgetParent");

	UBP_UserSettingUI_C_InitSettingChildWIdgetParent_Params params;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.GetOpenResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::GetOpenResult(int Value, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.GetOpenResult");

	UBP_UserSettingUI_C_GetOpenResult_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.GetHabitOperator
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_UserSettingUI_C::GetHabitOperator()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.GetHabitOperator");

	UBP_UserSettingUI_C_GetHabitOperator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.SaveMoveKey
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_UserSettingUI_C::SaveMoveKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.SaveMoveKey");

	UBP_UserSettingUI_C_SaveMoveKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.CheckTotalQuality
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_UserSettingUI_C::CheckTotalQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.CheckTotalQuality");

	UBP_UserSettingUI_C_CheckTotalQuality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.SaveChildWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_UserSettingUI_C::SaveChildWidget(class UPanelWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.SaveChildWidget");

	UBP_UserSettingUI_C_SaveChildWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.GetInteractiveKeyName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor)

void UBP_UserSettingUI_C::GetInteractiveKeyName(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.GetInteractiveKeyName");

	UBP_UserSettingUI_C_GetInteractiveKeyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.GetOperateHabitValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_UserSettingUI_C::GetOperateHabitValue(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.GetOperateHabitValue");

	UBP_UserSettingUI_C_GetOperateHabitValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.ChangeAxisValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::ChangeAxisValue(const struct FName& Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.ChangeAxisValue");

	UBP_UserSettingUI_C_ChangeAxisValue_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.EaseName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 OldName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 NewName                        (Parm, OutParm, ZeroConstructor)

void UBP_UserSettingUI_C::EaseName(const struct FString& OldName, struct FString* NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.EaseName");

	UBP_UserSettingUI_C_EaseName_Params params;
	params.OldName = OldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewName != nullptr)
		*NewName = params.NewName;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.GetEasyKeyName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputChord             Key1                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FInputChord             Key2                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor)

void UBP_UserSettingUI_C::GetEasyKeyName(const struct FInputChord& Key1, const struct FInputChord& Key2, struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.GetEasyKeyName");

	UBP_UserSettingUI_C_GetEasyKeyName_Params params;
	params.Key1 = Key1;
	params.Key2 = Key2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.GetAssassinationInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ReturnStr                      (Parm, OutParm, ZeroConstructor)

void UBP_UserSettingUI_C::GetAssassinationInfo(struct FString* ReturnStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.GetAssassinationInfo");

	UBP_UserSettingUI_C_GetAssassinationInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnStr != nullptr)
		*ReturnStr = params.ReturnStr;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.ResetDefaultChildWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_UserSettingUI_C::ResetDefaultChildWidget(class UPanelWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.ResetDefaultChildWidget");

	UBP_UserSettingUI_C_ResetDefaultChildWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.ResetChildWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_UserSettingUI_C::ResetChildWidget(class UPanelWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.ResetChildWidget");

	UBP_UserSettingUI_C_ResetChildWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.GetMouseAxis
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::GetMouseAxis(const struct FName& Name, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.GetMouseAxis");

	UBP_UserSettingUI_C_GetMouseAxis_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_UserSettingUI_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.Construct");

	UBP_UserSettingUI_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.MicVolumnChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::MicVolumnChange(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.MicVolumnChange");

	UBP_UserSettingUI_C_MicVolumnChange_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__LanguageSelect_K2Node_ComponentBoundEvent_18_OnSelectChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESelectInfo>       SelectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__LanguageSelect_K2Node_ComponentBoundEvent_18_OnSelectChange__DelegateSignature(int CurrentIndex, TEnumAsByte<ESelectInfo> SelectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__LanguageSelect_K2Node_ComponentBoundEvent_18_OnSelectChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__LanguageSelect_K2Node_ComponentBoundEvent_18_OnSelectChange__DelegateSignature_Params params;
	params.CurrentIndex = CurrentIndex;
	params.SelectType = SelectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__ScreenModeSelect_K2Node_ComponentBoundEvent_19_OnSelectChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESelectInfo>       SelectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__ScreenModeSelect_K2Node_ComponentBoundEvent_19_OnSelectChange__DelegateSignature(int CurrentIndex, TEnumAsByte<ESelectInfo> SelectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__ScreenModeSelect_K2Node_ComponentBoundEvent_19_OnSelectChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__ScreenModeSelect_K2Node_ComponentBoundEvent_19_OnSelectChange__DelegateSignature_Params params;
	params.CurrentIndex = CurrentIndex;
	params.SelectType = SelectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__ResolutionSelect_K2Node_ComponentBoundEvent_20_OnSelectChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESelectInfo>       SelectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__ResolutionSelect_K2Node_ComponentBoundEvent_20_OnSelectChange__DelegateSignature(int CurrentIndex, TEnumAsByte<ESelectInfo> SelectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__ResolutionSelect_K2Node_ComponentBoundEvent_20_OnSelectChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__ResolutionSelect_K2Node_ComponentBoundEvent_20_OnSelectChange__DelegateSignature_Params params;
	params.CurrentIndex = CurrentIndex;
	params.SelectType = SelectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__GammaBar_K2Node_ComponentBoundEvent_21_ValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__GammaBar_K2Node_ComponentBoundEvent_21_ValueChange__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__GammaBar_K2Node_ComponentBoundEvent_21_ValueChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__GammaBar_K2Node_ComponentBoundEvent_21_ValueChange__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__TotalQualitySelect_K2Node_ComponentBoundEvent_22_OnSelectChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESelectInfo>       SelectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__TotalQualitySelect_K2Node_ComponentBoundEvent_22_OnSelectChange__DelegateSignature(int CurrentIndex, TEnumAsByte<ESelectInfo> SelectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__TotalQualitySelect_K2Node_ComponentBoundEvent_22_OnSelectChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__TotalQualitySelect_K2Node_ComponentBoundEvent_22_OnSelectChange__DelegateSignature_Params params;
	params.CurrentIndex = CurrentIndex;
	params.SelectType = SelectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__SettingProgressBarWidget_K2Node_ComponentBoundEvent_23_ValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__SettingProgressBarWidget_K2Node_ComponentBoundEvent_23_ValueChange__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__SettingProgressBarWidget_K2Node_ComponentBoundEvent_23_ValueChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__SettingProgressBarWidget_K2Node_ComponentBoundEvent_23_ValueChange__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__AntiSelect_K2Node_ComponentBoundEvent_24_OnSelectChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESelectInfo>       SelectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__AntiSelect_K2Node_ComponentBoundEvent_24_OnSelectChange__DelegateSignature(int CurrentIndex, TEnumAsByte<ESelectInfo> SelectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__AntiSelect_K2Node_ComponentBoundEvent_24_OnSelectChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__AntiSelect_K2Node_ComponentBoundEvent_24_OnSelectChange__DelegateSignature_Params params;
	params.CurrentIndex = CurrentIndex;
	params.SelectType = SelectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__PostSelect_K2Node_ComponentBoundEvent_25_OnSelectChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESelectInfo>       SelectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__PostSelect_K2Node_ComponentBoundEvent_25_OnSelectChange__DelegateSignature(int CurrentIndex, TEnumAsByte<ESelectInfo> SelectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__PostSelect_K2Node_ComponentBoundEvent_25_OnSelectChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__PostSelect_K2Node_ComponentBoundEvent_25_OnSelectChange__DelegateSignature_Params params;
	params.CurrentIndex = CurrentIndex;
	params.SelectType = SelectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__ShadowSelect_K2Node_ComponentBoundEvent_26_OnSelectChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESelectInfo>       SelectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__ShadowSelect_K2Node_ComponentBoundEvent_26_OnSelectChange__DelegateSignature(int CurrentIndex, TEnumAsByte<ESelectInfo> SelectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__ShadowSelect_K2Node_ComponentBoundEvent_26_OnSelectChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__ShadowSelect_K2Node_ComponentBoundEvent_26_OnSelectChange__DelegateSignature_Params params;
	params.CurrentIndex = CurrentIndex;
	params.SelectType = SelectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__TexCoordSelect_K2Node_ComponentBoundEvent_27_OnSelectChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESelectInfo>       SelectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__TexCoordSelect_K2Node_ComponentBoundEvent_27_OnSelectChange__DelegateSignature(int CurrentIndex, TEnumAsByte<ESelectInfo> SelectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__TexCoordSelect_K2Node_ComponentBoundEvent_27_OnSelectChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__TexCoordSelect_K2Node_ComponentBoundEvent_27_OnSelectChange__DelegateSignature_Params params;
	params.CurrentIndex = CurrentIndex;
	params.SelectType = SelectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__ParticleSelect_K2Node_ComponentBoundEvent_28_OnSelectChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESelectInfo>       SelectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__ParticleSelect_K2Node_ComponentBoundEvent_28_OnSelectChange__DelegateSignature(int CurrentIndex, TEnumAsByte<ESelectInfo> SelectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__ParticleSelect_K2Node_ComponentBoundEvent_28_OnSelectChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__ParticleSelect_K2Node_ComponentBoundEvent_28_OnSelectChange__DelegateSignature_Params params;
	params.CurrentIndex = CurrentIndex;
	params.SelectType = SelectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__FoliageSelect_K2Node_ComponentBoundEvent_29_OnSelectChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESelectInfo>       SelectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__FoliageSelect_K2Node_ComponentBoundEvent_29_OnSelectChange__DelegateSignature(int CurrentIndex, TEnumAsByte<ESelectInfo> SelectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__FoliageSelect_K2Node_ComponentBoundEvent_29_OnSelectChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__FoliageSelect_K2Node_ComponentBoundEvent_29_OnSelectChange__DelegateSignature_Params params;
	params.CurrentIndex = CurrentIndex;
	params.SelectType = SelectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__ViewDistanceSelect_K2Node_ComponentBoundEvent_30_OnSelectChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESelectInfo>       SelectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__ViewDistanceSelect_K2Node_ComponentBoundEvent_30_OnSelectChange__DelegateSignature(int CurrentIndex, TEnumAsByte<ESelectInfo> SelectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__ViewDistanceSelect_K2Node_ComponentBoundEvent_30_OnSelectChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__ViewDistanceSelect_K2Node_ComponentBoundEvent_30_OnSelectChange__DelegateSignature_Params params;
	params.CurrentIndex = CurrentIndex;
	params.SelectType = SelectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__VasyncBoolSelect_K2Node_ComponentBoundEvent_31_OnStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsDirect                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__VasyncBoolSelect_K2Node_ComponentBoundEvent_31_OnStateChange__DelegateSignature(bool NewState, bool IsDirect)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__VasyncBoolSelect_K2Node_ComponentBoundEvent_31_OnStateChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__VasyncBoolSelect_K2Node_ComponentBoundEvent_31_OnStateChange__DelegateSignature_Params params;
	params.NewState = NewState;
	params.IsDirect = IsDirect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__MouseForwardBool_K2Node_ComponentBoundEvent_32_OnStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsDirect                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__MouseForwardBool_K2Node_ComponentBoundEvent_32_OnStateChange__DelegateSignature(bool NewState, bool IsDirect)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__MouseForwardBool_K2Node_ComponentBoundEvent_32_OnStateChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__MouseForwardBool_K2Node_ComponentBoundEvent_32_OnStateChange__DelegateSignature_Params params;
	params.NewState = NewState;
	params.IsDirect = IsDirect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__DefaultMouseValueBar_K2Node_ComponentBoundEvent_33_ValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__DefaultMouseValueBar_K2Node_ComponentBoundEvent_33_ValueChange__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__DefaultMouseValueBar_K2Node_ComponentBoundEvent_33_ValueChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__DefaultMouseValueBar_K2Node_ComponentBoundEvent_33_ValueChange__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__DriveMouseValueBar_K2Node_ComponentBoundEvent_34_ValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__DriveMouseValueBar_K2Node_ComponentBoundEvent_34_ValueChange__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__DriveMouseValueBar_K2Node_ComponentBoundEvent_34_ValueChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__DriveMouseValueBar_K2Node_ComponentBoundEvent_34_ValueChange__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__AimMouseValueBar_K2Node_ComponentBoundEvent_35_ValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__AimMouseValueBar_K2Node_ComponentBoundEvent_35_ValueChange__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__AimMouseValueBar_K2Node_ComponentBoundEvent_35_ValueChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__AimMouseValueBar_K2Node_ComponentBoundEvent_35_ValueChange__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__MainAudioBar_K2Node_ComponentBoundEvent_36_ValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__MainAudioBar_K2Node_ComponentBoundEvent_36_ValueChange__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__MainAudioBar_K2Node_ComponentBoundEvent_36_ValueChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__MainAudioBar_K2Node_ComponentBoundEvent_36_ValueChange__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__SoundEffectBar_K2Node_ComponentBoundEvent_37_ValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__SoundEffectBar_K2Node_ComponentBoundEvent_37_ValueChange__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__SoundEffectBar_K2Node_ComponentBoundEvent_37_ValueChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__SoundEffectBar_K2Node_ComponentBoundEvent_37_ValueChange__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__InterfaceSoundBar_K2Node_ComponentBoundEvent_38_ValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__InterfaceSoundBar_K2Node_ComponentBoundEvent_38_ValueChange__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__InterfaceSoundBar_K2Node_ComponentBoundEvent_38_ValueChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__InterfaceSoundBar_K2Node_ComponentBoundEvent_38_ValueChange__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__BackgroundSoundBar_K2Node_ComponentBoundEvent_39_ValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__BackgroundSoundBar_K2Node_ComponentBoundEvent_39_ValueChange__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__BackgroundSoundBar_K2Node_ComponentBoundEvent_39_ValueChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__BackgroundSoundBar_K2Node_ComponentBoundEvent_39_ValueChange__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__TalkHabit_K2Node_ComponentBoundEvent_41_OnSelectChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESelectInfo>       SelectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__TalkHabit_K2Node_ComponentBoundEvent_41_OnSelectChange__DelegateSignature(int CurrentIndex, TEnumAsByte<ESelectInfo> SelectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__TalkHabit_K2Node_ComponentBoundEvent_41_OnSelectChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__TalkHabit_K2Node_ComponentBoundEvent_41_OnSelectChange__DelegateSignature_Params params;
	params.CurrentIndex = CurrentIndex;
	params.SelectType = SelectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__CharacterRenderSelect_K2Node_ComponentBoundEvent_50_OnSelectChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESelectInfo>       SelectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__CharacterRenderSelect_K2Node_ComponentBoundEvent_50_OnSelectChange__DelegateSignature(int CurrentIndex, TEnumAsByte<ESelectInfo> SelectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__CharacterRenderSelect_K2Node_ComponentBoundEvent_50_OnSelectChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__CharacterRenderSelect_K2Node_ComponentBoundEvent_50_OnSelectChange__DelegateSignature_Params params;
	params.CurrentIndex = CurrentIndex;
	params.SelectType = SelectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__AchromatopsiaSelect_K2Node_ComponentBoundEvent_54_OnSelectChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESelectInfo>       SelectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__AchromatopsiaSelect_K2Node_ComponentBoundEvent_54_OnSelectChange__DelegateSignature(int CurrentIndex, TEnumAsByte<ESelectInfo> SelectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__AchromatopsiaSelect_K2Node_ComponentBoundEvent_54_OnSelectChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__AchromatopsiaSelect_K2Node_ComponentBoundEvent_54_OnSelectChange__DelegateSignature_Params params;
	params.CurrentIndex = CurrentIndex;
	params.SelectType = SelectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__SettingColorSelectWidget_K2Node_ComponentBoundEvent_58_OnIndexChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__SettingColorSelectWidget_K2Node_ComponentBoundEvent_58_OnIndexChange__DelegateSignature(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__SettingColorSelectWidget_K2Node_ComponentBoundEvent_58_OnIndexChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__SettingColorSelectWidget_K2Node_ComponentBoundEvent_58_OnIndexChange__DelegateSignature_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__DressShow_K2Node_ComponentBoundEvent_62_OnSelectChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESelectInfo>       SelectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__DressShow_K2Node_ComponentBoundEvent_62_OnSelectChange__DelegateSignature(int CurrentIndex, TEnumAsByte<ESelectInfo> SelectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__DressShow_K2Node_ComponentBoundEvent_62_OnSelectChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__DressShow_K2Node_ComponentBoundEvent_62_OnSelectChange__DelegateSignature_Params params;
	params.CurrentIndex = CurrentIndex;
	params.SelectType = SelectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__WeaponShow_K2Node_ComponentBoundEvent_66_OnSelectChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESelectInfo>       SelectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__WeaponShow_K2Node_ComponentBoundEvent_66_OnSelectChange__DelegateSignature(int CurrentIndex, TEnumAsByte<ESelectInfo> SelectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__WeaponShow_K2Node_ComponentBoundEvent_66_OnSelectChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__WeaponShow_K2Node_ComponentBoundEvent_66_OnSelectChange__DelegateSignature_Params params;
	params.CurrentIndex = CurrentIndex;
	params.SelectType = SelectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__MotionBlur_K2Node_ComponentBoundEvent_72_OnSelectChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESelectInfo>       SelectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__MotionBlur_K2Node_ComponentBoundEvent_72_OnSelectChange__DelegateSignature(int CurrentIndex, TEnumAsByte<ESelectInfo> SelectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__MotionBlur_K2Node_ComponentBoundEvent_72_OnSelectChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__MotionBlur_K2Node_ComponentBoundEvent_72_OnSelectChange__DelegateSignature_Params params;
	params.CurrentIndex = CurrentIndex;
	params.SelectType = SelectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__MapScale_K2Node_ComponentBoundEvent_76_ValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__MapScale_K2Node_ComponentBoundEvent_76_ValueChange__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__MapScale_K2Node_ComponentBoundEvent_76_ValueChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__MapScale_K2Node_ComponentBoundEvent_76_ValueChange__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__StealthHabit_K2Node_ComponentBoundEvent_82_OnSelectChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESelectInfo>       SelectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__StealthHabit_K2Node_ComponentBoundEvent_82_OnSelectChange__DelegateSignature(int CurrentIndex, TEnumAsByte<ESelectInfo> SelectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__StealthHabit_K2Node_ComponentBoundEvent_82_OnSelectChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__StealthHabit_K2Node_ComponentBoundEvent_82_OnSelectChange__DelegateSignature_Params params;
	params.CurrentIndex = CurrentIndex;
	params.SelectType = SelectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__WalkHabit_K2Node_ComponentBoundEvent_87_OnSelectChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESelectInfo>       SelectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__WalkHabit_K2Node_ComponentBoundEvent_87_OnSelectChange__DelegateSignature(int CurrentIndex, TEnumAsByte<ESelectInfo> SelectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__WalkHabit_K2Node_ComponentBoundEvent_87_OnSelectChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__WalkHabit_K2Node_ComponentBoundEvent_87_OnSelectChange__DelegateSignature_Params params;
	params.CurrentIndex = CurrentIndex;
	params.SelectType = SelectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__SprintingHabit_K2Node_ComponentBoundEvent_91_OnSelectChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESelectInfo>       SelectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__SprintingHabit_K2Node_ComponentBoundEvent_91_OnSelectChange__DelegateSignature(int CurrentIndex, TEnumAsByte<ESelectInfo> SelectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__SprintingHabit_K2Node_ComponentBoundEvent_91_OnSelectChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__SprintingHabit_K2Node_ComponentBoundEvent_91_OnSelectChange__DelegateSignature_Params params;
	params.CurrentIndex = CurrentIndex;
	params.SelectType = SelectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__FreeViewHabit_K2Node_ComponentBoundEvent_95_OnSelectChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESelectInfo>       SelectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__FreeViewHabit_K2Node_ComponentBoundEvent_95_OnSelectChange__DelegateSignature(int CurrentIndex, TEnumAsByte<ESelectInfo> SelectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__FreeViewHabit_K2Node_ComponentBoundEvent_95_OnSelectChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__FreeViewHabit_K2Node_ComponentBoundEvent_95_OnSelectChange__DelegateSignature_Params params;
	params.CurrentIndex = CurrentIndex;
	params.SelectType = SelectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__MapHabit_K2Node_ComponentBoundEvent_99_OnSelectChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESelectInfo>       SelectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__MapHabit_K2Node_ComponentBoundEvent_99_OnSelectChange__DelegateSignature(int CurrentIndex, TEnumAsByte<ESelectInfo> SelectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__MapHabit_K2Node_ComponentBoundEvent_99_OnSelectChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__MapHabit_K2Node_ComponentBoundEvent_99_OnSelectChange__DelegateSignature_Params params;
	params.CurrentIndex = CurrentIndex;
	params.SelectType = SelectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.ScreenPercentChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::ScreenPercentChange(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.ScreenPercentChange");

	UBP_UserSettingUI_C_ScreenPercentChange_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__MainAudioBar_K2Node_ComponentBoundEvent_174_StateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__MainAudioBar_K2Node_ComponentBoundEvent_174_StateChange__DelegateSignature(bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__MainAudioBar_K2Node_ComponentBoundEvent_174_StateChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__MainAudioBar_K2Node_ComponentBoundEvent_174_StateChange__DelegateSignature_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__SoundEffectBar_K2Node_ComponentBoundEvent_176_StateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__SoundEffectBar_K2Node_ComponentBoundEvent_176_StateChange__DelegateSignature(bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__SoundEffectBar_K2Node_ComponentBoundEvent_176_StateChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__SoundEffectBar_K2Node_ComponentBoundEvent_176_StateChange__DelegateSignature_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__InterfaceSoundBar_K2Node_ComponentBoundEvent_180_StateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__InterfaceSoundBar_K2Node_ComponentBoundEvent_180_StateChange__DelegateSignature(bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__InterfaceSoundBar_K2Node_ComponentBoundEvent_180_StateChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__InterfaceSoundBar_K2Node_ComponentBoundEvent_180_StateChange__DelegateSignature_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__BackgroundSoundBar_K2Node_ComponentBoundEvent_184_StateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__BackgroundSoundBar_K2Node_ComponentBoundEvent_184_StateChange__DelegateSignature(bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__BackgroundSoundBar_K2Node_ComponentBoundEvent_184_StateChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__BackgroundSoundBar_K2Node_ComponentBoundEvent_184_StateChange__DelegateSignature_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.Init
// (BlueprintCallable, BlueprintEvent)

void UBP_UserSettingUI_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.Init");

	UBP_UserSettingUI_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_7981_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_UserSettingUI_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_7981_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_7981_OnButtonClickedEvent__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_7981_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_8008_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_UserSettingUI_C::BndEvt__DefaultButton_K2Node_ComponentBoundEvent_8008_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_8008_OnButtonClickedEvent__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_8008_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__SaveButton_K2Node_ComponentBoundEvent_8070_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_UserSettingUI_C::BndEvt__SaveButton_K2Node_ComponentBoundEvent_8070_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__SaveButton_K2Node_ComponentBoundEvent_8070_OnButtonClickedEvent__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__SaveButton_K2Node_ComponentBoundEvent_8070_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.CallWhenAssasinationChange
// (BlueprintCallable, BlueprintEvent)

void UBP_UserSettingUI_C::CallWhenAssasinationChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.CallWhenAssasinationChange");

	UBP_UserSettingUI_C_CallWhenAssasinationChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.EffectAchromatopsiaMode
// (BlueprintCallable, BlueprintEvent)

void UBP_UserSettingUI_C::EffectAchromatopsiaMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.EffectAchromatopsiaMode");

	UBP_UserSettingUI_C_EffectAchromatopsiaMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.EffectMotionBlur
// (BlueprintCallable, BlueprintEvent)

void UBP_UserSettingUI_C::EffectMotionBlur()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.EffectMotionBlur");

	UBP_UserSettingUI_C_EffectMotionBlur_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.ResetKeyName
// (BlueprintCallable, BlueprintEvent)

void UBP_UserSettingUI_C::ResetKeyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.ResetKeyName");

	UBP_UserSettingUI_C_ResetKeyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.ResetSoundVolume
// (BlueprintCallable, BlueprintEvent)

void UBP_UserSettingUI_C::ResetSoundVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.ResetSoundVolume");

	UBP_UserSettingUI_C_ResetSoundVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.CheckUpdateQuality
// (BlueprintCallable, BlueprintEvent)

void UBP_UserSettingUI_C::CheckUpdateQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.CheckUpdateQuality");

	UBP_UserSettingUI_C_CheckUpdateQuality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.CallEventDispatch
// (BlueprintCallable, BlueprintEvent)

void UBP_UserSettingUI_C::CallEventDispatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.CallEventDispatch");

	UBP_UserSettingUI_C_CallEventDispatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_204_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_UserSettingUI_C::BndEvt__DefaultButton_K2Node_ComponentBoundEvent_204_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_204_OnButtonHoverEvent__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_204_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_206_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_UserSettingUI_C::BndEvt__DefaultButton_K2Node_ComponentBoundEvent_206_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_206_OnButtonHoverEvent__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_206_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__SaveButton_K2Node_ComponentBoundEvent_208_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_UserSettingUI_C::BndEvt__SaveButton_K2Node_ComponentBoundEvent_208_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__SaveButton_K2Node_ComponentBoundEvent_208_OnButtonHoverEvent__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__SaveButton_K2Node_ComponentBoundEvent_208_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__SaveButton_K2Node_ComponentBoundEvent_210_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_UserSettingUI_C::BndEvt__SaveButton_K2Node_ComponentBoundEvent_210_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__SaveButton_K2Node_ComponentBoundEvent_210_OnButtonHoverEvent__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__SaveButton_K2Node_ComponentBoundEvent_210_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_218_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_UserSettingUI_C::BndEvt__DefaultButton_K2Node_ComponentBoundEvent_218_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_218_OnButtonPressedEvent__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_218_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_220_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_UserSettingUI_C::BndEvt__DefaultButton_K2Node_ComponentBoundEvent_220_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_220_OnButtonReleasedEvent__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_220_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__SaveButton_K2Node_ComponentBoundEvent_222_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_UserSettingUI_C::BndEvt__SaveButton_K2Node_ComponentBoundEvent_222_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__SaveButton_K2Node_ComponentBoundEvent_222_OnButtonPressedEvent__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__SaveButton_K2Node_ComponentBoundEvent_222_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__SaveButton_K2Node_ComponentBoundEvent_224_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_UserSettingUI_C::BndEvt__SaveButton_K2Node_ComponentBoundEvent_224_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__SaveButton_K2Node_ComponentBoundEvent_224_OnButtonReleasedEvent__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__SaveButton_K2Node_ComponentBoundEvent_224_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__ChannelMode_K2Node_ComponentBoundEvent_70_OnSelectChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESelectInfo>       SelectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__ChannelMode_K2Node_ComponentBoundEvent_70_OnSelectChange__DelegateSignature(int CurrentIndex, TEnumAsByte<ESelectInfo> SelectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__ChannelMode_K2Node_ComponentBoundEvent_70_OnSelectChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__ChannelMode_K2Node_ComponentBoundEvent_70_OnSelectChange__DelegateSignature_Params params;
	params.CurrentIndex = CurrentIndex;
	params.SelectType = SelectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__MicrophoneAudioBar_K2Node_ComponentBoundEvent_78_ValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__MicrophoneAudioBar_K2Node_ComponentBoundEvent_78_ValueChange__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__MicrophoneAudioBar_K2Node_ComponentBoundEvent_78_ValueChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__MicrophoneAudioBar_K2Node_ComponentBoundEvent_78_ValueChange__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.CheckSameKey
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ExpectedKeyName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FInputChord             Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 Module                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_UserSettingUI_C::CheckSameKey(const struct FName& ExpectedKeyName, const struct FInputChord& Key, const struct FString& Module)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.CheckSameKey");

	UBP_UserSettingUI_C_CheckSameKey_Params params;
	params.ExpectedKeyName = ExpectedKeyName;
	params.Key = Key;
	params.Module = Module;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.CheckUpdateResolution
// (BlueprintCallable, BlueprintEvent)

void UBP_UserSettingUI_C::CheckUpdateResolution()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.CheckUpdateResolution");

	UBP_UserSettingUI_C_CheckUpdateResolution_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.LastLabel
// (BlueprintCallable, BlueprintEvent)

void UBP_UserSettingUI_C::LastLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.LastLabel");

	UBP_UserSettingUI_C_LastLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.NextLabel
// (BlueprintCallable, BlueprintEvent)

void UBP_UserSettingUI_C::NextLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.NextLabel");

	UBP_UserSettingUI_C_NextLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.LastItem
// (BlueprintCallable, BlueprintEvent)

void UBP_UserSettingUI_C::LastItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.LastItem");

	UBP_UserSettingUI_C_LastItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.NextItem
// (BlueprintCallable, BlueprintEvent)

void UBP_UserSettingUI_C::NextItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.NextItem");

	UBP_UserSettingUI_C_NextItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.StartIntoChildWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USettingChildWidgetBase_C* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_UserSettingUI_C::StartIntoChildWidget(class USettingChildWidgetBase_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.StartIntoChildWidget");

	UBP_UserSettingUI_C_StartIntoChildWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.SwitchToChildWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EUserSettingLabel> Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsForward                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::SwitchToChildWidget(TEnumAsByte<EUserSettingLabel> Label, int index, bool IsForward)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.SwitchToChildWidget");

	UBP_UserSettingUI_C_SwitchToChildWidget_Params params;
	params.Label = Label;
	params.index = index;
	params.IsForward = IsForward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.Horizontal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsRight                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::Horizontal(bool State, bool IsRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.Horizontal");

	UBP_UserSettingUI_C_Horizontal_Params params;
	params.State = State;
	params.IsRight = IsRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.Vertical
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsDown                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::Vertical(bool State, bool IsDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.Vertical");

	UBP_UserSettingUI_C_Vertical_Params params;
	params.State = State;
	params.IsDown = IsDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.GamepadIntoWidget
// (BlueprintCallable, BlueprintEvent)

void UBP_UserSettingUI_C::GamepadIntoWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.GamepadIntoWidget");

	UBP_UserSettingUI_C_GamepadIntoWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.OnclickButton
// (BlueprintCallable, BlueprintEvent)

void UBP_UserSettingUI_C::OnclickButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.OnclickButton");

	UBP_UserSettingUI_C_OnclickButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.MarkButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGamepadMarkType               MarkType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::MarkButton(EGamepadMarkType MarkType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.MarkButton");

	UBP_UserSettingUI_C_MarkButton_Params params;
	params.MarkType = MarkType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.MarkRelease
// (BlueprintCallable, BlueprintEvent)

void UBP_UserSettingUI_C::MarkRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.MarkRelease");

	UBP_UserSettingUI_C_MarkRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.Close
// (BlueprintCallable, BlueprintEvent)

void UBP_UserSettingUI_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.Close");

	UBP_UserSettingUI_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_337_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_UserSettingUI_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_337_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_337_OnButtonPressedEvent__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_337_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_347_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_UserSettingUI_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_347_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_347_OnButtonReleasedEvent__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_347_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__GraphButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_UserSettingUI_C::BndEvt__GraphButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__GraphButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__GraphButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__GraphButton_K2Node_ComponentBoundEvent_12_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_UserSettingUI_C::BndEvt__GraphButton_K2Node_ComponentBoundEvent_12_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__GraphButton_K2Node_ComponentBoundEvent_12_OnButtonReleasedEvent__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__GraphButton_K2Node_ComponentBoundEvent_12_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__PlayerCtrlButton_K2Node_ComponentBoundEvent_121_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_UserSettingUI_C::BndEvt__PlayerCtrlButton_K2Node_ComponentBoundEvent_121_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__PlayerCtrlButton_K2Node_ComponentBoundEvent_121_OnButtonPressedEvent__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__PlayerCtrlButton_K2Node_ComponentBoundEvent_121_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__PlayerCtrlButton_K2Node_ComponentBoundEvent_195_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_UserSettingUI_C::BndEvt__PlayerCtrlButton_K2Node_ComponentBoundEvent_195_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__PlayerCtrlButton_K2Node_ComponentBoundEvent_195_OnButtonReleasedEvent__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__PlayerCtrlButton_K2Node_ComponentBoundEvent_195_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__AudioButton_K2Node_ComponentBoundEvent_273_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_UserSettingUI_C::BndEvt__AudioButton_K2Node_ComponentBoundEvent_273_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__AudioButton_K2Node_ComponentBoundEvent_273_OnButtonPressedEvent__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__AudioButton_K2Node_ComponentBoundEvent_273_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__AudioButton_K2Node_ComponentBoundEvent_346_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_UserSettingUI_C::BndEvt__AudioButton_K2Node_ComponentBoundEvent_346_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__AudioButton_K2Node_ComponentBoundEvent_346_OnButtonReleasedEvent__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__AudioButton_K2Node_ComponentBoundEvent_346_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__GamePlayButton_K2Node_ComponentBoundEvent_418_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_UserSettingUI_C::BndEvt__GamePlayButton_K2Node_ComponentBoundEvent_418_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__GamePlayButton_K2Node_ComponentBoundEvent_418_OnButtonPressedEvent__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__GamePlayButton_K2Node_ComponentBoundEvent_418_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__GamePlayButton_K2Node_ComponentBoundEvent_492_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_UserSettingUI_C::BndEvt__GamePlayButton_K2Node_ComponentBoundEvent_492_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__GamePlayButton_K2Node_ComponentBoundEvent_492_OnButtonReleasedEvent__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__GamePlayButton_K2Node_ComponentBoundEvent_492_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.CheckFullScreen
// (BlueprintCallable, BlueprintEvent)

void UBP_UserSettingUI_C::CheckFullScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.CheckFullScreen");

	UBP_UserSettingUI_C_CheckFullScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.CheckFullScreenWindowMode
// (BlueprintCallable, BlueprintEvent)

void UBP_UserSettingUI_C::CheckFullScreenWindowMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.CheckFullScreenWindowMode");

	UBP_UserSettingUI_C_CheckFullScreenWindowMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__FrameLimitSelect_K2Node_ComponentBoundEvent_768_OnSelectChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESelectInfo>       SelectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__FrameLimitSelect_K2Node_ComponentBoundEvent_768_OnSelectChange__DelegateSignature(int CurrentIndex, TEnumAsByte<ESelectInfo> SelectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__FrameLimitSelect_K2Node_ComponentBoundEvent_768_OnSelectChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__FrameLimitSelect_K2Node_ComponentBoundEvent_768_OnSelectChange__DelegateSignature_Params params;
	params.CurrentIndex = CurrentIndex;
	params.SelectType = SelectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.EffectCameraChange
// (BlueprintCallable, BlueprintEvent)

void UBP_UserSettingUI_C::EffectCameraChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.EffectCameraChange");

	UBP_UserSettingUI_C_EffectCameraChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__CameraAutoChange_K2Node_ComponentBoundEvent_0_OnSelectChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESelectInfo>       SelectType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::BndEvt__CameraAutoChange_K2Node_ComponentBoundEvent_0_OnSelectChange__DelegateSignature(int CurrentIndex, TEnumAsByte<ESelectInfo> SelectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__CameraAutoChange_K2Node_ComponentBoundEvent_0_OnSelectChange__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__CameraAutoChange_K2Node_ComponentBoundEvent_0_OnSelectChange__DelegateSignature_Params params;
	params.CurrentIndex = CurrentIndex;
	params.SelectType = SelectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.DealLabel
// (BlueprintCallable, BlueprintEvent)

void UBP_UserSettingUI_C::DealLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.DealLabel");

	UBP_UserSettingUI_C_DealLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__PlayerCtrlButton_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_UserSettingUI_C::BndEvt__PlayerCtrlButton_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__PlayerCtrlButton_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__PlayerCtrlButton_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__GraphButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_UserSettingUI_C::BndEvt__GraphButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__GraphButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__GraphButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__GamePlayButton_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_UserSettingUI_C::BndEvt__GamePlayButton_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__GamePlayButton_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__GamePlayButton_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__AudioButton_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_UserSettingUI_C::BndEvt__AudioButton_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__AudioButton_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature");

	UBP_UserSettingUI_C_BndEvt__AudioButton_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.ExecuteUbergraph_BP_UserSettingUI
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UserSettingUI_C::ExecuteUbergraph_BP_UserSettingUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.ExecuteUbergraph_BP_UserSettingUI");

	UBP_UserSettingUI_C_ExecuteUbergraph_BP_UserSettingUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UserSettingUI.BP_UserSettingUI_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_UserSettingUI_C::OnClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UserSettingUI.BP_UserSettingUI_C.OnClose__DelegateSignature");

	UBP_UserSettingUI_C_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
