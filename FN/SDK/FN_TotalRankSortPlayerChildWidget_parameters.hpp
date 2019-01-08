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

// Function TotalRankSortPlayerChildWidget.TotalRankSortPlayerChildWidget_C.DealSort
struct UTotalRankSortPlayerChildWidget_C_DealSort_Params
{
	int                                                Sort;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TotalRankSortPlayerChildWidget.TotalRankSortPlayerChildWidget_C.SetInfo
struct UTotalRankSortPlayerChildWidget_C_SetInfo_Params
{
	int                                                PlayerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Sort;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                WinScore;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FightScore;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TotalRankSortPlayerChildWidget.TotalRankSortPlayerChildWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UTotalRankSortPlayerChildWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function TotalRankSortPlayerChildWidget.TotalRankSortPlayerChildWidget_C.SetButtonState
struct UTotalRankSortPlayerChildWidget_C_SetButtonState_Params
{
	TEnumAsByte<EButtonState>*                         State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TotalRankSortPlayerChildWidget.TotalRankSortPlayerChildWidget_C.ExecuteUbergraph_TotalRankSortPlayerChildWidget
struct UTotalRankSortPlayerChildWidget_C_ExecuteUbergraph_TotalRankSortPlayerChildWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TotalRankSortPlayerChildWidget.TotalRankSortPlayerChildWidget_C.GetRank__DelegateSignature
struct UTotalRankSortPlayerChildWidget_C_GetRank__DelegateSignature_Params
{
	int                                                PlayerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
