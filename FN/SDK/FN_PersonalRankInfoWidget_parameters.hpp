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

// Function PersonalRankInfoWidget.PersonalRankInfoWidget_C.FloatStr
struct UPersonalRankInfoWidget_C_FloatStr_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Precision;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PersonalRankInfoWidget.PersonalRankInfoWidget_C.SetInfo
struct UPersonalRankInfoWidget_C_SetInfo_Params
{
	struct FWuXiaX_FUserRank                           rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PersonalRankInfoWidget.PersonalRankInfoWidget_C.Clear
struct UPersonalRankInfoWidget_C_Clear_Params
{
};

// Function PersonalRankInfoWidget.PersonalRankInfoWidget_C.ExecuteUbergraph_PersonalRankInfoWidget
struct UPersonalRankInfoWidget_C_ExecuteUbergraph_PersonalRankInfoWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
