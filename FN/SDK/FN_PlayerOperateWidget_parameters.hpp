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

// Function PlayerOperateWidget.PlayerOperateWidget_C.BndEvt__AddFriend_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UPlayerOperateWidget_C_BndEvt__AddFriend_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayerOperateWidget.PlayerOperateWidget_C.BndEvt__Kick_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UPlayerOperateWidget_C_BndEvt__Kick_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayerOperateWidget.PlayerOperateWidget_C.BndEvt__SetToPeople_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UPlayerOperateWidget_C_BndEvt__SetToPeople_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayerOperateWidget.PlayerOperateWidget_C.SetPlayerInfo
struct UPlayerOperateWidget_C_SetPlayerInfo_Params
{
	struct FRoomUser                                   user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsMaster;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowMoveToView;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerOperateWidget.PlayerOperateWidget_C.BndEvt__MoveToView_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UPlayerOperateWidget_C_BndEvt__MoveToView_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayerOperateWidget.PlayerOperateWidget_C.ExecuteUbergraph_PlayerOperateWidget
struct UPlayerOperateWidget_C_ExecuteUbergraph_PlayerOperateWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerOperateWidget.PlayerOperateWidget_C.ToViewer__DelegateSignature
struct UPlayerOperateWidget_C_ToViewer__DelegateSignature_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerOperateWidget.PlayerOperateWidget_C.ToPeople__DelegateSignature
struct UPlayerOperateWidget_C_ToPeople__DelegateSignature_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerOperateWidget.PlayerOperateWidget_C.KiclPlayer__DelegateSignature
struct UPlayerOperateWidget_C_KiclPlayer__DelegateSignature_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerOperateWidget.PlayerOperateWidget_C.AddFriendDispatch__DelegateSignature
struct UPlayerOperateWidget_C_AddFriendDispatch__DelegateSignature_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
