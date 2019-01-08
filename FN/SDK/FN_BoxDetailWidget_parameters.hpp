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

// Function BoxDetailWidget.BoxDetailWidget_C.SetInfo
struct UBoxDetailWidget_C_SetInfo_Params
{
	struct FString                                     descript;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BoxDetailWidget.BoxDetailWidget_C.ExecuteUbergraph_BoxDetailWidget
struct UBoxDetailWidget_C_ExecuteUbergraph_BoxDetailWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
