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

// Function RoomTimeCalculate.RoomTimeCalculate_C.StartCalculateTime
struct URoomTimeCalculate_C_StartCalculateTime_Params
{
	bool                                               Master;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RoomTimeCalculate.RoomTimeCalculate_C.Tick
struct URoomTimeCalculate_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RoomTimeCalculate.RoomTimeCalculate_C.End
struct URoomTimeCalculate_C_End_Params
{
};

// Function RoomTimeCalculate.RoomTimeCalculate_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct URoomTimeCalculate_C_BndEvt__Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function RoomTimeCalculate.RoomTimeCalculate_C.CancelCalculate
struct URoomTimeCalculate_C_CancelCalculate_Params
{
};

// Function RoomTimeCalculate.RoomTimeCalculate_C.ExecuteUbergraph_RoomTimeCalculate
struct URoomTimeCalculate_C_ExecuteUbergraph_RoomTimeCalculate_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RoomTimeCalculate.RoomTimeCalculate_C.MasterQuitTick__DelegateSignature
struct URoomTimeCalculate_C_MasterQuitTick__DelegateSignature_Params
{
};

// Function RoomTimeCalculate.RoomTimeCalculate_C.TimeEnd__DelegateSignature
struct URoomTimeCalculate_C_TimeEnd__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
