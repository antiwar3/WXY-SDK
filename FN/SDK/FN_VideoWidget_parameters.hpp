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

// Function VideoWidget.VideoWidget_C.BndEvt__SelectServerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UVideoWidget_C_BndEvt__SelectServerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function VideoWidget.VideoWidget_C.Construct
struct UVideoWidget_C_Construct_Params
{
};

// Function VideoWidget.VideoWidget_C.StartInto
struct UVideoWidget_C_StartInto_Params
{
};

// Function VideoWidget.VideoWidget_C.VideoSelect
struct UVideoWidget_C_VideoSelect_Params
{
	struct FText                                       VideoName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  VideoTexture;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMediaSource*                                Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VideoWidget.VideoWidget_C.ExecuteUbergraph_VideoWidget
struct UVideoWidget_C_ExecuteUbergraph_VideoWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VideoWidget.VideoWidget_C.PlayBGSound__DelegateSignature
struct UVideoWidget_C_PlayBGSound__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
