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

// Function KeyInputWidgetBase.KeyInputWidgetBase_C.GetHUD
struct UKeyInputWidgetBase_C_GetHUD_Params
{
	class AWuXiaXHUDBase*                              HUD;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KeyInputWidgetBase.KeyInputWidgetBase_C.GetGameKeyStr
struct UKeyInputWidgetBase_C_GetGameKeyStr_Params
{
	struct FKey                                        InputKey;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       KeyName;                                                  // (Parm, OutParm)
};

// Function KeyInputWidgetBase.KeyInputWidgetBase_C.CheckSameKey
struct UKeyInputWidgetBase_C_CheckSameKey_Params
{
	struct FInputChord                                 Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function KeyInputWidgetBase.KeyInputWidgetBase_C.InitKey
struct UKeyInputWidgetBase_C_InitKey_Params
{
	class UBP_UserSettingUI_C*                         Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
