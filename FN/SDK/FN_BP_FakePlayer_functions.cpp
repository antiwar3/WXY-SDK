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

// Function BP_FakePlayer.BP_FakePlayer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FakePlayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FakePlayer.BP_FakePlayer_C.UserConstructionScript");

	ABP_FakePlayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FakePlayer.BP_FakePlayer_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FakePlayer_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FakePlayer.BP_FakePlayer_C.ReceiveTick");

	ABP_FakePlayer_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FakePlayer.BP_FakePlayer_C.UpdateMesh
// (Event, Public, BlueprintEvent)

void ABP_FakePlayer_C::UpdateMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FakePlayer.BP_FakePlayer_C.UpdateMesh");

	ABP_FakePlayer_C_UpdateMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FakePlayer.BP_FakePlayer_C.ExecuteUbergraph_BP_FakePlayer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FakePlayer_C::ExecuteUbergraph_BP_FakePlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FakePlayer.BP_FakePlayer_C.ExecuteUbergraph_BP_FakePlayer");

	ABP_FakePlayer_C_ExecuteUbergraph_BP_FakePlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
