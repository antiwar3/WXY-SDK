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

// Function ComboxItem.ComboxItem_C.Construct
struct UComboxItem_C_Construct_Params
{
};

// Function ComboxItem.ComboxItem_C.Tick
struct UComboxItem_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ComboxItem.ComboxItem_C.Init
struct UComboxItem_C_Init_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class USettingSeleteWidget_C*                      Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ComboxItem.ComboxItem_C.SetOptionStr
struct UComboxItem_C_SetOptionStr_Params
{
	struct FString                                     NewStr;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ComboxItem.ComboxItem_C.Destruct
struct UComboxItem_C_Destruct_Params
{
};

// Function ComboxItem.ComboxItem_C.CheckState
struct UComboxItem_C_CheckState_Params
{
};

// Function ComboxItem.ComboxItem_C.OnMouseLeave
struct UComboxItem_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ComboxItem.ComboxItem_C.CloseState
struct UComboxItem_C_CloseState_Params
{
};

// Function ComboxItem.ComboxItem_C.OnMouseEnter
struct UComboxItem_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ComboxItem.ComboxItem_C.ExecuteUbergraph_ComboxItem
struct UComboxItem_C_ExecuteUbergraph_ComboxItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
