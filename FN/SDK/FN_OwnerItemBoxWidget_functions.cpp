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

// Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.SetKeyState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOwnerItemBoxWidget_C::SetKeyState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.SetKeyState");

	UOwnerItemBoxWidget_C_SetKeyState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.SetName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UOwnerItemBoxWidget_C::SetName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.SetName");

	UOwnerItemBoxWidget_C_SetName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.SetNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOwnerItemBoxWidget_C::SetNum(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.SetNum");

	UOwnerItemBoxWidget_C_SetNum_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOwnerItemBoxWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UOwnerItemBoxWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOwnerItemBoxWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.PreConstruct");

	UOwnerItemBoxWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.SetInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              KeyIcon                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNeedKey                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasKey                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOwnerItemBoxWidget_C::SetInfo(int itemID, const struct FString& Name, int Num, class UTexture2D* icon, class UTexture2D* KeyIcon, bool IsNeedKey, bool HasKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.SetInfo");

	UOwnerItemBoxWidget_C_SetInfo_Params params;
	params.itemID = itemID;
	params.Name = Name;
	params.Num = Num;
	params.icon = icon;
	params.KeyIcon = KeyIcon;
	params.IsNeedKey = IsNeedKey;
	params.HasKey = HasKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOwnerItemBoxWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UOwnerItemBoxWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOwnerItemBoxWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");

	UOwnerItemBoxWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.ExecuteUbergraph_OwnerItemBoxWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOwnerItemBoxWidget_C::ExecuteUbergraph_OwnerItemBoxWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.ExecuteUbergraph_OwnerItemBoxWidget");

	UOwnerItemBoxWidget_C_ExecuteUbergraph_OwnerItemBoxWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.RemoveBox__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOwnerItemBoxWidget_C*   RemoveBox                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOwnerItemBoxWidget_C::RemoveBox__DelegateSignature(class UOwnerItemBoxWidget_C* RemoveBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.RemoveBox__DelegateSignature");

	UOwnerItemBoxWidget_C_RemoveBox__DelegateSignature_Params params;
	params.RemoveBox = RemoveBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.SelectItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOwnerItemBoxWidget_C::SelectItem__DelegateSignature(int itemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.SelectItem__DelegateSignature");

	UOwnerItemBoxWidget_C_SelectItem__DelegateSignature_Params params;
	params.itemID = itemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
