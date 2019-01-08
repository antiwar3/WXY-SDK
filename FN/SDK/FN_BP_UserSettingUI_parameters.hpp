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

// Function BP_UserSettingUI.BP_UserSettingUI_C.GetHotKeyTexts
struct UBP_UserSettingUI_C_GetHotKeyTexts_Params
{
	TArray<struct FString>                             hotkeys;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.GetKeyName
struct UBP_UserSettingUI_C_GetKeyName_Params
{
	struct FInputChord                                 Key1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FInputChord                                 Key2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     Name;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.SetLabelSelect
struct UBP_UserSettingUI_C_SetLabelSelect_Params
{
	class UPanelWidget*                                Panel;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScrollBox*                                  scroll;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsForward;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.SetLabelDefaultSelect
struct UBP_UserSettingUI_C_SetLabelDefaultSelect_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.ReConstructComboBoxSelect
struct UBP_UserSettingUI_C_ReConstructComboBoxSelect_Params
{
	class UPanelWidget*                                ParentPanel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.GetMouseDirection
struct UBP_UserSettingUI_C_GetMouseDirection_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RetValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.InitSettingChildWIdgetParent
struct UBP_UserSettingUI_C_InitSettingChildWIdgetParent_Params
{
	class UPanelWidget*                                Panel;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.GetOpenResult
struct UBP_UserSettingUI_C_GetOpenResult_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.GetHabitOperator
struct UBP_UserSettingUI_C_GetHabitOperator_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.SaveMoveKey
struct UBP_UserSettingUI_C_SaveMoveKey_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.CheckTotalQuality
struct UBP_UserSettingUI_C_CheckTotalQuality_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.SaveChildWidget
struct UBP_UserSettingUI_C_SaveChildWidget_Params
{
	class UPanelWidget*                                Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.GetInteractiveKeyName
struct UBP_UserSettingUI_C_GetInteractiveKeyName_Params
{
	struct FString                                     Name;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.GetOperateHabitValue
struct UBP_UserSettingUI_C_GetOperateHabitValue_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.ChangeAxisValue
struct UBP_UserSettingUI_C_ChangeAxisValue_Params
{
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.EaseName
struct UBP_UserSettingUI_C_EaseName_Params
{
	struct FString                                     OldName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     NewName;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.GetEasyKeyName
struct UBP_UserSettingUI_C_GetEasyKeyName_Params
{
	struct FInputChord                                 Key1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FInputChord                                 Key2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     Name;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.GetAssassinationInfo
struct UBP_UserSettingUI_C_GetAssassinationInfo_Params
{
	struct FString                                     ReturnStr;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.ResetDefaultChildWidget
struct UBP_UserSettingUI_C_ResetDefaultChildWidget_Params
{
	class UPanelWidget*                                Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.ResetChildWidget
struct UBP_UserSettingUI_C_ResetChildWidget_Params
{
	class UPanelWidget*                                Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.GetMouseAxis
struct UBP_UserSettingUI_C_GetMouseAxis_Params
{
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.Construct
struct UBP_UserSettingUI_C_Construct_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.MicVolumnChange
struct UBP_UserSettingUI_C_MicVolumnChange_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__LanguageSelect_K2Node_ComponentBoundEvent_18_OnSelectChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__LanguageSelect_K2Node_ComponentBoundEvent_18_OnSelectChange__DelegateSignature_Params
{
	int                                                CurrentIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESelectInfo>                           SelectType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__ScreenModeSelect_K2Node_ComponentBoundEvent_19_OnSelectChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__ScreenModeSelect_K2Node_ComponentBoundEvent_19_OnSelectChange__DelegateSignature_Params
{
	int                                                CurrentIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESelectInfo>                           SelectType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__ResolutionSelect_K2Node_ComponentBoundEvent_20_OnSelectChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__ResolutionSelect_K2Node_ComponentBoundEvent_20_OnSelectChange__DelegateSignature_Params
{
	int                                                CurrentIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESelectInfo>                           SelectType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__GammaBar_K2Node_ComponentBoundEvent_21_ValueChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__GammaBar_K2Node_ComponentBoundEvent_21_ValueChange__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__TotalQualitySelect_K2Node_ComponentBoundEvent_22_OnSelectChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__TotalQualitySelect_K2Node_ComponentBoundEvent_22_OnSelectChange__DelegateSignature_Params
{
	int                                                CurrentIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESelectInfo>                           SelectType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__SettingProgressBarWidget_K2Node_ComponentBoundEvent_23_ValueChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__SettingProgressBarWidget_K2Node_ComponentBoundEvent_23_ValueChange__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__AntiSelect_K2Node_ComponentBoundEvent_24_OnSelectChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__AntiSelect_K2Node_ComponentBoundEvent_24_OnSelectChange__DelegateSignature_Params
{
	int                                                CurrentIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESelectInfo>                           SelectType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__PostSelect_K2Node_ComponentBoundEvent_25_OnSelectChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__PostSelect_K2Node_ComponentBoundEvent_25_OnSelectChange__DelegateSignature_Params
{
	int                                                CurrentIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESelectInfo>                           SelectType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__ShadowSelect_K2Node_ComponentBoundEvent_26_OnSelectChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__ShadowSelect_K2Node_ComponentBoundEvent_26_OnSelectChange__DelegateSignature_Params
{
	int                                                CurrentIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESelectInfo>                           SelectType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__TexCoordSelect_K2Node_ComponentBoundEvent_27_OnSelectChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__TexCoordSelect_K2Node_ComponentBoundEvent_27_OnSelectChange__DelegateSignature_Params
{
	int                                                CurrentIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESelectInfo>                           SelectType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__ParticleSelect_K2Node_ComponentBoundEvent_28_OnSelectChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__ParticleSelect_K2Node_ComponentBoundEvent_28_OnSelectChange__DelegateSignature_Params
{
	int                                                CurrentIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESelectInfo>                           SelectType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__FoliageSelect_K2Node_ComponentBoundEvent_29_OnSelectChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__FoliageSelect_K2Node_ComponentBoundEvent_29_OnSelectChange__DelegateSignature_Params
{
	int                                                CurrentIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESelectInfo>                           SelectType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__ViewDistanceSelect_K2Node_ComponentBoundEvent_30_OnSelectChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__ViewDistanceSelect_K2Node_ComponentBoundEvent_30_OnSelectChange__DelegateSignature_Params
{
	int                                                CurrentIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESelectInfo>                           SelectType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__VasyncBoolSelect_K2Node_ComponentBoundEvent_31_OnStateChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__VasyncBoolSelect_K2Node_ComponentBoundEvent_31_OnStateChange__DelegateSignature_Params
{
	bool                                               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsDirect;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__MouseForwardBool_K2Node_ComponentBoundEvent_32_OnStateChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__MouseForwardBool_K2Node_ComponentBoundEvent_32_OnStateChange__DelegateSignature_Params
{
	bool                                               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsDirect;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__DefaultMouseValueBar_K2Node_ComponentBoundEvent_33_ValueChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__DefaultMouseValueBar_K2Node_ComponentBoundEvent_33_ValueChange__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__DriveMouseValueBar_K2Node_ComponentBoundEvent_34_ValueChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__DriveMouseValueBar_K2Node_ComponentBoundEvent_34_ValueChange__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__AimMouseValueBar_K2Node_ComponentBoundEvent_35_ValueChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__AimMouseValueBar_K2Node_ComponentBoundEvent_35_ValueChange__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__MainAudioBar_K2Node_ComponentBoundEvent_36_ValueChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__MainAudioBar_K2Node_ComponentBoundEvent_36_ValueChange__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__SoundEffectBar_K2Node_ComponentBoundEvent_37_ValueChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__SoundEffectBar_K2Node_ComponentBoundEvent_37_ValueChange__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__InterfaceSoundBar_K2Node_ComponentBoundEvent_38_ValueChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__InterfaceSoundBar_K2Node_ComponentBoundEvent_38_ValueChange__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__BackgroundSoundBar_K2Node_ComponentBoundEvent_39_ValueChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__BackgroundSoundBar_K2Node_ComponentBoundEvent_39_ValueChange__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__TalkHabit_K2Node_ComponentBoundEvent_41_OnSelectChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__TalkHabit_K2Node_ComponentBoundEvent_41_OnSelectChange__DelegateSignature_Params
{
	int                                                CurrentIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESelectInfo>                           SelectType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__CharacterRenderSelect_K2Node_ComponentBoundEvent_50_OnSelectChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__CharacterRenderSelect_K2Node_ComponentBoundEvent_50_OnSelectChange__DelegateSignature_Params
{
	int                                                CurrentIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESelectInfo>                           SelectType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__AchromatopsiaSelect_K2Node_ComponentBoundEvent_54_OnSelectChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__AchromatopsiaSelect_K2Node_ComponentBoundEvent_54_OnSelectChange__DelegateSignature_Params
{
	int                                                CurrentIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESelectInfo>                           SelectType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__SettingColorSelectWidget_K2Node_ComponentBoundEvent_58_OnIndexChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__SettingColorSelectWidget_K2Node_ComponentBoundEvent_58_OnIndexChange__DelegateSignature_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__DressShow_K2Node_ComponentBoundEvent_62_OnSelectChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__DressShow_K2Node_ComponentBoundEvent_62_OnSelectChange__DelegateSignature_Params
{
	int                                                CurrentIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESelectInfo>                           SelectType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__WeaponShow_K2Node_ComponentBoundEvent_66_OnSelectChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__WeaponShow_K2Node_ComponentBoundEvent_66_OnSelectChange__DelegateSignature_Params
{
	int                                                CurrentIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESelectInfo>                           SelectType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__MotionBlur_K2Node_ComponentBoundEvent_72_OnSelectChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__MotionBlur_K2Node_ComponentBoundEvent_72_OnSelectChange__DelegateSignature_Params
{
	int                                                CurrentIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESelectInfo>                           SelectType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__MapScale_K2Node_ComponentBoundEvent_76_ValueChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__MapScale_K2Node_ComponentBoundEvent_76_ValueChange__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__StealthHabit_K2Node_ComponentBoundEvent_82_OnSelectChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__StealthHabit_K2Node_ComponentBoundEvent_82_OnSelectChange__DelegateSignature_Params
{
	int                                                CurrentIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESelectInfo>                           SelectType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__WalkHabit_K2Node_ComponentBoundEvent_87_OnSelectChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__WalkHabit_K2Node_ComponentBoundEvent_87_OnSelectChange__DelegateSignature_Params
{
	int                                                CurrentIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESelectInfo>                           SelectType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__SprintingHabit_K2Node_ComponentBoundEvent_91_OnSelectChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__SprintingHabit_K2Node_ComponentBoundEvent_91_OnSelectChange__DelegateSignature_Params
{
	int                                                CurrentIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESelectInfo>                           SelectType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__FreeViewHabit_K2Node_ComponentBoundEvent_95_OnSelectChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__FreeViewHabit_K2Node_ComponentBoundEvent_95_OnSelectChange__DelegateSignature_Params
{
	int                                                CurrentIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESelectInfo>                           SelectType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__MapHabit_K2Node_ComponentBoundEvent_99_OnSelectChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__MapHabit_K2Node_ComponentBoundEvent_99_OnSelectChange__DelegateSignature_Params
{
	int                                                CurrentIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESelectInfo>                           SelectType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.ScreenPercentChange
struct UBP_UserSettingUI_C_ScreenPercentChange_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__MainAudioBar_K2Node_ComponentBoundEvent_174_StateChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__MainAudioBar_K2Node_ComponentBoundEvent_174_StateChange__DelegateSignature_Params
{
	bool                                               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__SoundEffectBar_K2Node_ComponentBoundEvent_176_StateChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__SoundEffectBar_K2Node_ComponentBoundEvent_176_StateChange__DelegateSignature_Params
{
	bool                                               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__InterfaceSoundBar_K2Node_ComponentBoundEvent_180_StateChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__InterfaceSoundBar_K2Node_ComponentBoundEvent_180_StateChange__DelegateSignature_Params
{
	bool                                               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__BackgroundSoundBar_K2Node_ComponentBoundEvent_184_StateChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__BackgroundSoundBar_K2Node_ComponentBoundEvent_184_StateChange__DelegateSignature_Params
{
	bool                                               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.Init
struct UBP_UserSettingUI_C_Init_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_7981_OnButtonClickedEvent__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_7981_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_8008_OnButtonClickedEvent__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_8008_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__SaveButton_K2Node_ComponentBoundEvent_8070_OnButtonClickedEvent__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__SaveButton_K2Node_ComponentBoundEvent_8070_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.CallWhenAssasinationChange
struct UBP_UserSettingUI_C_CallWhenAssasinationChange_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.EffectAchromatopsiaMode
struct UBP_UserSettingUI_C_EffectAchromatopsiaMode_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.EffectMotionBlur
struct UBP_UserSettingUI_C_EffectMotionBlur_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.ResetKeyName
struct UBP_UserSettingUI_C_ResetKeyName_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.ResetSoundVolume
struct UBP_UserSettingUI_C_ResetSoundVolume_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.CheckUpdateQuality
struct UBP_UserSettingUI_C_CheckUpdateQuality_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.CallEventDispatch
struct UBP_UserSettingUI_C_CallEventDispatch_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_204_OnButtonHoverEvent__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_204_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_206_OnButtonHoverEvent__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_206_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__SaveButton_K2Node_ComponentBoundEvent_208_OnButtonHoverEvent__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__SaveButton_K2Node_ComponentBoundEvent_208_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__SaveButton_K2Node_ComponentBoundEvent_210_OnButtonHoverEvent__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__SaveButton_K2Node_ComponentBoundEvent_210_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_218_OnButtonPressedEvent__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_218_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_220_OnButtonReleasedEvent__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_220_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__SaveButton_K2Node_ComponentBoundEvent_222_OnButtonPressedEvent__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__SaveButton_K2Node_ComponentBoundEvent_222_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__SaveButton_K2Node_ComponentBoundEvent_224_OnButtonReleasedEvent__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__SaveButton_K2Node_ComponentBoundEvent_224_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__ChannelMode_K2Node_ComponentBoundEvent_70_OnSelectChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__ChannelMode_K2Node_ComponentBoundEvent_70_OnSelectChange__DelegateSignature_Params
{
	int                                                CurrentIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESelectInfo>                           SelectType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__MicrophoneAudioBar_K2Node_ComponentBoundEvent_78_ValueChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__MicrophoneAudioBar_K2Node_ComponentBoundEvent_78_ValueChange__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.CheckSameKey
struct UBP_UserSettingUI_C_CheckSameKey_Params
{
	struct FName                                       ExpectedKeyName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FInputChord                                 Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     Module;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.CheckUpdateResolution
struct UBP_UserSettingUI_C_CheckUpdateResolution_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.LastLabel
struct UBP_UserSettingUI_C_LastLabel_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.NextLabel
struct UBP_UserSettingUI_C_NextLabel_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.LastItem
struct UBP_UserSettingUI_C_LastItem_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.NextItem
struct UBP_UserSettingUI_C_NextItem_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.StartIntoChildWidget
struct UBP_UserSettingUI_C_StartIntoChildWidget_Params
{
	class USettingChildWidgetBase_C*                   Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.SwitchToChildWidget
struct UBP_UserSettingUI_C_SwitchToChildWidget_Params
{
	TEnumAsByte<EUserSettingLabel>                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsForward;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.Horizontal
struct UBP_UserSettingUI_C_Horizontal_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsRight;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.Vertical
struct UBP_UserSettingUI_C_Vertical_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.GamepadIntoWidget
struct UBP_UserSettingUI_C_GamepadIntoWidget_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.OnclickButton
struct UBP_UserSettingUI_C_OnclickButton_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.MarkButton
struct UBP_UserSettingUI_C_MarkButton_Params
{
	EGamepadMarkType                                   MarkType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.MarkRelease
struct UBP_UserSettingUI_C_MarkRelease_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.Close
struct UBP_UserSettingUI_C_Close_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_337_OnButtonPressedEvent__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_337_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_347_OnButtonReleasedEvent__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_347_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__GraphButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__GraphButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__GraphButton_K2Node_ComponentBoundEvent_12_OnButtonReleasedEvent__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__GraphButton_K2Node_ComponentBoundEvent_12_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__PlayerCtrlButton_K2Node_ComponentBoundEvent_121_OnButtonPressedEvent__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__PlayerCtrlButton_K2Node_ComponentBoundEvent_121_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__PlayerCtrlButton_K2Node_ComponentBoundEvent_195_OnButtonReleasedEvent__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__PlayerCtrlButton_K2Node_ComponentBoundEvent_195_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__AudioButton_K2Node_ComponentBoundEvent_273_OnButtonPressedEvent__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__AudioButton_K2Node_ComponentBoundEvent_273_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__AudioButton_K2Node_ComponentBoundEvent_346_OnButtonReleasedEvent__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__AudioButton_K2Node_ComponentBoundEvent_346_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__GamePlayButton_K2Node_ComponentBoundEvent_418_OnButtonPressedEvent__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__GamePlayButton_K2Node_ComponentBoundEvent_418_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__GamePlayButton_K2Node_ComponentBoundEvent_492_OnButtonReleasedEvent__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__GamePlayButton_K2Node_ComponentBoundEvent_492_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.CheckFullScreen
struct UBP_UserSettingUI_C_CheckFullScreen_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.CheckFullScreenWindowMode
struct UBP_UserSettingUI_C_CheckFullScreenWindowMode_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__FrameLimitSelect_K2Node_ComponentBoundEvent_768_OnSelectChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__FrameLimitSelect_K2Node_ComponentBoundEvent_768_OnSelectChange__DelegateSignature_Params
{
	int                                                CurrentIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESelectInfo>                           SelectType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.EffectCameraChange
struct UBP_UserSettingUI_C_EffectCameraChange_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__CameraAutoChange_K2Node_ComponentBoundEvent_0_OnSelectChange__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__CameraAutoChange_K2Node_ComponentBoundEvent_0_OnSelectChange__DelegateSignature_Params
{
	int                                                CurrentIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESelectInfo>                           SelectType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.DealLabel
struct UBP_UserSettingUI_C_DealLabel_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__PlayerCtrlButton_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__PlayerCtrlButton_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__GraphButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__GraphButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__GamePlayButton_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__GamePlayButton_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.BndEvt__AudioButton_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature
struct UBP_UserSettingUI_C_BndEvt__AudioButton_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.ExecuteUbergraph_BP_UserSettingUI
struct UBP_UserSettingUI_C_ExecuteUbergraph_BP_UserSettingUI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UserSettingUI.BP_UserSettingUI_C.OnClose__DelegateSignature
struct UBP_UserSettingUI_C_OnClose__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
