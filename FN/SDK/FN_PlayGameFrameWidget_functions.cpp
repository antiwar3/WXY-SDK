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

// Function PlayGameFrameWidget.PlayGameFrameWidget_C.SetImageState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EButtonState>      State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayGameFrameWidget_C::SetImageState(TEnumAsByte<EButtonState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameFrameWidget.PlayGameFrameWidget_C.SetImageState");

	UPlayGameFrameWidget_C_SetImageState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameFrameWidget.PlayGameFrameWidget_C.ExecuteUbergraph_PlayGameFrameWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayGameFrameWidget_C::ExecuteUbergraph_PlayGameFrameWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameFrameWidget.PlayGameFrameWidget_C.ExecuteUbergraph_PlayGameFrameWidget");

	UPlayGameFrameWidget_C_ExecuteUbergraph_PlayGameFrameWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
