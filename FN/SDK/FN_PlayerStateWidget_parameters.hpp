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

// Function PlayerStateWidget.PlayerStateWidget_C.SetTextureStateNull
struct UPlayerStateWidget_C_SetTextureStateNull_Params
{
};

// Function PlayerStateWidget.PlayerStateWidget_C.SetState
struct UPlayerStateWidget_C_SetState_Params
{
	EPlayerFightState                                  State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStateWidget.PlayerStateWidget_C.ExecuteUbergraph_PlayerStateWidget
struct UPlayerStateWidget_C_ExecuteUbergraph_PlayerStateWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
