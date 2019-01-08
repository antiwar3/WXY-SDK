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

// Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.CheckCreateComplete
// (Public, BlueprintCallable, BlueprintEvent)

void UOwnerKeyButtonWidget_C::CheckCreateComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.CheckCreateComplete");

	UOwnerKeyButtonWidget_C_CheckCreateComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.CalculateNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOwnerKeyButtonWidget_C::CalculateNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.CalculateNum");

	UOwnerKeyButtonWidget_C_CalculateNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.GetKeyNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            KeyId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOwnerKeyButtonWidget_C::GetKeyNum(int KeyId, int* Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.GetKeyNum");

	UOwnerKeyButtonWidget_C_GetKeyNum_Params params;
	params.KeyId = KeyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Num != nullptr)
		*Num = params.Num;
}


// Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.CanFindKey
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasKey                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOwnerKeyButtonWidget_C::CanFindKey(int itemID, bool* HasKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.CanFindKey");

	UOwnerKeyButtonWidget_C_CanFindKey_Params params;
	params.itemID = itemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasKey != nullptr)
		*HasKey = params.HasKey;
}


// Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.FindKeyById
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UOwnerKeyWidget_C*       Key                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOwnerKeyButtonWidget_C::FindKeyById(int ID, class UOwnerKeyWidget_C** Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.FindKeyById");

	UOwnerKeyButtonWidget_C_FindKeyById_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
}


// Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.SetKey
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOwnerKeyButtonWidget_C::SetKey(int itemID, const struct FString& Name, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.SetKey");

	UOwnerKeyButtonWidget_C_SetKey_Params params;
	params.itemID = itemID;
	params.Name = Name;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.KeyDestroy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOwnerKeyWidget_C*       RemoveKey                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOwnerKeyButtonWidget_C::KeyDestroy(class UOwnerKeyWidget_C* RemoveKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.KeyDestroy");

	UOwnerKeyButtonWidget_C_KeyDestroy_Params params;
	params.RemoveKey = RemoveKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOwnerKeyButtonWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UOwnerKeyButtonWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UOwnerKeyButtonWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	UOwnerKeyButtonWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UOwnerKeyButtonWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");

	UOwnerKeyButtonWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOwnerKeyButtonWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UOwnerKeyButtonWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOwnerKeyButtonWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UOwnerKeyButtonWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.Clear
// (BlueprintCallable, BlueprintEvent)

void UOwnerKeyButtonWidget_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.Clear");

	UOwnerKeyButtonWidget_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.PanelState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOwnerKeyButtonWidget_C::PanelState(bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.PanelState");

	UOwnerKeyButtonWidget_C_PanelState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.ExecuteUbergraph_OwnerKeyButtonWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOwnerKeyButtonWidget_C::ExecuteUbergraph_OwnerKeyButtonWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.ExecuteUbergraph_OwnerKeyButtonWidget");

	UOwnerKeyButtonWidget_C_ExecuteUbergraph_OwnerKeyButtonWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
