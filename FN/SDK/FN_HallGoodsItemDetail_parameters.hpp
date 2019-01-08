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

// Function HallGoodsItemDetail.HallGoodsItemDetail_C.SetItemInfo
struct UHallGoodsItemDetail_C_SetItemInfo_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     descript;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function HallGoodsItemDetail.HallGoodsItemDetail_C.ExecuteUbergraph_HallGoodsItemDetail
struct UHallGoodsItemDetail_C_ExecuteUbergraph_HallGoodsItemDetail_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
