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

// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.GetTrailActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Active                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GhostTrailComponent_C::GetTrailActive(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.GetTrailActive");

	UBP_GhostTrailComponent_C_GetTrailActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Active != nullptr)
		*Active = params.Active;
}


// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.SetTrailActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GhostTrailComponent_C::SetTrailActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.SetTrailActive");

	UBP_GhostTrailComponent_C_SetTrailActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.MeshMustCastTrails
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USceneComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_GhostTrailComponent_C::MeshMustCastTrails(class USceneComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.MeshMustCastTrails");

	UBP_GhostTrailComponent_C_MeshMustCastTrails_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.AddMeshesToGhost
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_GhostTrailComponent_C::AddMeshesToGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.AddMeshesToGhost");

	UBP_GhostTrailComponent_C_AddMeshesToGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.InitManager
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_GhostTrailComponent_C::InitManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.InitManager");

	UBP_GhostTrailComponent_C_InitManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_GhostTrailComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.ReceiveBeginPlay");

	UBP_GhostTrailComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.ExecuteUbergraph_BP_GhostTrailComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GhostTrailComponent_C::ExecuteUbergraph_BP_GhostTrailComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.ExecuteUbergraph_BP_GhostTrailComponent");

	UBP_GhostTrailComponent_C_ExecuteUbergraph_BP_GhostTrailComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
