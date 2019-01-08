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

// Function PLayVideoWidget.PlayVideoWidget_C.ResetSound
struct UPlayVideoWidget_C_ResetSound_Params
{
};

// Function PLayVideoWidget.PlayVideoWidget_C.SetPlayButtonState
struct UPlayVideoWidget_C_SetPlayButtonState_Params
{
	int                                                State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PLayVideoWidget.PlayVideoWidget_C.Construct
struct UPlayVideoWidget_C_Construct_Params
{
};

// Function PLayVideoWidget.PlayVideoWidget_C.SetPlayerSource
struct UPlayVideoWidget_C_SetPlayerSource_Params
{
	class UTexture2D*                                  VideoText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMediaSource*                                NewSource;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PLayVideoWidget.PlayVideoWidget_C.CloseSource
struct UPlayVideoWidget_C_CloseSource_Params
{
};

// Function PLayVideoWidget.PlayVideoWidget_C.OnMouseEnter
struct UPlayVideoWidget_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PLayVideoWidget.PlayVideoWidget_C.OnMouseLeave
struct UPlayVideoWidget_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PLayVideoWidget.PlayVideoWidget_C.BndEvt__MediaPlay_K2Node_ComponentBoundEvent_2_OnMediaPlayerMediaEvent__DelegateSignature
struct UPlayVideoWidget_C_BndEvt__MediaPlay_K2Node_ComponentBoundEvent_2_OnMediaPlayerMediaEvent__DelegateSignature_Params
{
};

// Function PLayVideoWidget.PlayVideoWidget_C.BndEvt__Pause_K2Node_ComponentBoundEvent_222_OnButtonClickedEvent__DelegateSignature
struct UPlayVideoWidget_C_BndEvt__Pause_K2Node_ComponentBoundEvent_222_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PLayVideoWidget.PlayVideoWidget_C.BndEvt__Rewind_K2Node_ComponentBoundEvent_240_OnButtonClickedEvent__DelegateSignature
struct UPlayVideoWidget_C_BndEvt__Rewind_K2Node_ComponentBoundEvent_240_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PLayVideoWidget.PlayVideoWidget_C.BndEvt__Play_K2Node_ComponentBoundEvent_259_OnButtonClickedEvent__DelegateSignature
struct UPlayVideoWidget_C_BndEvt__Play_K2Node_ComponentBoundEvent_259_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PLayVideoWidget.PlayVideoWidget_C.BndEvt__Sound_K2Node_ComponentBoundEvent_1_OnAudioFinished__DelegateSignature
struct UPlayVideoWidget_C_BndEvt__Sound_K2Node_ComponentBoundEvent_1_OnAudioFinished__DelegateSignature_Params
{
};

// Function PLayVideoWidget.PlayVideoWidget_C.ExecuteUbergraph_PlayVideoWidget
struct UPlayVideoWidget_C_ExecuteUbergraph_PlayVideoWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
