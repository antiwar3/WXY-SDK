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

// Function Level1BoxWidget.Level1BoxWidget_C.SetBuyTimes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentTimes                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxTimes                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULevel1BoxWidget_C::SetBuyTimes(int CurrentTimes, int MaxTimes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Level1BoxWidget.Level1BoxWidget_C.SetBuyTimes");

	ULevel1BoxWidget_C_SetBuyTimes_Params params;
	params.CurrentTimes = CurrentTimes;
	params.MaxTimes = MaxTimes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Level1BoxWidget.Level1BoxWidget_C.CheckEnoughMoney
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            money                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULevel1BoxWidget_C::CheckEnoughMoney(int money)
{
	static auto fn = UObject::FindObject<UFunction>("Function Level1BoxWidget.Level1BoxWidget_C.CheckEnoughMoney");

	ULevel1BoxWidget_C_CheckEnoughMoney_Params params;
	params.money = money;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Level1BoxWidget.Level1BoxWidget_C.SetTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULevel1BoxWidget_C::SetTexture(class UTexture2D* icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Level1BoxWidget.Level1BoxWidget_C.SetTexture");

	ULevel1BoxWidget_C_SetTexture_Params params;
	params.icon = icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Level1BoxWidget.Level1BoxWidget_C.SetName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULevel1BoxWidget_C::SetName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Level1BoxWidget.Level1BoxWidget_C.SetName");

	ULevel1BoxWidget_C_SetName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Level1BoxWidget.Level1BoxWidget_C.SetPrice
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULevel1BoxWidget_C::SetPrice(int price)
{
	static auto fn = UObject::FindObject<UFunction>("Function Level1BoxWidget.Level1BoxWidget_C.SetPrice");

	ULevel1BoxWidget_C_SetPrice_Params params;
	params.price = price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Level1BoxWidget.Level1BoxWidget_C.BndEvt__Preview_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULevel1BoxWidget_C::BndEvt__Preview_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Level1BoxWidget.Level1BoxWidget_C.BndEvt__Preview_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	ULevel1BoxWidget_C_BndEvt__Preview_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Level1BoxWidget.Level1BoxWidget_C.BndEvt__Buy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULevel1BoxWidget_C::BndEvt__Buy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Level1BoxWidget.Level1BoxWidget_C.BndEvt__Buy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	ULevel1BoxWidget_C_BndEvt__Buy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Level1BoxWidget.Level1BoxWidget_C.ExecuteUbergraph_Level1BoxWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULevel1BoxWidget_C::ExecuteUbergraph_Level1BoxWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Level1BoxWidget.Level1BoxWidget_C.ExecuteUbergraph_Level1BoxWidget");

	ULevel1BoxWidget_C_ExecuteUbergraph_Level1BoxWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Level1BoxWidget.Level1BoxWidget_C.RemindText__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ULevel1BoxWidget_C::RemindText__DelegateSignature(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function Level1BoxWidget.Level1BoxWidget_C.RemindText__DelegateSignature");

	ULevel1BoxWidget_C_RemindText__DelegateSignature_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Level1BoxWidget.Level1BoxWidget_C.BuyBox__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULevel1BoxWidget_C::BuyBox__DelegateSignature(int itemID, int price)
{
	static auto fn = UObject::FindObject<UFunction>("Function Level1BoxWidget.Level1BoxWidget_C.BuyBox__DelegateSignature");

	ULevel1BoxWidget_C_BuyBox__DelegateSignature_Params params;
	params.itemID = itemID;
	params.price = price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Level1BoxWidget.Level1BoxWidget_C.PreviewBox__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULevel1BoxWidget_C::PreviewBox__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Level1BoxWidget.Level1BoxWidget_C.PreviewBox__DelegateSignature");

	ULevel1BoxWidget_C_PreviewBox__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
