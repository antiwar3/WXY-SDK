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

// Function PLayerTalkWidget.PLayerTalkWidget_C.SetState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPLayerTalkWidget_C::SetState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLayerTalkWidget.PLayerTalkWidget_C.SetState");

	UPLayerTalkWidget_C_SetState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLayerTalkWidget.PLayerTalkWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPLayerTalkWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLayerTalkWidget.PLayerTalkWidget_C.Tick");

	UPLayerTalkWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLayerTalkWidget.PLayerTalkWidget_C.ExecuteUbergraph_PLayerTalkWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPLayerTalkWidget_C::ExecuteUbergraph_PLayerTalkWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLayerTalkWidget.PLayerTalkWidget_C.ExecuteUbergraph_PLayerTalkWidget");

	UPLayerTalkWidget_C_ExecuteUbergraph_PLayerTalkWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
