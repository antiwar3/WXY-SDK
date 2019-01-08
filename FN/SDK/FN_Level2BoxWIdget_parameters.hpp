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

// Function Level2BoxWIdget.Level2BoxWidget_C.CheckEnoughMoney
struct ULevel2BoxWidget_C_CheckEnoughMoney_Params
{
	int                                                money;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Level2BoxWIdget.Level2BoxWidget_C.SetTexture
struct ULevel2BoxWidget_C_SetTexture_Params
{
	class UTexture2D*                                  icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Level2BoxWIdget.Level2BoxWidget_C.SetPrice
struct ULevel2BoxWidget_C_SetPrice_Params
{
	int                                                price;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Level2BoxWIdget.Level2BoxWidget_C.SetName
struct ULevel2BoxWidget_C_SetName_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Level2BoxWIdget.Level2BoxWidget_C.BndEvt__Buy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct ULevel2BoxWidget_C_BndEvt__Buy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Level2BoxWIdget.Level2BoxWidget_C.BndEvt__Preview_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct ULevel2BoxWidget_C_BndEvt__Preview_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Level2BoxWIdget.Level2BoxWidget_C.SetInfo
struct ULevel2BoxWidget_C_SetInfo_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                price;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UTexture2D*                                  Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Level2BoxWIdget.Level2BoxWidget_C.ExecuteUbergraph_Level2BoxWidget
struct ULevel2BoxWidget_C_ExecuteUbergraph_Level2BoxWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Level2BoxWIdget.Level2BoxWidget_C.RemindText__DelegateSignature
struct ULevel2BoxWidget_C_RemindText__DelegateSignature_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Level2BoxWIdget.Level2BoxWidget_C.OnClose__DelegateSignature
struct ULevel2BoxWidget_C_OnClose__DelegateSignature_Params
{
};

// Function Level2BoxWIdget.Level2BoxWidget_C.BuyBox__DelegateSignature
struct ULevel2BoxWidget_C_BuyBox__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                price;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
