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

// Function PlayerReconnectWidget.PlayerReconnectWidget_C.ShowConnectFail
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerReconnectWidget_C::ShowConnectFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerReconnectWidget.PlayerReconnectWidget_C.ShowConnectFail");

	UPlayerReconnectWidget_C_ShowConnectFail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerReconnectWidget.PlayerReconnectWidget_C.ShowConnectSuccess
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerReconnectWidget_C::ShowConnectSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerReconnectWidget.PlayerReconnectWidget_C.ShowConnectSuccess");

	UPlayerReconnectWidget_C_ShowConnectSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerReconnectWidget.PlayerReconnectWidget_C.ShowTryConnect
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerReconnectWidget_C::ShowTryConnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerReconnectWidget.PlayerReconnectWidget_C.ShowTryConnect");

	UPlayerReconnectWidget_C_ShowTryConnect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerReconnectWidget.PlayerReconnectWidget_C.SetConnectState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerReconnectWidget_C::SetConnectState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerReconnectWidget.PlayerReconnectWidget_C.SetConnectState");

	UPlayerReconnectWidget_C_SetConnectState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerReconnectWidget.PlayerReconnectWidget_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerReconnectWidget_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerReconnectWidget.PlayerReconnectWidget_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");

	UPlayerReconnectWidget_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerReconnectWidget.PlayerReconnectWidget_C.BndEvt__ReconnectButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerReconnectWidget_C::BndEvt__ReconnectButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerReconnectWidget.PlayerReconnectWidget_C.BndEvt__ReconnectButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");

	UPlayerReconnectWidget_C_BndEvt__ReconnectButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerReconnectWidget.PlayerReconnectWidget_C.BndEvt__ReconnectButton_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerReconnectWidget_C::BndEvt__ReconnectButton_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerReconnectWidget.PlayerReconnectWidget_C.BndEvt__ReconnectButton_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature");

	UPlayerReconnectWidget_C_BndEvt__ReconnectButton_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerReconnectWidget.PlayerReconnectWidget_C.ExecuteUbergraph_PlayerReconnectWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerReconnectWidget_C::ExecuteUbergraph_PlayerReconnectWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerReconnectWidget.PlayerReconnectWidget_C.ExecuteUbergraph_PlayerReconnectWidget");

	UPlayerReconnectWidget_C_ExecuteUbergraph_PlayerReconnectWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerReconnectWidget.PlayerReconnectWidget_C.BackToHall__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPlayerReconnectWidget_C::BackToHall__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerReconnectWidget.PlayerReconnectWidget_C.BackToHall__DelegateSignature");

	UPlayerReconnectWidget_C_BackToHall__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerReconnectWidget.PlayerReconnectWidget_C.Reconnect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPlayerReconnectWidget_C::Reconnect__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerReconnectWidget.PlayerReconnectWidget_C.Reconnect__DelegateSignature");

	UPlayerReconnectWidget_C_Reconnect__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
