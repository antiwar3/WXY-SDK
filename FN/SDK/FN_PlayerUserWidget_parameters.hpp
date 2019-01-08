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

// Function PlayerUserWidget.PlayerUserWidget_C.OnMouseButtonDown
struct UPlayerUserWidget_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlayerUserWidget.PlayerUserWidget_C.GetType
struct UPlayerUserWidget_C_GetType_Params
{
	int                                                Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerUserWidget.PlayerUserWidget_C.SetAddTeamerIcon
struct UPlayerUserWidget_C_SetAddTeamerIcon_Params
{
	TEnumAsByte<EButtonState>                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerUserWidget.PlayerUserWidget_C.SetButtonIcon
struct UPlayerUserWidget_C_SetButtonIcon_Params
{
	TEnumAsByte<EButtonState>                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerUserWidget.PlayerUserWidget_C.Init
struct UPlayerUserWidget_C_Init_Params
{
	class UTexture2D*                                  HeadTex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                YSState;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                UserId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsTeam;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerUserWidget.PlayerUserWidget_C.SetPlayerState
struct UPlayerUserWidget_C_SetPlayerState_Params
{
	int                                                State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                YSState;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerUserWidget.PlayerUserWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UPlayerUserWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayerUserWidget.PlayerUserWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
struct UPlayerUserWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function PlayerUserWidget.PlayerUserWidget_C.SetChooseState
struct UPlayerUserWidget_C_SetChooseState_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerUserWidget.PlayerUserWidget_C.BndEvt__AddTeamPlayer_K2Node_ComponentBoundEvent_73_OnButtonClickedEvent__DelegateSignature
struct UPlayerUserWidget_C_BndEvt__AddTeamPlayer_K2Node_ComponentBoundEvent_73_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayerUserWidget.PlayerUserWidget_C.BndEvt__AddTeamPlayer_K2Node_ComponentBoundEvent_102_OnButtonHoverEvent__DelegateSignature
struct UPlayerUserWidget_C_BndEvt__AddTeamPlayer_K2Node_ComponentBoundEvent_102_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayerUserWidget.PlayerUserWidget_C.BndEvt__AddTeamPlayer_K2Node_ComponentBoundEvent_112_OnButtonHoverEvent__DelegateSignature
struct UPlayerUserWidget_C_BndEvt__AddTeamPlayer_K2Node_ComponentBoundEvent_112_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayerUserWidget.PlayerUserWidget_C.BndEvt__AddTeamPlayer_K2Node_ComponentBoundEvent_123_OnButtonPressedEvent__DelegateSignature
struct UPlayerUserWidget_C_BndEvt__AddTeamPlayer_K2Node_ComponentBoundEvent_123_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function PlayerUserWidget.PlayerUserWidget_C.BndEvt__AddTeamPlayer_K2Node_ComponentBoundEvent_68_OnButtonReleasedEvent__DelegateSignature
struct UPlayerUserWidget_C_BndEvt__AddTeamPlayer_K2Node_ComponentBoundEvent_68_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function PlayerUserWidget.PlayerUserWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_96_OnButtonReleasedEvent__DelegateSignature
struct UPlayerUserWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_96_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function PlayerUserWidget.PlayerUserWidget_C.PlayerChangeInfo
struct UPlayerUserWidget_C_PlayerChangeInfo_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UTexture2D*                                  Head;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerUserWidget.PlayerUserWidget_C.ExecuteUbergraph_PlayerUserWidget
struct UPlayerUserWidget_C_ExecuteUbergraph_PlayerUserWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerUserWidget.PlayerUserWidget_C.AddTeamer__DelegateSignature
struct UPlayerUserWidget_C_AddTeamer__DelegateSignature_Params
{
	struct FString                                     Teamer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PlayerUserWidget.PlayerUserWidget_C.SelectFreiend__DelegateSignature
struct UPlayerUserWidget_C_SelectFreiend__DelegateSignature_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PlayerUserWidget.PlayerUserWidget_C.DeleteFriend__DelegateSignature
struct UPlayerUserWidget_C_DeleteFriend__DelegateSignature_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PlayerUserWidget.PlayerUserWidget_C.MouseHover__DelegateSignature
struct UPlayerUserWidget_C_MouseHover__DelegateSignature_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
