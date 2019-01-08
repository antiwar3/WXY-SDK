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

// Function KeyWidget.KeyWidget_C.SetPrice
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UKeyWidget_C::SetPrice(int Type, const struct FString& price)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyWidget.KeyWidget_C.SetPrice");

	UKeyWidget_C_SetPrice_Params params;
	params.Type = Type;
	params.price = price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyWidget.KeyWidget_C.SetName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UKeyWidget_C::SetName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyWidget.KeyWidget_C.SetName");

	UKeyWidget_C_SetName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyWidget.KeyWidget_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UTexture2D*              icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UKeyWidget_C::Init(int itemID, const struct FString& Name, class UTexture2D* icon, int Type, const struct FString& price)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyWidget.KeyWidget_C.Init");

	UKeyWidget_C_Init_Params params;
	params.itemID = itemID;
	params.Name = Name;
	params.icon = icon;
	params.Type = Type;
	params.price = price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyWidget.KeyWidget_C.BndEvt__Buy_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UKeyWidget_C::BndEvt__Buy_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyWidget.KeyWidget_C.BndEvt__Buy_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature");

	UKeyWidget_C_BndEvt__Buy_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyWidget.KeyWidget_C.ExecuteUbergraph_KeyWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKeyWidget_C::ExecuteUbergraph_KeyWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyWidget.KeyWidget_C.ExecuteUbergraph_KeyWidget");

	UKeyWidget_C_ExecuteUbergraph_KeyWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyWidget.KeyWidget_C.SelectKey__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKeyWidget_C::SelectKey__DelegateSignature(int itemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyWidget.KeyWidget_C.SelectKey__DelegateSignature");

	UKeyWidget_C_SelectKey__DelegateSignature_Params params;
	params.itemID = itemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
