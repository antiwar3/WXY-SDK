#pragma once

// Fortnite (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C
// 0x0029 (0x0791 - 0x0768)
class ABP_WuXiaX_PlayerController_C : public AWuXiaXPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0768(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               PressSpeRight;                                            // 0x0770(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0771(0x0003) MISSED OFFSET
	float                                              PressSpeRightTimeCounter;                                 // 0x0774(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PressSpeLeft;                                             // 0x0778(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0779(0x0003) MISSED OFFSET
	float                                              PressSpeLeftTimeCounter;                                  // 0x077C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PressLB;                                                  // 0x0780(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0781(0x0003) MISSED OFFSET
	float                                              PressLBTimeCounter;                                       // 0x0784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PressEffectTime;                                          // 0x0788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaSeconds;                                             // 0x078C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPressSet;                                               // 0x0790(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WuXiaX_PlayerController.BP_WuXiaX_PlayerController_C");
		return ptr;
	}


	void GetCharacter(class ABP_WuXiaX_Character_C** Player);
	void GetGameHUD(class AWuXiaXHUD** HUD);
	void HUDWidgetValid(bool* result);
	void UserConstructionScript();
	void InpActEvt_MarkCurrentLocation_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_DeleteMark_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_SwitchShowMainUI_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_WidgetSwitch_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_29(const struct FKey& Key);
	void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_28(const struct FKey& Key);
	void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_27(const struct FKey& Key);
	void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_26(const struct FKey& Key);
	void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_25(const struct FKey& Key);
	void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_24(const struct FKey& Key);
	void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_23(const struct FKey& Key);
	void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_22(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_21(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_20(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_19(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_18(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_17(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_16(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_15(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_14(const struct FKey& Key);
	void InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_13(const struct FKey& Key);
	void InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_12(const struct FKey& Key);
	void InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_11(const struct FKey& Key);
	void InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Set_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_Escape_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpAxisEvt_MiniMapScale_K2Node_InputAxisEvent_1(float AxisValue);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_WuXiaX_PlayerController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
