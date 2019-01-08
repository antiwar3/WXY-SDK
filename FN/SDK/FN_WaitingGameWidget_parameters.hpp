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

// Function WaitingGameWidget.WaitingGameWidget_C.Tick
struct UWaitingGameWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WaitingGameWidget.WaitingGameWidget_C.SetConnectStr
struct UWaitingGameWidget_C_SetConnectStr_Params
{
	struct FString                                     connect;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WaitingGameWidget.WaitingGameWidget_C.StartTimeCount
struct UWaitingGameWidget_C_StartTimeCount_Params
{
};

// Function WaitingGameWidget.WaitingGameWidget_C.ExecuteUbergraph_WaitingGameWidget
struct UWaitingGameWidget_C_ExecuteUbergraph_WaitingGameWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
