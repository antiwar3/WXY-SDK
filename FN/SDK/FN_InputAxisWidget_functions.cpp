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

// Function InputAxisWidget.InputAxisWidget_C.GetKeyStr
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    InputKey                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   KeyText                        (Parm, OutParm)

void UInputAxisWidget_C::GetKeyStr(const struct FKey& InputKey, struct FText* KeyText)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputAxisWidget.InputAxisWidget_C.GetKeyStr");

	UInputAxisWidget_C_GetKeyStr_Params params;
	params.InputKey = InputKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KeyText != nullptr)
		*KeyText = params.KeyText;
}


// Function InputAxisWidget.InputAxisWidget_C.InitKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_UserSettingUI_C**    Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInputAxisWidget_C::InitKey(class UBP_UserSettingUI_C** Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputAxisWidget.InputAxisWidget_C.InitKey");

	UInputAxisWidget_C_InitKey_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputAxisWidget.InputAxisWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UInputAxisWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputAxisWidget.InputAxisWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature");

	UInputAxisWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputAxisWidget.InputAxisWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UInputAxisWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputAxisWidget.InputAxisWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature");

	UInputAxisWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputAxisWidget.InputAxisWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UInputAxisWidget_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputAxisWidget.InputAxisWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature");

	UInputAxisWidget_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputAxisWidget.InputAxisWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_52_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UInputAxisWidget_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_52_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputAxisWidget.InputAxisWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_52_OnButtonHoverEvent__DelegateSignature");

	UInputAxisWidget_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_52_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputAxisWidget.InputAxisWidget_C.BndEvt__ForwardKeySelect_K2Node_ComponentBoundEvent_53_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord             SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UInputAxisWidget_C::BndEvt__ForwardKeySelect_K2Node_ComponentBoundEvent_53_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputAxisWidget.InputAxisWidget_C.BndEvt__ForwardKeySelect_K2Node_ComponentBoundEvent_53_OnKeySelected__DelegateSignature");

	UInputAxisWidget_C_BndEvt__ForwardKeySelect_K2Node_ComponentBoundEvent_53_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputAxisWidget.InputAxisWidget_C.BndEvt__ForwardHandleSelect_K2Node_ComponentBoundEvent_54_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord             SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UInputAxisWidget_C::BndEvt__ForwardHandleSelect_K2Node_ComponentBoundEvent_54_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputAxisWidget.InputAxisWidget_C.BndEvt__ForwardHandleSelect_K2Node_ComponentBoundEvent_54_OnKeySelected__DelegateSignature");

	UInputAxisWidget_C_BndEvt__ForwardHandleSelect_K2Node_ComponentBoundEvent_54_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputAxisWidget.InputAxisWidget_C.BndEvt__BackKeySelect_K2Node_ComponentBoundEvent_55_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord             SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UInputAxisWidget_C::BndEvt__BackKeySelect_K2Node_ComponentBoundEvent_55_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputAxisWidget.InputAxisWidget_C.BndEvt__BackKeySelect_K2Node_ComponentBoundEvent_55_OnKeySelected__DelegateSignature");

	UInputAxisWidget_C_BndEvt__BackKeySelect_K2Node_ComponentBoundEvent_55_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputAxisWidget.InputAxisWidget_C.BndEvt__BackHandleSelect_K2Node_ComponentBoundEvent_56_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord             SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UInputAxisWidget_C::BndEvt__BackHandleSelect_K2Node_ComponentBoundEvent_56_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputAxisWidget.InputAxisWidget_C.BndEvt__BackHandleSelect_K2Node_ComponentBoundEvent_56_OnKeySelected__DelegateSignature");

	UInputAxisWidget_C_BndEvt__BackHandleSelect_K2Node_ComponentBoundEvent_56_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputAxisWidget.InputAxisWidget_C.SaveSetting
// (Public, BlueprintCallable, BlueprintEvent)

void UInputAxisWidget_C::SaveSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputAxisWidget.InputAxisWidget_C.SaveSetting");

	UInputAxisWidget_C_SaveSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputAxisWidget.InputAxisWidget_C.ResetDefaultSetting
// (Public, BlueprintCallable, BlueprintEvent)

void UInputAxisWidget_C::ResetDefaultSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputAxisWidget.InputAxisWidget_C.ResetDefaultSetting");

	UInputAxisWidget_C_ResetDefaultSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputAxisWidget.InputAxisWidget_C.ResetSetting
