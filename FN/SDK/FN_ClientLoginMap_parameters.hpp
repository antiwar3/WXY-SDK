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

// Function ClientLoginMap.ClientLoginMap_C.ReceiveBeginPlay
struct AClientLoginMap_C_ReceiveBeginPlay_Params
{
};

// Function ClientLoginMap.ClientLoginMap_C.DebugSetUId
struct AClientLoginMap_C_DebugSetUId_Params
{
};

// Function ClientLoginMap.ClientLoginMap_C.ExecuteUbergraph_ClientLoginMap
struct AClientLoginMap_C_ExecuteUbergraph_ClientLoginMap_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
