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

// Function BP_PlayerAnim_Server.BP_PlayerAnim_Server_C.WuXia_Montage_Play
struct UBP_PlayerAnim_Server_C_WuXia_Montage_Play_Params
{
	class UAnimMontage**                               MontageToPlay;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             delay_time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      section_name;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerAnim_Server.BP_PlayerAnim_Server_C.OnNotifyEnd_075E808649095A4B0EC3CB90F7262E3B
struct UBP_PlayerAnim_Server_C_OnNotifyEnd_075E808649095A4B0EC3CB90F7262E3B_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerAnim_Server.BP_PlayerAnim_Server_C.OnNotifyBegin_075E808649095A4B0EC3CB90F7262E3B
struct UBP_PlayerAnim_Server_C_OnNotifyBegin_075E808649095A4B0EC3CB90F7262E3B_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerAnim_Server.BP_PlayerAnim_Server_C.OnInterrupted_075E808649095A4B0EC3CB90F7262E3B
struct UBP_PlayerAnim_Server_C_OnInterrupted_075E808649095A4B0EC3CB90F7262E3B_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerAnim_Server.BP_PlayerAnim_Server_C.OnBlendOut_075E808649095A4B0EC3CB90F7262E3B
struct UBP_PlayerAnim_Server_C_OnBlendOut_075E808649095A4B0EC3CB90F7262E3B_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerAnim_Server.BP_PlayerAnim_Server_C.OnCompleted_075E808649095A4B0EC3CB90F7262E3B
struct UBP_PlayerAnim_Server_C_OnCompleted_075E808649095A4B0EC3CB90F7262E3B_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerAnim_Server.BP_PlayerAnim_Server_C.PlaySkill
struct UBP_PlayerAnim_Server_C_PlaySkill_Params
{
	class UAnimMontage*                                MontageToPlay;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartingPosition;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartingSection;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerAnim_Server.BP_PlayerAnim_Server_C.BlueprintInitializeAnimation
struct UBP_PlayerAnim_Server_C_BlueprintInitializeAnimation_Params
{
};

// Function BP_PlayerAnim_Server.BP_PlayerAnim_Server_C.AnimNotify_TSBW
struct UBP_PlayerAnim_Server_C_AnimNotify_TSBW_Params
{
};

// Function BP_PlayerAnim_Server.BP_PlayerAnim_Server_C.ExecuteUbergraph_BP_PlayerAnim_Server
struct UBP_PlayerAnim_Server_C_ExecuteUbergraph_BP_PlayerAnim_Server_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
