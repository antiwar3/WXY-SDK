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

// Function Level2BoxWIdget.Level2BoxWidget_C.CheckEnoughMoney
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            money                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULevel2BoxWidget_C::CheckEnoughMoney(int money)
{
	static auto fn = UObject::FindObject<UFunction>("Function Level2BoxWIdget.Level2BoxWidget_C.CheckEnoughMoney");

	ULevel2BoxWidget_C_CheckEnoughMoney_Params params;
	params.money = money;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Level2BoxWIdget.Level2BoxWidget_C.SetTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULevel2BoxWidget_C::SetTexture(class UTexture2D* icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Level2BoxWIdget.Level2BoxWidget_C.SetTexture");

	ULevel2BoxWidget_C_SetTexture_Params params;
	params.icon = icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Level2BoxWIdget.Level2BoxWidget_C.SetPrice
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULevel2BoxWidget_C::SetPrice(int price)
{
	static auto fn = UObject::FindObject<UFunction>("Function Level2BoxWIdget.Level2BoxWidget_C.SetPrice");

	ULevel2BoxWidget_C_SetPrice_Params params;
	params.price = price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Level2BoxWIdget.Level2BoxWidget_C.SetName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULevel2BoxWidget_C::SetName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Level2BoxWIdget.Level2BoxWidget_C.SetName");

	ULevel2BoxWidget_C_SetName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Level2BoxWIdget.Level2BoxWidget_C.BndEvt__Buy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULevel2BoxWidget_C::BndEvt__Buy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Level2BoxWIdget.Level2BoxWidget_C.BndEvt__Buy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	ULevel2BoxWidget_C_BndEvt__Buy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Level2BoxWIdget.Level2BoxWidget_C.BndEvt__Preview_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULevel2BoxWidget_C::BndEvt__Preview_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Level2BoxWIdget.Level2BoxWidget_C.BndEvt__Preview_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	ULevel2BoxWidget_C_BndEvt__Preview_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Level2BoxWIdget.Level2BoxWidget_C.SetInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UTexture2D*              Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULevel2BoxWidget_C::SetInfo(int ID, int price, const struct FString& Name, class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function Level2BoxWIdget.Level2BoxWidget_C.SetInfo");

	ULevel2BoxWidget_C_SetInfo_Params params;
	params.ID = ID;
	params.price = price;
	params.Name = Name;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Level2BoxWIdget.Level2BoxWidget_C.ExecuteUbergraph_Level2BoxWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULevel2BoxWidget_C::ExecuteUbergraph_Level2BoxWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Level2BoxWIdget.Level2BoxWidget_C.ExecuteUbergraph_Level2BoxWidget");

	ULevel2BoxWidget_C_ExecuteUbergraph_Level2BoxWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Level2BoxWIdget.Level2BoxWidget_C.RemindText__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ULevel2BoxWidget_C::RemindText__DelegateSignature(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function Level2BoxWIdget.Level2BoxWidget_C.RemindText__DelegateSignature");

	ULevel2BoxWidget_C_RemindText__DelegateSignature_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Level2BoxWIdget.Level2BoxWidget_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULevel2BoxWidget_C::OnClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Level2BoxWIdget.Level2BoxWidget_C.OnClose__DelegateSignature");

	ULevel2BoxWidget_C_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Level2BoxWIdget.Level2BoxWidget_C.BuyBox__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULevel2BoxWidget_C::BuyBox__DelegateSignature(int itemID, int price)
{
	static auto fn = UObject::FindObject<UFunction>("Function Level2BoxWIdget.Level2BoxWidget_C.BuyBox__DelegateSignature");

	ULevel2BoxWidget_C_BuyBox__DelegateSignature_Params params;
	params.itemID = itemID;
	params.price = price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
