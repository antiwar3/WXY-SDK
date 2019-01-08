#pragma once

// Fortnite (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerRankBaseWidget.PlayerRankBaseWidget_C.GetHUD
struct UPlayerRankBaseWidget_C_GetHUD_Params
{
	class AWuXiaXHUDBase*                              HUD;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerRankBaseWidget.PlayerRankBaseWidget_C.SetButtonState
struct UPlayerRankBaseWidget_C_SetButtonState_Params
{
	TEnumAsByte<EButtonState>                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
