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

// Function BP_FakePlayer.BP_FakePlayer_C.UserConstructionScript
struct ABP_FakePlayer_C_UserConstructionScript_Params
{
};

// Function BP_FakePlayer.BP_FakePlayer_C.ReceiveTick
struct ABP_FakePlayer_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FakePlayer.BP_FakePlayer_C.UpdateMesh
struct ABP_FakePlayer_C_UpdateMesh_Params
{
};

// Function BP_FakePlayer.BP_FakePlayer_C.ExecuteUbergraph_BP_FakePlayer
struct ABP_FakePlayer_C_ExecuteUbergraph_BP_FakePlayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
