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

// Function OwnerKeyWidget.OwnerKeyWidget_C.SetName
struct UOwnerKeyWidget_C_SetName_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function OwnerKeyWidget.OwnerKeyWidget_C.Init
struct UOwnerKeyWidget_C_Init_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OwnerKeyWidget.OwnerKeyWidget_C.SetInfo
struct UOwnerKeyWidget_C_SetInfo_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OwnerKeyWidget.OwnerKeyWidget_C.ExecuteUbergraph_OwnerKeyWidget
struct UOwnerKeyWidget_C_ExecuteUbergraph_OwnerKeyWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OwnerKeyWidget.OwnerKeyWidget_C.RemoveKey__DelegateSignature
struct UOwnerKeyWidget_C_RemoveKey__DelegateSignature_Params
{
	class UOwnerKeyWidget_C*                           Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
