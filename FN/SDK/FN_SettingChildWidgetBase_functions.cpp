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

// Function SettingChildWidgetBase.SettingChildWidgetBase_C.GetEditDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsForward                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USettingChildWidgetBase_C::GetEditDirection(bool* IsForward)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingChildWidgetBase.SettingChildWidgetBase_C.GetEditDirection");

	USettingChildWidgetBase_C_GetEditDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsForward != nullptr)
		*IsForward = params.IsForward;
}


// Function SettingChildWidgetBase.SettingChildWidgetBase_C.SwitchOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Append                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingChildWidgetBase_C::SwitchOffset(int Append)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingChildWidgetBase.SettingChildWidgetBase_C.SwitchOffset");

	USettingChildWidgetBase_C_SwitchOffset_Params params;
	params.Append = Append;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingChildWidgetBase.SettingChildWidgetBase_C.OnClick
// (Public, BlueprintCallable, BlueprintEvent)

void USettingChildWidgetBase_C::OnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingChildWidgetBase.SettingChildWidgetBase_C.OnClick");

	USettingChildWidgetBase_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingChildWidgetBase.SettingChildWidgetBase_C.OutEdit
// (Public, BlueprintCallable, BlueprintEvent)

void USettingChildWidgetBase_C::OutEdit()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingChildWidgetBase.SettingChildWidgetBase_C.OutEdit");

	USettingChildWidgetBase_C_OutEdit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingChildWidgetBase.SettingChildWidgetBase_C.StartEdit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsForward                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingChildWidgetBase_C::StartEdit(bool IsForward)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingChildWidgetBase.SettingChildWidgetBase_C.StartEdit");

	USettingChildWidgetBase_C_StartEdit_Params params;
	params.IsForward = IsForward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingChildWidgetBase.SettingChildWidgetBase_C.SetVerticleState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsDown                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingChildWidgetBase_C::SetVerticleState(bool State, bool IsDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingChildWidgetBase.SettingChildWidgetBase_C.SetVerticleState");

	USettingChildWidgetBase_C_SetVerticleState_Params params;
	params.State = State;
	params.IsDown = IsDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingChildWidgetBase.SettingChildWidgetBase_C.SetHorizontalState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsRight                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingChildWidgetBase_C::SetHorizontalState(bool State, bool IsRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingChildWidgetBase.SettingChildWidgetBase_C.SetHorizontalState");

	USettingChildWidgetBase_C_SetHorizontalState_Params params;
	params.State = State;
	params.IsRight = IsRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingChildWidgetBase.SettingChildWidgetBase_C.SetEditState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingChildWidgetBase_C::SetEditState(bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingChildWidgetBase.SettingChildWidgetBase_C.SetEditState");

	USettingChildWidgetBase_C_SetEditState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingChildWidgetBase.SettingChildWidgetBase_C.ResetSetting
// (Public, BlueprintCallable, BlueprintEvent)

void USettingChildWidgetBase_C::ResetSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingChildWidgetBase.SettingChildWidgetBase_C.ResetSetting");

	USettingChildWidgetBase_C_ResetSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingChildWidgetBase.SettingChildWidgetBase_C.ResetDefaultSetting
// (Public, BlueprintCallable, BlueprintEvent)

void USettingChildWidgetBase_C::ResetDefaultSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingChildWidgetBase.SettingChildWidgetBase_C.ResetDefaultSetting");

	USettingChildWidgetBase_C_ResetDefaultSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingChildWidgetBase.SettingChildWidgetBase_C.SaveSetting
// (Public, BlueprintCallable, BlueprintEvent)

void USettingChildWidgetBase_C::SaveSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingChildWidgetBase.SettingChildWidgetBase_C.SaveSetting");

	USettingChildWidgetBase_C_SaveSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingChildWidgetBase.SettingChildWidgetBase_C.SetParentPanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            ParentPanel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUserSettingWidget*      Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USettingChildWidgetBase_C::SetParentPanel(class UPanelWidget* ParentPanel, class UUserSettingWidget* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingChildWidgetBase.SettingChildWidgetBase_C.SetParentPanel");

	USettingChildWidgetBase_C_SetParentPanel_Params params;
	params.ParentPanel = ParentPanel;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingChildWidgetBase.SettingChildWidgetBase_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USettingChildWidgetBase_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingChildWidgetBase.SettingChildWidgetBase_C.OnMouseEnter");

	USettingChildWidgetBase_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingChildWidgetBase.SettingChildWidgetBase_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USettingChildWidgetBase_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingChildWidgetBase.SettingChildWidgetBase_C.OnMouseLeave");

	USettingChildWidgetBase_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingChildWidgetBase.SettingChildWidgetBase_C.ExecuteUbergraph_SettingChildWidgetBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingChildWidgetBase_C::ExecuteUbergraph_SettingChildWidgetBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingChildWidgetBase.SettingChildWidgetBase_C.ExecuteUbergraph_SettingChildWidgetBase");

	USettingChildWidgetBase_C_ExecuteUbergraph_SettingChildWidgetBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingChildWidgetBase.SettingChildWidgetBase_C.SwitchNextWidget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EUserSettingLabel> Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NextSortIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsForward                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingChildWidgetBase_C::SwitchNextWidget__DelegateSignature(TEnumAsByte<EUserSettingLabel> Label, int NextSortIndex, bool IsForward)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingChildWidgetBase.SettingChildWidgetBase_C.SwitchNextWidget__DelegateSignature");

	USettingChildWidgetBase_C_SwitchNextWidget__DelegateSignature_Params params;
	params.Label = Label;
	params.NextSortIndex = NextSortIndex;
	params.IsForward = IsForward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingChildWidgetBase.SettingChildWidgetBase_C.StartIntoWidget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USettingChildWidgetBase_C* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USettingChildWidgetBase_C::StartIntoWidget__DelegateSignature(class USettingChildWidgetBase_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingChildWidgetBase.SettingChildWidgetBase_C.StartIntoWidget__DelegateSignature");

	USettingChildWidgetBase_C_StartIntoWidget__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
