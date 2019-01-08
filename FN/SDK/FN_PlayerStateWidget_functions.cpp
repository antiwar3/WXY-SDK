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

// Function PlayerStateWidget.PlayerStateWidget_C.SetTextureStateNull
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerStateWidget_C::SetTextureStateNull()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStateWidget.PlayerStateWidget_C.SetTextureStateNull");

	UPlayerStateWidget_C_SetTextureStateNull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStateWidget.PlayerStateWidget_C.SetState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerFightState              State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStateWidget_C::SetState(EPlayerFightState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStateWidget.PlayerStateWidget_C.SetState");

	UPlayerStateWidget_C_SetState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStateWidget.PlayerStateWidget_C.ExecuteUbergraph_PlayerStateWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStateWidget_C::ExecuteUbergraph_PlayerStateWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStateWidget.PlayerStateWidget_C.ExecuteUbergraph_PlayerStateWidget");

	UPlayerStateWidget_C_ExecuteUbergraph_PlayerStateWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
