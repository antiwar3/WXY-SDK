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

// Function BuyKeyWidget.BuyKeyWidget_C.SetKeyInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 descript                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UTexture2D*              icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuyKeyWidget_C::SetKeyInfo(int itemID, const struct FString& Name, const struct FString& descript, class UTexture2D* icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyKeyWidget.BuyKeyWidget_C.SetKeyInfo");

	UBuyKeyWidget_C_SetKeyInfo_Params params;
	params.itemID = itemID;
	params.Name = Name;
	params.descript = descript;
	params.icon = icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuyKeyWidget.BuyKeyWidget_C.BndEvt__BuyKey_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBuyKeyWidget_C::BndEvt__BuyKey_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyKeyWidget.BuyKeyWidget_C.BndEvt__BuyKey_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature");

	UBuyKeyWidget_C_BndEvt__BuyKey_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuyKeyWidget.BuyKeyWidget_C.BndEvt__Close_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBuyKeyWidget_C::BndEvt__Close_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyKeyWidget.BuyKeyWidget_C.BndEvt__Close_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature");

	UBuyKeyWidget_C_BndEvt__Close_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuyKeyWidget.BuyKeyWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_103_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBuyKeyWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_103_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyKeyWidget.BuyKeyWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_103_OnButtonClickedEvent__DelegateSignature");

	UBuyKeyWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_103_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuyKeyWidget.BuyKeyWidget_C.BuyComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              KeyIcon                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuyKeyWidget_C::BuyComplete(int itemID, class UTexture2D* KeyIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyKeyWidget.BuyKeyWidget_C.BuyComplete");

	UBuyKeyWidget_C_BuyComplete_Params params;
	params.itemID = itemID;
	params.KeyIcon = KeyIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuyKeyWidget.BuyKeyWidget_C.BuyKeyCrossTimer
// (BlueprintCallable, BlueprintEvent)

void UBuyKeyWidget_C::BuyKeyCrossTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyKeyWidget.BuyKeyWidget_C.BuyKeyCrossTimer");

	UBuyKeyWidget_C_BuyKeyCrossTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuyKeyWidget.BuyKeyWidget_C.SetRemindText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBuyKeyWidget_C::SetRemindText(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyKeyWidget.BuyKeyWidget_C.SetRemindText");

	UBuyKeyWidget_C_SetRemindText_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuyKeyWidget.BuyKeyWidget_C.ExecuteUbergraph_BuyKeyWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuyKeyWidget_C::ExecuteUbergraph_BuyKeyWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyKeyWidget.BuyKeyWidget_C.ExecuteUbergraph_BuyKeyWidget");

	UBuyKeyWidget_C_ExecuteUbergraph_BuyKeyWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuyKeyWidget.BuyKeyWidget_C.BuyResponse__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBuyKeyWidget_C::BuyResponse__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyKeyWidget.BuyKeyWidget_C.BuyResponse__DelegateSignature");

	UBuyKeyWidget_C_BuyResponse__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuyKeyWidget.BuyKeyWidget_C.HasBuyKey__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBuyKeyWidget_C::HasBuyKey__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyKeyWidget.BuyKeyWidget_C.HasBuyKey__DelegateSignature");

	UBuyKeyWidget_C_HasBuyKey__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
