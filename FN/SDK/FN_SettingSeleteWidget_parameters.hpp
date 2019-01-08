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

// Function SettingSeleteWidget.SettingSeleteWidget_C.On_ComboBox_GenerateWidget_1
struct USettingSeleteWidget_C_On_ComboBox_GenerateWidget_1_Params
{
	struct FString                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SettingSeleteWidget.SettingSeleteWidget_C.SetChildState
struct USettingSeleteWidget_C_SetChildState_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingSeleteWidget.SettingSeleteWidget_C.Construct
struct USettingSeleteWidget_C_Construct_Params
{
};

// Function SettingSeleteWidget.SettingSeleteWidget_C.InitIndex
struct USettingSeleteWidget_C_InitIndex_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingSeleteWidget.SettingSeleteWidget_C.ResetSetting
struct USettingSeleteWidget_C_ResetSetting_Params
{
};

// Function SettingSeleteWidget.SettingSeleteWidget_C.ResetDefaultSetting
struct USettingSeleteWidget_C_ResetDefaultSetting_Params
{
};

// Function SettingSeleteWidget.SettingSeleteWidget_C.SaveSetting
struct USettingSeleteWidget_C_SaveSetting_Params
{
};

// Function SettingSeleteWidget.SettingSeleteWidget_C.Tick
struct USettingSeleteWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingSeleteWidget.SettingSeleteWidget_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_107_OnSelectionChangedEvent__DelegateSignature
struct USettingSeleteWidget_C_BndEvt__ComboBox_K2Node_ComponentBoundEvent_107_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingSeleteWidget.SettingSeleteWidget_C.SelectDestroy
struct USettingSeleteWidget_C_SelectDestroy_Params
{
	class UComboxItem_C*                               ComboItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SettingSeleteWidget.SettingSeleteWidget_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_119_OnOpeningEvent__DelegateSignature
struct USettingSeleteWidget_C_BndEvt__ComboBox_K2Node_ComponentBoundEvent_119_OnOpeningEvent__DelegateSignature_Params
{
};

// Function SettingSeleteWidget.SettingSeleteWidget_C.ChildCreate
struct USettingSeleteWidget_C_ChildCreate_Params
{
	class UComboxItem_C*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SettingSeleteWidget.SettingSeleteWidget_C.BndEvt__OutBoxButton_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature
struct USettingSeleteWidget_C_BndEvt__OutBoxButton_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SettingSeleteWidget.SettingSeleteWidget_C.BndEvt__OutBoxButton_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature
struct USettingSeleteWidget_C_BndEvt__OutBoxButton_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SettingSeleteWidget.SettingSeleteWidget_C.CloseAllItemState
struct USettingSeleteWidget_C_CloseAllItemState_Params
{
};

// Function SettingSeleteWidget.SettingSeleteWidget_C.ReConstructComboBox
struct USettingSeleteWidget_C_ReConstructComboBox_Params
{
};

// Function SettingSeleteWidget.SettingSeleteWidget_C.SwitchOffset
struct USettingSeleteWidget_C_SwitchOffset_Params
{
	int*                                               Append;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingSeleteWidget.SettingSeleteWidget_C.OutEdit
struct USettingSeleteWidget_C_OutEdit_Params
{
};

// Function SettingSeleteWidget.SettingSeleteWidget_C.StartEdit
struct USettingSeleteWidget_C_StartEdit_Params
{
	bool*                                              IsForward;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingSeleteWidget.SettingSeleteWidget_C.SetVerticleState
struct USettingSeleteWidget_C_SetVerticleState_Params
{
	bool*                                              State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingSeleteWidget.SettingSeleteWidget_C.SetEditState
struct USettingSeleteWidget_C_SetEditState_Params
{
	bool*                                              NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingSeleteWidget.SettingSeleteWidget_C.SetComboValid
struct USettingSeleteWidget_C_SetComboValid_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingSeleteWidget.SettingSeleteWidget_C.ExecuteUbergraph_SettingSeleteWidget
struct USettingSeleteWidget_C_ExecuteUbergraph_SettingSeleteWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingSeleteWidget.SettingSeleteWidget_C.OnSelectChange__DelegateSignature
struct USettingSeleteWidget_C_OnSelectChange__DelegateSignature_Params
{
	int                                                CurrentIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESelectInfo>                           SelectType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
