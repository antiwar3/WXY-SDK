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

// Function KeySelectHorizontalBoxWidget.KeySelectHorizontalBoxWidget_C.CreateKey
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UTexture2D*              icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UKeyWidget_C*            RetKey                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKeySelectHorizontalBoxWidget_C::CreateKey(int itemID, const struct FString& Name, class UTexture2D* icon, const struct FString& price, int Type, class UKeyWidget_C** RetKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeySelectHorizontalBoxWidget.KeySelectHorizontalBoxWidget_C.CreateKey");

	UKeySelectHorizontalBoxWidget_C_CreateKey_Params params;
	params.itemID = itemID;
	params.Name = Name;
	params.icon = icon;
	params.price = price;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetKey != nullptr)
		*RetKey = params.RetKey;
}


// Function KeySelectHorizontalBoxWidget.KeySelectHorizontalBoxWidget_C.BndEvt__Left_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UKeySelectHorizontalBoxWidget_C::BndEvt__Left_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeySelectHorizontalBoxWidget.KeySelectHorizontalBoxWidget_C.BndEvt__Left_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UKeySelectHorizontalBoxWidget_C_BndEvt__Left_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeySelectHorizontalBoxWidget.KeySelectHorizontalBoxWidget_C.BndEvt__Right_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UKeySelectHorizontalBoxWidget_C::BndEvt__Right_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeySelectHorizontalBoxWidget.KeySelectHorizontalBoxWidget_C.BndEvt__Right_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UKeySelectHorizontalBoxWidget_C_BndEvt__Right_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeySelectHorizontalBoxWidget.KeySelectHorizontalBoxWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKeySelectHorizontalBoxWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeySelectHorizontalBoxWidget.KeySelectHorizontalBoxWidget_C.Tick");

	UKeySelectHorizontalBoxWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeySelectHorizontalBoxWidget.KeySelectHorizontalBoxWidget_C.ExecuteUbergraph_KeySelectHorizontalBoxWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKeySelectHorizontalBoxWidget_C::ExecuteUbergraph_KeySelectHorizontalBoxWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeySelectHorizontalBoxWidget.KeySelectHorizontalBoxWidget_C.ExecuteUbergraph_KeySelectHorizontalBoxWidget");

	UKeySelectHorizontalBoxWidget_C_ExecuteUbergraph_KeySelectHorizontalBoxWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
