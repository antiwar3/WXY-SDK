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

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.WaitAnim
struct UBP_RoomInfoWidget_C_WaitAnim_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.GetTotalTeamPlayerNum
struct UBP_RoomInfoWidget_C_GetTotalTeamPlayerNum_Params
{
	int                                                TotalNum;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.GetWuxiaGameInstance
struct UBP_RoomInfoWidget_C_GetWuxiaGameInstance_Params
{
	class UWuXiaXGameInstance*                         AsWu_Xia_XGame_Instance;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.GetNetActor
struct UBP_RoomInfoWidget_C_GetNetActor_Params
{
	class AClientNetMessageHandle*                     NetActor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.CalculatePlayerNum
struct UBP_RoomInfoWidget_C_CalculatePlayerNum_Params
{
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.OperateUserFunc
struct UBP_RoomInfoWidget_C_OperateUserFunc_Params
{
	struct FRoomUser                                   user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.UserSelectFunc
struct UBP_RoomInfoWidget_C_UserSelectFunc_Params
{
	class URoomTeamPlayerUI*                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.CreateTeamPlayerFunc
struct UBP_RoomInfoWidget_C_CreateTeamPlayerFunc_Params
{
	struct FRoomUser                                   Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class URoomTeamPlayerUI*                           OutPlayer;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.GetTeamByIndex
struct UBP_RoomInfoWidget_C_GetTeamByIndex_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class URoomTeamWidget_C*                           Team;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.ClearAll
struct UBP_RoomInfoWidget_C_ClearAll_Params
{
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.CreateTeamWidget
struct UBP_RoomInfoWidget_C_CreateTeamWidget_Params
{
	int*                                               index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              is_team;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.CreatePlayer
struct UBP_RoomInfoWidget_C_CreatePlayer_Params
{
	struct FRoomUser*                                  Player;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.RemovePlayer
struct UBP_RoomInfoWidget_C_RemovePlayer_Params
{
	struct FRoomUser*                                  Player;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.WidgetGetRoomInfos
struct UBP_RoomInfoWidget_C_WidgetGetRoomInfos_Params
{
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.UserSelect
struct UBP_RoomInfoWidget_C_UserSelect_Params
{
	class URoomTeamPlayerWidget_C*                     user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URoomTeamWidget_C*                           Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.CreatePlayerComplete
struct UBP_RoomInfoWidget_C_CreatePlayerComplete_Params
{
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.OperatePlayer
struct UBP_RoomInfoWidget_C_OperatePlayer_Params
{
	struct FRoomUser                                   user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__RoomPeopleWidget_K2Node_ComponentBoundEvent_4_UserSelect__DelegateSignature
struct UBP_RoomInfoWidget_C_BndEvt__RoomPeopleWidget_K2Node_ComponentBoundEvent_4_UserSelect__DelegateSignature_Params
{
	class URoomPeoplePlayerWidget_C*                   user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__RoomPeopleWidget_K2Node_ComponentBoundEvent_5_OperatePlayer__DelegateSignature
struct UBP_RoomInfoWidget_C_BndEvt__RoomPeopleWidget_K2Node_ComponentBoundEvent_5_OperatePlayer__DelegateSignature_Params
{
	struct FRoomUser                                   user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__RoomViewerWidget_K2Node_ComponentBoundEvent_6_UserSelect__DelegateSignature
struct UBP_RoomInfoWidget_C_BndEvt__RoomViewerWidget_K2Node_ComponentBoundEvent_6_UserSelect__DelegateSignature_Params
{
	class URoomPeoplePlayerWidget_C*                   user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__RoomViewerWidget_K2Node_ComponentBoundEvent_7_OperatePlayer__DelegateSignature
struct UBP_RoomInfoWidget_C_BndEvt__RoomViewerWidget_K2Node_ComponentBoundEvent_7_OperatePlayer__DelegateSignature_Params
{
	struct FRoomUser                                   user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__PlayerOperate_K2Node_ComponentBoundEvent_8_AddFriendDispatch__DelegateSignature
struct UBP_RoomInfoWidget_C_BndEvt__PlayerOperate_K2Node_ComponentBoundEvent_8_AddFriendDispatch__DelegateSignature_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__PlayerOperate_K2Node_ComponentBoundEvent_9_KiclPlayer__DelegateSignature
struct UBP_RoomInfoWidget_C_BndEvt__PlayerOperate_K2Node_ComponentBoundEvent_9_KiclPlayer__DelegateSignature_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__PlayerOperate_K2Node_ComponentBoundEvent_10_ToPeople__DelegateSignature
struct UBP_RoomInfoWidget_C_BndEvt__PlayerOperate_K2Node_ComponentBoundEvent_10_ToPeople__DelegateSignature_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
struct UBP_RoomInfoWidget_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__People_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
struct UBP_RoomInfoWidget_C_BndEvt__People_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__Viewer_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
struct UBP_RoomInfoWidget_C_BndEvt__Viewer_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__DeleteRoom_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
struct UBP_RoomInfoWidget_C_BndEvt__DeleteRoom_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__StartGame_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
struct UBP_RoomInfoWidget_C_BndEvt__StartGame_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__LeaveRoom_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
struct UBP_RoomInfoWidget_C_BndEvt__LeaveRoom_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.ResetLanguage
struct UBP_RoomInfoWidget_C_ResetLanguage_Params
{
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.MasterStartGame
struct UBP_RoomInfoWidget_C_MasterStartGame_Params
{
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.IsReadyGame
struct UBP_RoomInfoWidget_C_IsReadyGame_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.Anim
struct UBP_RoomInfoWidget_C_Anim_Params
{
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.QuitTick
struct UBP_RoomInfoWidget_C_QuitTick_Params
{
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__PeopleBGButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_RoomInfoWidget_C_BndEvt__PeopleBGButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__ViewerBGButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UBP_RoomInfoWidget_C_BndEvt__ViewerBGButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.SetSelectPlayer
struct UBP_RoomInfoWidget_C_SetSelectPlayer_Params
{
	struct FRoomUser*                                  Player;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.PlayerBeenRemove
struct UBP_RoomInfoWidget_C_PlayerBeenRemove_Params
{
	struct FRoomUser*                                  Player;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.PlayerBeenCreate
struct UBP_RoomInfoWidget_C_PlayerBeenCreate_Params
{
	struct FRoomUser*                                  Player;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.ExecuteUbergraph_BP_RoomInfoWidget
struct UBP_RoomInfoWidget_C_ExecuteUbergraph_BP_RoomInfoWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.MasterStart__DelegateSignature
struct UBP_RoomInfoWidget_C_MasterStart__DelegateSignature_Params
{
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.HallRemind__DelegateSignature
struct UBP_RoomInfoWidget_C_HallRemind__DelegateSignature_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.DeleteRoomDispatch__DelegateSignature
struct UBP_RoomInfoWidget_C_DeleteRoomDispatch__DelegateSignature_Params
{
	struct FUIRoomInfo                                 room;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
