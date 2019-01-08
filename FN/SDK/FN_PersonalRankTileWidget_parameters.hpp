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

// Function PersonalRankTileWidget.PersonalRankTileWidget_C.SetValue
struct UPersonalRankTileWidget_C_SetValue_Params
{
	struct FString                                     Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PersonalRankTileWidget.PersonalRankTileWidget_C.PreConstruct
struct UPersonalRankTileWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PersonalRankTileWidget.PersonalRankTileWidget_C.ExecuteUbergraph_PersonalRankTileWidget
struct UPersonalRankTileWidget_C_ExecuteUbergraph_PersonalRankTileWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
