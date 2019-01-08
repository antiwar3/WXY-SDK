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

// Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.SetKeyState
struct UOwnerItemBoxWidget_C_SetKeyState_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.SetName
struct UOwnerItemBoxWidget_C_SetName_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.SetNum
struct UOwnerItemBoxWidget_C_SetNum_Params
{
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UOwnerItemBoxWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.PreConstruct
struct UOwnerItemBoxWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.SetInfo
struct UOwnerItemBoxWidget_C_SetInfo_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  KeyIcon;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNeedKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasKey;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
struct UOwnerItemBoxWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
struct UOwnerItemBoxWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.ExecuteUbergraph_OwnerItemBoxWidget
struct UOwnerItemBoxWidget_C_ExecuteUbergraph_OwnerItemBoxWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.RemoveBox__DelegateSignature
struct UOwnerItemBoxWidget_C_RemoveBox__DelegateSignature_Params
{
	class UOwnerItemBoxWidget_C*                       RemoveBox;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OwnerItemBoxWidget.OwnerItemBoxWidget_C.SelectItem__DelegateSignature
struct UOwnerItemBoxWidget_C_SelectItem__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
