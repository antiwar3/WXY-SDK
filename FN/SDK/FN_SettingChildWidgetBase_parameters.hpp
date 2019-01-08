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

// Function SettingChildWidgetBase.SettingChildWidgetBase_C.GetEditDirection
struct USettingChildWidgetBase_C_GetEditDirection_Params
{
	bool                                               IsForward;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SettingChildWidgetBase.SettingChildWidgetBase_C.SwitchOffset
struct USettingChildWidgetBase_C_SwitchOffset_Params
{
	int                                                Append;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingChildWidgetBase.SettingChildWidgetBase_C.OnClick
struct USettingChildWidgetBase_C_OnClick_Params
{
};

// Function SettingChildWidgetBase.SettingChildWidgetBase_C.OutEdit
struct USettingChildWidgetBase_C_OutEdit_Params
{
};

// Function SettingChildWidgetBase.SettingChildWidgetBase_C.StartEdit
struct USettingChildWidgetBase_C_StartEdit_Params
{
	bool                                               IsForward;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingChildWidgetBase.SettingChildWidgetBase_C.SetVerticleState
struct USettingChildWidgetBase_C_SetVerticleState_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingChildWidgetBase.SettingChildWidgetBase_C.SetHorizontalState
struct USettingChildWidgetBase_C_SetHorizontalState_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsRight;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingChildWidgetBase.SettingChildWidgetBase_C.SetEditState
struct USettingChildWidgetBase_C_SetEditState_Params
{
	bool                                               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingChildWidgetBase.SettingChildWidgetBase_C.ResetSetting
struct USettingChildWidgetBase_C_ResetSetting_Params
{
};

// Function SettingChildWidgetBase.SettingChildWidgetBase_C.ResetDefaultSetting
struct USettingChildWidgetBase_C_ResetDefaultSetting_Params
{
};

// Function SettingChildWidgetBase.SettingChildWidgetBase_C.SaveSetting
struct USettingChildWidgetBase_C_SaveSetting_Params
{
};

// Function SettingChildWidgetBase.SettingChildWidgetBase_C.SetParentPanel
struct USettingChildWidgetBase_C_SetParentPanel_Params
{
	class UPanelWidget*                                ParentPanel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUserSettingWidget*                          Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SettingChildWidgetBase.SettingChildWidgetBase_C.OnMouseEnter
struct USettingChildWidgetBase_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SettingChildWidgetBase.SettingChildWidgetBase_C.OnMouseLeave
struct USettingChildWidgetBase_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SettingChildWidgetBase.SettingChildWidgetBase_C.ExecuteUbergraph_SettingChildWidgetBase
struct USettingChildWidgetBase_C_ExecuteUbergraph_SettingChildWidgetBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingChildWidgetBase.SettingChildWidgetBase_C.SwitchNextWidget__DelegateSignature
struct USettingChildWidgetBase_C_SwitchNextWidget__DelegateSignature_Params
{
	TEnumAsByte<EUserSettingLabel>                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NextSortIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsForward;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingChildWidgetBase.SettingChildWidgetBase_C.StartIntoWidget__DelegateSignature
struct USettingChildWidgetBase_C_StartIntoWidget__DelegateSignature_Params
{
	class USettingChildWidgetBase_C*                   Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
