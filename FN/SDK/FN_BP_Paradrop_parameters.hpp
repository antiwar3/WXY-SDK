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

// Function BP_Paradrop.BP_Paradrop_C.GetInteractiveType
struct ABP_Paradrop_C_GetInteractiveType_Params
{
	class AWuXiaXCharacter**                           Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EInteractiveType                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Paradrop.BP_Paradrop_C.InteractiveUITips
struct ABP_Paradrop_C_InteractiveUITips_Params
{
	class AWuXiaXCharacter**                           Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Paradrop.BP_Paradrop_C.CanInteractive
struct ABP_Paradrop_C_CanInteractive_Params
{
	class AWuXiaXCharacter**                           Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ETriggerInteractiveType*                           Trigger;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Paradrop.BP_Paradrop_C.UserConstructionScript
struct ABP_Paradrop_C_UserConstructionScript_Params
{
};

// Function BP_Paradrop.BP_Paradrop_C.PlaySound
struct ABP_Paradrop_C_PlaySound_Params
{
};

// Function BP_Paradrop.BP_Paradrop_C.StopSound
struct ABP_Paradrop_C_StopSound_Params
{
};

// Function BP_Paradrop.BP_Paradrop_C.ExecuteUbergraph_BP_Paradrop
struct ABP_Paradrop_C_ExecuteUbergraph_BP_Paradrop_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
