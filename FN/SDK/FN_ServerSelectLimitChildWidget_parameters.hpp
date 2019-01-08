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

// Function ServerSelectLimitChildWidget.ServerSelectLimitChildWidget_C.PreConstruct
struct UServerSelectLimitChildWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerSelectLimitChildWidget.ServerSelectLimitChildWidget_C.Init
struct UServerSelectLimitChildWidget_C_Init_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerSelectLimitChildWidget.ServerSelectLimitChildWidget_C.ResetName
struct UServerSelectLimitChildWidget_C_ResetName_Params
{
};

// Function ServerSelectLimitChildWidget.ServerSelectLimitChildWidget_C.ExecuteUbergraph_ServerSelectLimitChildWidget
struct UServerSelectLimitChildWidget_C_ExecuteUbergraph_ServerSelectLimitChildWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
