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

// Function WaitLoginResponseWidget.WaitLoginResponseWidget_C.SetSliderPercent
struct UWaitLoginResponseWidget_C_SetSliderPercent_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WaitLoginResponseWidget.WaitLoginResponseWidget_C.Tick
struct UWaitLoginResponseWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WaitLoginResponseWidget.WaitLoginResponseWidget_C.SetIsConnecting
struct UWaitLoginResponseWidget_C_SetIsConnecting_Params
{
	bool                                               IsConnecting;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WaitLoginResponseWidget.WaitLoginResponseWidget_C.LoginSuccess
struct UWaitLoginResponseWidget_C_LoginSuccess_Params
{
};

// Function WaitLoginResponseWidget.WaitLoginResponseWidget_C.BndEvt__CancelLogin_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
struct UWaitLoginResponseWidget_C_BndEvt__CancelLogin_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WaitLoginResponseWidget.WaitLoginResponseWidget_C.ExecuteUbergraph_WaitLoginResponseWidget
struct UWaitLoginResponseWidget_C_ExecuteUbergraph_WaitLoginResponseWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WaitLoginResponseWidget.WaitLoginResponseWidget_C.LoginCancelDispatch__DelegateSignature
struct UWaitLoginResponseWidget_C_LoginCancelDispatch__DelegateSignature_Params
{
};

// Function WaitLoginResponseWidget.WaitLoginResponseWidget_C.LoginComplete__DelegateSignature
struct UWaitLoginResponseWidget_C_LoginComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
