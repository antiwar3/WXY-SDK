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

// Function BP_WuXiaX_GameInstace.BP_WuXiaX_GameInstace_C.HandleNetworkError
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENetworkFailure>*  FailureType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsServer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WuXiaX_GameInstace_C::HandleNetworkError(TEnumAsByte<ENetworkFailure>* FailureType, bool* bIsServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_GameInstace.BP_WuXiaX_GameInstace_C.HandleNetworkError");

	UBP_WuXiaX_GameInstace_C_HandleNetworkError_Params params;
	params.FailureType = FailureType;
	params.bIsServer = bIsServer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_GameInstace.BP_WuXiaX_GameInstace_C.ShowReconnectFailed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_WuXiaX_GameInstace_C::ShowReconnectFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_GameInstace.BP_WuXiaX_GameInstace_C.ShowReconnectFailed");

	UBP_WuXiaX_GameInstace_C_ShowReconnectFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_GameInstace.BP_WuXiaX_GameInstace_C.ExecuteUbergraph_BP_WuXiaX_GameInstace
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WuXiaX_GameInstace_C::ExecuteUbergraph_BP_WuXiaX_GameInstace(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_GameInstace.BP_WuXiaX_GameInstace_C.ExecuteUbergraph_BP_WuXiaX_GameInstace");

	UBP_WuXiaX_GameInstace_C_ExecuteUbergraph_BP_WuXiaX_GameInstace_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
