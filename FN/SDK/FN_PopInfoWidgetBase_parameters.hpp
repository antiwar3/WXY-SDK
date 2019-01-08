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

// Function PopInfoWidgetBase.PopInfoWidgetBase_C.Tick
struct UPopInfoWidgetBase_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PopInfoWidgetBase.PopInfoWidgetBase_C.ExecuteUbergraph_PopInfoWidgetBase
struct UPopInfoWidgetBase_C_ExecuteUbergraph_PopInfoWidgetBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PopInfoWidgetBase.PopInfoWidgetBase_C.PopTimeOut__DelegateSignature
struct UPopInfoWidgetBase_C_PopTimeOut__DelegateSignature_Params
{
	class UPopInfoWidgetBase_C*                        SelfWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
