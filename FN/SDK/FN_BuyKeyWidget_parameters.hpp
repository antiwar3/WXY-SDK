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

// Function BuyKeyWidget.BuyKeyWidget_C.SetKeyInfo
struct UBuyKeyWidget_C_SetKeyInfo_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     descript;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UTexture2D*                                  icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuyKeyWidget.BuyKeyWidget_C.BndEvt__BuyKey_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
struct UBuyKeyWidget_C_BndEvt__BuyKey_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BuyKeyWidget.BuyKeyWidget_C.BndEvt__Close_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature
struct UBuyKeyWidget_C_BndEvt__Close_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BuyKeyWidget.BuyKeyWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_103_OnButtonClickedEvent__DelegateSignature
struct UBuyKeyWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_103_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BuyKeyWidget.BuyKeyWidget_C.BuyComplete
struct UBuyKeyWidget_C_BuyComplete_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  KeyIcon;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuyKeyWidget.BuyKeyWidget_C.BuyKeyCrossTimer
struct UBuyKeyWidget_C_BuyKeyCrossTimer_Params
{
};

// Function BuyKeyWidget.BuyKeyWidget_C.SetRemindText
struct UBuyKeyWidget_C_SetRemindText_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BuyKeyWidget.BuyKeyWidget_C.ExecuteUbergraph_BuyKeyWidget
struct UBuyKeyWidget_C_ExecuteUbergraph_BuyKeyWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuyKeyWidget.BuyKeyWidget_C.BuyResponse__DelegateSignature
struct UBuyKeyWidget_C_BuyResponse__DelegateSignature_Params
{
};

// Function BuyKeyWidget.BuyKeyWidget_C.HasBuyKey__DelegateSignature
struct UBuyKeyWidget_C_HasBuyKey__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
