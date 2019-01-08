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

// Function RoomPeoplePlayerWidget.RoomPeoplePlayerWidget_C.OnMouseButtonDown
struct URoomPeoplePlayerWidget_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function RoomPeoplePlayerWidget.RoomPeoplePlayerWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct URoomPeoplePlayerWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function RoomPeoplePlayerWidget.RoomPeoplePlayerWidget_C.UpdatePlayerInfo
struct URoomPeoplePlayerWidget_C_UpdatePlayerInfo_Params
{
	struct FRoomUser*                                  Player;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int*                                               master_id;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              is_master;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RoomPeoplePlayerWidget.RoomPeoplePlayerWidget_C.Remove
struct URoomPeoplePlayerWidget_C_Remove_Params
{
};

// Function RoomPeoplePlayerWidget.RoomPeoplePlayerWidget_C.SetSelectState
struct URoomPeoplePlayerWidget_C_SetSelectState_Params
{
	bool*                                              State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RoomPeoplePlayerWidget.RoomPeoplePlayerWidget_C.ExecuteUbergraph_RoomPeoplePlayerWidget
struct URoomPeoplePlayerWidget_C_ExecuteUbergraph_RoomPeoplePlayerWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RoomPeoplePlayerWidget.RoomPeoplePlayerWidget_C.RightClick__DelegateSignature
struct URoomPeoplePlayerWidget_C_RightClick__DelegateSignature_Params
{
	struct FRoomUser                                   user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function RoomPeoplePlayerWidget.RoomPeoplePlayerWidget_C.OnClick__DelegateSignature
struct URoomPeoplePlayerWidget_C_OnClick__DelegateSignature_Params
{
	class URoomPeoplePlayerWidget_C*                   user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
