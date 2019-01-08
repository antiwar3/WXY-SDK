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

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.GetCharacter
struct ABP_WuXiaX_PlayerController_C_GetCharacter_Params
{
	class ABP_WuXiaX_Character_C*                      Player;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.GetGameHUD
struct ABP_WuXiaX_PlayerController_C_GetGameHUD_Params
{
	class AWuXiaXHUD*                                  HUD;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.HUDWidgetValid
struct ABP_WuXiaX_PlayerController_C_HUDWidgetValid_Params
{
	bool                                               result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.UserConstructionScript
struct ABP_WuXiaX_PlayerController_C_UserConstructionScript_Params
{
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_MarkCurrentLocation_K2Node_InputActionEvent_5
struct ABP_WuXiaX_PlayerController_C_InpActEvt_MarkCurrentLocation_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_DeleteMark_K2Node_InputActionEvent_4
struct ABP_WuXiaX_PlayerController_C_InpActEvt_DeleteMark_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_SwitchShowMainUI_K2Node_InputActionEvent_3
struct ABP_WuXiaX_PlayerController_C_InpActEvt_SwitchShowMainUI_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_WidgetSwitch_K2Node_InputActionEvent_2
struct ABP_WuXiaX_PlayerController_C_InpActEvt_WidgetSwitch_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_29
struct ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_29_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_28
struct ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_28_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_27
struct ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_27_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_26
struct ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_26_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_25
struct ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_25_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_24
struct ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_24_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_23
struct ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_23_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_22
struct ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_22_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_21
struct ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_21_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_20
struct ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_20_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_19
struct ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_19_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_18
struct ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_18_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_17
struct ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_17_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_16
struct ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_16_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_15
struct ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_15_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_14
struct ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_14_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_13
struct ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_13_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_12
struct ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_12_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_11
struct ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_11_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_10
struct ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_10_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_9
struct ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_9_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_8
struct ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_7
struct ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_6
struct ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_5
struct ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_4
struct ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_3
struct ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_2
struct ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Set_K2Node_InputActionEvent_1
struct ABP_WuXiaX_PlayerController_C_InpActEvt_Set_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Escape_K2Node_InputKeyEvent_1
struct ABP_WuXiaX_PlayerController_C_InpActEvt_Escape_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpAxisEvt_MiniMapScale_K2Node_InputAxisEvent_1
struct ABP_WuXiaX_PlayerController_C_InpAxisEvt_MiniMapScale_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.ReceiveTick
struct ABP_WuXiaX_PlayerController_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.ExecuteUbergraph_BP_WuXiaX_PlayerController
struct ABP_WuXiaX_PlayerController_C_ExecuteUbergraph_BP_WuXiaX_PlayerController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
