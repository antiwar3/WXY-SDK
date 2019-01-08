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

// Function AudioBarWidget.AudioBarWidget_C.GetEditDirection
struct UAudioBarWidget_C_GetEditDirection_Params
{
	bool                                               IsForward;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AudioBarWidget.AudioBarWidget_C.SetEditIndex
struct UAudioBarWidget_C_SetEditIndex_Params
{
	int                                                CurrentEditIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioBarWidget.AudioBarWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature
struct UAudioBarWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function AudioBarWidget.AudioBarWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
struct UAudioBarWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function AudioBarWidget.AudioBarWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_29_OnMouseCaptureBeginEvent__DelegateSignature
struct UAudioBarWidget_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_29_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function AudioBarWidget.AudioBarWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_30_OnMouseCaptureEndEvent__DelegateSignature
struct UAudioBarWidget_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_30_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function AudioBarWidget.AudioBarWidget_C.OnValueChange
struct UAudioBarWidget_C_OnValueChange_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioBarWidget.AudioBarWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_32_OnFloatValueChangedEvent__DelegateSignature
struct UAudioBarWidget_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_32_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioBarWidget.AudioBarWidget_C.Init
struct UAudioBarWidget_C_Init_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioBarWidget.AudioBarWidget_C.BndEvt__InputTextBox_K2Node_ComponentBoundEvent_37_OnEditableTextBoxChangedEvent__DelegateSignature
struct UAudioBarWidget_C_BndEvt__InputTextBox_K2Node_ComponentBoundEvent_37_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AudioBarWidget.AudioBarWidget_C.BndEvt__InputTextBox_K2Node_ComponentBoundEvent_38_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UAudioBarWidget_C_BndEvt__InputTextBox_K2Node_ComponentBoundEvent_38_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioBarWidget.AudioBarWidget_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_172_OnCheckBoxComponentStateChanged__DelegateSignature
struct UAudioBarWidget_C_BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_172_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioBarWidget.AudioBarWidget_C.ResetSetting
struct UAudioBarWidget_C_ResetSetting_Params
{
};

// Function AudioBarWidget.AudioBarWidget_C.ResetDefaultSetting
struct UAudioBarWidget_C_ResetDefaultSetting_Params
{
};

// Function AudioBarWidget.AudioBarWidget_C.SaveSetting
struct UAudioBarWidget_C_SaveSetting_Params
{
};

// Function AudioBarWidget.AudioBarWidget_C.Tick
struct UAudioBarWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioBarWidget.AudioBarWidget_C.Construct
struct UAudioBarWidget_C_Construct_Params
{
};

// Function AudioBarWidget.AudioBarWidget_C.SwitchOffset
struct UAudioBarWidget_C_SwitchOffset_Params
{
	int*                                               Append;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioBarWidget.AudioBarWidget_C.OnClick
struct UAudioBarWidget_C_OnClick_Params
{
};

// Function AudioBarWidget.AudioBarWidget_C.OutEdit
struct UAudioBarWidget_C_OutEdit_Params
{
};

// Function AudioBarWidget.AudioBarWidget_C.StartEdit
struct UAudioBarWidget_C_StartEdit_Params
{
	bool*                                              IsForward;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioBarWidget.AudioBarWidget_C.SetHorizontalState
struct UAudioBarWidget_C_SetHorizontalState_Params
{
	bool*                                              State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsRight;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioBarWidget.AudioBarWidget_C.SetEditState
struct UAudioBarWidget_C_SetEditState_Params
{
	bool*                                              NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioBarWidget.AudioBarWidget_C.ExecuteUbergraph_AudioBarWidget
struct UAudioBarWidget_C_ExecuteUbergraph_AudioBarWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioBarWidget.AudioBarWidget_C.StateChange__DelegateSignature
struct UAudioBarWidget_C_StateChange__DelegateSignature_Params
{
	bool                                               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioBarWidget.AudioBarWidget_C.ValueChange__DelegateSignature
struct UAudioBarWidget_C_ValueChange__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
