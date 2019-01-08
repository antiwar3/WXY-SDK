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

// Function PopInfoBoxWidgetBase.PopInfoBoxWidgetBase_C.PushWidget
struct UPopInfoBoxWidgetBase_C_PushWidget_Params
{
	class UPopInfoWidgetBase_C*                        Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PopInfoBoxWidgetBase.PopInfoBoxWidgetBase_C.GetEmptyPop
struct UPopInfoBoxWidgetBase_C_GetEmptyPop_Params
{
	class UPopInfoWidgetBase_C*                        POP;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PopInfoBoxWidgetBase.PopInfoBoxWidgetBase_C.PopTimeOutPushBack
struct UPopInfoBoxWidgetBase_C_PopTimeOutPushBack_Params
{
	class UPopInfoWidgetBase_C*                        Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PopInfoBoxWidgetBase.PopInfoBoxWidgetBase_C.Tick
struct UPopInfoBoxWidgetBase_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PopInfoBoxWidgetBase.PopInfoBoxWidgetBase_C.ExecuteUbergraph_PopInfoBoxWidgetBase
struct UPopInfoBoxWidgetBase_C_ExecuteUbergraph_PopInfoBoxWidgetBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
