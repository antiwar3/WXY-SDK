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

// Function BP_StoreWidget.BP_StoreWidget_C.CheckOpenBoxStill
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_StoreWidget_C::CheckOpenBoxStill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.CheckOpenBoxStill");

	UBP_StoreWidget_C_CheckOpenBoxStill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.CheckHasBuyKey
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_StoreWidget_C::CheckHasBuyKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.CheckHasBuyKey");

	UBP_StoreWidget_C_CheckHasBuyKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.SwitchToPreview
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_StoreWidget_C::SwitchToPreview()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.SwitchToPreview");

	UBP_StoreWidget_C_SwitchToPreview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.BuyBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StoreWidget_C::BuyBox(int itemID, int price)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.BuyBox");

	UBP_StoreWidget_C_BuyBox_Params params;
	params.itemID = itemID;
	params.price = price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.GetKeyIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_StoreWidget_C::GetKeyIcon(int itemID, class UTexture2D** icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.GetKeyIcon");

	UBP_StoreWidget_C_GetKeyIcon_Params params;
	params.itemID = itemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (icon != nullptr)
		*icon = params.icon;
}


// Function BP_StoreWidget.BP_StoreWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_StoreWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.Construct");

	UBP_StoreWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.CreateRandomBox
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           item_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StoreWidget_C::CreateRandomBox(int* item_id, int* index, class UTexture2D** icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.CreateRandomBox");

	UBP_StoreWidget_C_CreateRandomBox_Params params;
	params.item_id = item_id;
	params.index = index;
	params.icon = icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.CreateRandomBoxItem
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           parent_id                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StoreWidget_C::CreateRandomBoxItem(int* ID, int* parent_id, int* index, int* Type, class UTexture2D** icon, int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.CreateRandomBoxItem");

	UBP_StoreWidget_C_CreateRandomBoxItem_Params params;
	params.ID = ID;
	params.parent_id = parent_id;
	params.index = index;
	params.Type = Type;
	params.icon = icon;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__Box_K2Node_ComponentBoundEvent_132_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_StoreWidget_C::BndEvt__Box_K2Node_ComponentBoundEvent_132_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__Box_K2Node_ComponentBoundEvent_132_OnButtonClickedEvent__DelegateSignature");

	UBP_StoreWidget_C_BndEvt__Box_K2Node_ComponentBoundEvent_132_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__MyItem_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_StoreWidget_C::BndEvt__MyItem_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__MyItem_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature");

	UBP_StoreWidget_C_BndEvt__MyItem_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__FixedLevel1Box_K2Node_ComponentBoundEvent_1_PreviewBox__DelegateSignature
// (BlueprintEvent)

void UBP_StoreWidget_C::BndEvt__FixedLevel1Box_K2Node_ComponentBoundEvent_1_PreviewBox__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__FixedLevel1Box_K2Node_ComponentBoundEvent_1_PreviewBox__DelegateSignature");

	UBP_StoreWidget_C_BndEvt__FixedLevel1Box_K2Node_ComponentBoundEvent_1_PreviewBox__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__FixedLevel2Box_K2Node_ComponentBoundEvent_2_BuyBox__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StoreWidget_C::BndEvt__FixedLevel2Box_K2Node_ComponentBoundEvent_2_BuyBox__DelegateSignature(int itemID, int price)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__FixedLevel2Box_K2Node_ComponentBoundEvent_2_BuyBox__DelegateSignature");

	UBP_StoreWidget_C_BndEvt__FixedLevel2Box_K2Node_ComponentBoundEvent_2_BuyBox__DelegateSignature_Params params;
	params.itemID = itemID;
	params.price = price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__FixedLevel1Box_K2Node_ComponentBoundEvent_3_BuyBox__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StoreWidget_C::BndEvt__FixedLevel1Box_K2Node_ComponentBoundEvent_3_BuyBox__DelegateSignature(int itemID, int price)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__FixedLevel1Box_K2Node_ComponentBoundEvent_3_BuyBox__DelegateSignature");

	UBP_StoreWidget_C_BndEvt__FixedLevel1Box_K2Node_ComponentBoundEvent_3_BuyBox__DelegateSignature_Params params;
	params.itemID = itemID;
	params.price = price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__RandomLevel1Box_K2Node_ComponentBoundEvent_5_PreviewBox__DelegateSignature
// (BlueprintEvent)

void UBP_StoreWidget_C::BndEvt__RandomLevel1Box_K2Node_ComponentBoundEvent_5_PreviewBox__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__RandomLevel1Box_K2Node_ComponentBoundEvent_5_PreviewBox__DelegateSignature");

	UBP_StoreWidget_C_BndEvt__RandomLevel1Box_K2Node_ComponentBoundEvent_5_PreviewBox__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__RandomLevel2Box_K2Node_ComponentBoundEvent_6_BuyBox__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StoreWidget_C::BndEvt__RandomLevel2Box_K2Node_ComponentBoundEvent_6_BuyBox__DelegateSignature(int itemID, int price)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__RandomLevel2Box_K2Node_ComponentBoundEvent_6_BuyBox__DelegateSignature");

	UBP_StoreWidget_C_BndEvt__RandomLevel2Box_K2Node_ComponentBoundEvent_6_BuyBox__DelegateSignature_Params params;
	params.itemID = itemID;
	params.price = price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__RandomLevel1Box_K2Node_ComponentBoundEvent_7_BuyBox__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StoreWidget_C::BndEvt__RandomLevel1Box_K2Node_ComponentBoundEvent_7_BuyBox__DelegateSignature(int itemID, int price)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__RandomLevel1Box_K2Node_ComponentBoundEvent_7_BuyBox__DelegateSignature");

	UBP_StoreWidget_C_BndEvt__RandomLevel1Box_K2Node_ComponentBoundEvent_7_BuyBox__DelegateSignature_Params params;
	params.itemID = itemID;
	params.price = price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__RandomLevel2Box_K2Node_ComponentBoundEvent_8_OnClose__DelegateSignature
// (BlueprintEvent)

void UBP_StoreWidget_C::BndEvt__RandomLevel2Box_K2Node_ComponentBoundEvent_8_OnClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__RandomLevel2Box_K2Node_ComponentBoundEvent_8_OnClose__DelegateSignature");

	UBP_StoreWidget_C_BndEvt__RandomLevel2Box_K2Node_ComponentBoundEvent_8_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.SelectRandomBox
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StoreWidget_C::SelectRandomBox(int index, int itemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.SelectRandomBox");

	UBP_StoreWidget_C_SelectRandomBox_Params params;
	params.index = index;
	params.itemID = itemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.CreateOwnerItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNeedKey                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StoreWidget_C::CreateOwnerItem(int itemID, const struct FString& Name, int Num, class UTexture2D* icon, bool IsNeedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.CreateOwnerItem");

	UBP_StoreWidget_C_CreateOwnerItem_Params params;
	params.itemID = itemID;
	params.Name = Name;
	params.Num = Num;
	params.icon = icon;
	params.IsNeedKey = IsNeedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.SelectOpenBox
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StoreWidget_C::SelectOpenBox(int itemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.SelectOpenBox");

	UBP_StoreWidget_C_SelectOpenBox_Params params;
	params.itemID = itemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__OpenBoxBackGroundButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_StoreWidget_C::BndEvt__OpenBoxBackGroundButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__OpenBoxBackGroundButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UBP_StoreWidget_C_BndEvt__OpenBoxBackGroundButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__Preview_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_StoreWidget_C::BndEvt__Preview_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__Preview_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UBP_StoreWidget_C_BndEvt__Preview_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__ClosePreview_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_StoreWidget_C::BndEvt__ClosePreview_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__ClosePreview_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UBP_StoreWidget_C_BndEvt__ClosePreview_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.CreatePreviewBoxItem
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StoreWidget_C::CreatePreviewBoxItem(int* ID, int* Type, class UTexture2D** icon, int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.CreatePreviewBoxItem");

	UBP_StoreWidget_C_CreatePreviewBoxItem_Params params;
	params.ID = ID;
	params.Type = Type;
	params.icon = icon;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__SelfItemHorizontalBox_K2Node_ComponentBoundEvent_1_NoBoxItem__DelegateSignature
// (BlueprintEvent)

void UBP_StoreWidget_C::BndEvt__SelfItemHorizontalBox_K2Node_ComponentBoundEvent_1_NoBoxItem__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__SelfItemHorizontalBox_K2Node_ComponentBoundEvent_1_NoBoxItem__DelegateSignature");

	UBP_StoreWidget_C_BndEvt__SelfItemHorizontalBox_K2Node_ComponentBoundEvent_1_NoBoxItem__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__SelfItemHorizontalBox_K2Node_ComponentBoundEvent_2_RemoveBoxItem__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StoreWidget_C::BndEvt__SelfItemHorizontalBox_K2Node_ComponentBoundEvent_2_RemoveBoxItem__DelegateSignature(int itemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__SelfItemHorizontalBox_K2Node_ComponentBoundEvent_2_RemoveBoxItem__DelegateSignature");

	UBP_StoreWidget_C_BndEvt__SelfItemHorizontalBox_K2Node_ComponentBoundEvent_2_RemoveBoxItem__DelegateSignature_Params params;
	params.itemID = itemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.UpdateMoney
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            money                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StoreWidget_C::UpdateMoney(int money)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.UpdateMoney");

	UBP_StoreWidget_C_UpdateMoney_Params params;
	params.money = money;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.ClearGoods
// (BlueprintCallable, BlueprintEvent)

void UBP_StoreWidget_C::ClearGoods()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.ClearGoods");

	UBP_StoreWidget_C_ClearGoods_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.CreateOwnerKey
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StoreWidget_C::CreateOwnerKey(int itemID, const struct FString& Name, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.CreateOwnerKey");

	UBP_StoreWidget_C_CreateOwnerKey_Params params;
	params.itemID = itemID;
	params.Name = Name;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__OpenBox_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_StoreWidget_C::BndEvt__OpenBox_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__OpenBox_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UBP_StoreWidget_C_BndEvt__OpenBox_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.InitBox
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RandomBox                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FixedBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StoreWidget_C::InitBox(int RandomBox, int FixedBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.InitBox");

	UBP_StoreWidget_C_InitBox_Params params;
	params.RandomBox = RandomBox;
	params.FixedBox = FixedBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.ReCalculatePrice
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Times                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StoreWidget_C::ReCalculatePrice(int itemID, int Times)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.ReCalculatePrice");

	UBP_StoreWidget_C_ReCalculatePrice_Params params;
	params.itemID = itemID;
	params.Times = Times;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.ResetLanguage
// (BlueprintCallable, BlueprintEvent)

void UBP_StoreWidget_C::ResetLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.ResetLanguage");

	UBP_StoreWidget_C_ResetLanguage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.ShowItemTips
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StoreWidget_C::ShowItemTips(int itemID, int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.ShowItemTips");

	UBP_StoreWidget_C_ShowItemTips_Params params;
	params.itemID = itemID;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.HideItemTips
// (BlueprintCallable, BlueprintEvent)

void UBP_StoreWidget_C::HideItemTips()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.HideItemTips");

	UBP_StoreWidget_C_HideItemTips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StoreWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.Tick");

	UBP_StoreWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.CreateOwnerItemComplete
// (BlueprintCallable, BlueprintEvent)

void UBP_StoreWidget_C::CreateOwnerItemComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.CreateOwnerItemComplete");

	UBP_StoreWidget_C_CreateOwnerItemComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__RandomLevel1Box_K2Node_ComponentBoundEvent_44_RemindText__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_StoreWidget_C::BndEvt__RandomLevel1Box_K2Node_ComponentBoundEvent_44_RemindText__DelegateSignature(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__RandomLevel1Box_K2Node_ComponentBoundEvent_44_RemindText__DelegateSignature");

	UBP_StoreWidget_C_BndEvt__RandomLevel1Box_K2Node_ComponentBoundEvent_44_RemindText__DelegateSignature_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__FixedLevel1Box_K2Node_ComponentBoundEvent_45_RemindText__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_StoreWidget_C::BndEvt__FixedLevel1Box_K2Node_ComponentBoundEvent_45_RemindText__DelegateSignature(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__FixedLevel1Box_K2Node_ComponentBoundEvent_45_RemindText__DelegateSignature");

	UBP_StoreWidget_C_BndEvt__FixedLevel1Box_K2Node_ComponentBoundEvent_45_RemindText__DelegateSignature_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__Level2Box_K2Node_ComponentBoundEvent_1_RemindText__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_StoreWidget_C::BndEvt__Level2Box_K2Node_ComponentBoundEvent_1_RemindText__DelegateSignature(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__Level2Box_K2Node_ComponentBoundEvent_1_RemindText__DelegateSignature");

	UBP_StoreWidget_C_BndEvt__Level2Box_K2Node_ComponentBoundEvent_1_RemindText__DelegateSignature_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__Key_K2Node_ComponentBoundEvent_357_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_StoreWidget_C::BndEvt__Key_K2Node_ComponentBoundEvent_357_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__Key_K2Node_ComponentBoundEvent_357_OnButtonClickedEvent__DelegateSignature");

	UBP_StoreWidget_C_BndEvt__Key_K2Node_ComponentBoundEvent_357_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.CreateBuyKey
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           price_type                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StoreWidget_C::CreateBuyKey(int* ID, class UTexture2D** icon, int* price_type, float* price)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.CreateBuyKey");

	UBP_StoreWidget_C_CreateBuyKey_Params params;
	params.ID = ID;
	params.icon = icon;
	params.price_type = price_type;
	params.price = price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.BuyKey
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StoreWidget_C::BuyKey(int itemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.BuyKey");

	UBP_StoreWidget_C_BuyKey_Params params;
	params.itemID = itemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__JiHuoMa_K2Node_ComponentBoundEvent_407_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_StoreWidget_C::BndEvt__JiHuoMa_K2Node_ComponentBoundEvent_407_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__JiHuoMa_K2Node_ComponentBoundEvent_407_OnButtonClickedEvent__DelegateSignature");

	UBP_StoreWidget_C_BndEvt__JiHuoMa_K2Node_ComponentBoundEvent_407_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__DuiHuan_K2Node_ComponentBoundEvent_94_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_StoreWidget_C::BndEvt__DuiHuan_K2Node_ComponentBoundEvent_94_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__DuiHuan_K2Node_ComponentBoundEvent_94_OnButtonClickedEvent__DelegateSignature");

	UBP_StoreWidget_C_BndEvt__DuiHuan_K2Node_ComponentBoundEvent_94_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.PanelSwitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StoreWidget_C::PanelSwitch(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.PanelSwitch");

	UBP_StoreWidget_C_PanelSwitch_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__JiHuoMaInput_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StoreWidget_C::BndEvt__JiHuoMaInput_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__JiHuoMaInput_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UBP_StoreWidget_C_BndEvt__JiHuoMaInput_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__BoxDescript_K2Node_ComponentBoundEvent_1_MouseState__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StoreWidget_C::BndEvt__BoxDescript_K2Node_ComponentBoundEvent_1_MouseState__DelegateSignature(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__BoxDescript_K2Node_ComponentBoundEvent_1_MouseState__DelegateSignature");

	UBP_StoreWidget_C_BndEvt__BoxDescript_K2Node_ComponentBoundEvent_1_MouseState__DelegateSignature_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.ExecuteUbergraph_BP_StoreWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StoreWidget_C::ExecuteUbergraph_BP_StoreWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.ExecuteUbergraph_BP_StoreWidget");

	UBP_StoreWidget_C_ExecuteUbergraph_BP_StoreWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.JiHuoMaDuiHuan__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_StoreWidget_C::JiHuoMaDuiHuan__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.JiHuoMaDuiHuan__DelegateSignature");

	UBP_StoreWidget_C_JiHuoMaDuiHuan__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.BuySelectKey__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 descript                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UTexture2D*              icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StoreWidget_C::BuySelectKey__DelegateSignature(int itemID, const struct FString& Name, const struct FString& descript, class UTexture2D* icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.BuySelectKey__DelegateSignature");

	UBP_StoreWidget_C_BuySelectKey__DelegateSignature_Params params;
	params.itemID = itemID;
	params.Name = Name;
	params.descript = descript;
	params.icon = icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.BuyKeyInfo__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              OpenBoxIcon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              KeyIcon                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            KeyId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BoxId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StoreWidget_C::BuyKeyInfo__DelegateSignature(class UTexture2D* icon, class UTexture2D* OpenBoxIcon, class UTexture2D* KeyIcon, int KeyId, int BoxId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.BuyKeyInfo__DelegateSignature");

	UBP_StoreWidget_C_BuyKeyInfo__DelegateSignature_Params params;
	params.icon = icon;
	params.OpenBoxIcon = OpenBoxIcon;
	params.KeyIcon = KeyIcon;
	params.KeyId = KeyId;
	params.BoxId = BoxId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.OpenBoxInfo__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              OpenBoxIcon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              KeyIcon                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            KeyNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BoxId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNeedKey                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StoreWidget_C::OpenBoxInfo__DelegateSignature(class UTexture2D* icon, class UTexture2D* OpenBoxIcon, class UTexture2D* KeyIcon, int KeyNum, int BoxId, bool IsNeedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.OpenBoxInfo__DelegateSignature");

	UBP_StoreWidget_C_OpenBoxInfo__DelegateSignature_Params params;
	params.icon = icon;
	params.OpenBoxIcon = OpenBoxIcon;
	params.KeyIcon = KeyIcon;
	params.KeyNum = KeyNum;
	params.BoxId = BoxId;
	params.IsNeedKey = IsNeedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.BuyNewBox__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StoreWidget_C::BuyNewBox__DelegateSignature(int itemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.BuyNewBox__DelegateSignature");

	UBP_StoreWidget_C_BuyNewBox__DelegateSignature_Params params;
	params.itemID = itemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StoreWidget.BP_StoreWidget_C.SendRemindText__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_StoreWidget_C::SendRemindText__DelegateSignature(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StoreWidget.BP_StoreWidget_C.SendRemindText__DelegateSignature");

	UBP_StoreWidget_C_SendRemindText__DelegateSignature_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
