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

// Function FrameWidget.FrameWidget_C.Start
struct UFrameWidget_C_Start_Params
{
};

// Function FrameWidget.FrameWidget_C.SetTickFrame
struct UFrameWidget_C_SetTickFrame_Params
{
};

// Function FrameWidget.FrameWidget_C.Stop
struct UFrameWidget_C_Stop_Params
{
};

// Function FrameWidget.FrameWidget_C.Construct
struct UFrameWidget_C_Construct_Params
{
};

// Function FrameWidget.FrameWidget_C.ExecuteUbergraph_FrameWidget
struct UFrameWidget_C_ExecuteUbergraph_FrameWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
