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

// Function ClientLoginMap.ClientLoginMap_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AClientLoginMap_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ClientLoginMap.ClientLoginMap_C.ReceiveBeginPlay");

	AClientLoginMap_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClientLoginMap.ClientLoginMap_C.DebugSetUId
// (BlueprintCallable, BlueprintEvent)

void AClientLoginMap_C::DebugSetUId()
{
	static auto fn = UObject::FindObject<UFunction>("Function ClientLoginMap.ClientLoginMap_C.DebugSetUId");

	AClientLoginMap_C_DebugSetUId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClientLoginMap.ClientLoginMap_C.ExecuteUbergraph_ClientLoginMap
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AClientLoginMap_C::ExecuteUbergraph_ClientLoginMap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ClientLoginMap.ClientLoginMap_C.ExecuteUbergraph_ClientLoginMap");

	AClientLoginMap_C_ExecuteUbergraph_ClientLoginMap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
