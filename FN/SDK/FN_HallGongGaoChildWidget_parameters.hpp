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

// Function HallGongGaoChildWidget.HallGongGaoChildWidget_C.SetInfo
struct UHallGongGaoChildWidget_C_SetInfo_Params
{
	struct FText                                       Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HallGongGaoChildWidget.HallGongGaoChildWidget_C.Tick
struct UHallGongGaoChildWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HallGongGaoChildWidget.HallGongGaoChildWidget_C.ExecuteUbergraph_HallGongGaoChildWidget
struct UHallGongGaoChildWidget_C_ExecuteUbergraph_HallGongGaoChildWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
