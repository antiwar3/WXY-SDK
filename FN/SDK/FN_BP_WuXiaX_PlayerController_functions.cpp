// Fortnite (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.GetCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_WuXiaX_Character_C*  Player                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WuXiaX_PlayerController_C::GetCharacter(class ABP_WuXiaX_Character_C** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.GetCharacter");

	ABP_WuXiaX_PlayerController_C_GetCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player != nullptr)
		*Player = params.Player;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.GetGameHUD
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AWuXiaXHUD*              HUD                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WuXiaX_PlayerController_C::GetGameHUD(class AWuXiaXHUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.GetGameHUD");

	ABP_WuXiaX_PlayerController_C_GetGameHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HUD != nullptr)
		*HUD = params.HUD;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.HUDWidgetValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WuXiaX_PlayerController_C::HUDWidgetValid(bool* result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.HUDWidgetValid");

	ABP_WuXiaX_PlayerController_C_HUDWidgetValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (result != nullptr)
		*result = params.result;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WuXiaX_PlayerController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.UserConstructionScript");

	ABP_WuXiaX_PlayerController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_MarkCurrentLocation_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_MarkCurrentLocation_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_MarkCurrentLocation_K2Node_InputActionEvent_5");

	ABP_WuXiaX_PlayerController_C_InpActEvt_MarkCurrentLocation_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_DeleteMark_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_DeleteMark_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_DeleteMark_K2Node_InputActionEvent_4");

	ABP_WuXiaX_PlayerController_C_InpActEvt_DeleteMark_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_SwitchShowMainUI_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_SwitchShowMainUI_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_SwitchShowMainUI_K2Node_InputActionEvent_3");

	ABP_WuXiaX_PlayerController_C_InpActEvt_SwitchShowMainUI_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_WidgetSwitch_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_WidgetSwitch_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_WidgetSwitch_K2Node_InputActionEvent_2");

	ABP_WuXiaX_PlayerController_C_InpActEvt_WidgetSwitch_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_29
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_29(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_29");

	ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_29_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_28
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_28(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_28");

	ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_28_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_27
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_27(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_27");

	ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_27_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_26
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_26(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_26");

	ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_26_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_25
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_25(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_25");

	ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_25_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_24
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_24(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_24");

	ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_24_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_23
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_23(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_23");

	ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_23_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_22
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_22(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_22");

	ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_22_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_21
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_21(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_21");

	ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_21_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_20
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_20(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_20");

	ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_20_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_19
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_19(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_19");

	ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_19_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_18
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_18(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_18");

	ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_18_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_17(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_17");

	ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_17_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_16(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_16");

	ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_15");

	ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_14");

	ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_13");

	ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_12");

	ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_11");

	ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_10");

	ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_9");

	ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_8");

	ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_7");

	ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_6");

	ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_5");

	ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_4");

	ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_3");

	ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_2");

	ABP_WuXiaX_PlayerController_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Set_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_Set_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Set_K2Node_InputActionEvent_1");

	ABP_WuXiaX_PlayerController_C_InpActEvt_Set_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Escape_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WuXiaX_PlayerController_C::InpActEvt_Escape_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpActEvt_Escape_K2Node_InputKeyEvent_1");

	ABP_WuXiaX_PlayerController_C_InpActEvt_Escape_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpAxisEvt_MiniMapScale_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WuXiaX_PlayerController_C::InpAxisEvt_MiniMapScale_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.InpAxisEvt_MiniMapScale_K2Node_InputAxisEvent_1");

	ABP_WuXiaX_PlayerController_C_InpAxisEvt_MiniMapScale_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WuXiaX_PlayerController_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.ReceiveTick");

	ABP_WuXiaX_PlayerController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.ExecuteUbergraph_BP_WuXiaX_PlayerController
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WuXiaX_PlayerController_C::ExecuteUbergraph_BP_WuXiaX_PlayerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C.ExecuteUbergraph_BP_WuXiaX_PlayerController");

	ABP_WuXiaX_PlayerController_C_ExecuteUbergraph_BP_WuXiaX_PlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
