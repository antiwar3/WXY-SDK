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

// Function RoomChildWidget.RoomChildWidget_C.SetSelectState
struct URoomChildWidget_C_SetSelectState_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RoomChildWidget.RoomChildWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct URoomChildWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function RoomChildWidget.RoomChildWidget_C.ResetServerName
struct URoomChildWidget_C_ResetServerName_Params
{
};

// Function RoomChildWidget.RoomChildWidget_C.Init
struct URoomChildWidget_C_Init_Params
{
	struct FUIRoomInfo*                                Info;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function RoomChildWidget.RoomChildWidget_C.ExecuteUbergraph_RoomChildWidget
struct URoomChildWidget_C_ExecuteUbergraph_RoomChildWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RoomChildWidget.RoomChildWidget_C.OnClick__DelegateSignature
struct URoomChildWidget_C_OnClick__DelegateSignature_Params
{
	class URoomChildWidget_C*                          Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
