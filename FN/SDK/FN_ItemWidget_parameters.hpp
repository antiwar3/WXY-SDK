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

// Function ItemWidget.ItemWidget_C.OnMouseButtonDown
struct UItemWidget_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ItemWidget.ItemWidget_C.AppendNum
struct UItemWidget_C_AppendNum_Params
{
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemWidget.ItemWidget_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
struct UItemWidget_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ItemWidget.ItemWidget_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
struct UItemWidget_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ItemWidget.ItemWidget_C.Init
struct UItemWidget_C_Init_Params
{
	class UItemListBoxWidget_C*                        HorizontalBox;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTexture2D*                                  ItemTexture;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESexType                                           sex;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemWidget.ItemWidget_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
struct UItemWidget_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ItemWidget.ItemWidget_C.SetToggleState
struct UItemWidget_C_SetToggleState_Params
{
	ESlateVisibility                                   InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemWidget.ItemWidget_C.ResetLanguageName
struct UItemWidget_C_ResetLanguageName_Params
{
};

// Function ItemWidget.ItemWidget_C.ExecuteUbergraph_ItemWidget
struct UItemWidget_C_ExecuteUbergraph_ItemWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemWidget.ItemWidget_C.SellItem__DelegateSignature
struct UItemWidget_C_SellItem__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentNum;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemWidget.ItemWidget_C.ShowItemNameAndDetail__DelegateSignature
struct UItemWidget_C_ShowItemNameAndDetail__DelegateSignature_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     detail;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemWidget.ItemWidget_C.ChangeItem__DelegateSignature
struct UItemWidget_C_ChangeItem__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBagType                                           bagtype;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemWidget.ItemWidget_C.RemindText__DelegateSignature
struct UItemWidget_C_RemindText__DelegateSignature_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
