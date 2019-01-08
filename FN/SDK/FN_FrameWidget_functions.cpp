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

// Function FrameWidget.FrameWidget_C.Start
// (BlueprintCallable, BlueprintEvent)

void UFrameWidget_C::Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrameWidget.FrameWidget_C.Start");

	UFrameWidget_C_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrameWidget.FrameWidget_C.SetTickFrame
// (BlueprintCallable, BlueprintEvent)

void UFrameWidget_C::SetTickFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrameWidget.FrameWidget_C.SetTickFrame");

	UFrameWidget_C_SetTickFrame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrameWidget.FrameWidget_C.Stop
// (BlueprintCallable, BlueprintEvent)

void UFrameWidget_C::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrameWidget.FrameWidget_C.Stop");

	UFrameWidget_C_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrameWidget.FrameWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFrameWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrameWidget.FrameWidget_C.Construct");

	UFrameWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrameWidget.FrameWidget_C.ExecuteUbergraph_FrameWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFrameWidget_C::ExecuteUbergraph_FrameWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrameWidget.FrameWidget_C.ExecuteUbergraph_FrameWidget");

	UFrameWidget_C_ExecuteUbergraph_FrameWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
