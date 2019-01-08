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

// Function SettingProgressBarWidget.SettingProgressBarWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_32_OnFloatValueChangedEvent__DelegateSignature
struct USettingProgressBarWidget_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_32_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingProgressBarWidget.SettingProgressBarWidget_C.InitValue
struct USettingProgressBarWidget_C_InitValue_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingProgressBarWidget.SettingProgressBarWidget_C.BndEvt__InputTextBox_K2Node_ComponentBoundEvent_37_OnEditableTextBoxChangedEvent__DelegateSignature
struct USettingProgressBarWidget_C_BndEvt__InputTextBox_K2Node_ComponentBoundEvent_37_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SettingProgressBarWidget.SettingProgressBarWidget_C.BndEvt__InputTextBox_K2Node_ComponentBoundEvent_38_OnEditableTextBoxCommittedEvent__DelegateSignature
struct USettingProgressBarWidget_C_BndEvt__InputTextBox_K2Node_ComponentBoundEvent_38_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingProgressBarWidget.SettingProgressBarWidget_C.OnValueChange
struct USettingProgressBarWidget_C_OnValueChange_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingProgressBarWidget.SettingProgressBarWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature
struct USettingProgressBarWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SettingProgressBarWidget.SettingProgressBarWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
struct USettingProgressBarWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SettingProgressBarWidget.SettingProgressBarWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_29_OnMouseCaptureBeginEvent__DelegateSignature
struct USettingProgressBarWidget_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_29_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function SettingProgressBarWidget.SettingProgressBarWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_30_OnMouseCaptureEndEvent__DelegateSignature
struct USettingProgressBarWidget_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_30_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function SettingProgressBarWidget.SettingProgressBarWidget_C.Tick
struct USettingProgressBarWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingProgressBarWidget.SettingProgressBarWidget_C.ResetSetting
struct USettingProgressBarWidget_C_ResetSetting_Params
{
};

// Function SettingProgressBarWidget.SettingProgressBarWidget_C.ResetDefaultSetting
struct USettingProgressBarWidget_C_ResetDefaultSetting_Params
{
};

// Function SettingProgressBarWidget.SettingProgressBarWidget_C.SaveSetting
struct USettingProgressBarWidget_C_SaveSetting_Params
{
};

// Function SettingProgressBarWidget.SettingProgressBarWidget_C.SetProgress
struct USettingProgressBarWidget_C_SetProgress_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingProgressBarWidget.SettingProgressBarWidget_C.Construct
struct USettingProgressBarWidget_C_Construct_Params
{
};

// Function SettingProgressBarWidget.SettingProgressBarWidget_C.SwitchOffset
struct USettingProgressBarWidget_C_SwitchOffset_Params
{
	int*                                               Append;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingProgressBarWidget.SettingProgressBarWidget_C.OutEdit
struct USettingProgressBarWidget_C_OutEdit_Params
{
};

// Function SettingProgressBarWidget.SettingProgressBarWidget_C.StartEdit
struct USettingProgressBarWidget_C_StartEdit_Params
{
	bool*                                              IsForward;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingProgressBarWidget.SettingProgressBarWidget_C.SetHorizontalState
struct USettingProgressBarWidget_C_SetHorizontalState_Params
{
	bool*                                              State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsRight;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingProgressBarWidget.SettingProgressBarWidget_C.SetEditState
struct USettingProgressBarWidget_C_SetEditState_Params
{
	bool*                                              NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingProgressBarWidget.SettingProgressBarWidget_C.ExecuteUbergraph_SettingProgressBarWidget
struct USettingProgressBarWidget_C_ExecuteUbergraph_SettingProgressBarWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingProgressBarWidget.SettingProgressBarWidget_C.ValueChange__DelegateSignature
struct USettingProgressBarWidget_C_ValueChange__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
