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

// Function HallRemindWidget.HallRemindWidget_C.SetText
struct UHallRemindWidget_C_SetText_Params
{
	struct FText                                       RemindText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HallRemindWidget.HallRemindWidget_C.Tick
struct UHallRemindWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HallRemindWidget.HallRemindWidget_C.ExecuteUbergraph_HallRemindWidget
struct UHallRemindWidget_C_ExecuteUbergraph_HallRemindWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
