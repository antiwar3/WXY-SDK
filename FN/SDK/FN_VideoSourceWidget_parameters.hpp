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

// Function VideoSourceWidget.VideoSourceWidget_C.PreConstruct
struct UVideoSourceWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VideoSourceWidget.VideoSourceWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UVideoSourceWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function VideoSourceWidget.VideoSourceWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
struct UVideoSourceWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function VideoSourceWidget.VideoSourceWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UVideoSourceWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function VideoSourceWidget.VideoSourceWidget_C.SetSelectState
struct UVideoSourceWidget_C_SetSelectState_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VideoSourceWidget.VideoSourceWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
struct UVideoSourceWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function VideoSourceWidget.VideoSourceWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature
struct UVideoSourceWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function VideoSourceWidget.VideoSourceWidget_C.ExecuteUbergraph_VideoSourceWidget
struct UVideoSourceWidget_C_ExecuteUbergraph_VideoSourceWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VideoSourceWidget.VideoSourceWidget_C.OnClick__DelegateSignature
struct UVideoSourceWidget_C_OnClick__DelegateSignature_Params
{
	struct FText                                       VideoName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  VideoTexture;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMediaSource*                                Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
