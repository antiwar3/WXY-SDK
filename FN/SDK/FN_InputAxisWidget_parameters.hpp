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

// Function InputAxisWidget.InputAxisWidget_C.GetKeyStr
struct UInputAxisWidget_C_GetKeyStr_Params
{
	struct FKey                                        InputKey;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       KeyText;                                                  // (Parm, OutParm)
};

// Function InputAxisWidget.InputAxisWidget_C.InitKey
struct UInputAxisWidget_C_InitKey_Params
{
	class UBP_UserSettingUI_C**                        Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function InputAxisWidget.InputAxisWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature
struct UInputAxisWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function InputAxisWidget.InputAxisWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature
struct UInputAxisWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function InputAxisWidget.InputAxisWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature
struct UInputAxisWidget_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function InputAxisWidget.InputAxisWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_52_OnButtonHoverEvent__DelegateSignature
struct UInputAxisWidget_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_52_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function InputAxisWidget.InputAxisWidget_C.BndEvt__ForwardKeySelect_K2Node_ComponentBoundEvent_53_OnKeySelected__DelegateSignature
struct UInputAxisWidget_C_BndEvt__ForwardKeySelect_K2Node_ComponentBoundEvent_53_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function InputAxisWidget.InputAxisWidget_C.BndEvt__ForwardHandleSelect_K2Node_ComponentBoundEvent_54_OnKeySelected__DelegateSignature
struct UInputAxisWidget_C_BndEvt__ForwardHandleSelect_K2Node_ComponentBoundEvent_54_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function InputAxisWidget.InputAxisWidget_C.BndEvt__BackKeySelect_K2Node_ComponentBoundEvent_55_OnKeySelected__DelegateSignature
struct UInputAxisWidget_C_BndEvt__BackKeySelect_K2Node_ComponentBoundEvent_55_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function InputAxisWidget.InputAxisWidget_C.BndEvt__BackHandleSelect_K2Node_ComponentBoundEvent_56_OnKeySelected__DelegateSignature
struct UInputAxisWidget_C_BndEvt__BackHandleSelect_K2Node_ComponentBoundEvent_56_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function InputAxisWidget.InputAxisWidget_C.SaveSetting
struct UInputAxisWidget_C_SaveSetting_Params
{
};

// Function InputAxisWidget.InputAxisWidget_C.ResetDefaultSetting
struct UInputAxisWidget_C_ResetDefaultSetting_Params
{
};

// Function InputAxisWidget.InputAxisWidget_C.ResetSetting
struct UInputAxisWidget_C_ResetSetting_Params
{
};

// Function InputAxisWidget.InputAxisWidget_C.BndEvt__ForwardKeySelect_K2Node_ComponentBoundEvent_152_OnIsSelectingKeyChanged__DelegateSignature
struct UInputAxisWidget_C_BndEvt__ForwardKeySelect_K2Node_ComponentBoundEvent_152_OnIsSelectingKeyChanged__DelegateSignature_Params
{
};

// Function InputAxisWidget.InputAxisWidget_C.BndEvt__ForwardHandleSelect_K2Node_ComponentBoundEvent_153_OnIsSelectingKeyChanged__DelegateSignature
struct UInputAxisWidget_C_BndEvt__ForwardHandleSelect_K2Node_ComponentBoundEvent_153_OnIsSelectingKeyChanged__DelegateSignature_Params
{
};

// Function InputAxisWidget.InputAxisWidget_C.BndEvt__BackKeySelect_K2Node_ComponentBoundEvent_154_OnIsSelectingKeyChanged__DelegateSignature
struct UInputAxisWidget_C_BndEvt__BackKeySelect_K2Node_ComponentBoundEvent_154_OnIsSelectingKeyChanged__DelegateSignature_Params
{
};

// Function InputAxisWidget.InputAxisWidget_C.BndEvt__BackHandleSelect_K2Node_ComponentBoundEvent_155_OnIsSelectingKeyChanged__DelegateSignature
struct UInputAxisWidget_C_BndEvt__BackHandleSelect_K2Node_ComponentBoundEvent_155_OnIsSelectingKeyChanged__DelegateSignature_Params
{
};

// Function InputAxisWidget.InputAxisWidget_C.Tick
struct UInputAxisWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputAxisWidget.InputAxisWidget_C.CheckModuleKey
struct UInputAxisWidget_C_CheckModuleKey_Params
{
	struct FInputChord                                 Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function InputAxisWidget.InputAxisWidget_C.CheckSameKey
struct UInputAxisWidget_C_CheckSameKey_Params
{
	struct FInputChord*                                Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function InputAxisWidget.InputAxisWidget_C.Construct
struct UInputAxisWidget_C_Construct_Params
{
};

// Function InputAxisWidget.InputAxisWidget_C.ExecuteUbergraph_InputAxisWidget
struct UInputAxisWidget_C_ExecuteUbergraph_InputAxisWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
