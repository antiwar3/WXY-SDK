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

// Function CustomGameWidget.CustomGameWidget_C.CheckRoomNameValid
struct UCustomGameWidget_C_CheckRoomNameValid_Params
{
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CustomGameWidget.CustomGameWidget_C.ResetFocus
struct UCustomGameWidget_C_ResetFocus_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.GetRoomListByRoomLimit
struct UCustomGameWidget_C_GetRoomListByRoomLimit_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.GetNetActor
struct UCustomGameWidget_C_GetNetActor_Params
{
	bool                                               IsSorting;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AClientNetMessageHandle*                     NetActor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CustomGameWidget.CustomGameWidget_C.ResetServerOptions
struct UCustomGameWidget_C_ResetServerOptions_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.ResetPresetOptions
struct UCustomGameWidget_C_ResetPresetOptions_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.CreateServerList
struct UCustomGameWidget_C_CreateServerList_Params
{
	TArray<int>                                        Servers;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function CustomGameWidget.CustomGameWidget_C.SetCreateMode
struct UCustomGameWidget_C_SetCreateMode_Params
{
	int                                                Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomGameWidget.CustomGameWidget_C.SelectRoom
struct UCustomGameWidget_C_SelectRoom_Params
{
	class URoomChildWidget_C*                          Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CustomGameWidget.CustomGameWidget_C.RequestPageInfo
struct UCustomGameWidget_C_RequestPageInfo_Params
{
	int                                                page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomGameWidget.CustomGameWidget_C.CheckResortList
struct UCustomGameWidget_C_CheckResortList_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.PlayerCountSortChange
struct UCustomGameWidget_C_PlayerCountSortChange_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.StateSortChange
struct UCustomGameWidget_C_StateSortChange_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.SetServerLimitText
struct UCustomGameWidget_C_SetServerLimitText_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomGameWidget.CustomGameWidget_C.SetSelectLimitState
struct UCustomGameWidget_C_SetSelectLimitState_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomGameWidget.CustomGameWidget_C.SetSwitcherIndex
struct UCustomGameWidget_C_SetSwitcherIndex_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__ViewRoom_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__ViewRoom_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__CreateRoom_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__CreateRoom_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__Refresh_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__Refresh_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__ViewRoom_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__ViewRoom_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__ViewRoom_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__ViewRoom_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__ViewRoom_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__ViewRoom_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__ViewRoom_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__ViewRoom_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__CreateRoom_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__CreateRoom_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__CreateRoom_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__CreateRoom_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__CreateRoom_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__CreateRoom_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__CreateRoom_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__CreateRoom_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__Refresh_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__Refresh_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__Refresh_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__Refresh_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__Refresh_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__Refresh_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__Select_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__Select_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__SelectLimit_K2Node_ComponentBoundEvent_18_LimitChange__DelegateSignature
struct UCustomGameWidget_C_BndEvt__SelectLimit_K2Node_ComponentBoundEvent_18_LimitChange__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.ResetLanguage
struct UCustomGameWidget_C_ResetLanguage_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.Tick
struct UCustomGameWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__SearchName_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__SearchName_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__StateSort_K2Node_ComponentBoundEvent_20_OnButtonPressedEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__StateSort_K2Node_ComponentBoundEvent_20_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__StateSort_K2Node_ComponentBoundEvent_21_OnButtonReleasedEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__StateSort_K2Node_ComponentBoundEvent_21_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__StateSort_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__StateSort_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__StateSort_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__StateSort_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__PlayerCount_K2Node_ComponentBoundEvent_24_OnButtonPressedEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__PlayerCount_K2Node_ComponentBoundEvent_24_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__PlayerCount_K2Node_ComponentBoundEvent_25_OnButtonReleasedEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__PlayerCount_K2Node_ComponentBoundEvent_25_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__PlayerCount_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__PlayerCount_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__PlayerCount_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__PlayerCount_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__StateSort_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__StateSort_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__PlayerCount_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__PlayerCount_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.CreateRoomInfos
struct UCustomGameWidget_C_CreateRoomInfos_Params
{
	TArray<struct FUIRoomInfo>*                        roominfos;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__LastPage_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__LastPage_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__NextPage_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__NextPage_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.SetPage
struct UCustomGameWidget_C_SetPage_Params
{
	int                                                page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomGameWidget.CustomGameWidget_C.ResetPageOperateState
struct UCustomGameWidget_C_ResetPageOperateState_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__TaoSha_K2Node_ComponentBoundEvent_31_OnClick__DelegateSignature
struct UCustomGameWidget_C_BndEvt__TaoSha_K2Node_ComponentBoundEvent_31_OnClick__DelegateSignature_Params
{
	int                                                Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__LuanDou_K2Node_ComponentBoundEvent_32_OnClick__DelegateSignature
struct UCustomGameWidget_C_BndEvt__LuanDou_K2Node_ComponentBoundEvent_32_OnClick__DelegateSignature_Params
{
	int                                                Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomGameWidget.CustomGameWidget_C.Construct
struct UCustomGameWidget_C_Construct_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__PresetSelect_K2Node_ComponentBoundEvent_33_OptionChange__DelegateSignature
struct UCustomGameWidget_C_BndEvt__PresetSelect_K2Node_ComponentBoundEvent_33_OptionChange__DelegateSignature_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__ServerSelect_K2Node_ComponentBoundEvent_34_OptionChange__DelegateSignature
struct UCustomGameWidget_C_BndEvt__ServerSelect_K2Node_ComponentBoundEvent_34_OptionChange__DelegateSignature_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__WatchNum_K2Node_ComponentBoundEvent_35_CurrentValueChange__DelegateSignature
struct UCustomGameWidget_C_BndEvt__WatchNum_K2Node_ComponentBoundEvent_35_CurrentValueChange__DelegateSignature_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__TextBoxPwd_K2Node_ComponentBoundEvent_36_OnEditableTextBoxChangedEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__TextBoxPwd_K2Node_ComponentBoundEvent_36_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__Room_K2Node_ComponentBoundEvent_37_Create__DelegateSignature
struct UCustomGameWidget_C_BndEvt__Room_K2Node_ComponentBoundEvent_37_Create__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__Room_K2Node_ComponentBoundEvent_38_JoinRoom__DelegateSignature
struct UCustomGameWidget_C_BndEvt__Room_K2Node_ComponentBoundEvent_38_JoinRoom__DelegateSignature_Params
{
	struct FUIRoomInfo                                 room;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__Create_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__Create_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__Refresh_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__Refresh_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__TextBoxTile_K2Node_ComponentBoundEvent_41_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__TextBoxTile_K2Node_ComponentBoundEvent_41_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__TextBoxPwd_K2Node_ComponentBoundEvent_42_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__TextBoxPwd_K2Node_ComponentBoundEvent_42_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomGameWidget.CustomGameWidget_C.BndEvt__PreviewPanelBGButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature
struct UCustomGameWidget_C_BndEvt__PreviewPanelBGButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CustomGameWidget.CustomGameWidget_C.SetMaxPage
struct UCustomGameWidget_C_SetMaxPage_Params
{
	int                                                page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomGameWidget.CustomGameWidget_C.SelectByPlayer
struct UCustomGameWidget_C_SelectByPlayer_Params
{
	class URoomChildWidget_C*                          room;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CustomGameWidget.CustomGameWidget_C.ExecuteUbergraph_CustomGameWidget
struct UCustomGameWidget_C_ExecuteUbergraph_CustomGameWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomGameWidget.CustomGameWidget_C.HallRemind__DelegateSignature
struct UCustomGameWidget_C_HallRemind__DelegateSignature_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CustomGameWidget.CustomGameWidget_C.JoinRoom__DelegateSignature
struct UCustomGameWidget_C_JoinRoom__DelegateSignature_Params
{
	struct FUIRoomInfo                                 room;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
