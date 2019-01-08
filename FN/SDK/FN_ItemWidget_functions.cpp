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

// Function ItemWidget.ItemWidget_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UItemWidget_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.OnMouseButtonDown");

	UItemWidget_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemWidget.ItemWidget_C.AppendNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemWidget_C::AppendNum(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.AppendNum");

	UItemWidget_C_AppendNum_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWidget.ItemWidget_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UItemWidget_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature");

	UItemWidget_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWidget.ItemWidget_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UItemWidget_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");

	UItemWidget_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWidget.ItemWidget_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemListBoxWidget_C*    HorizontalBox                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UTexture2D*              ItemTexture                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESexType                       sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemWidget_C::Init(class UItemListBoxWidget_C* HorizontalBox, class UTexture2D* ItemTexture, int Level, ESexType sex, int index, int itemID, const struct FString& Name, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.Init");

	UItemWidget_C_Init_Params params;
	params.HorizontalBox = HorizontalBox;
	params.ItemTexture = ItemTexture;
	params.Level = Level;
	params.sex = sex;
	params.index = index;
	params.itemID = itemID;
	params.Name = Name;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWidget.ItemWidget_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UItemWidget_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature");

	UItemWidget_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWidget.ItemWidget_C.SetToggleState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemWidget_C::SetToggleState(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.SetToggleState");

	UItemWidget_C_SetToggleState_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWidget.ItemWidget_C.ResetLanguageName
// (BlueprintCallable, BlueprintEvent)

void UItemWidget_C::ResetLanguageName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.ResetLanguageName");

	UItemWidget_C_ResetLanguageName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWidget.ItemWidget_C.ExecuteUbergraph_ItemWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemWidget_C::ExecuteUbergraph_ItemWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.ExecuteUbergraph_ItemWidget");

	UItemWidget_C_ExecuteUbergraph_ItemWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWidget.ItemWidget_C.SellItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentNum                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemWidget_C::SellItem__DelegateSignature(int itemID, int CurrentNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.SellItem__DelegateSignature");

	UItemWidget_C_SellItem__DelegateSignature_Params params;
	params.itemID = itemID;
	params.CurrentNum = CurrentNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWidget.ItemWidget_C.ShowItemNameAndDetail__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 detail                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemWidget_C::ShowItemNameAndDetail__DelegateSignature(const struct FString& Name, const struct FString& detail, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.ShowItemNameAndDetail__DelegateSignature");

	UItemWidget_C_ShowItemNameAndDetail__DelegateSignature_Params params;
	params.Name = Name;
	params.detail = detail;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWidget.ItemWidget_C.ChangeItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBagType                       bagtype                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemWidget_C::ChangeItem__DelegateSignature(int itemID, EBagType bagtype, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.ChangeItem__DelegateSignature");

	UItemWidget_C_ChangeItem__DelegateSignature_Params params;
	params.itemID = itemID;
	params.bagtype = bagtype;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWidget.ItemWidget_C.RemindText__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UItemWidget_C::RemindText__DelegateSignature(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.RemindText__DelegateSignature");

	UItemWidget_C_RemindText__DelegateSignature_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
