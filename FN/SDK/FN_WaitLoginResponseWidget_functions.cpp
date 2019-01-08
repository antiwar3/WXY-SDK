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

// Function WaitLoginResponseWidget.WaitLoginResponseWidget_C.SetSliderPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWaitLoginResponseWidget_C::SetSliderPercent(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaitLoginResponseWidget.WaitLoginResponseWidget_C.SetSliderPercent");

	UWaitLoginResponseWidget_C_SetSliderPercent_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaitLoginResponseWidget.WaitLoginResponseWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWaitLoginResponseWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaitLoginResponseWidget.WaitLoginResponseWidget_C.Tick");

	UWaitLoginResponseWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaitLoginResponseWidget.WaitLoginResponseWidget_C.SetIsConnecting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsConnecting                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWaitLoginResponseWidget_C::SetIsConnecting(bool IsConnecting, ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaitLoginResponseWidget.WaitLoginResponseWidget_C.SetIsConnecting");

	UWaitLoginResponseWidget_C_SetIsConnecting_Params params;
	params.IsConnecting = IsConnecting;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaitLoginResponseWidget.WaitLoginResponseWidget_C.LoginSuccess
// (BlueprintCallable, BlueprintEvent)

void UWaitLoginResponseWidget_C::LoginSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaitLoginResponseWidget.WaitLoginResponseWidget_C.LoginSuccess");

	UWaitLoginResponseWidget_C_LoginSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaitLoginResponseWidget.WaitLoginResponseWidget_C.BndEvt__CancelLogin_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWaitLoginResponseWidget_C::BndEvt__CancelLogin_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaitLoginResponseWidget.WaitLoginResponseWidget_C.BndEvt__CancelLogin_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");

	UWaitLoginResponseWidget_C_BndEvt__CancelLogin_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaitLoginResponseWidget.WaitLoginResponseWidget_C.ExecuteUbergraph_WaitLoginResponseWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWaitLoginResponseWidget_C::ExecuteUbergraph_WaitLoginResponseWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaitLoginResponseWidget.WaitLoginResponseWidget_C.ExecuteUbergraph_WaitLoginResponseWidget");

	UWaitLoginResponseWidget_C_ExecuteUbergraph_WaitLoginResponseWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaitLoginResponseWidget.WaitLoginResponseWidget_C.LoginCancelDispatch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWaitLoginResponseWidget_C::LoginCancelDispatch__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaitLoginResponseWidget.WaitLoginResponseWidget_C.LoginCancelDispatch__DelegateSignature");

	UWaitLoginResponseWidget_C_LoginCancelDispatch__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaitLoginResponseWidget.WaitLoginResponseWidget_C.LoginComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWaitLoginResponseWidget_C::LoginComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaitLoginResponseWidget.WaitLoginResponseWidget_C.LoginComplete__DelegateSignature");

	UWaitLoginResponseWidget_C_LoginComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
