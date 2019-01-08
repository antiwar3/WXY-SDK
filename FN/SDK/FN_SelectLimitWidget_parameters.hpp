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

// Function SelectLimitWidget.SelectLimitWidget_C.LimitChildSelect
struct USelectLimitWidget_C_LimitChildSelect_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SelectLimitWidget.SelectLimitWidget_C.Construct
struct USelectLimitWidget_C_Construct_Params
{
};

// Function SelectLimitWidget.SelectLimitWidget_C.CreateServerList
struct USelectLimitWidget_C_CreateServerList_Params
{
	TArray<int>                                        Servers;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function SelectLimitWidget.SelectLimitWidget_C.ResetLanguage
struct USelectLimitWidget_C_ResetLanguage_Params
{
};

// Function SelectLimitWidget.SelectLimitWidget_C.SetVisiableState
struct USelectLimitWidget_C_SetVisiableState_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SelectLimitWidget.SelectLimitWidget_C.ExecuteUbergraph_SelectLimitWidget
struct USelectLimitWidget_C_ExecuteUbergraph_SelectLimitWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SelectLimitWidget.SelectLimitWidget_C.LimitChange__DelegateSignature
struct USelectLimitWidget_C_LimitChange__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
