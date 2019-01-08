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

// Function JiHuoMaRewardWidget.JiHuoMaRewardWidget_C.SetFrontItem
struct UJiHuoMaRewardWidget_C_SetFrontItem_Params
{
};

// Function JiHuoMaRewardWidget.JiHuoMaRewardWidget_C.SendJiHuoInfo
struct UJiHuoMaRewardWidget_C_SendJiHuoInfo_Params
{
};

// Function JiHuoMaRewardWidget.JiHuoMaRewardWidget_C.Timeout
struct UJiHuoMaRewardWidget_C_Timeout_Params
{
};

// Function JiHuoMaRewardWidget.JiHuoMaRewardWidget_C.RemindPlayer
struct UJiHuoMaRewardWidget_C_RemindPlayer_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function JiHuoMaRewardWidget.JiHuoMaRewardWidget_C.AppendRewardItem
struct UJiHuoMaRewardWidget_C_AppendRewardItem_Params
{
	class UTexture2D*                                  icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function JiHuoMaRewardWidget.JiHuoMaRewardWidget_C.BndEvt__Sure_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature
struct UJiHuoMaRewardWidget_C_BndEvt__Sure_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function JiHuoMaRewardWidget.JiHuoMaRewardWidget_C.BndEvt__Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UJiHuoMaRewardWidget_C_BndEvt__Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function JiHuoMaRewardWidget.JiHuoMaRewardWidget_C.ExecuteUbergraph_JiHuoMaRewardWidget
struct UJiHuoMaRewardWidget_C_ExecuteUbergraph_JiHuoMaRewardWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
