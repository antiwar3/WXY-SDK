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

// Function RoomTimeCalculate.RoomTimeCalculate_C.StartCalculateTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Master                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URoomTimeCalculate_C::StartCalculateTime(bool Master)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTimeCalculate.RoomTimeCalculate_C.StartCalculateTime");

	URoomTimeCalculate_C_StartCalculateTime_Params params;
	params.Master = Master;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomTimeCalculate.RoomTimeCalculate_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URoomTimeCalculate_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTimeCalculate.RoomTimeCalculate_C.Tick");

	URoomTimeCalculate_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomTimeCalculate.RoomTimeCalculate_C.End
// (BlueprintCallable, BlueprintEvent)

void URoomTimeCalculate_C::End()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTimeCalculate.RoomTimeCalculate_C.End");

	URoomTimeCalculate_C_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomTimeCalculate.RoomTimeCalculate_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void URoomTimeCalculate_C::BndEvt__Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTimeCalculate.RoomTimeCalculate_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	URoomTimeCalculate_C_BndEvt__Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomTimeCalculate.RoomTimeCalculate_C.CancelCalculate
// (BlueprintCallable, BlueprintEvent)

void URoomTimeCalculate_C::CancelCalculate()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTimeCalculate.RoomTimeCalculate_C.CancelCalculate");

	URoomTimeCalculate_C_CancelCalculate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomTimeCalculate.RoomTimeCalculate_C.ExecuteUbergraph_RoomTimeCalculate
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URoomTimeCalculate_C::ExecuteUbergraph_RoomTimeCalculate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTimeCalculate.RoomTimeCalculate_C.ExecuteUbergraph_RoomTimeCalculate");

	URoomTimeCalculate_C_ExecuteUbergraph_RoomTimeCalculate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomTimeCalculate.RoomTimeCalculate_C.MasterQuitTick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void URoomTimeCalculate_C::MasterQuitTick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTimeCalculate.RoomTimeCalculate_C.MasterQuitTick__DelegateSignature");

	URoomTimeCalculate_C_MasterQuitTick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomTimeCalculate.RoomTimeCalculate_C.TimeEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void URoomTimeCalculate_C::TimeEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTimeCalculate.RoomTimeCalculate_C.TimeEnd__DelegateSignature");

	URoomTimeCalculate_C_TimeEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
