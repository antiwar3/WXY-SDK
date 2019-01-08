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

// Function RoomChildWidget.RoomChildWidget_C.SetSelectState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URoomChildWidget_C::SetSelectState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomChildWidget.RoomChildWidget_C.SetSelectState");

	URoomChildWidget_C_SetSelectState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomChildWidget.RoomChildWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void URoomChildWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomChildWidget.RoomChildWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	URoomChildWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomChildWidget.RoomChildWidget_C.ResetServerName
// (BlueprintCallable, BlueprintEvent)

void URoomChildWidget_C::ResetServerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomChildWidget.RoomChildWidget_C.ResetServerName");

	URoomChildWidget_C_ResetServerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomChildWidget.RoomChildWidget_C.Init
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUIRoomInfo*            Info                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void URoomChildWidget_C::Init(struct FUIRoomInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomChildWidget.RoomChildWidget_C.Init");

	URoomChildWidget_C_Init_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomChildWidget.RoomChildWidget_C.ExecuteUbergraph_RoomChildWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URoomChildWidget_C::ExecuteUbergraph_RoomChildWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomChildWidget.RoomChildWidget_C.ExecuteUbergraph_RoomChildWidget");

	URoomChildWidget_C_ExecuteUbergraph_RoomChildWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomChildWidget.RoomChildWidget_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URoomChildWidget_C*      Info                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URoomChildWidget_C::OnClick__DelegateSignature(class URoomChildWidget_C* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomChildWidget.RoomChildWidget_C.OnClick__DelegateSignature");

	URoomChildWidget_C_OnClick__DelegateSignature_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
