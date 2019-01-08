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

// Function BuyBoxResponseWidget.BuyBoxResponseWidget_C.BuyBox
// (BlueprintCallable, BlueprintEvent)

void UBuyBoxResponseWidget_C::BuyBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyBoxResponseWidget.BuyBoxResponseWidget_C.BuyBox");

	UBuyBoxResponseWidget_C_BuyBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuyBoxResponseWidget.BuyBoxResponseWidget_C.CheckNetWait
// (BlueprintCallable, BlueprintEvent)

void UBuyBoxResponseWidget_C::CheckNetWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyBoxResponseWidget.BuyBoxResponseWidget_C.CheckNetWait");

	UBuyBoxResponseWidget_C_CheckNetWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuyBoxResponseWidget.BuyBoxResponseWidget_C.GetItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              BoxIcon                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBuyBoxResponseWidget_C::GetItem(class UTexture2D* BoxIcon, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyBoxResponseWidget.BuyBoxResponseWidget_C.GetItem");

	UBuyBoxResponseWidget_C_GetItem_Params params;
	params.BoxIcon = BoxIcon;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuyBoxResponseWidget.BuyBoxResponseWidget_C.BndEvt__Close_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBuyBoxResponseWidget_C::BndEvt__Close_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyBoxResponseWidget.BuyBoxResponseWidget_C.BndEvt__Close_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UBuyBoxResponseWidget_C_BndEvt__Close_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuyBoxResponseWidget.BuyBoxResponseWidget_C.SetRemindText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBuyBoxResponseWidget_C::SetRemindText(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyBoxResponseWidget.BuyBoxResponseWidget_C.SetRemindText");

	UBuyBoxResponseWidget_C_SetRemindText_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuyBoxResponseWidget.BuyBoxResponseWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBuyBoxResponseWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyBoxResponseWidget.BuyBoxResponseWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UBuyBoxResponseWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuyBoxResponseWidget.BuyBoxResponseWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBuyBoxResponseWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyBoxResponseWidget.BuyBoxResponseWidget_C.Construct");

	UBuyBoxResponseWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuyBoxResponseWidget.BuyBoxResponseWidget_C.ExecuteUbergraph_BuyBoxResponseWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuyBoxResponseWidget_C::ExecuteUbergraph_BuyBoxResponseWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyBoxResponseWidget.BuyBoxResponseWidget_C.ExecuteUbergraph_BuyBoxResponseWidget");

	UBuyBoxResponseWidget_C_ExecuteUbergraph_BuyBoxResponseWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
