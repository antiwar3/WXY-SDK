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

// Function BP_GhostTrailManager.BP_GhostTrailManager_C.AddMeshToTrail
struct ABP_GhostTrailManager_C_AddMeshToTrail_Params
{
	class UMeshComponent*                              Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_GhostTrailManager.BP_GhostTrailManager_C.SetGhostMaterialParams
struct ABP_GhostTrailManager_C_SetGhostMaterialParams_Params
{
	struct FE_GhostInfo                                Ghost;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GhostTrailManager.BP_GhostTrailManager_C.CalcVelocities
struct ABP_GhostTrailManager_C_CalcVelocities_Params
{
};

// Function BP_GhostTrailManager.BP_GhostTrailManager_C.RevealLastGhosts
struct ABP_GhostTrailManager_C_RevealLastGhosts_Params
{
};

// Function BP_GhostTrailManager.BP_GhostTrailManager_C.UpdateGhostVisual
struct ABP_GhostTrailManager_C_UpdateGhostVisual_Params
{
	struct FE_GhostInfo                                GhostInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GhostTrailManager.BP_GhostTrailManager_C.SpawnGhosts
struct ABP_GhostTrailManager_C_SpawnGhosts_Params
{
};

// Function BP_GhostTrailManager.BP_GhostTrailManager_C.UpdateGhostInfos
struct ABP_GhostTrailManager_C_UpdateGhostInfos_Params
{
};

// Function BP_GhostTrailManager.BP_GhostTrailManager_C.SpawnSkeletalGhost
struct ABP_GhostTrailManager_C_SpawnSkeletalGhost_Params
{
	class USkeletalMeshComponent*                      MasterStaticMeshComponent;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FE_GhostInfo                                GhostInfo;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GhostTrailManager.BP_GhostTrailManager_C.SpawnTimer
struct ABP_GhostTrailManager_C_SpawnTimer_Params
{
};

// Function BP_GhostTrailManager.BP_GhostTrailManager_C.SpawnStaticGhost
struct ABP_GhostTrailManager_C_SpawnStaticGhost_Params
{
	class UStaticMeshComponent*                        MasterStaticMeshComponent;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FE_GhostInfo                                GhostInfo;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GhostTrailManager.BP_GhostTrailManager_C.UserConstructionScript
struct ABP_GhostTrailManager_C_UserConstructionScript_Params
{
};

// Function BP_GhostTrailManager.BP_GhostTrailManager_C.ReceiveTick
struct ABP_GhostTrailManager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GhostTrailManager.BP_GhostTrailManager_C.ExecuteUbergraph_BP_GhostTrailManager
struct ABP_GhostTrailManager_C_ExecuteUbergraph_BP_GhostTrailManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GhostTrailManager.BP_GhostTrailManager_C.GhostSpawned__DelegateSignature
struct ABP_GhostTrailManager_C_GhostSpawned__DelegateSignature_Params
{
	struct FE_GhostInfo                                GhostInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
