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

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.GetServerById
struct USortModeAndServerTypeSelectWidget_C_GetServerById_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class URankServerModeWidget_C*                     ServerButton;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.GetSortByIndex
struct USortModeAndServerTypeSelectWidget_C_GetSortByIndex_Params
{
	int                                                Sort;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class URankSortModeChildWidget_C*                  SortButton;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.GetServerHoverIndex
struct USortModeAndServerTypeSelectWidget_C_GetServerHoverIndex_Params
{
	int                                                index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.GetSortHover
struct USortModeAndServerTypeSelectWidget_C_GetSortHover_Params
{
	int                                                Sort;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.SetServerHoverFunc
struct USortModeAndServerTypeSelectWidget_C_SetServerHoverFunc_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.SetSortHover
struct USortModeAndServerTypeSelectWidget_C_SetSortHover_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.CheckHoverButton
struct USortModeAndServerTypeSelectWidget_C_CheckHoverButton_Params
{
	TEnumAsByte<ETypeSelectButtonState>                State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.ResetLanguage
struct USortModeAndServerTypeSelectWidget_C_ResetLanguage_Params
{
};

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.BndEvt__SoloMode_K2Node_ComponentBoundEvent_164_SetSortMode__DelegateSignature
struct USortModeAndServerTypeSelectWidget_C_BndEvt__SoloMode_K2Node_ComponentBoundEvent_164_SetSortMode__DelegateSignature_Params
{
	int                                                NewMode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.BndEvt__DoubleMode_K2Node_ComponentBoundEvent_165_SetSortMode__DelegateSignature
struct USortModeAndServerTypeSelectWidget_C_BndEvt__DoubleMode_K2Node_ComponentBoundEvent_165_SetSortMode__DelegateSignature_Params
{
	int                                                NewMode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.BndEvt__SquadMode_K2Node_ComponentBoundEvent_167_SetSortMode__DelegateSignature
struct USortModeAndServerTypeSelectWidget_C_BndEvt__SquadMode_K2Node_ComponentBoundEvent_167_SetSortMode__DelegateSignature_Params
{
	int                                                NewMode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.Construct
struct USortModeAndServerTypeSelectWidget_C_Construct_Params
{
};

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.ServerModeSelect
struct USortModeAndServerTypeSelectWidget_C_ServerModeSelect_Params
{
	int                                                NewMode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.PreConstruct
struct USortModeAndServerTypeSelectWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.SortModeSelect
struct USortModeAndServerTypeSelectWidget_C_SortModeSelect_Params
{
	int                                                Sort;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Server;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.InitServer
struct USortModeAndServerTypeSelectWidget_C_InitServer_Params
{
	TArray<int>                                        Servers;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
struct USortModeAndServerTypeSelectWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_84_OnButtonHoverEvent__DelegateSignature
struct USortModeAndServerTypeSelectWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_84_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_94_OnButtonHoverEvent__DelegateSignature
struct USortModeAndServerTypeSelectWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_94_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.PanelState
struct USortModeAndServerTypeSelectWidget_C_PanelState_Params
{
	bool                                               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.BndEvt__CtrlButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
struct USortModeAndServerTypeSelectWidget_C_BndEvt__CtrlButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.BndEvt__CtrlButton_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature
struct USortModeAndServerTypeSelectWidget_C_BndEvt__CtrlButton_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.LabelAppend
struct USortModeAndServerTypeSelectWidget_C_LabelAppend_Params
{
	int*                                               Append;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.StartInto
struct USortModeAndServerTypeSelectWidget_C_StartInto_Params
{
	bool*                                              Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.ResetHover
struct USortModeAndServerTypeSelectWidget_C_ResetHover_Params
{
};

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.Verticle
struct USortModeAndServerTypeSelectWidget_C_Verticle_Params
{
	bool*                                              State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.Horizontal
struct USortModeAndServerTypeSelectWidget_C_Horizontal_Params
{
	bool*                                              State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsRight;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.Press
struct USortModeAndServerTypeSelectWidget_C_Press_Params
{
};

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.Release
struct USortModeAndServerTypeSelectWidget_C_Release_Params
{
};

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.ExecuteUbergraph_SortModeAndServerTypeSelectWidget
struct USortModeAndServerTypeSelectWidget_C_ExecuteUbergraph_SortModeAndServerTypeSelectWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.ModeChange__DelegateSignature
struct USortModeAndServerTypeSelectWidget_C_ModeChange__DelegateSignature_Params
{
	int                                                SortMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ServerMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
