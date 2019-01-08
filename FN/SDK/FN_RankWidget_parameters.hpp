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

// Function RankWidget.RankWidget_C.SwitchMainPanel
struct URankWidget_C_SwitchMainPanel_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RankWidget.RankWidget_C.CheckHoverButton
struct URankWidget_C_CheckHoverButton_Params
{
	TEnumAsByte<ERankButtonState>                      State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RankWidget.RankWidget_C.DealRankModeChange
struct URankWidget_C_DealRankModeChange_Params
{
	int                                                NewRankMode;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RankWidget.RankWidget_C.BndEvt__TotalRankData_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
struct URankWidget_C_BndEvt__TotalRankData_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function RankWidget.RankWidget_C.BndEvt__WinRankData_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature
struct URankWidget_C_BndEvt__WinRankData_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function RankWidget.RankWidget_C.BndEvt__KillRankData_K2Node_ComponentBoundEvent_95_OnButtonClickedEvent__DelegateSignature
struct URankWidget_C_BndEvt__KillRankData_K2Node_ComponentBoundEvent_95_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function RankWidget.RankWidget_C.BndEvt__RankButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct URankWidget_C_BndEvt__RankButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function RankWidget.RankWidget_C.BndEvt__PersonButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct URankWidget_C_BndEvt__PersonButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function RankWidget.RankWidget_C.ResetLanguage
struct URankWidget_C_ResetLanguage_Params
{
};

// Function RankWidget.RankWidget_C.CreateTotalRank
struct URankWidget_C_CreateTotalRank_Params
{
	TArray<struct FTotalRank>                          Ranks;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function RankWidget.RankWidget_C.CreateWinRank
struct URankWidget_C_CreateWinRank_Params
{
	TArray<struct FVictoryRank>                        Ranks;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function RankWidget.RankWidget_C.CreateFightRank
struct URankWidget_C_CreateFightRank_Params
{
	TArray<struct FFightRank>                          Ranks;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function RankWidget.RankWidget_C.GetPlayerRank
struct URankWidget_C_GetPlayerRank_Params
{
	int                                                PlayerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RankWidget.RankWidget_C.BndEvt__RankTypeSelect_K2Node_ComponentBoundEvent_0_ModeChange__DelegateSignature
struct URankWidget_C_BndEvt__RankTypeSelect_K2Node_ComponentBoundEvent_0_ModeChange__DelegateSignature_Params
{
	int                                                SortMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ServerMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RankWidget.RankWidget_C.BndEvt__PersonTypeSelect_K2Node_ComponentBoundEvent_1_ModeChange__DelegateSignature
struct URankWidget_C_BndEvt__PersonTypeSelect_K2Node_ComponentBoundEvent_1_ModeChange__DelegateSignature_Params
{
	int                                                SortMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ServerMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RankWidget.RankWidget_C.Construct
struct URankWidget_C_Construct_Params
{
};

// Function RankWidget.RankWidget_C.BndEvt__Button_bg_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature
struct URankWidget_C_BndEvt__Button_bg_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function RankWidget.RankWidget_C.BndEvt__PersonTypeSelect_K2Node_ComponentBoundEvent_3_QuitOut__DelegateSignature
struct URankWidget_C_BndEvt__PersonTypeSelect_K2Node_ComponentBoundEvent_3_QuitOut__DelegateSignature_Params
{
	bool                                               Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RankWidget.RankWidget_C.BndEvt__RankTypeSelect_K2Node_ComponentBoundEvent_9_QuitOut__DelegateSignature
struct URankWidget_C_BndEvt__RankTypeSelect_K2Node_ComponentBoundEvent_9_QuitOut__DelegateSignature_Params
{
	bool                                               Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RankWidget.RankWidget_C.BndEvt__RankTypeSelect_K2Node_ComponentBoundEvent_193_MouseExit__DelegateSignature
struct URankWidget_C_BndEvt__RankTypeSelect_K2Node_ComponentBoundEvent_193_MouseExit__DelegateSignature_Params
{
};

// Function RankWidget.RankWidget_C.BndEvt__PersonTypeSelect_K2Node_ComponentBoundEvent_220_MouseExit__DelegateSignature
struct URankWidget_C_BndEvt__PersonTypeSelect_K2Node_ComponentBoundEvent_220_MouseExit__DelegateSignature_Params
{
};

// Function RankWidget.RankWidget_C.BndEvt__RankTypeSelect_K2Node_ComponentBoundEvent_293_MouseEnter__DelegateSignature
struct URankWidget_C_BndEvt__RankTypeSelect_K2Node_ComponentBoundEvent_293_MouseEnter__DelegateSignature_Params
{
};

// Function RankWidget.RankWidget_C.BndEvt__PersonTypeSelect_K2Node_ComponentBoundEvent_316_MouseEnter__DelegateSignature
struct URankWidget_C_BndEvt__PersonTypeSelect_K2Node_ComponentBoundEvent_316_MouseEnter__DelegateSignature_Params
{
};

// Function RankWidget.RankWidget_C.SetChildWidgetHoverNone
struct URankWidget_C_SetChildWidgetHoverNone_Params
{
};

// Function RankWidget.RankWidget_C.StartInto
struct URankWidget_C_StartInto_Params
{
	bool*                                              Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RankWidget.RankWidget_C.LabelAppend
struct URankWidget_C_LabelAppend_Params
{
	int*                                               Append;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RankWidget.RankWidget_C.Verticle
struct URankWidget_C_Verticle_Params
{
	bool*                                              State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RankWidget.RankWidget_C.Horizontal
struct URankWidget_C_Horizontal_Params
{
	bool*                                              State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsRight;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RankWidget.RankWidget_C.ResetHover
struct URankWidget_C_ResetHover_Params
{
};

// Function RankWidget.RankWidget_C.Press
struct URankWidget_C_Press_Params
{
};

// Function RankWidget.RankWidget_C.Release
struct URankWidget_C_Release_Params
{
};

// Function RankWidget.RankWidget_C.ExecuteUbergraph_RankWidget
struct URankWidget_C_ExecuteUbergraph_RankWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RankWidget.RankWidget_C.OpenPlayerRank__DelegateSignature
struct URankWidget_C_OpenPlayerRank__DelegateSignature_Params
{
	int                                                SortMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ServerMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
