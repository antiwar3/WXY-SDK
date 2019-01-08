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

// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.GetTrailActive
struct UBP_GhostTrailComponent_C_GetTrailActive_Params
{
	bool                                               Active;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.SetTrailActive
struct UBP_GhostTrailComponent_C_SetTrailActive_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.MeshMustCastTrails
struct UBP_GhostTrailComponent_C_MeshMustCastTrails_Params
{
	class USceneComponent*                             Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.AddMeshesToGhost
struct UBP_GhostTrailComponent_C_AddMeshesToGhost_Params
{
};

// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.InitManager
struct UBP_GhostTrailComponent_C_InitManager_Params
{
};

// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.ReceiveBeginPlay
struct UBP_GhostTrailComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.ExecuteUbergraph_BP_GhostTrailComponent
struct UBP_GhostTrailComponent_C_ExecuteUbergraph_BP_GhostTrailComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
