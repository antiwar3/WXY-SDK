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

// Function CustomGameComboItem.CustomGameComboItem_C.CheckState
struct UCustomGameComboItem_C_CheckState_Params
{
};

// Function CustomGameComboItem.CustomGameComboItem_C.SetIsMainItem
struct UCustomGameComboItem_C_SetIsMainItem_Params
{
	bool                                               Main;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomGameComboItem.CustomGameComboItem_C.SetNameStr
struct UCustomGameComboItem_C_SetNameStr_Params
{
	struct FString                                     Str;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function CustomGameComboItem.CustomGameComboItem_C.SetOptionStr
struct UCustomGameComboItem_C_SetOptionStr_Params
{
	struct FString                                     Str;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function CustomGameComboItem.CustomGameComboItem_C.Construct
struct UCustomGameComboItem_C_Construct_Params
{
};

// Function CustomGameComboItem.CustomGameComboItem_C.Init
struct UCustomGameComboItem_C_Init_Params
{
	class UCustomGameComboBox_C*                       Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CustomGameComboItem.CustomGameComboItem_C.Destruct
struct UCustomGameComboItem_C_Destruct_Params
{
};

// Function CustomGameComboItem.CustomGameComboItem_C.ExecuteUbergraph_CustomGameComboItem
struct UCustomGameComboItem_C_ExecuteUbergraph_CustomGameComboItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
