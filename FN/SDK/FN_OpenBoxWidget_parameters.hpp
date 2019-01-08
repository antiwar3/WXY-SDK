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

// Function OpenBoxWidget.OpenBoxWidget_C.SetOpenBoxInfo
struct UOpenBoxWidget_C_SetOpenBoxInfo_Params
{
	class UTexture2D*                                  BoxIcon;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  OpenBoxIcon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  KeyIcon;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                KeyNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BoxId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNeedKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OpenBoxWidget.OpenBoxWidget_C.BndEvt__Close_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature
struct UOpenBoxWidget_C_BndEvt__Close_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function OpenBoxWidget.OpenBoxWidget_C.BndEvt__Open_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UOpenBoxWidget_C_BndEvt__Open_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function OpenBoxWidget.OpenBoxWidget_C.SetBuyKeyInfo
struct UOpenBoxWidget_C_SetBuyKeyInfo_Params
{
	class UTexture2D*                                  BoxIcon;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  OpenBoxIcon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  KeyIcon;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                KeyId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BoxId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OpenBoxWidget.OpenBoxWidget_C.BndEvt__BuyKey_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UOpenBoxWidget_C_BndEvt__BuyKey_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function OpenBoxWidget.OpenBoxWidget_C.GetItem
struct UOpenBoxWidget_C_GetItem_Params
{
	TArray<struct FBoxRewardItem>                      items;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function OpenBoxWidget.OpenBoxWidget_C.BndEvt__Close1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UOpenBoxWidget_C_BndEvt__Close1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function OpenBoxWidget.OpenBoxWidget_C.CheckNetWait
struct UOpenBoxWidget_C_CheckNetWait_Params
{
};

// Function OpenBoxWidget.OpenBoxWidget_C.CheckGetKey
struct UOpenBoxWidget_C_CheckGetKey_Params
{
	int                                                KeyId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                KeyNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OpenBoxWidget.OpenBoxWidget_C.SetRemindText
struct UOpenBoxWidget_C_SetRemindText_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OpenBoxWidget.OpenBoxWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UOpenBoxWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function OpenBoxWidget.OpenBoxWidget_C.ShowTip
struct UOpenBoxWidget_C_ShowTip_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     detail;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function OpenBoxWidget.OpenBoxWidget_C.HideTip
struct UOpenBoxWidget_C_HideTip_Params
{
};

// Function OpenBoxWidget.OpenBoxWidget_C.Tick
struct UOpenBoxWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OpenBoxWidget.OpenBoxWidget_C.Construct
struct UOpenBoxWidget_C_Construct_Params
{
};

// Function OpenBoxWidget.OpenBoxWidget_C.ExecuteUbergraph_OpenBoxWidget
struct UOpenBoxWidget_C_ExecuteUbergraph_OpenBoxWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
