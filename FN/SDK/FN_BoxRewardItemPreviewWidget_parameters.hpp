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

// Function BoxRewardItemPreviewWidget.BoxRewardItemPreviewWidget_C.ClearRewardItem
struct UBoxRewardItemPreviewWidget_C_ClearRewardItem_Params
{
};

// Function BoxRewardItemPreviewWidget.BoxRewardItemPreviewWidget_C.CreateRewardItem
struct UBoxRewardItemPreviewWidget_C_CreateRewardItem_Params
{
	int                                                RewardItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class URewardItemWidget_C*                         RetVal;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
