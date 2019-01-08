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

// Function HallReconnectWidget.HallReconnectWidget_C.BndEvt__ReconnectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHallReconnectWidget_C::BndEvt__ReconnectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HallReconnectWidget.HallReconnectWidget_C.BndEvt__ReconnectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UHallReconnectWidget_C_BndEvt__ReconnectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HallReconnectWidget.HallReconnectWidget_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHallReconnectWidget_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HallReconnectWidget.HallReconnectWidget_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UHallReconnectWidget_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HallReconnectWidget.HallReconnectWidget_C.SetConnectState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHallReconnectWidget_C::SetConnectState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function HallReconnectWidget.HallReconnectWidget_C.SetConnectState");

	UHallReconnectWidget_C_SetConnectState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HallReconnectWidget.HallReconnectWidget_C.CheckReconnectAgain
// (BlueprintCallable, BlueprintEvent)

void UHallReconnectWidget_C::CheckReconnectAgain()
{
	static auto fn = UObject::FindObject<UFunction>("Function HallReconnectWidget.HallReconnectWidget_C.CheckReconnectAgain");

	UHallReconnectWidget_C_CheckReconnectAgain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HallReconnectWidget.HallReconnectWidget_C.ExecuteUbergraph_HallReconnectWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHallReconnectWidget_C::ExecuteUbergraph_HallReconnectWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HallReconnectWidget.HallReconnectWidget_C.ExecuteUbergraph_HallReconnectWidget");

	UHallReconnectWidget_C_ExecuteUbergraph_HallReconnectWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
