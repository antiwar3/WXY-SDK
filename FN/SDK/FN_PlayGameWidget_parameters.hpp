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

// Function PlayGameWidget.PlayGameWidget_C.TrySetGameMode
struct UPlayGameWidget_C_TrySetGameMode_Params
{
	int                                                Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayGameWidget.PlayGameWidget_C.ResetSortMode
struct UPlayGameWidget_C_ResetSortMode_Params
{
};

// Function PlayGameWidget.PlayGameWidget_C.CheckSelectSortMode
struct UPlayGameWidget_C_CheckSelectSortMode_Params
{
	int                                                Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayGameWidget.PlayGameWidget_C.SetPlayMode
struct UPlayGameWidget_C_SetPlayMode_Params
{
	int                                                PlayMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayGameWidget.PlayGameWidget_C.BndEvt__Hide_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UPlayGameWidget_C_BndEvt__Hide_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayGameWidget.PlayGameWidget_C.BndEvt__TaoSha_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
struct UPlayGameWidget_C_BndEvt__TaoSha_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params
{
};

// Function PlayGameWidget.PlayGameWidget_C.BndEvt__TaoSha_K2Node_ComponentBoundEvent_2_SendRemind__DelegateSignature
struct UPlayGameWidget_C_BndEvt__TaoSha_K2Node_ComponentBoundEvent_2_SendRemind__DelegateSignature_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayGameWidget.PlayGameWidget_C.BndEvt__LuanDou_K2Node_ComponentBoundEvent_3_SendRemind__DelegateSignature
struct UPlayGameWidget_C_BndEvt__LuanDou_K2Node_ComponentBoundEvent_3_SendRemind__DelegateSignature_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayGameWidget.PlayGameWidget_C.BndEvt__LuanDou_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature
struct UPlayGameWidget_C_BndEvt__LuanDou_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature_Params
{
};

// Function PlayGameWidget.PlayGameWidget_C.SetButtonState
struct UPlayGameWidget_C_SetButtonState_Params
{
	TEnumAsByte<ESortState>                            SortState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayGameWidget.PlayGameWidget_C.Construct
struct UPlayGameWidget_C_Construct_Params
{
};

// Function PlayGameWidget.PlayGameWidget_C.BndEvt__Play_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
struct UPlayGameWidget_C_BndEvt__Play_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function PlayGameWidget.PlayGameWidget_C.BndEvt__Play_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature
struct UPlayGameWidget_C_BndEvt__Play_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function PlayGameWidget.PlayGameWidget_C.BndEvt__Play_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
struct UPlayGameWidget_C_BndEvt__Play_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayGameWidget.PlayGameWidget_C.BndEvt__Play_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
struct UPlayGameWidget_C_BndEvt__Play_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayGameWidget.PlayGameWidget_C.BndEvt__Play_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
struct UPlayGameWidget_C_BndEvt__Play_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayGameWidget.PlayGameWidget_C.AppendPlayer
struct UPlayGameWidget_C_AppendPlayer_Params
{
};

// Function PlayGameWidget.PlayGameWidget_C.SetMasterMode
struct UPlayGameWidget_C_SetMasterMode_Params
{
	bool                                               IsMaster;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayGameWidget.PlayGameWidget_C.ResetServerName
struct UPlayGameWidget_C_ResetServerName_Params
{
};

// Function PlayGameWidget.PlayGameWidget_C.SetPlayModeState
struct UPlayGameWidget_C_SetPlayModeState_Params
{
	int                                                PlayMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayGameWidget.PlayGameWidget_C.SetServerId
struct UPlayGameWidget_C_SetServerId_Params
{
	int                                                ServerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayGameWidget.PlayGameWidget_C.SetPlayModeEndTime
struct UPlayGameWidget_C_SetPlayModeEndTime_Params
{
	int                                                PlayMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                days;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Hours;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Minutes;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayGameWidget.PlayGameWidget_C.SetSortModeNoMaster
struct UPlayGameWidget_C_SetSortModeNoMaster_Params
{
	int                                                SortMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayGameWidget.PlayGameWidget_C.Reset
struct UPlayGameWidget_C_Reset_Params
{
};

// Function PlayGameWidget.PlayGameWidget_C.InitServers
struct UPlayGameWidget_C_InitServers_Params
{
	TArray<int>                                        Servers;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PlayGameWidget.PlayGameWidget_C.BndEvt__CreateRoom_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature
struct UPlayGameWidget_C_BndEvt__CreateRoom_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature_Params
{
};

// Function PlayGameWidget.PlayGameWidget_C.BndEvt__PreviewRoom_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature
struct UPlayGameWidget_C_BndEvt__PreviewRoom_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature_Params
{
};

// Function PlayGameWidget.PlayGameWidget_C.PlayAnim
struct UPlayGameWidget_C_PlayAnim_Params
{
	TEnumAsByte<EUMGSequencePlayMode>                  Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayGameWidget.PlayGameWidget_C.BndEvt__Anim_K2Node_ComponentBoundEvent_15_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UPlayGameWidget_C_BndEvt__Anim_K2Node_ComponentBoundEvent_15_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function PlayGameWidget.PlayGameWidget_C.BndEvt__Hide_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature
struct UPlayGameWidget_C_BndEvt__Hide_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function PlayGameWidget.PlayGameWidget_C.BndEvt__Hide_K2Node_ComponentBoundEvent_18_OnButtonReleasedEvent__DelegateSignature
struct UPlayGameWidget_C_BndEvt__Hide_K2Node_ComponentBoundEvent_18_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function PlayGameWidget.PlayGameWidget_C.BndEvt__AreaButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
struct UPlayGameWidget_C_BndEvt__AreaButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayGameWidget.PlayGameWidget_C.BndEvt__AreaButton_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature
struct UPlayGameWidget_C_BndEvt__AreaButton_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function PlayGameWidget.PlayGameWidget_C.BndEvt__AreaButton_K2Node_ComponentBoundEvent_19_OnButtonReleasedEvent__DelegateSignature
struct UPlayGameWidget_C_BndEvt__AreaButton_K2Node_ComponentBoundEvent_19_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function PlayGameWidget.PlayGameWidget_C.BndEvt__AreaButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
struct UPlayGameWidget_C_BndEvt__AreaButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayGameWidget.PlayGameWidget_C.BndEvt__AreaButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
struct UPlayGameWidget_C_BndEvt__AreaButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayGameWidget.PlayGameWidget_C.BndEvt__SortMoteButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
struct UPlayGameWidget_C_BndEvt__SortMoteButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayGameWidget.PlayGameWidget_C.BndEvt__SortMoteButton_K2Node_ComponentBoundEvent_23_OnButtonPressedEvent__DelegateSignature
struct UPlayGameWidget_C_BndEvt__SortMoteButton_K2Node_ComponentBoundEvent_23_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function PlayGameWidget.PlayGameWidget_C.BndEvt__SortMoteButton_K2Node_ComponentBoundEvent_24_OnButtonReleasedEvent__DelegateSignature
struct UPlayGameWidget_C_BndEvt__SortMoteButton_K2Node_ComponentBoundEvent_24_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function PlayGameWidget.PlayGameWidget_C.BndEvt__SortMoteButton_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature
struct UPlayGameWidget_C_BndEvt__SortMoteButton_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayGameWidget.PlayGameWidget_C.BndEvt__SortMoteButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
struct UPlayGameWidget_C_BndEvt__SortMoteButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayGameWidget.PlayGameWidget_C.ResetPlayMode
struct UPlayGameWidget_C_ResetPlayMode_Params
{
};

// Function PlayGameWidget.PlayGameWidget_C.ExecuteUbergraph_PlayGameWidget
struct UPlayGameWidget_C_ExecuteUbergraph_PlayGameWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayGameWidget.PlayGameWidget_C.EventPreviewRoom__DelegateSignature
struct UPlayGameWidget_C_EventPreviewRoom__DelegateSignature_Params
{
};

// Function PlayGameWidget.PlayGameWidget_C.EventCreateRoom__DelegateSignature
struct UPlayGameWidget_C_EventCreateRoom__DelegateSignature_Params
{
};

// Function PlayGameWidget.PlayGameWidget_C.PopServerMode__DelegateSignature
struct UPlayGameWidget_C_PopServerMode__DelegateSignature_Params
{
	int                                                ServerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayGameWidget.PlayGameWidget_C.PopSortMode__DelegateSignature
struct UPlayGameWidget_C_PopSortMode__DelegateSignature_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayGameWidget.PlayGameWidget_C.HallRemind__DelegateSignature
struct UPlayGameWidget_C_HallRemind__DelegateSignature_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayGameWidget.PlayGameWidget_C.Close__DelegateSignature
struct UPlayGameWidget_C_Close__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
