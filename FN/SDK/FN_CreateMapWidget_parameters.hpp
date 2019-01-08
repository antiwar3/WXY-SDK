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

// Function CreateMapWidget.CreateMapWidget_C.SetPlayMode
struct UCreateMapWidget_C_SetPlayMode_Params
{
	int                                                Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreateMapWidget.CreateMapWidget_C.SetMapInfo
struct UCreateMapWidget_C_SetMapInfo_Params
{
	int                                                PlayMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreateMapWidget.CreateMapWidget_C.ResetMapName
struct UCreateMapWidget_C_ResetMapName_Params
{
};

// Function CreateMapWidget.CreateMapWidget_C.Reset
struct UCreateMapWidget_C_Reset_Params
{
};

// Function CreateMapWidget.CreateMapWidget_C.ExecuteUbergraph_CreateMapWidget
struct UCreateMapWidget_C_ExecuteUbergraph_CreateMapWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
