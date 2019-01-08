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

// Function SkinWidget.SkinWidget_C.SetSkinButtonIcon
struct USkinWidget_C_SetSkinButtonIcon_Params
{
	TEnumAsByte<EButtonState>                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkinWidget.SkinWidget_C.CheckIsPreciew
struct USkinWidget_C_CheckIsPreciew_Params
{
};

// Function SkinWidget.SkinWidget_C.SetDefaultIcon
struct USkinWidget_C_SetDefaultIcon_Params
{
};

// Function SkinWidget.SkinWidget_C.SendRemind
struct USkinWidget_C_SendRemind_Params
{
};

// Function SkinWidget.SkinWidget_C.SetPreviewState
struct USkinWidget_C_SetPreviewState_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkinWidget.SkinWidget_C.SetSelectSkin
struct USkinWidget_C_SetSelectSkin_Params
{
	int                                                SkinId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture2D;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkinWidget.SkinWidget_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct USkinWidget_C_BndEvt__SkinButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SkinWidget.SkinWidget_C.BndEvt__PreviewButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
struct USkinWidget_C_BndEvt__PreviewButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SkinWidget.SkinWidget_C.Construct
struct USkinWidget_C_Construct_Params
{
};

// Function SkinWidget.SkinWidget_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct USkinWidget_C_BndEvt__SkinButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SkinWidget.SkinWidget_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct USkinWidget_C_BndEvt__SkinButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SkinWidget.SkinWidget_C.BndEvt__PreviewButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct USkinWidget_C_BndEvt__PreviewButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SkinWidget.SkinWidget_C.BndEvt__PreviewButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
struct USkinWidget_C_BndEvt__PreviewButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SkinWidget.SkinWidget_C.GetNewSkin
struct USkinWidget_C_GetNewSkin_Params
{
};

// Function SkinWidget.SkinWidget_C.ExecuteUbergraph_SkinWidget
struct USkinWidget_C_ExecuteUbergraph_SkinWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkinWidget.SkinWidget_C.ShowSkinTypeDetail__DelegateSignature
struct USkinWidget_C_ShowSkinTypeDetail__DelegateSignature_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkinWidget.SkinWidget_C.RemindText__DelegateSignature
struct USkinWidget_C_RemindText__DelegateSignature_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SkinWidget.SkinWidget_C.OnPreview__DelegateSignature
struct USkinWidget_C_OnPreview__DelegateSignature_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsPreview;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkinWidget.SkinWidget_C.OnClick__DelegateSignature
struct USkinWidget_C_OnClick__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
