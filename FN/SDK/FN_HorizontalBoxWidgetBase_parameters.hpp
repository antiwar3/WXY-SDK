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

// Function HorizontalBoxWidgetBase.HorizontalBoxWidgetBase_C.PageRight
struct UHorizontalBoxWidgetBase_C_PageRight_Params
{
};

// Function HorizontalBoxWidgetBase.HorizontalBoxWidgetBase_C.PageLeft
struct UHorizontalBoxWidgetBase_C_PageLeft_Params
{
};

// Function HorizontalBoxWidgetBase.HorizontalBoxWidgetBase_C.Tick
struct UHorizontalBoxWidgetBase_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HorizontalBoxWidgetBase.HorizontalBoxWidgetBase_C.CallCreateNewWidget
struct UHorizontalBoxWidgetBase_C_CallCreateNewWidget_Params
{
};

// Function HorizontalBoxWidgetBase.HorizontalBoxWidgetBase_C.ExecuteUbergraph_HorizontalBoxWidgetBase
struct UHorizontalBoxWidgetBase_C_ExecuteUbergraph_HorizontalBoxWidgetBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
