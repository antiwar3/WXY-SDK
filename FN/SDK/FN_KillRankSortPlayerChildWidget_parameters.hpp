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

// Function KillRankSortPlayerChildWidget.KillRankSortPlayerChildWidget_C.DealSort
struct UKillRankSortPlayerChildWidget_C_DealSort_Params
{
	int                                                Sort;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillRankSortPlayerChildWidget.KillRankSortPlayerChildWidget_C.SetInfo
struct UKillRankSortPlayerChildWidget_C_SetInfo_Params
{
	int                                                PlayerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Sort;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                KillNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxKill;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              KillRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillRankSortPlayerChildWidget.KillRankSortPlayerChildWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UKillRankSortPlayerChildWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function KillRankSortPlayerChildWidget.KillRankSortPlayerChildWidget_C.SetButtonState
struct UKillRankSortPlayerChildWidget_C_SetButtonState_Params
{
	TEnumAsByte<EButtonState>*                         State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillRankSortPlayerChildWidget.KillRankSortPlayerChildWidget_C.ExecuteUbergraph_KillRankSortPlayerChildWidget
struct UKillRankSortPlayerChildWidget_C_ExecuteUbergraph_KillRankSortPlayerChildWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillRankSortPlayerChildWidget.KillRankSortPlayerChildWidget_C.GetRank__DelegateSignature
struct UKillRankSortPlayerChildWidget_C_GetRank__DelegateSignature_Params
{
	int                                                PlayerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
