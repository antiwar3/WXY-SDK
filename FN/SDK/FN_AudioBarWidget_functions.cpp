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

// Function AudioBarWidget.AudioBarWidget_C.GetEditDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsForward                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAudioBarWidget_C::GetEditDirection(bool* IsForward)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioBarWidget.AudioBarWidget_C.GetEditDirection");

	UAudioBarWidget_C_GetEditDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsForward != nullptr)
		*IsForward = params.IsForward;
}


// Function AudioBarWidget.AudioBarWidget_C.SetEditIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentEditIndex               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAudioBarWidget_C::SetEditIndex(int CurrentEditIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioBarWidget.AudioBarWidget_C.SetEditIndex");

	UAudioBarWidget_C_SetEditIndex_Params params;
	params.CurrentEditIndex = CurrentEditIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioBarWidget.AudioBarWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UAudioBarWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioBarWidget.AudioBarWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature");

	UAudioBarWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioBarWidget.AudioBarWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UAudioBarWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioBarWidget.AudioBarWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature");

	UAudioBarWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioBarWidget.AudioBarWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_29_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UAudioBarWidget_C::BndEvt__Slider_0_K2Node_ComponentBoundEvent_29_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioBarWidget.AudioBarWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_29_OnMouseCaptureBeginEvent__DelegateSignature");

	UAudioBarWidget_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_29_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioBarWidget.AudioBarWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_30_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UAudioBarWidget_C::BndEvt__Slider_0_K2Node_ComponentBoundEvent_30_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioBarWidget.AudioBarWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_30_OnMouseCaptureEndEvent__DelegateSignature");

	UAudioBarWidget_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_30_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioBarWidget.AudioBarWidget_C.OnValueChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAudioBarWidget_C::OnValueChange(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioBarWidget.AudioBarWidget_C.OnValueChange");

	UAudioBarWidget_C_OnValueChange_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioBarWidget.AudioBarWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_32_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAudioBarWidget_C::BndEvt__Slider_0_K2Node_ComponentBoundEvent_32_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioBarWidget.AudioBarWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_32_OnFloatValueChangedEvent__DelegateSignature");

	UAudioBarWidget_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_32_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioBarWidget.AudioBarWidget_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAudioBarWidget_C::Init(float Value, bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioBarWidget.AudioBarWidget_C.Init");

	UAudioBarWidget_C_Init_Params params;
	params.Value = Value;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioBarWidget.AudioBarWidget_C.BndEvt__InputTextBox_K2Node_ComponentBoundEvent_37_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAudioBarWidget_C::BndEvt__InputTextBox_K2Node_ComponentBoundEvent_37_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioBarWidget.AudioBarWidget_C.BndEvt__InputTextBox_K2Node_ComponentBoundEvent_37_OnEditableTextBoxChangedEvent__DelegateSignature");

	UAudioBarWidget_C_BndEvt__InputTextBox_K2Node_ComponentBoundEvent_37_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioBarWidget.AudioBarWidget_C.BndEvt__InputTextBox_K2Node_ComponentBoundEvent_38_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAudioBarWidget_C::BndEvt__InputTextBox_K2Node_ComponentBoundEvent_38_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioBarWidget.AudioBarWidget_C.BndEvt__InputTextBox_K2Node_ComponentBoundEvent_38_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UAudioBarWidget_C_BndEvt__InputTextBox_K2Node_ComponentBoundEvent_38_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioBarWidget.AudioBarWidget_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_172_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAudioBarWidget_C::BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_172_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioBarWidget.AudioBarWidget_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_172_OnCheckBoxComponentStateChanged__DelegateSignature");

	UAudioBarWidget_C_BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_172_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioBarWidget.AudioBarWidget_C.ResetSetting
// (Public, BlueprintCallable, BlueprintEvent)

void UAudioBarWidget_C::ResetSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioBarWidget.AudioBarWidget_C.ResetSetting");

	UAudioBarWidget_C_ResetSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioBarWidget.AudioBarWidget_C.ResetDefaultSetting
// (Public, BlueprintCallable, BlueprintEvent)

void UAudioBarWidget_C::ResetDefaultSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioBarWidget.AudioBarWidget_C.ResetDefaultSetting");

	UAudioBarWidget_C_ResetDefaultSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioBarWidget.AudioBarWidget_C.SaveSetting
// (Public, BlueprintCallable, BlueprintEvent)

void UAudioBarWidget_C::SaveSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioBarWidget.AudioBarWidget_C.SaveSetting");

	UAudioBarWidget_C_SaveSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioBarWidget.AudioBarWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAudioBarWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioBarWidget.AudioBarWidget_C.Tick");

	UAudioBarWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioBarWidget.AudioBarWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAudioBarWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioBarWidget.AudioBarWidget_C.Construct");

	UAudioBarWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioBarWidget.AudioBarWidget_C.SwitchOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Append                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAudioBarWidget_C::SwitchOffset(int* Append)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioBarWidget.AudioBarWidget_C.SwitchOffset");

	UAudioBarWidget_C_SwitchOffset_Params params;
	params.Append = Append;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioBarWidget.AudioBarWidget_C.OnClick
// (Public, BlueprintCallable, BlueprintEvent)

void UAudioBarWidget_C::OnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioBarWidget.AudioBarWidget_C.OnClick");

	UAudioBarWidget_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioBarWidget.AudioBarWidget_C.OutEdit
// (Public, BlueprintCallable, BlueprintEvent)

void UAudioBarWidget_C::OutEdit()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioBarWidget.AudioBarWidget_C.OutEdit");

	UAudioBarWidget_C_OutEdit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioBarWidget.AudioBarWidget_C.StartEdit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsForward                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAudioBarWidget_C::StartEdit(bool* IsForward)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioBarWidget.AudioBarWidget_C.StartEdit");

	UAudioBarWidget_C_StartEdit_Params params;
	params.IsForward = IsForward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioBarWidget.AudioBarWidget_C.SetHorizontalState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsRight                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAudioBarWidget_C::SetHorizontalState(bool* State, bool* IsRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioBarWidget.AudioBarWidget_C.SetHorizontalState");

	UAudioBarWidget_C_SetHorizontalState_Params params;
	params.State = State;
	params.IsRight = IsRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioBarWidget.AudioBarWidget_C.SetEditState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAudioBarWidget_C::SetEditState(bool* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioBarWidget.AudioBarWidget_C.SetEditState");

	UAudioBarWidget_C_SetEditState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioBarWidget.AudioBarWidget_C.ExecuteUbergraph_AudioBarWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAudioBarWidget_C::ExecuteUbergraph_AudioBarWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioBarWidget.AudioBarWidget_C.ExecuteUbergraph_AudioBarWidget");

	UAudioBarWidget_C_ExecuteUbergraph_AudioBarWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioBarWidget.AudioBarWidget_C.StateChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAudioBarWidget_C::StateChange__DelegateSignature(bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioBarWidget.AudioBarWidget_C.StateChange__DelegateSignature");

	UAudioBarWidget_C_StateChange__DelegateSignature_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioBarWidget.AudioBarWidget_C.ValueChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAudioBarWidget_C::ValueChange__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioBarWidget.AudioBarWidget_C.ValueChange__DelegateSignature");

	UAudioBarWidget_C_ValueChange__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
