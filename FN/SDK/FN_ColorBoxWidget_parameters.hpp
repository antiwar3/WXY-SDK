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

// Function ColorBoxWidget.ColorBoxWidget_C.OnMouseWheel
struct UColorBoxWidget_C_OnMouseWheel_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ColorBoxWidget.ColorBoxWidget_C.CreateColor
struct UColorBoxWidget_C_CreateColor_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ColorBoxWidget.ColorBoxWidget_C.OnMouseEnter
struct UColorBoxWidget_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ColorBoxWidget.ColorBoxWidget_C.OnMouseLeave
struct UColorBoxWidget_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ColorBoxWidget.ColorBoxWidget_C.BndEvt__PageLeftButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
struct UColorBoxWidget_C_BndEvt__PageLeftButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ColorBoxWidget.ColorBoxWidget_C.BndEvt__PageRightButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
struct UColorBoxWidget_C_BndEvt__PageRightButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ColorBoxWidget.ColorBoxWidget_C.Tick
struct UColorBoxWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ColorBoxWidget.ColorBoxWidget_C.ResetColor
struct UColorBoxWidget_C_ResetColor_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ColorBoxWidget.ColorBoxWidget_C.ResetColorIndex
struct UColorBoxWidget_C_ResetColorIndex_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ColorBoxWidget.ColorBoxWidget_C.Construct
struct UColorBoxWidget_C_Construct_Params
{
};

// Function ColorBoxWidget.ColorBoxWidget_C.ExecuteUbergraph_ColorBoxWidget
struct UColorBoxWidget_C_ExecuteUbergraph_ColorBoxWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ColorBoxWidget.ColorBoxWidget_C.HairColorIndex__DelegateSignature
struct UColorBoxWidget_C_HairColorIndex__DelegateSignature_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ColorBoxWidget.ColorBoxWidget_C.SkinColorIndex__DelegateSignature
struct UColorBoxWidget_C_SkinColorIndex__DelegateSignature_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ColorBoxWidget.ColorBoxWidget_C.SetColorId__DelegateSignature
struct UColorBoxWidget_C_SetColorId__DelegateSignature_Params
{
	EModelType                                         Model;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
