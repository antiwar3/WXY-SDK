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

// Function PlayerNumProgressBar.PlayerNumProgressBar_C.Tick
struct UPlayerNumProgressBar_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerNumProgressBar.PlayerNumProgressBar_C.SetRangeInfo
struct UPlayerNumProgressBar_C_SetRangeInfo_Params
{
	int                                                Min;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerNumProgressBar.PlayerNumProgressBar_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
struct UPlayerNumProgressBar_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerNumProgressBar.PlayerNumProgressBar_C.ValueChange
struct UPlayerNumProgressBar_C_ValueChange_Params
{
};

// Function PlayerNumProgressBar.PlayerNumProgressBar_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature
struct UPlayerNumProgressBar_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function PlayerNumProgressBar.PlayerNumProgressBar_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature
struct UPlayerNumProgressBar_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function PlayerNumProgressBar.PlayerNumProgressBar_C.SetPercent
struct UPlayerNumProgressBar_C_SetPercent_Params
{
	float                                              percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerNumProgressBar.PlayerNumProgressBar_C.SetEnable
struct UPlayerNumProgressBar_C_SetEnable_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerNumProgressBar.PlayerNumProgressBar_C.ExecuteUbergraph_PlayerNumProgressBar
struct UPlayerNumProgressBar_C_ExecuteUbergraph_PlayerNumProgressBar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerNumProgressBar.PlayerNumProgressBar_C.CurrentValueChange__DelegateSignature
struct UPlayerNumProgressBar_C_CurrentValueChange__DelegateSignature_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
