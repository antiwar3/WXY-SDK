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

// Function BuyBoxResponseWidget.BuyBoxResponseWidget_C.BuyBox
struct UBuyBoxResponseWidget_C_BuyBox_Params
{
};

// Function BuyBoxResponseWidget.BuyBoxResponseWidget_C.CheckNetWait
struct UBuyBoxResponseWidget_C_CheckNetWait_Params
{
};

// Function BuyBoxResponseWidget.BuyBoxResponseWidget_C.GetItem
struct UBuyBoxResponseWidget_C_GetItem_Params
{
	class UTexture2D*                                  BoxIcon;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BuyBoxResponseWidget.BuyBoxResponseWidget_C.BndEvt__Close_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UBuyBoxResponseWidget_C_BndEvt__Close_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BuyBoxResponseWidget.BuyBoxResponseWidget_C.SetRemindText
struct UBuyBoxResponseWidget_C_SetRemindText_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BuyBoxResponseWidget.BuyBoxResponseWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UBuyBoxResponseWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BuyBoxResponseWidget.BuyBoxResponseWidget_C.Construct
struct UBuyBoxResponseWidget_C_Construct_Params
{
};

// Function BuyBoxResponseWidget.BuyBoxResponseWidget_C.ExecuteUbergraph_BuyBoxResponseWidget
struct UBuyBoxResponseWidget_C_ExecuteUbergraph_BuyBoxResponseWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
