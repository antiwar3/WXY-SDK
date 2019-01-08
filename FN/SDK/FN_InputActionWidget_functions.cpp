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

// Function InputActionWidget.InputActionWidget_C.GetKeyStr
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    InputKey                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   KeyText                        (Parm, OutParm)

void UInputActionWidget_C::GetKeyStr(const struct FKey& InputKey, struct FText* KeyText)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputActionWidget.InputActionWidget_C.GetKeyStr");

	UInputActionWidget_C_GetKeyStr_Params params;
	params.InputKey = InputKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KeyText != nullptr)
		*KeyText = params.KeyText;
}


// Function InputActionWidget.InputActionWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UInputActionWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputActionWidget.InputActionWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature");

	UInputActionWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputActionWidget.InputActionWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UInputActionWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputActionWidget.InputActionWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature");

	UInputActionWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputActionWidget.InputActionWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputActionWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputActionWidget.InputActionWidget_C.Tick");

	UInputActionWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputActionWidget.InputActionWidget_C.BndEvt__KeySelect_K2Node_ComponentBoundEvent_45_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord             SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UInputActionWidget_C::BndEvt__KeySelect_K2Node_ComponentBoundEvent_45_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputActionWidget.InputActionWidget_C.BndEvt__KeySelect_K2Node_ComponentBoundEvent_45_OnKeySelected__DelegateSignature");

	UInputActionWidget_C_BndEvt__KeySelect_K2Node_ComponentBoundEvent_45_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputActionWidget.InputActionWidget_C.BndEvt__HandleSelect_K2Node_ComponentBoundEvent_46_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord             SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UInputActionWidget_C::BndEvt__HandleSelect_K2Node_ComponentBoundEvent_46_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputActionWidget.InputActionWidget_C.BndEvt__HandleSelect_K2Node_ComponentBoundEvent_46_OnKeySelected__DelegateSignature");

	UInputActionWidget_C_BndEvt__HandleSelect_K2Node_ComponentBoundEvent_46_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputActionWidget.InputActionWidget_C.BndEvt__KeySelect_K2Node_ComponentBoundEvent_47_OnIsSelectingKeyChanged__DelegateSignature
// (BlueprintEvent)

void UInputActionWidget_C::BndEvt__KeySelect_K2Node_ComponentBoundEvent_47_OnIsSelectingKeyChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputActionWidget.InputActionWidget_C.BndEvt__KeySelect_K2Node_ComponentBoundEvent_47_OnIsSelectingKeyChanged__DelegateSignature");

	UInputActionWidget_C_BndEvt__KeySelect_K2Node_ComponentBoundEvent_47_OnIsSelectingKeyChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputActionWidget.InputActionWidget_C.BndEvt__HandleSelect_K2Node_ComponentBoundEvent_48_OnIsSelectingKeyChanged__DelegateSignature
// (BlueprintEvent)

void UInputActionWidget_C::BndEvt__HandleSelect_K2Node_ComponentBoundEvent_48_OnIsSelectingKeyChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputActionWidget.InputActionWidget_C.BndEvt__HandleSelect_K2Node_ComponentBoundEvent_48_OnIsSelectingKeyChanged__DelegateSignature");

	UInputActionWidget_C_BndEvt__HandleSelect_K2Node_ComponentBoundEvent_48_OnIsSelectingKeyChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputActionWidget.InputActionWidget_C.InitKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_UserSettingUI_C**    Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInputActionWidget_C::InitKey(class UBP_UserSettingUI_C** Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputActionWidget.InputActionWidget_C.InitKey");

	UInputActionWidget_C_InitKey_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputActionWidget.InputActionWidget_C.SaveSetting
// (Public, BlueprintCallable, BlueprintEvent)

void UInputActionWidget_C::SaveSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputActionWidget.InputActionWidget_C.SaveSetting");

	UInputActionWidget_C_SaveSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputActionWidget.InputActionWidget_C.ResetDefaultSetting
// (Public, BlueprintCallable, BlueprintEvent)

void UInputActionWidget_C::ResetDefaultSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputActionWidget.InputActionWidget_C.ResetDefaultSetting");

	UInputActionWidget_C_ResetDefaultSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputActionWidget.InputActionWidget_C.ResetSetting
// (Public, BlueprintCallable, BlueprintEvent)

void UInputActionWidget_C::ResetSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputActionWidget.InputActionWidget_C.ResetSetting");

	UInputActionWidget_C_ResetSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputActionWidget.InputActionWidget_C.CheckSameKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputChord*            Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UInputActionWidget_C::CheckSameKey(struct FInputChord* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputActionWidget.InputActionWidget_C.CheckSameKey");

	UInputActionWidget_C_CheckSameKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputActionWidget.InputActionWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInputActionWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputActionWidget.InputActionWidget_C.Construct");

	UInputActionWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputActionWidget.InputActionWidget_C.ExecuteUbergraph_InputActionWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputActionWidget_C::ExecuteUbergraph_InputActionWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputActionWidget.InputActionWidget_C.ExecuteUbergraph_InputActionWidget");

	UInputActionWidget_C_ExecuteUbergraph_InputActionWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
