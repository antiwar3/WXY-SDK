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

// Function RoomPeopleScrollWidget.RoomPeopleScrollWidget_C.ClearAll
struct URoomPeopleScrollWidget_C_ClearAll_Params
{
};

// Function RoomPeopleScrollWidget.RoomPeopleScrollWidget_C.GetPlayerNum
struct URoomPeopleScrollWidget_C_GetPlayerNum_Params
{
	int                                                Num;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RoomPeopleScrollWidget.RoomPeopleScrollWidget_C.RemovePlayer
struct URoomPeopleScrollWidget_C_RemovePlayer_Params
{
	struct FRoomUser                                   user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function RoomPeopleScrollWidget.RoomPeopleScrollWidget_C.CreatePlayer
struct URoomPeopleScrollWidget_C_CreatePlayer_Params
{
	struct FRoomUser                                   user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                MasterId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsMaster;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class URoomPeoplePlayerWidget_C*                   OutPlayer;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RoomPeopleScrollWidget.RoomPeopleScrollWidget_C.RightClickPlayer
struct URoomPeopleScrollWidget_C_RightClickPlayer_Params
{
	struct FRoomUser                                   Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function RoomPeopleScrollWidget.RoomPeopleScrollWidget_C.RoomUserOnclick
struct URoomPeopleScrollWidget_C_RoomUserOnclick_Params
{
	class URoomPeoplePlayerWidget_C*                   user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RoomPeopleScrollWidget.RoomPeopleScrollWidget_C.ExecuteUbergraph_RoomPeopleScrollWidget
struct URoomPeopleScrollWidget_C_ExecuteUbergraph_RoomPeopleScrollWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RoomPeopleScrollWidget.RoomPeopleScrollWidget_C.OperatePlayer__DelegateSignature
struct URoomPeopleScrollWidget_C_OperatePlayer__DelegateSignature_Params
{
	struct FRoomUser                                   user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function RoomPeopleScrollWidget.RoomPeopleScrollWidget_C.UserSelect__DelegateSignature
struct URoomPeopleScrollWidget_C_UserSelect__DelegateSignature_Params
{
	class URoomPeoplePlayerWidget_C*                   user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
