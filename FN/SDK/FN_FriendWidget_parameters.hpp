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

// Function FriendWidget.FriendWidget_C.SetCurrentOnlineStateShow
struct UFriendWidget_C_SetCurrentOnlineStateShow_Params
{
};

// Function FriendWidget.FriendWidget_C.CheckDeleteFriend
struct UFriendWidget_C_CheckDeleteFriend_Params
{
	int                                                PlayerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.CheckPlayer
struct UFriendWidget_C_CheckPlayer_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UTexture2D*                                  Head;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.CheckRemoveTeamPlayer
struct UFriendWidget_C_CheckRemoveTeamPlayer_Params
{
	TArray<int>                                        NewTeamers;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FriendWidget.FriendWidget_C.GetIndexByPlayerId
struct UFriendWidget_C_GetIndexByPlayerId_Params
{
	class UVerticalBox*                                Area;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.CheckHoverButton
struct UFriendWidget_C_CheckHoverButton_Params
{
	TEnumAsByte<EFriendButtonHoverState>               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.CheckAreaHover
struct UFriendWidget_C_CheckAreaHover_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                Area;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.HoverPlayerUserFunc
struct UFriendWidget_C_HoverPlayerUserFunc_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.DealAreaAppend
struct UFriendWidget_C_DealAreaAppend_Params
{
	TEnumAsByte<EFriendButtonHoverState>               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Append;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.StartIntoButtomButton
struct UFriendWidget_C_StartIntoButtomButton_Params
{
};

// Function FriendWidget.FriendWidget_C.SetHoverButtonToNone
struct UFriendWidget_C_SetHoverButtonToNone_Params
{
};

// Function FriendWidget.FriendWidget_C.SetFriendListIcon
struct UFriendWidget_C_SetFriendListIcon_Params
{
	TEnumAsByte<EButtonState>                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.SetAddPlayer3Icon
struct UFriendWidget_C_SetAddPlayer3Icon_Params
{
	TEnumAsByte<EButtonState>                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.SetAddPlayer2Icon
struct UFriendWidget_C_SetAddPlayer2Icon_Params
{
	TEnumAsByte<EButtonState>                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.SetAddPlayer1Icon
struct UFriendWidget_C_SetAddPlayer1Icon_Params
{
	TEnumAsByte<EButtonState>                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.SetOutlineAreaState
struct UFriendWidget_C_SetOutlineAreaState_Params
{
	TEnumAsByte<EButtonState>                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.SetOnlineAreaState
struct UFriendWidget_C_SetOnlineAreaState_Params
{
	TEnumAsByte<EButtonState>                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.SetTeamAreaState
struct UFriendWidget_C_SetTeamAreaState_Params
{
	TEnumAsByte<EButtonState>                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.SetExpandStateChange
struct UFriendWidget_C_SetExpandStateChange_Params
{
	class UExpandableArea*                             Expand;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.IsPlayerInTeam
struct UFriendWidget_C_IsPlayerInTeam_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsInTeam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.CheckFriendInfo
struct UFriendWidget_C_CheckFriendInfo_Params
{
	class UTexture2D*                                  TEX;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                YSState;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.IsHasFriend
struct UFriendWidget_C_IsHasFriend_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.CheckTeamPlayer
struct UFriendWidget_C_CheckTeamPlayer_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Head;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.On_InviteTypeSelect_GenerateWidget_1
struct UFriendWidget_C_On_InviteTypeSelect_GenerateWidget_1_Params
{
	struct FString                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.SetFriendPlayer
struct UFriendWidget_C_SetFriendPlayer_Params
{
	class UTexture2D*                                  TEX;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                YSState;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.SetTeamPlayer
struct UFriendWidget_C_SetTeamPlayer_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Head;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.RemoveFromTeam
struct UFriendWidget_C_RemoveFromTeam_Params
{
	TArray<int>                                        NewTeamer;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FriendWidget.FriendWidget_C.ChangePlayerState
struct UFriendWidget_C_ChangePlayerState_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.SetCurrentChooseFriend
struct UFriendWidget_C_SetCurrentChooseFriend_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function FriendWidget.FriendWidget_C.ResortNum
struct UFriendWidget_C_ResortNum_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__CloseFriendList_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__CloseFriendList_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__FriendListButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__FriendListButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__Search_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__Search_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__AddTeamPlayer1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__AddTeamPlayer2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer3_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__AddTeamPlayer3_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.Construct
struct UFriendWidget_C_Construct_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__Refresh_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__Refresh_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__LeaveTeam_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__LeaveTeam_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.SetLeaveTeamState
struct UFriendWidget_C_SetLeaveTeamState_Params
{
	bool                                               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.RemindPlayerIsInTeam
struct UFriendWidget_C_RemindPlayerIsInTeam_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function FriendWidget.FriendWidget_C.BndEvt__TeamHeaderButton_K2Node_ComponentBoundEvent_383_OnButtonClickedEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__TeamHeaderButton_K2Node_ComponentBoundEvent_383_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__OnlineHeaderButton_K2Node_ComponentBoundEvent_832_OnButtonClickedEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__OnlineHeaderButton_K2Node_ComponentBoundEvent_832_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__OutlineHeaderButton_K2Node_ComponentBoundEvent_871_OnButtonClickedEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__OutlineHeaderButton_K2Node_ComponentBoundEvent_871_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.HoverPlayerUser
struct UFriendWidget_C_HoverPlayerUser_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.CloseButtonSure
struct UFriendWidget_C_CloseButtonSure_Params
{
};

// Function FriendWidget.FriendWidget_C.FriendListSure
struct UFriendWidget_C_FriendListSure_Params
{
};

// Function FriendWidget.FriendWidget_C.SearchSure
struct UFriendWidget_C_SearchSure_Params
{
};

// Function FriendWidget.FriendWidget_C.AddTeamerSure
struct UFriendWidget_C_AddTeamerSure_Params
{
};

// Function FriendWidget.FriendWidget_C.RefreshSure
struct UFriendWidget_C_RefreshSure_Params
{
};

// Function FriendWidget.FriendWidget_C.LeaveTeamSure
struct UFriendWidget_C_LeaveTeamSure_Params
{
};

// Function FriendWidget.FriendWidget_C.StartInto
struct UFriendWidget_C_StartInto_Params
{
	bool*                                              Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.Verticle
struct UFriendWidget_C_Verticle_Params
{
	bool*                                              State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.Horizontal
struct UFriendWidget_C_Horizontal_Params
{
	bool*                                              State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsRight;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.ResetHover
struct UFriendWidget_C_ResetHover_Params
{
};

// Function FriendWidget.FriendWidget_C.Press
struct UFriendWidget_C_Press_Params
{
};

// Function FriendWidget.FriendWidget_C.Release
struct UFriendWidget_C_Release_Params
{
};

// Function FriendWidget.FriendWidget_C.DeleteFriend
struct UFriendWidget_C_DeleteFriend_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function FriendWidget.FriendWidget_C.ResetOnlineTypeLanguage
struct UFriendWidget_C_ResetOnlineTypeLanguage_Params
{
};

// Function FriendWidget.FriendWidget_C.SetPlayerOnlineState
struct UFriendWidget_C_SetPlayerOnlineState_Params
{
	int                                                OnlineState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.BndEvt__InviteTypeSelect_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__InviteTypeSelect_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.ClearFriends
struct UFriendWidget_C_ClearFriends_Params
{
};

// Function FriendWidget.FriendWidget_C.CheckBackOnlineState
struct UFriendWidget_C_CheckBackOnlineState_Params
{
};

// Function FriendWidget.FriendWidget_C.ChangePlayerYSState
struct UFriendWidget_C_ChangePlayerYSState_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                YSState;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer1_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__AddTeamPlayer1_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer1_K2Node_ComponentBoundEvent_15_OnButtonReleasedEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__AddTeamPlayer1_K2Node_ComponentBoundEvent_15_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer1_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__AddTeamPlayer1_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer1_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__AddTeamPlayer1_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer2_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__AddTeamPlayer2_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer2_K2Node_ComponentBoundEvent_19_OnButtonReleasedEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__AddTeamPlayer2_K2Node_ComponentBoundEvent_19_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer2_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__AddTeamPlayer2_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer2_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__AddTeamPlayer2_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer3_K2Node_ComponentBoundEvent_22_OnButtonPressedEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__AddTeamPlayer3_K2Node_ComponentBoundEvent_22_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer3_K2Node_ComponentBoundEvent_23_OnButtonReleasedEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__AddTeamPlayer3_K2Node_ComponentBoundEvent_23_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer3_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__AddTeamPlayer3_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer3_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__AddTeamPlayer3_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.AddTeamer
struct UFriendWidget_C_AddTeamer_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function FriendWidget.FriendWidget_C.BndEvt__TeamHeaderButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__TeamHeaderButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__TeamHeaderButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__TeamHeaderButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__TeamHeaderButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__TeamHeaderButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__TeamHeaderButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__TeamHeaderButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__OnlineHeaderButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__OnlineHeaderButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__OnlineHeaderButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__OnlineHeaderButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__OnlineHeaderButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__OnlineHeaderButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__OnlineHeaderButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__OnlineHeaderButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__OutlineHeaderButton_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__OutlineHeaderButton_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__OutlineHeaderButton_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__OutlineHeaderButton_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__OutlineHeaderButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__OutlineHeaderButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__OutlineHeaderButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__OutlineHeaderButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__FriendListButton_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__FriendListButton_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__FriendListButton_K2Node_ComponentBoundEvent_26_OnButtonReleasedEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__FriendListButton_K2Node_ComponentBoundEvent_26_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__FriendListButton_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__FriendListButton_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__FriendListButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__FriendListButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__LeaveTeam_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__LeaveTeam_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__LeaveTeam_K2Node_ComponentBoundEvent_30_OnButtonReleasedEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__LeaveTeam_K2Node_ComponentBoundEvent_30_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__LeaveTeam_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__LeaveTeam_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.BndEvt__LeaveTeam_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature
struct UFriendWidget_C_BndEvt__LeaveTeam_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.ExecuteUbergraph_FriendWidget
struct UFriendWidget_C_ExecuteUbergraph_FriendWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendWidget.FriendWidget_C.DeleteFriendDispatcher__DelegateSignature
struct UFriendWidget_C_DeleteFriendDispatcher__DelegateSignature_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function FriendWidget.FriendWidget_C.SearchFriend__DelegateSignature
struct UFriendWidget_C_SearchFriend__DelegateSignature_Params
{
};

// Function FriendWidget.FriendWidget_C.RemindPlayerIsInTeamDispatcher__DelegateSignature
struct UFriendWidget_C_RemindPlayerIsInTeamDispatcher__DelegateSignature_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function FriendWidget.FriendWidget_C.ResetFocus__DelegateSignature
struct UFriendWidget_C_ResetFocus__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
