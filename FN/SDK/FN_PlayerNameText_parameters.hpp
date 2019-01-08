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

// Function PlayerNameText.PlayerNameText_C.SetMaster
struct UPlayerNameText_C_SetMaster_Params
{
	bool                                               IsMaster;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerNameText.PlayerNameText_C.SetOnlineMode
struct UPlayerNameText_C_SetOnlineMode_Params
{
	int                                                Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerNameText.PlayerNameText_C.SetReadeState
struct UPlayerNameText_C_SetReadeState_Params
{
	int                                                ReadyState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerNameText.PlayerNameText_C.SetTalkState
struct UPlayerNameText_C_SetTalkState_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerNameText.PlayerNameText_C.SetRoomState
struct UPlayerNameText_C_SetRoomState_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerNameText.PlayerNameText_C.ExecuteUbergraph_PlayerNameText
struct UPlayerNameText_C_ExecuteUbergraph_PlayerNameText_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
