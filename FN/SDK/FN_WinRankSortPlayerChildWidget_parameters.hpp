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

// Function WinRankSortPlayerChildWidget.WinRankSortPlayerChildWidget_C.DealSort
struct UWinRankSortPlayerChildWidget_C_DealSort_Params
{
	int                                                Sort;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WinRankSortPlayerChildWidget.WinRankSortPlayerChildWidget_C.SetInfo
struct UWinRankSortPlayerChildWidget_C_SetInfo_Params
{
	int                                                PlayerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Sort;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                WinTimes;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Ten;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              WinRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WinRankSortPlayerChildWidget.WinRankSortPlayerChildWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UWinRankSortPlayerChildWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WinRankSortPlayerChildWidget.WinRankSortPlayerChildWidget_C.SetButtonState
struct UWinRankSortPlayerChildWidget_C_SetButtonState_Params
{
	TEnumAsByte<EButtonState>*                         State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WinRankSortPlayerChildWidget.WinRankSortPlayerChildWidget_C.ExecuteUbergraph_WinRankSortPlayerChildWidget
struct UWinRankSortPlayerChildWidget_C_ExecuteUbergraph_WinRankSortPlayerChildWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WinRankSortPlayerChildWidget.WinRankSortPlayerChildWidget_C.GetRank__DelegateSignature
struct UWinRankSortPlayerChildWidget_C_GetRank__DelegateSignature_Params
{
	int                                                PlayerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
