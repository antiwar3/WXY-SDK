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

// Function ItemListBoxWidget.ItemListBoxWidget_C.ClearAllEquip
struct UItemListBoxWidget_C_ClearAllEquip_Params
{
};

// Function ItemListBoxWidget.ItemListBoxWidget_C.ChangeItemFunc
struct UItemListBoxWidget_C_ChangeItemFunc_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBagType                                           bagtype;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemListBoxWidget.ItemListBoxWidget_C.CalculateLocation
struct UItemListBoxWidget_C_CalculateLocation_Params
{
};

// Function ItemListBoxWidget.ItemListBoxWidget_C.ItemRemove
struct UItemListBoxWidget_C_ItemRemove_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemListBoxWidget.ItemListBoxWidget_C.Append
struct UItemListBoxWidget_C_Append_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemListBoxWidget.ItemListBoxWidget_C.SortItemWIdgetArrayByLevel
struct UItemListBoxWidget_C_SortItemWIdgetArrayByLevel_Params
{
	TArray<class UItemWidget_C*>                       array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ItemListBoxWidget.ItemListBoxWidget_C.OnMouseWheel
struct UItemListBoxWidget_C_OnMouseWheel_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ItemListBoxWidget.ItemListBoxWidget_C.Tick
struct UItemListBoxWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemListBoxWidget.ItemListBoxWidget_C.BndEvt__EquipItemLeft_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
struct UItemListBoxWidget_C_BndEvt__EquipItemLeft_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ItemListBoxWidget.ItemListBoxWidget_C.BndEvt__EquipItemRight_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature
struct UItemListBoxWidget_C_BndEvt__EquipItemRight_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ItemListBoxWidget.ItemListBoxWidget_C.PageLeft
struct UItemListBoxWidget_C_PageLeft_Params
{
};

// Function ItemListBoxWidget.ItemListBoxWidget_C.PageRight
struct UItemListBoxWidget_C_PageRight_Params
{
};

// Function ItemListBoxWidget.ItemListBoxWidget_C.CreateItem
struct UItemListBoxWidget_C_CreateItem_Params
{
	class UTexture2D*                                  ItemTexture;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESexType                                           sex;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ItemNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemListBoxWidget.ItemListBoxWidget_C.ResetPage
struct UItemListBoxWidget_C_ResetPage_Params
{
};

// Function ItemListBoxWidget.ItemListBoxWidget_C.OnMouseEnter
struct UItemListBoxWidget_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ItemListBoxWidget.ItemListBoxWidget_C.OnMouseLeave
struct UItemListBoxWidget_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ItemListBoxWidget.ItemListBoxWidget_C.ResetAllItemToggle
struct UItemListBoxWidget_C_ResetAllItemToggle_Params
{
	int                                                Except;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemListBoxWidget.ItemListBoxWidget_C.Construct
struct UItemListBoxWidget_C_Construct_Params
{
};

// Function ItemListBoxWidget.ItemListBoxWidget_C.ResortItem
struct UItemListBoxWidget_C_ResortItem_Params
{
};

// Function ItemListBoxWidget.ItemListBoxWidget_C.ClearAllItem
struct UItemListBoxWidget_C_ClearAllItem_Params
{
};

// Function ItemListBoxWidget.ItemListBoxWidget_C.ResetItemLanguageName
struct UItemListBoxWidget_C_ResetItemLanguageName_Params
{
};

// Function ItemListBoxWidget.ItemListBoxWidget_C.RemoveItem
struct UItemListBoxWidget_C_RemoveItem_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemListBoxWidget.ItemListBoxWidget_C.ItemRemind
struct UItemListBoxWidget_C_ItemRemind_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ItemListBoxWidget.ItemListBoxWidget_C.ChangeItem
struct UItemListBoxWidget_C_ChangeItem_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBagType                                           bagtype;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemListBoxWidget.ItemListBoxWidget_C.ShowItemDetail
struct UItemListBoxWidget_C_ShowItemDetail_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     detail;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemListBoxWidget.ItemListBoxWidget_C.SellItem
struct UItemListBoxWidget_C_SellItem_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemListBoxWidget.ItemListBoxWidget_C.ExecuteUbergraph_ItemListBoxWidget
struct UItemListBoxWidget_C_ExecuteUbergraph_ItemListBoxWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemListBoxWidget.ItemListBoxWidget_C.EventSellItem__DelegateSignature
struct UItemListBoxWidget_C_EventSellItem__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemListBoxWidget.ItemListBoxWidget_C.ShowItemNameAndDetail__DelegateSignature
struct UItemListBoxWidget_C_ShowItemNameAndDetail__DelegateSignature_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     detail;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemListBoxWidget.ItemListBoxWidget_C.SingleEquipItemChange__DelegateSignature
struct UItemListBoxWidget_C_SingleEquipItemChange__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBagType                                           bagtype;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemListBoxWidget.ItemListBoxWidget_C.TotalEquipItemChange__DelegateSignature
struct UItemListBoxWidget_C_TotalEquipItemChange__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBagType                                           bagtype;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemListBoxWidget.ItemListBoxWidget_C.TextRemind__DelegateSignature
struct UItemListBoxWidget_C_TextRemind__DelegateSignature_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
