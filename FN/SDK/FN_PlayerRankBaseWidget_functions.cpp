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

// Function PlayerRankBaseWidget.PlayerRankBaseWidget_C.GetHUD
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AWuXiaXHUDBase*          HUD                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerRankBaseWidget_C::GetHUD(class AWuXiaXHUDBase** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRankBaseWidget.PlayerRankBaseWidget_C.GetHUD");

	UPlayerRankBaseWidget_C_GetHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HUD != nullptr)
		*HUD = params.HUD;
}


// Function PlayerRankBaseWidget.PlayerRankBaseWidget_C.SetButtonState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EButtonState>      State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerRankBaseWidget_C::SetButtonState(TEnumAsByte<EButtonState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRankBaseWidget.PlayerRankBaseWidget_C.SetButtonState");

	UPlayerRankBaseWidget_C_SetButtonState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