// (Public, BlueprintCallable, BlueprintEvent)

void UInputAxisWidget_C::ResetSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputAxisWidget.InputAxisWidget_C.ResetSetting");

	UInputAxisWidget_C_ResetSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputAxisWidget.InputAxisWidget_C.BndEvt__ForwardKeySelect_K2Node_ComponentBoundEvent_152_OnIsSelectingKeyChanged__DelegateSignature
// (BlueprintEvent)

void UInputAxisWidget_C::BndEvt__ForwardKeySelect_K2Node_ComponentBoundEvent_152_OnIsSelectingKeyChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputAxisWidget.InputAxisWidget_C.BndEvt__ForwardKeySelect_K2Node_ComponentBoundEvent_152_OnIsSelectingKeyChanged__DelegateSignature");

	UInputAxisWidget_C_BndEvt__ForwardKeySelect_K2Node_ComponentBoundEvent_152_OnIsSelectingKeyChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputAxisWidget.InputAxisWidget_C.BndEvt__ForwardHandleSelect_K2Node_ComponentBoundEvent_153_OnIsSelectingKeyChanged__DelegateSignature
// (BlueprintEvent)

void UInputAxisWidget_C::BndEvt__ForwardHandleSelect_K2Node_ComponentBoundEvent_153_OnIsSelectingKeyChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputAxisWidget.InputAxisWidget_C.BndEvt__ForwardHandleSelect_K2Node_ComponentBoundEvent_153_OnIsSelectingKeyChanged__DelegateSignature");

	UInputAxisWidget_C_BndEvt__ForwardHandleSelect_K2Node_ComponentBoundEvent_153_OnIsSelectingKeyChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputAxisWidget.InputAxisWidget_C.BndEvt__BackKeySelect_K2Node_ComponentBoundEvent_154_OnIsSelectingKeyChanged__DelegateSignature
// (BlueprintEvent)

void UInputAxisWidget_C::BndEvt__BackKeySelect_K2Node_ComponentBoundEvent_154_OnIsSelectingKeyChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputAxisWidget.InputAxisWidget_C.BndEvt__BackKeySelect_K2Node_ComponentBoundEvent_154_OnIsSelectingKeyChanged__DelegateSignature");

	UInputAxisWidget_C_BndEvt__BackKeySelect_K2Node_ComponentBoundEvent_154_OnIsSelectingKeyChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputAxisWidget.InputAxisWidget_C.BndEvt__BackHandleSelect_K2Node_ComponentBoundEvent_155_OnIsSelectingKeyChanged__DelegateSignature
// (BlueprintEvent)

void UInputAxisWidget_C::BndEvt__BackHandleSelect_K2Node_ComponentBoundEvent_155_OnIsSelectingKeyChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputAxisWidget.InputAxisWidget_C.BndEvt__BackHandleSelect_K2Node_ComponentBoundEvent_155_OnIsSelectingKeyChanged__DelegateSignature");

	UInputAxisWidget_C_BndEvt__BackHandleSelect_K2Node_ComponentBoundEvent_155_OnIsSelectingKeyChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputAxisWidget.InputAxisWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputAxisWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputAxisWidget.InputAxisWidget_C.Tick");

	UInputAxisWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputAxisWidget.InputAxisWidget_C.CheckModuleKey
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputChord             Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UInputAxisWidget_C::CheckModuleKey(const struct FInputChord& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputAxisWidget.InputAxisWidget_C.CheckModuleKey");

	UInputAxisWidget_C_CheckModuleKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputAxisWidget.InputAxisWidget_C.CheckSameKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputChord*            Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UInputAxisWidget_C::CheckSameKey(struct FInputChord* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputAxisWidget.InputAxisWidget_C.CheckSameKey");

	UInputAxisWidget_C_CheckSameKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputAxisWidget.InputAxisWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInputAxisWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputAxisWidget.InputAxisWidget_C.Construct");

	UInputAxisWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputAxisWidget.InputAxisWidget_C.ExecuteUbergraph_InputAxisWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputAxisWidget_C::ExecuteUbergraph_InputAxisWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputAxisWidget.InputAxisWidget_C.ExecuteUbergraph_InputAxisWidget");

	UInputAxisWidget_C_ExecuteUbergraph_InputAxisWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
