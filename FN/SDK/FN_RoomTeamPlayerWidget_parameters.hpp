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

// Function RoomTeamPlayerWidget.RoomTeamPlayerWidget_C.SetMasterState
struct URoomTeamPlayerWidget_C_SetMasterState_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RoomTeamPlayerWidget.RoomTeamPlayerWidget_C.OnMouseButtonDown
struct URoomTeamPlayerWidget_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function RoomTeamPlayerWidget.RoomTeamPlayerWidget_C.UpdatePlayerInfo
struct URoomTeamPlayerWidget_C_UpdatePlayerInfo_Params
{
	struct FRoomUser*                                  Player;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int*                                               master_id;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              is_master;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RoomTeamPlayerWidget.RoomTeamPlayerWidget_C.Remove
struct URoomTeamPlayerWidget_C_Remove_Params
{
};

// Function RoomTeamPlayerWidget.RoomTeamPlayerWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct URoomTeamPlayerWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function RoomTeamPlayerWidget.RoomTeamPlayerWidget_C.SetSelectState
struct URoomTeamPlayerWidget_C_SetSelectState_Params
{
	bool*                                              State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RoomTeamPlayerWidget.RoomTeamPlayerWidget_C.ShowLines
struct URoomTeamPlayerWidget_C_ShowLines_Params
{
};

// Function RoomTeamPlayerWidget.RoomTeamPlayerWidget_C.ExecuteUbergraph_RoomTeamPlayerWidget
struct URoomTeamPlayerWidget_C_ExecuteUbergraph_RoomTeamPlayerWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RoomTeamPlayerWidget.RoomTeamPlayerWidget_C.RightClick__DelegateSignature
struct URoomTeamPlayerWidget_C_RightClick__DelegateSignature_Params
{
	struct FRoomUser                                   user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function RoomTeamPlayerWidget.RoomTeamPlayerWidget_C.OnClick__DelegateSignature
struct URoomTeamPlayerWidget_C_OnClick__DelegateSignature_Params
{
	class URoomTeamPlayerWidget_C*                     user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
