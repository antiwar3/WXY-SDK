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

// Function OpenBoxRewardItemWidget.OpenBoxRewardItemWidget_C.Init
struct UOpenBoxRewardItemWidget_C_Init_Params
{
	class UTexture2D*                                  icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OpenBoxRewardItemWidget.OpenBoxRewardItemWidget_C.OnMouseLeave
struct UOpenBoxRewardItemWidget_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OpenBoxRewardItemWidget.OpenBoxRewardItemWidget_C.OnMouseEnter
struct UOpenBoxRewardItemWidget_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OpenBoxRewardItemWidget.OpenBoxRewardItemWidget_C.ExecuteUbergraph_OpenBoxRewardItemWidget
struct UOpenBoxRewardItemWidget_C_ExecuteUbergraph_OpenBoxRewardItemWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OpenBoxRewardItemWidget.OpenBoxRewardItemWidget_C.HideTips__DelegateSignature
struct UOpenBoxRewardItemWidget_C_HideTips__DelegateSignature_Params
{
};

// Function OpenBoxRewardItemWidget.OpenBoxRewardItemWidget_C.ShowTips__DelegateSignature
struct UOpenBoxRewardItemWidget_C_ShowTips__DelegateSignature_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     detail;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
