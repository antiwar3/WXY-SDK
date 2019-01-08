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

// Function BP_WuXiaX_GameInstace.BP_WuXiaX_GameInstace_C.HandleNetworkError
struct UBP_WuXiaX_GameInstace_C_HandleNetworkError_Params
{
	TEnumAsByte<ENetworkFailure>*                      FailureType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsServer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WuXiaX_GameInstace.BP_WuXiaX_GameInstace_C.ShowReconnectFailed
struct UBP_WuXiaX_GameInstace_C_ShowReconnectFailed_Params
{
};

// Function BP_WuXiaX_GameInstace.BP_WuXiaX_GameInstace_C.ExecuteUbergraph_BP_WuXiaX_GameInstace
struct UBP_WuXiaX_GameInstace_C_ExecuteUbergraph_BP_WuXiaX_GameInstace_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
