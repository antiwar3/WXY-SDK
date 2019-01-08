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

// Function Level1BoxWidget.Level1BoxWidget_C.SetBuyTimes
struct ULevel1BoxWidget_C_SetBuyTimes_Params
{
	int                                                CurrentTimes;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxTimes;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Level1BoxWidget.Level1BoxWidget_C.CheckEnoughMoney
struct ULevel1BoxWidget_C_CheckEnoughMoney_Params
{
	int                                                money;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Level1BoxWidget.Level1BoxWidget_C.SetTexture
struct ULevel1BoxWidget_C_SetTexture_Params
{
	class UTexture2D*                                  icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Level1BoxWidget.Level1BoxWidget_C.SetName
struct ULevel1BoxWidget_C_SetName_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Level1BoxWidget.Level1BoxWidget_C.SetPrice
struct ULevel1BoxWidget_C_SetPrice_Params
{
	int                                                price;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Level1BoxWidget.Level1BoxWidget_C.BndEvt__Preview_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct ULevel1BoxWidget_C_BndEvt__Preview_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Level1BoxWidget.Level1BoxWidget_C.BndEvt__Buy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct ULevel1BoxWidget_C_BndEvt__Buy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Level1BoxWidget.Level1BoxWidget_C.ExecuteUbergraph_Level1BoxWidget
struct ULevel1BoxWidget_C_ExecuteUbergraph_Level1BoxWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Level1BoxWidget.Level1BoxWidget_C.RemindText__DelegateSignature
struct ULevel1BoxWidget_C_RemindText__DelegateSignature_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Level1BoxWidget.Level1BoxWidget_C.BuyBox__DelegateSignature
struct ULevel1BoxWidget_C_BuyBox__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                price;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Level1BoxWidget.Level1BoxWidget_C.PreviewBox__DelegateSignature
struct ULevel1BoxWidget_C_PreviewBox__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
