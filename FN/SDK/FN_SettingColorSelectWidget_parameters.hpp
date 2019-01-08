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

// Function SettingColorSelectWidget.SettingColorSelectWidget_C.On_ComboColor_GenerateWidget_1
struct USettingColorSelectWidget_C_On_ComboColor_GenerateWidget_1_Params
{
	struct FString                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SettingColorSelectWidget.SettingColorSelectWidget_C.InitColor
struct USettingColorSelectWidget_C_InitColor_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingColorSelectWidget.SettingColorSelectWidget_C.ResetSetting
struct USettingColorSelectWidget_C_ResetSetting_Params
{
};

// Function SettingColorSelectWidget.SettingColorSelectWidget_C.ResetDefaultSetting
struct USettingColorSelectWidget_C_ResetDefaultSetting_Params
{
};

// Function SettingColorSelectWidget.SettingColorSelectWidget_C.SaveSetting
struct USettingColorSelectWidget_C_SaveSetting_Params
{
};

// Function SettingColorSelectWidget.SettingColorSelectWidget_C.BndEvt__ComboColor_K2Node_ComponentBoundEvent_10_OnSelectionChangedEvent__DelegateSignature
struct USettingColorSelectWidget_C_BndEvt__ComboColor_K2Node_ComponentBoundEvent_10_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingColorSelectWidget.SettingColorSelectWidget_C.SetColor
struct USettingColorSelectWidget_C_SetColor_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingColorSelectWidget.SettingColorSelectWidget_C.SwitchOffset
struct USettingColorSelectWidget_C_SwitchOffset_Params
{
	int*                                               Append;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingColorSelectWidget.SettingColorSelectWidget_C.OnClick
struct USettingColorSelectWidget_C_OnClick_Params
{
};

// Function SettingColorSelectWidget.SettingColorSelectWidget_C.OutEdit
struct USettingColorSelectWidget_C_OutEdit_Params
{
};

// Function SettingColorSelectWidget.SettingColorSelectWidget_C.StartEdit
struct USettingColorSelectWidget_C_StartEdit_Params
{
	bool*                                              IsForward;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingColorSelectWidget.SettingColorSelectWidget_C.SetVerticleState
struct USettingColorSelectWidget_C_SetVerticleState_Params
{
	bool*                                              State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingColorSelectWidget.SettingColorSelectWidget_C.BndEvt__OutBoxButton_K2Node_ComponentBoundEvent_143_OnButtonHoverEvent__DelegateSignature
struct USettingColorSelectWidget_C_BndEvt__OutBoxButton_K2Node_ComponentBoundEvent_143_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SettingColorSelectWidget.SettingColorSelectWidget_C.BndEvt__OutBoxButton_K2Node_ComponentBoundEvent_162_OnButtonHoverEvent__DelegateSignature
struct USettingColorSelectWidget_C_BndEvt__OutBoxButton_K2Node_ComponentBoundEvent_162_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SettingColorSelectWidget.SettingColorSelectWidget_C.ReConstructComboBox
struct USettingColorSelectWidget_C_ReConstructComboBox_Params
{
};

// Function SettingColorSelectWidget.SettingColorSelectWidget_C.Construct
struct USettingColorSelectWidget_C_Construct_Params
{
};

// Function SettingColorSelectWidget.SettingColorSelectWidget_C.ExecuteUbergraph_SettingColorSelectWidget
struct USettingColorSelectWidget_C_ExecuteUbergraph_SettingColorSelectWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingColorSelectWidget.SettingColorSelectWidget_C.OnIndexChange__DelegateSignature
struct USettingColorSelectWidget_C_OnIndexChange__DelegateSignature_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
