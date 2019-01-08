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

// Function RoomWidget.RoomWidget_C.CheckCanJoin
struct URoomWidget_C_CheckCanJoin_Params
{
};

// Function RoomWidget.RoomWidget_C.GetTime
struct URoomWidget_C_GetTime_Params
{
};

// Function RoomWidget.RoomWidget_C.Tick
struct URoomWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RoomWidget.RoomWidget_C.ResetLanguage
struct URoomWidget_C_ResetLanguage_Params
{
};

// Function RoomWidget.RoomWidget_C.SetInfo
struct URoomWidget_C_SetInfo_Params
{
	struct FUIRoomInfo*                                Info;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function RoomWidget.RoomWidget_C.BndEvt__Join_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct URoomWidget_C_BndEvt__Join_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function RoomWidget.RoomWidget_C.BndEvt__CreateRoom_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct URoomWidget_C_BndEvt__CreateRoom_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function RoomWidget.RoomWidget_C.ExecuteUbergraph_RoomWidget
struct URoomWidget_C_ExecuteUbergraph_RoomWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RoomWidget.RoomWidget_C.JoinRoom__DelegateSignature
struct URoomWidget_C_JoinRoom__DelegateSignature_Params
{
	struct FUIRoomInfo                                 room;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function RoomWidget.RoomWidget_C.Create__DelegateSignature
struct URoomWidget_C_Create__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
