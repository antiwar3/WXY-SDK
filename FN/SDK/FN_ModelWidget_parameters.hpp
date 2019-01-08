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

// Function ModelWidget.ModelWidget_C.SetButtonIcon
struct UModelWidget_C_SetButtonIcon_Params
{
	TEnumAsByte<EButtonState>                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ModelWidget.ModelWidget_C.Init
struct UModelWidget_C_Init_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ModelWidget.ModelWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
struct UModelWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ModelWidget.ModelWidget_C.SetState
struct UModelWidget_C_SetState_Params
{
	bool                                               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ModelWidget.ModelWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature
struct UModelWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function ModelWidget.ModelWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonReleasedEvent__DelegateSignature
struct UModelWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function ModelWidget.ModelWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
struct UModelWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ModelWidget.ModelWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature
struct UModelWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ModelWidget.ModelWidget_C.ExecuteUbergraph_ModelWidget
struct UModelWidget_C_ExecuteUbergraph_ModelWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ModelWidget.ModelWidget_C.ResetModel__DelegateSignature
struct UModelWidget_C_ResetModel__DelegateSignature_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
