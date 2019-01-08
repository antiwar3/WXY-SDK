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

// Function PlayerNumProgressBar.PlayerNumProgressBar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerNumProgressBar_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerNumProgressBar.PlayerNumProgressBar_C.Tick");

	UPlayerNumProgressBar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerNumProgressBar.PlayerNumProgressBar_C.SetRangeInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerNumProgressBar_C::SetRangeInfo(int Min, int Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerNumProgressBar.PlayerNumProgressBar_C.SetRangeInfo");

	UPlayerNumProgressBar_C_SetRangeInfo_Params params;
	params.Min = Min;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerNumProgressBar.PlayerNumProgressBar_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerNumProgressBar_C::BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerNumProgressBar.PlayerNumProgressBar_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	UPlayerNumProgressBar_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerNumProgressBar.PlayerNumProgressBar_C.ValueChange
// (BlueprintCallable, BlueprintEvent)

void UPlayerNumProgressBar_C::ValueChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerNumProgressBar.PlayerNumProgressBar_C.ValueChange");

	UPlayerNumProgressBar_C_ValueChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerNumProgressBar.PlayerNumProgressBar_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerNumProgressBar_C::BndEvt__Slider_0_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerNumProgressBar.PlayerNumProgressBar_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature");

	UPlayerNumProgressBar_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerNumProgressBar.PlayerNumProgressBar_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerNumProgressBar_C::BndEvt__Slider_0_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerNumProgressBar.PlayerNumProgressBar_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature");

	UPlayerNumProgressBar_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerNumProgressBar.PlayerNumProgressBar_C.SetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerNumProgressBar_C::SetPercent(float percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerNumProgressBar.PlayerNumProgressBar_C.SetPercent");

	UPlayerNumProgressBar_C_SetPercent_Params params;
	params.percent = percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerNumProgressBar.PlayerNumProgressBar_C.SetEnable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerNumProgressBar_C::SetEnable(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerNumProgressBar.PlayerNumProgressBar_C.SetEnable");

	UPlayerNumProgressBar_C_SetEnable_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerNumProgressBar.PlayerNumProgressBar_C.ExecuteUbergraph_PlayerNumProgressBar
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerNumProgressBar_C::ExecuteUbergraph_PlayerNumProgressBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerNumProgressBar.PlayerNumProgressBar_C.ExecuteUbergraph_PlayerNumProgressBar");

	UPlayerNumProgressBar_C_ExecuteUbergraph_PlayerNumProgressBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerNumProgressBar.PlayerNumProgressBar_C.CurrentValueChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerNumProgressBar_C::CurrentValueChange__DelegateSignature(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerNumProgressBar.PlayerNumProgressBar_C.CurrentValueChange__DelegateSignature");

	UPlayerNumProgressBar_C_CurrentValueChange__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
