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

// Function SkinChildWidget.SkinChildWidget_C.OnMouseButtonDown
struct USkinChildWidget_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SkinChildWidget.SkinChildWidget_C.Append
struct USkinChildWidget_C_Append_Params
{
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkinChildWidget.SkinChildWidget_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature
struct USkinChildWidget_C_BndEvt__SkinButton_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SkinChildWidget.SkinChildWidget_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct USkinChildWidget_C_BndEvt__SkinButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SkinChildWidget.SkinChildWidget_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct USkinChildWidget_C_BndEvt__SkinButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SkinChildWidget.SkinChildWidget_C.SetEquipState
struct USkinChildWidget_C_SetEquipState_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkinChildWidget.SkinChildWidget_C.Init
struct USkinChildWidget_C_Init_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESexType                                           sex;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkinId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkinChildWidget.SkinChildWidget_C.ExecuteUbergraph_SkinChildWidget
struct USkinChildWidget_C_ExecuteUbergraph_SkinChildWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkinChildWidget.SkinChildWidget_C.SellSkin__DelegateSignature
struct USkinChildWidget_C_SellSkin__DelegateSignature_Params
{
	int                                                SkinId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentNum;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkinChildWidget.SkinChildWidget_C.SkinTypeSelect__DelegateSignature
struct USkinChildWidget_C_SkinTypeSelect__DelegateSignature_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkinId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkinChildWidget.SkinChildWidget_C.RemindText__DelegateSignature
struct USkinChildWidget_C_RemindText__DelegateSignature_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SkinChildWidget.SkinChildWidget_C.RemoveSkin__DelegateSignature
struct USkinChildWidget_C_RemoveSkin__DelegateSignature_Params
{
	int                                                SkinId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkinChildWidget.SkinChildWidget_C.ShowDetail__DelegateSignature
struct USkinChildWidget_C_ShowDetail__DelegateSignature_Params
{
	int                                                SkinId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkinChildWidget.SkinChildWidget_C.OnClick__DelegateSignature
struct USkinChildWidget_C_OnClick__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
