#pragma once

// Fortnite (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function InputActionWidget.InputActionWidget_C.GetKeyStr
struct UInputActionWidget_C_GetKeyStr_Params
{
	struct FKey                                        InputKey;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       KeyText;                                                  // (Parm, OutParm)
};

// Function InputActionWidget.InputActionWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature
struct UInputActionWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function InputActionWidget.InputActionWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
struct UInputActionWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function InputActionWidget.InputActionWidget_C.Tick
struct UInputActionWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputActionWidget.InputActionWidget_C.BndEvt__KeySelect_K2Node_ComponentBoundEvent_45_OnKeySelected__DelegateSignature
struct UInputActionWidget_C_BndEvt__KeySelect_K2Node_ComponentBoundEvent_45_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function InputActionWidget.InputActionWidget_C.BndEvt__HandleSelect_K2Node_ComponentBoundEvent_46_OnKeySelected__DelegateSignature
struct UInputActionWidget_C_BndEvt__HandleSelect_K2Node_ComponentBoundEvent_46_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function InputActionWidget.InputActionWidget_C.BndEvt__KeySelect_K2Node_ComponentBoundEvent_47_OnIsSelectingKeyChanged__DelegateSignature
struct UInputActionWidget_C_BndEvt__KeySelect_K2Node_ComponentBoundEvent_47_OnIsSelectingKeyChanged__DelegateSignature_Params
{
};

// Function InputActionWidget.InputActionWidget_C.BndEvt__HandleSelect_K2Node_ComponentBoundEvent_48_OnIsSelectingKeyChanged__DelegateSignature
struct UInputActionWidget_C_BndEvt__HandleSelect_K2Node_ComponentBoundEvent_48_OnIsSelectingKeyChanged__DelegateSignature_Params
{
};

// Function InputActionWidget.InputActionWidget_C.InitKey
struct UInputActionWidget_C_InitKey_Params
{
	class UBP_UserSettingUI_C**                        Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function InputActionWidget.InputActionWidget_C.SaveSetting
struct UInputActionWidget_C_SaveSetting_Params
{
};

// Function InputActionWidget.InputActionWidget_C.ResetDefaultSetting
struct UInputActionWidget_C_ResetDefaultSetting_Params
{
};

// Function InputActionWidget.InputActionWidget_C.ResetSetting
struct UInputActionWidget_C_ResetSetting_Params
{
};

// Function InputActionWidget.InputActionWidget_C.CheckSameKey
struct UInputActionWidget_C_CheckSameKey_Params
{
	struct FInputChord*                                Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function InputActionWidget.InputActionWidget_C.Construct
struct UInputActionWidget_C_Construct_Params
{
};

// Function InputActionWidget.InputActionWidget_C.ExecuteUbergraph_InputActionWidget
struct UInputActionWidget_C_ExecuteUbergraph_InputActionWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
