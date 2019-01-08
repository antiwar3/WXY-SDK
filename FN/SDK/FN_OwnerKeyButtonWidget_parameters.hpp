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

// Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.CheckCreateComplete
struct UOwnerKeyButtonWidget_C_CheckCreateComplete_Params
{
};

// Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.CalculateNum
struct UOwnerKeyButtonWidget_C_CalculateNum_Params
{
};

// Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.GetKeyNum
struct UOwnerKeyButtonWidget_C_GetKeyNum_Params
{
	int                                                KeyId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.CanFindKey
struct UOwnerKeyButtonWidget_C_CanFindKey_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasKey;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.FindKeyById
struct UOwnerKeyButtonWidget_C_FindKeyById_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UOwnerKeyWidget_C*                           Key;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.SetKey
struct UOwnerKeyButtonWidget_C_SetKey_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.KeyDestroy
struct UOwnerKeyButtonWidget_C_KeyDestroy_Params
{
	class UOwnerKeyWidget_C*                           RemoveKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UOwnerKeyButtonWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
struct UOwnerKeyButtonWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
struct UOwnerKeyButtonWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UOwnerKeyButtonWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct UOwnerKeyButtonWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.Clear
struct UOwnerKeyButtonWidget_C_Clear_Params
{
};

// Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.PanelState
struct UOwnerKeyButtonWidget_C_PanelState_Params
{
	bool                                               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OwnerKeyButtonWidget.OwnerKeyButtonWidget_C.ExecuteUbergraph_OwnerKeyButtonWidget
struct UOwnerKeyButtonWidget_C_ExecuteUbergraph_OwnerKeyButtonWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
