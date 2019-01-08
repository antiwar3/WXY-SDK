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

// Function BP_GhostTrailManager.BP_GhostTrailManager_C.AddMeshToTrail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_GhostTrailManager_C::AddMeshToTrail(class UMeshComponent* Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GhostTrailManager.BP_GhostTrailManager_C.AddMeshToTrail");

	ABP_GhostTrailManager_C_AddMeshToTrail_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GhostTrailManager.BP_GhostTrailManager_C.SetGhostMaterialParams
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FE_GhostInfo            Ghost                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GhostTrailManager_C::SetGhostMaterialParams(const struct FE_GhostInfo& Ghost)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GhostTrailManager.BP_GhostTrailManager_C.SetGhostMaterialParams");

	ABP_GhostTrailManager_C_SetGhostMaterialParams_Params params;
	params.Ghost = Ghost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GhostTrailManager.BP_GhostTrailManager_C.CalcVelocities
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GhostTrailManager_C::CalcVelocities()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GhostTrailManager.BP_GhostTrailManager_C.CalcVelocities");

	ABP_GhostTrailManager_C_CalcVelocities_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GhostTrailManager.BP_GhostTrailManager_C.RevealLastGhosts
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GhostTrailManager_C::RevealLastGhosts()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GhostTrailManager.BP_GhostTrailManager_C.RevealLastGhosts");

	ABP_GhostTrailManager_C_RevealLastGhosts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GhostTrailManager.BP_GhostTrailManager_C.UpdateGhostVisual
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FE_GhostInfo            GhostInfo                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GhostTrailManager_C::UpdateGhostVisual(const struct FE_GhostInfo& GhostInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GhostTrailManager.BP_GhostTrailManager_C.UpdateGhostVisual");

	ABP_GhostTrailManager_C_UpdateGhostVisual_Params params;
	params.GhostInfo = GhostInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GhostTrailManager.BP_GhostTrailManager_C.SpawnGhosts
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GhostTrailManager_C::SpawnGhosts()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GhostTrailManager.BP_GhostTrailManager_C.SpawnGhosts");

	ABP_GhostTrailManager_C_SpawnGhosts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GhostTrailManager.BP_GhostTrailManager_C.UpdateGhostInfos
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GhostTrailManager_C::UpdateGhostInfos()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GhostTrailManager.BP_GhostTrailManager_C.UpdateGhostInfos");

	ABP_GhostTrailManager_C_UpdateGhostInfos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GhostTrailManager.BP_GhostTrailManager_C.SpawnSkeletalGhost
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  MasterStaticMeshComponent      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FE_GhostInfo            GhostInfo                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_GhostTrailManager_C::SpawnSkeletalGhost(class USkeletalMeshComponent* MasterStaticMeshComponent, struct FE_GhostInfo* GhostInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GhostTrailManager.BP_GhostTrailManager_C.SpawnSkeletalGhost");

	ABP_GhostTrailManager_C_SpawnSkeletalGhost_Params params;
	params.MasterStaticMeshComponent = MasterStaticMeshComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GhostInfo != nullptr)
		*GhostInfo = params.GhostInfo;
}


// Function BP_GhostTrailManager.BP_GhostTrailManager_C.SpawnTimer
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GhostTrailManager_C::SpawnTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GhostTrailManager.BP_GhostTrailManager_C.SpawnTimer");

	ABP_GhostTrailManager_C_SpawnTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GhostTrailManager.BP_GhostTrailManager_C.SpawnStaticGhost
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    MasterStaticMeshComponent      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FE_GhostInfo            GhostInfo                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_GhostTrailManager_C::SpawnStaticGhost(class UStaticMeshComponent* MasterStaticMeshComponent, struct FE_GhostInfo* GhostInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GhostTrailManager.BP_GhostTrailManager_C.SpawnStaticGhost");

	ABP_GhostTrailManager_C_SpawnStaticGhost_Params params;
	params.MasterStaticMeshComponent = MasterStaticMeshComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GhostInfo != nullptr)
		*GhostInfo = params.GhostInfo;
}


// Function BP_GhostTrailManager.BP_GhostTrailManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GhostTrailManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GhostTrailManager.BP_GhostTrailManager_C.UserConstructionScript");

	ABP_GhostTrailManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GhostTrailManager.BP_GhostTrailManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GhostTrailManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GhostTrailManager.BP_GhostTrailManager_C.ReceiveTick");

	ABP_GhostTrailManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GhostTrailManager.BP_GhostTrailManager_C.ExecuteUbergraph_BP_GhostTrailManager
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GhostTrailManager_C::ExecuteUbergraph_BP_GhostTrailManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GhostTrailManager.BP_GhostTrailManager_C.ExecuteUbergraph_BP_GhostTrailManager");

	ABP_GhostTrailManager_C_ExecuteUbergraph_BP_GhostTrailManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GhostTrailManager.BP_GhostTrailManager_C.GhostSpawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FE_GhostInfo            GhostInfo                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GhostTrailManager_C::GhostSpawned__DelegateSignature(const struct FE_GhostInfo& GhostInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GhostTrailManager.BP_GhostTrailManager_C.GhostSpawned__DelegateSignature");

	ABP_GhostTrailManager_C_GhostSpawned__DelegateSignature_Params params;
	params.GhostInfo = GhostInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
