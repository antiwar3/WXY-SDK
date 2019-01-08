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

// Function CustomGameComboBox.CustomGameComboBox_C.SetOpenState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomGameComboBox_C::SetOpenState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameComboBox.CustomGameComboBox_C.SetOpenState");

	UCustomGameComboBox_C_SetOpenState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameComboBox.CustomGameComboBox_C.OnGenerateWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UCustomGameComboBox_C::OnGenerateWidget_1(const struct FString& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameComboBox.CustomGameComboBox_C.OnGenerateWidget_1");

	UCustomGameComboBox_C_OnGenerateWidget_1_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomGameComboBox.CustomGameComboBox_C.BndEvt__ComboBoxString_0_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomGameComboBox_C::BndEvt__ComboBoxString_0_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameComboBox.CustomGameComboBox_C.BndEvt__ComboBoxString_0_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	UCustomGameComboBox_C_BndEvt__ComboBoxString_0_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameComboBox.CustomGameComboBox_C.BndEvt__ComboBoxString_0_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature
// (BlueprintEvent)

void UCustomGameComboBox_C::BndEvt__ComboBoxString_0_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameComboBox.CustomGameComboBox_C.BndEvt__ComboBoxString_0_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature");

	UCustomGameComboBox_C_BndEvt__ComboBoxString_0_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameComboBox.CustomGameComboBox_C.CreateOptions
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Options                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCustomGameComboBox_C::CreateOptions(TArray<struct FString> Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameComboBox.CustomGameComboBox_C.CreateOptions");

	UCustomGameComboBox_C_CreateOptions_Params params;
	params.Options = Options;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameComboBox.CustomGameComboBox_C.SetOption
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomGameComboBox_C::SetOption(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameComboBox.CustomGameComboBox_C.SetOption");

	UCustomGameComboBox_C_SetOption_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameComboBox.CustomGameComboBox_C.OnChildCreate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomGameComboItem_C*  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCustomGameComboBox_C::OnChildCreate(class UCustomGameComboItem_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameComboBox.CustomGameComboBox_C.OnChildCreate");

	UCustomGameComboBox_C_OnChildCreate_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameComboBox.CustomGameComboBox_C.OnChildDestruct
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomGameComboItem_C*  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCustomGameComboBox_C::OnChildDestruct(class UCustomGameComboItem_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameComboBox.CustomGameComboBox_C.OnChildDestruct");

	UCustomGameComboBox_C_OnChildDestruct_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameComboBox.CustomGameComboBox_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomGameComboBox_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameComboBox.CustomGameComboBox_C.Tick");

	UCustomGameComboBox_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameComboBox.CustomGameComboBox_C.ExecuteUbergraph_CustomGameComboBox
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomGameComboBox_C::ExecuteUbergraph_CustomGameComboBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameComboBox.CustomGameComboBox_C.ExecuteUbergraph_CustomGameComboBox");

	UCustomGameComboBox_C_ExecuteUbergraph_CustomGameComboBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameComboBox.CustomGameComboBox_C.OptionChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomGameComboBox_C::OptionChange__DelegateSignature(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameComboBox.CustomGameComboBox_C.OptionChange__DelegateSignature");

	UCustomGameComboBox_C_OptionChange__DelegateSignature_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
