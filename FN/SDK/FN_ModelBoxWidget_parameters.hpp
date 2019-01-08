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

// Function ModelBoxWidget.ModelBoxWidget_C.SetRightIcon
struct UModelBoxWidget_C_SetRightIcon_Params
{
	TEnumAsByte<EButtonState>                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ModelBoxWidget.ModelBoxWidget_C.SetLeftIcon
struct UModelBoxWidget_C_SetLeftIcon_Params
{
	TEnumAsByte<EButtonState>                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ModelBoxWidget.ModelBoxWidget_C.OnMouseWheel
struct UModelBoxWidget_C_OnMouseWheel_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ModelBoxWidget.ModelBoxWidget_C.CreateModel
struct UModelBoxWidget_C_CreateModel_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ModelBoxWidget.ModelBoxWidget_C.OnMouseEnter
struct UModelBoxWidget_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ModelBoxWidget.ModelBoxWidget_C.OnMouseLeave
struct UModelBoxWidget_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ModelBoxWidget.ModelBoxWidget_C.BndEvt__PageLeftButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
struct UModelBoxWidget_C_BndEvt__PageLeftButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ModelBoxWidget.ModelBoxWidget_C.BndEvt__PageRightButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
struct UModelBoxWidget_C_BndEvt__PageRightButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ModelBoxWidget.ModelBoxWidget_C.ResetModel
struct UModelBoxWidget_C_ResetModel_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ModelBoxWidget.ModelBoxWidget_C.ResetModelIndex
struct UModelBoxWidget_C_ResetModelIndex_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ModelBoxWidget.ModelBoxWidget_C.Tick
struct UModelBoxWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ModelBoxWidget.ModelBoxWidget_C.Construct
struct UModelBoxWidget_C_Construct_Params
{
};

// Function ModelBoxWidget.ModelBoxWidget_C.BndEvt__Left_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
struct UModelBoxWidget_C_BndEvt__Left_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function ModelBoxWidget.ModelBoxWidget_C.BndEvt__Left_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature
struct UModelBoxWidget_C_BndEvt__Left_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function ModelBoxWidget.ModelBoxWidget_C.BndEvt__Left_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
struct UModelBoxWidget_C_BndEvt__Left_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ModelBoxWidget.ModelBoxWidget_C.BndEvt__Left_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
struct UModelBoxWidget_C_BndEvt__Left_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ModelBoxWidget.ModelBoxWidget_C.BndEvt__Right_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature
struct UModelBoxWidget_C_BndEvt__Right_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function ModelBoxWidget.ModelBoxWidget_C.BndEvt__Right_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature
struct UModelBoxWidget_C_BndEvt__Right_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function ModelBoxWidget.ModelBoxWidget_C.BndEvt__Right_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
struct UModelBoxWidget_C_BndEvt__Right_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ModelBoxWidget.ModelBoxWidget_C.BndEvt__Right_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
struct UModelBoxWidget_C_BndEvt__Right_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ModelBoxWidget.ModelBoxWidget_C.ExecuteUbergraph_ModelBoxWidget
struct UModelBoxWidget_C_ExecuteUbergraph_ModelBoxWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ModelBoxWidget.ModelBoxWidget_C.HairIndex__DelegateSignature
struct UModelBoxWidget_C_HairIndex__DelegateSignature_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ModelBoxWidget.ModelBoxWidget_C.FaceIndex__DelegateSignature
struct UModelBoxWidget_C_FaceIndex__DelegateSignature_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ModelBoxWidget.ModelBoxWidget_C.SetModelId__DelegateSignature
struct UModelBoxWidget_C_SetModelId__DelegateSignature_Params
{
	ESexType                                           sex;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EModelType                                         Model;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
