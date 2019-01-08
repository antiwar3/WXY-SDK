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

// Function RoomTeamWidget.RoomTeamWidget_C.GetValidPlayerNum
struct URoomTeamWidget_C_GetValidPlayerNum_Params
{
	int                                                Num;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RoomTeamWidget.RoomTeamWidget_C.Resort
struct URoomTeamWidget_C_Resort_Params
{
};

// Function RoomTeamWidget.RoomTeamWidget_C.RemovePlayer
struct URoomTeamWidget_C_RemovePlayer_Params
{
	struct FRoomUser                                   Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                MasterId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsMaster;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RoomTeamWidget.RoomTeamWidget_C.CreatePlayer
struct URoomTeamWidget_C_CreatePlayer_Params
{
	struct FRoomUser                                   user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                MasterId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsMaster;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class URoomTeamPlayerUI*                           OutPlayer;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RoomTeamWidget.RoomTeamWidget_C.GetFreeTeamPlayer
struct URoomTeamWidget_C_GetFreeTeamPlayer_Params
{
	class URoomTeamPlayerUI*                           Player;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RoomTeamWidget.RoomTeamWidget_C.Init
struct URoomTeamWidget_C_Init_Params
{
	int*                                               index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              is_team;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RoomTeamWidget.RoomTeamWidget_C.RoomUserOnclick
struct URoomTeamWidget_C_RoomUserOnclick_Params
{
	class URoomTeamPlayerWidget_C*                     user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RoomTeamWidget.RoomTeamWidget_C.BndEvt__RoomTeamPlayerOnly_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
struct URoomTeamWidget_C_BndEvt__RoomTeamPlayerOnly_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params
{
	class URoomTeamPlayerWidget_C*                     user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RoomTeamWidget.RoomTeamWidget_C.BndEvt__TeamButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct URoomTeamWidget_C_BndEvt__TeamButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function RoomTeamWidget.RoomTeamWidget_C.RightClickPlayer
struct URoomTeamWidget_C_RightClickPlayer_Params
{
	struct FRoomUser                                   user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function RoomTeamWidget.RoomTeamWidget_C.BndEvt__RoomTeamPlayerOnly_K2Node_ComponentBoundEvent_2_RightClick__DelegateSignature
struct URoomTeamWidget_C_BndEvt__RoomTeamPlayerOnly_K2Node_ComponentBoundEvent_2_RightClick__DelegateSignature_Params
{
	struct FRoomUser                                   user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function RoomTeamWidget.RoomTeamWidget_C.ExecuteUbergraph_RoomTeamWidget
struct URoomTeamWidget_C_ExecuteUbergraph_RoomTeamWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RoomTeamWidget.RoomTeamWidget_C.OperatePlayer__DelegateSignature
struct URoomTeamWidget_C_OperatePlayer__DelegateSignature_Params
{
	struct FRoomUser                                   user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function RoomTeamWidget.RoomTeamWidget_C.SelectUser__DelegateSignature
struct URoomTeamWidget_C_SelectUser__DelegateSignature_Params
{
	class URoomTeamPlayerWidget_C*                     user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URoomTeamWidget_C*                           Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
