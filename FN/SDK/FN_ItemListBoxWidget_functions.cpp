// Fortnite (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemListBoxWidget.ItemListBoxWidget_C.ClearAllEquip
// (Public, BlueprintCallable, BlueprintEvent)

void UItemListBoxWidget_C::ClearAllEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.ClearAllEquip");

	UItemListBoxWidget_C_ClearAllEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemListBoxWidget.ItemListBoxWidget_C.ChangeItemFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBagType                       bagtype                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemListBoxWidget_C::ChangeItemFunc(int itemID, EBagType bagtype, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.ChangeItemFunc");

	UItemListBoxWidget_C_ChangeItemFunc_Params params;
	params.itemID = itemID;
	params.bagtype = bagtype;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemListBoxWidget.ItemListBoxWidget_C.CalculateLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemListBoxWidget_C::CalculateLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.CalculateLocation");

	UItemListBoxWidget_C_CalculateLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemListBoxWidget.ItemListBoxWidget_C.ItemRemove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemListBoxWidget_C::ItemRemove(int itemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.ItemRemove");

	UItemListBoxWidget_C_ItemRemove_Params params;
	params.itemID = itemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemListBoxWidget.ItemListBoxWidget_C.Append
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemListBoxWidget_C::Append(int ID, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.Append");

	UItemListBoxWidget_C_Append_Params params;
	params.ID = ID;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemListBoxWidget.ItemListBoxWidget_C.SortItemWIdgetArrayByLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UItemWidget_C*>   array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UItemListBoxWidget_C::SortItemWIdgetArrayByLevel(TArray<class UItemWidget_C*>* array)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.SortItemWIdgetArrayByLevel");

	UItemListBoxWidget_C_SortItemWIdgetArrayByLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (array != nullptr)
		*array = params.array;
}


// Function ItemListBoxWidget.ItemListBoxWidget_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UItemListBoxWidget_C::OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.OnMouseWheel");

	UItemListBoxWidget_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemListBoxWidget.ItemListBoxWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemListBoxWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.Tick");

	UItemListBoxWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemListBoxWidget.ItemListBoxWidget_C.BndEvt__EquipItemLeft_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UItemListBoxWidget_C::BndEvt__EquipItemLeft_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.BndEvt__EquipItemLeft_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature");

	UItemListBoxWidget_C_BndEvt__EquipItemLeft_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemListBoxWidget.ItemListBoxWidget_C.BndEvt__EquipItemRight_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UItemListBoxWidget_C::BndEvt__EquipItemRight_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.BndEvt__EquipItemRight_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature");

	UItemListBoxWidget_C_BndEvt__EquipItemRight_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemListBoxWidget.ItemListBoxWidget_C.PageLeft
// (BlueprintCallable, BlueprintEvent)

void UItemListBoxWidget_C::PageLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.PageLeft");

	UItemListBoxWidget_C_PageLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemListBoxWidget.ItemListBoxWidget_C.PageRight
// (BlueprintCallable, BlueprintEvent)

void UItemListBoxWidget_C::PageRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.PageRight");

	UItemListBoxWidget_C_PageRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemListBoxWidget.ItemListBoxWidget_C.CreateItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              ItemTexture                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESexType                       sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ItemName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ItemNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemListBoxWidget_C::CreateItem(class UTexture2D* ItemTexture, int Level, ESexType sex, int itemID, const struct FString& ItemName, int ItemNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.CreateItem");

	UItemListBoxWidget_C_CreateItem_Params params;
	params.ItemTexture = ItemTexture;
	params.Level = Level;
	params.sex = sex;
	params.itemID = itemID;
	params.ItemName = ItemName;
	params.ItemNum = ItemNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemListBoxWidget.ItemListBoxWidget_C.ResetPage
// (BlueprintCallable, BlueprintEvent)

void UItemListBoxWidget_C::ResetPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.ResetPage");

	UItemListBoxWidget_C_ResetPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemListBoxWidget.ItemListBoxWidget_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UItemListBoxWidget_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.OnMouseEnter");

	UItemListBoxWidget_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemListBoxWidget.ItemListBoxWidget_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UItemListBoxWidget_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.OnMouseLeave");

	UItemListBoxWidget_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemListBoxWidget.ItemListBoxWidget_C.ResetAllItemToggle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Except                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemListBoxWidget_C::ResetAllItemToggle(int Except, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.ResetAllItemToggle");

	UItemListBoxWidget_C_ResetAllItemToggle_Params params;
	params.Except = Except;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemListBoxWidget.ItemListBoxWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemListBoxWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.Construct");

	UItemListBoxWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemListBoxWidget.ItemListBoxWidget_C.ResortItem
// (BlueprintCallable, BlueprintEvent)

void UItemListBoxWidget_C::ResortItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.ResortItem");

	UItemListBoxWidget_C_ResortItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemListBoxWidget.ItemListBoxWidget_C.ClearAllItem
// (BlueprintCallable, BlueprintEvent)

void UItemListBoxWidget_C::ClearAllItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.ClearAllItem");

	UItemListBoxWidget_C_ClearAllItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemListBoxWidget.ItemListBoxWidget_C.ResetItemLanguageName
// (BlueprintCallable, BlueprintEvent)

void UItemListBoxWidget_C::ResetItemLanguageName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.ResetItemLanguageName");

	UItemListBoxWidget_C_ResetItemLanguageName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemListBoxWidget.ItemListBoxWidget_C.RemoveItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemListBoxWidget_C::RemoveItem(int itemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.RemoveItem");

	UItemListBoxWidget_C_RemoveItem_Params params;
	params.itemID = itemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemListBoxWidget.ItemListBoxWidget_C.ItemRemind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UItemListBoxWidget_C::ItemRemind(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.ItemRemind");

	UItemListBoxWidget_C_ItemRemind_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemListBoxWidget.ItemListBoxWidget_C.ChangeItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBagType                       bagtype                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemListBoxWidget_C::ChangeItem(int itemID, EBagType bagtype, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.ChangeItem");

	UItemListBoxWidget_C_ChangeItem_Params params;
	params.itemID = itemID;
	params.bagtype = bagtype;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemListBoxWidget.ItemListBoxWidget_C.ShowItemDetail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 detail                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemListBoxWidget_C::ShowItemDetail(const struct FString& Name, const struct FString& detail, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.ShowItemDetail");

	UItemListBoxWidget_C_ShowItemDetail_Params params;
	params.Name = Name;
	params.detail = detail;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemListBoxWidget.ItemListBoxWidget_C.SellItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemListBoxWidget_C::SellItem(int itemID, int ItemNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.SellItem");

	UItemListBoxWidget_C_SellItem_Params params;
	params.itemID = itemID;
	params.ItemNum = ItemNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemListBoxWidget.ItemListBoxWidget_C.ExecuteUbergraph_ItemListBoxWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemListBoxWidget_C::ExecuteUbergraph_ItemListBoxWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.ExecuteUbergraph_ItemListBoxWidget");

	UItemListBoxWidget_C_ExecuteUbergraph_ItemListBoxWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemListBoxWidget.ItemListBoxWidget_C.EventSellItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemListBoxWidget_C::EventSellItem__DelegateSignature(int itemID, int ItemNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.EventSellItem__DelegateSignature");

	UItemListBoxWidget_C_EventSellItem__DelegateSignature_Params params;
	params.itemID = itemID;
	params.ItemNum = ItemNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemListBoxWidget.ItemListBoxWidget_C.ShowItemNameAndDetail__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 detail                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemListBoxWidget_C::ShowItemNameAndDetail__DelegateSignature(const struct FString& Name, const struct FString& detail, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.ShowItemNameAndDetail__DelegateSignature");

	UItemListBoxWidget_C_ShowItemNameAndDetail__DelegateSignature_Params params;
	params.Name = Name;
	params.detail = detail;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemListBoxWidget.ItemListBoxWidget_C.SingleEquipItemChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBagType                       bagtype                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemListBoxWidget_C::SingleEquipItemChange__DelegateSignature(int itemID, EBagType bagtype, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.SingleEquipItemChange__DelegateSignature");

	UItemListBoxWidget_C_SingleEquipItemChange__DelegateSignature_Params params;
	params.itemID = itemID;
	params.bagtype = bagtype;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemListBoxWidget.ItemListBoxWidget_C.TotalEquipItemChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBagType                       bagtype                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemListBoxWidget_C::TotalEquipItemChange__DelegateSignature(int itemID, EBagType bagtype, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.TotalEquipItemChange__DelegateSignature");

	UItemListBoxWidget_C_TotalEquipItemChange__DelegateSignature_Params params;
	params.itemID = itemID;
	params.bagtype = bagtype;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemListBoxWidget.ItemListBoxWidget_C.TextRemind__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UItemListBoxWidget_C::TextRemind__DelegateSignature(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemListBoxWidget.ItemListBoxWidget_C.TextRemind__DelegateSignature");

	UItemListBoxWidget_C_TextRemind__DelegateSignature_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
