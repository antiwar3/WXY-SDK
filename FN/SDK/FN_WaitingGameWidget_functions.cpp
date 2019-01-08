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

// Function WaitingGameWidget.WaitingGameWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWaitingGameWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaitingGameWidget.WaitingGameWidget_C.Tick");

	UWaitingGameWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaitingGameWidget.WaitingGameWidget_C.SetConnectStr
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 connect                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWaitingGameWidget_C::SetConnectStr(const struct FString& connect)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaitingGameWidget.WaitingGameWidget_C.SetConnectStr");

	UWaitingGameWidget_C_SetConnectStr_Params params;
	params.connect = connect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaitingGameWidget.WaitingGameWidget_C.StartTimeCount
// (BlueprintCallable, BlueprintEvent)

void UWaitingGameWidget_C::StartTimeCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaitingGameWidget.WaitingGameWidget_C.StartTimeCount");

	UWaitingGameWidget_C_StartTimeCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaitingGameWidget.WaitingGameWidget_C.ExecuteUbergraph_WaitingGameWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWaitingGameWidget_C::ExecuteUbergraph_WaitingGameWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaitingGameWidget.WaitingGameWidget_C.ExecuteUbergraph_WaitingGameWidget");

	UWaitingGameWidget_C_ExecuteUbergraph_WaitingGameWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
