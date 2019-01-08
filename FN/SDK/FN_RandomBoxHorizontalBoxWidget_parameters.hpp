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

// Function RandomBoxHorizontalBoxWidget.RandomBoxHorizontalBoxWidget_C.CreateNewRandomBox
struct URandomBoxHorizontalBoxWidget_C_CreateNewRandomBox_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class URandomBoxWidget_C*                          RetBox;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RandomBoxHorizontalBoxWidget.RandomBoxHorizontalBoxWidget_C.Tick
struct URandomBoxHorizontalBoxWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RandomBoxHorizontalBoxWidget.RandomBoxHorizontalBoxWidget_C.Init
struct URandomBoxHorizontalBoxWidget_C_Init_Params
{
	class UBP_StoreWidget_C*                           Store;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RandomBoxHorizontalBoxWidget.RandomBoxHorizontalBoxWidget_C.OnMouseEnter
struct URandomBoxHorizontalBoxWidget_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function RandomBoxHorizontalBoxWidget.RandomBoxHorizontalBoxWidget_C.OnMouseLeave
struct URandomBoxHorizontalBoxWidget_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function RandomBoxHorizontalBoxWidget.RandomBoxHorizontalBoxWidget_C.BndEvt__Left_K2Node_ComponentBoundEvent_175_OnButtonClickedEvent__DelegateSignature
struct URandomBoxHorizontalBoxWidget_C_BndEvt__Left_K2Node_ComponentBoundEvent_175_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function RandomBoxHorizontalBoxWidget.RandomBoxHorizontalBoxWidget_C.BndEvt__Right_K2Node_ComponentBoundEvent_192_OnButtonClickedEvent__DelegateSignature
struct URandomBoxHorizontalBoxWidget_C_BndEvt__Right_K2Node_ComponentBoundEvent_192_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function RandomBoxHorizontalBoxWidget.RandomBoxHorizontalBoxWidget_C.SelectBox
struct URandomBoxHorizontalBoxWidget_C_SelectBox_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RandomBoxHorizontalBoxWidget.RandomBoxHorizontalBoxWidget_C.ClearBox
struct URandomBoxHorizontalBoxWidget_C_ClearBox_Params
{
};

// Function RandomBoxHorizontalBoxWidget.RandomBoxHorizontalBoxWidget_C.ExecuteUbergraph_RandomBoxHorizontalBoxWidget
struct URandomBoxHorizontalBoxWidget_C_ExecuteUbergraph_RandomBoxHorizontalBoxWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
