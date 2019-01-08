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

// Function CharacterConfigWidget.CharacterConfigWidget_C.CheckNameValid
struct UCharacterConfigWidget_C_CheckNameValid_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.CreateColor
struct UCharacterConfigWidget_C_CreateColor_Params
{
	int*                                               ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EModelType*                                        Type;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FLinearColor*                               Color;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.CreateModel
struct UCharacterConfigWidget_C_CreateModel_Params
{
	int*                                               ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESexType*                                          sex_type;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	EModelType*                                        model_type;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTexture2D**                                 normal_texture;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__Male_Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
struct UCharacterConfigWidget_C_BndEvt__Male_Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__Female_Button_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
struct UCharacterConfigWidget_C_BndEvt__Female_Button_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.InitCharacterData
struct UCharacterConfigWidget_C_InitCharacterData_Params
{
	ESexType                                           sex;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FaceId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkinColorId;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HiarId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HairColorId;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.Construct
struct UCharacterConfigWidget_C_Construct_Params
{
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.SetModelId
struct UCharacterConfigWidget_C_SetModelId_Params
{
	ESexType                                           SexType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EModelType                                         ModelType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.SetColorId
struct UCharacterConfigWidget_C_SetColorId_Params
{
	EModelType                                         ModelType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__ComeBackToHall_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
struct UCharacterConfigWidget_C_BndEvt__ComeBackToHall_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__PayToSurre_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UCharacterConfigWidget_C_BndEvt__PayToSurre_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.SwitchFace
struct UCharacterConfigWidget_C_SwitchFace_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.SwitchHair
struct UCharacterConfigWidget_C_SwitchHair_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__QuitGame_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
struct UCharacterConfigWidget_C_BndEvt__QuitGame_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__SkinColorBoxWidget_K2Node_ComponentBoundEvent_481_SetColorId__DelegateSignature
struct UCharacterConfigWidget_C_BndEvt__SkinColorBoxWidget_K2Node_ComponentBoundEvent_481_SetColorId__DelegateSignature_Params
{
	EModelType                                         Model;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__SkinColorBoxWidget_K2Node_ComponentBoundEvent_488_SkinColorIndex__DelegateSignature
struct UCharacterConfigWidget_C_BndEvt__SkinColorBoxWidget_K2Node_ComponentBoundEvent_488_SkinColorIndex__DelegateSignature_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__HairColorBoxWidget_K2Node_ComponentBoundEvent_538_SetColorId__DelegateSignature
struct UCharacterConfigWidget_C_BndEvt__HairColorBoxWidget_K2Node_ComponentBoundEvent_538_SetColorId__DelegateSignature_Params
{
	EModelType                                         Model;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__HairColorBoxWidget_K2Node_ComponentBoundEvent_566_HairColorIndex__DelegateSignature
struct UCharacterConfigWidget_C_BndEvt__HairColorBoxWidget_K2Node_ComponentBoundEvent_566_HairColorIndex__DelegateSignature_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__MaleFaceModelBoxWidget_K2Node_ComponentBoundEvent_604_SetModelId__DelegateSignature
struct UCharacterConfigWidget_C_BndEvt__MaleFaceModelBoxWidget_K2Node_ComponentBoundEvent_604_SetModelId__DelegateSignature_Params
{
	ESexType                                           sex;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EModelType                                         Model;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__FemaleFaceModelBoxWidget_K2Node_ComponentBoundEvent_632_SetModelId__DelegateSignature
struct UCharacterConfigWidget_C_BndEvt__FemaleFaceModelBoxWidget_K2Node_ComponentBoundEvent_632_SetModelId__DelegateSignature_Params
{
	ESexType                                           sex;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EModelType                                         Model;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__MaleHairModelBoxWidget_K2Node_ComponentBoundEvent_661_SetModelId__DelegateSignature
struct UCharacterConfigWidget_C_BndEvt__MaleHairModelBoxWidget_K2Node_ComponentBoundEvent_661_SetModelId__DelegateSignature_Params
{
	ESexType                                           sex;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EModelType                                         Model;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__FemaleHairModelBoxWidget_K2Node_ComponentBoundEvent_691_SetModelId__DelegateSignature
struct UCharacterConfigWidget_C_BndEvt__FemaleHairModelBoxWidget_K2Node_ComponentBoundEvent_691_SetModelId__DelegateSignature_Params
{
	ESexType                                           sex;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EModelType                                         Model;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__MaleFaceModelBoxWidget_K2Node_ComponentBoundEvent_745_FaceIndex__DelegateSignature
struct UCharacterConfigWidget_C_BndEvt__MaleFaceModelBoxWidget_K2Node_ComponentBoundEvent_745_FaceIndex__DelegateSignature_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__FemaleFaceModelBoxWidget_K2Node_ComponentBoundEvent_750_FaceIndex__DelegateSignature
struct UCharacterConfigWidget_C_BndEvt__FemaleFaceModelBoxWidget_K2Node_ComponentBoundEvent_750_FaceIndex__DelegateSignature_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__MaleHairModelBoxWidget_K2Node_ComponentBoundEvent_780_HairIndex__DelegateSignature
struct UCharacterConfigWidget_C_BndEvt__MaleHairModelBoxWidget_K2Node_ComponentBoundEvent_780_HairIndex__DelegateSignature_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__FemaleHairModelBoxWidget_K2Node_ComponentBoundEvent_810_HairIndex__DelegateSignature
struct UCharacterConfigWidget_C_BndEvt__FemaleHairModelBoxWidget_K2Node_ComponentBoundEvent_810_HairIndex__DelegateSignature_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.PreConstruct
struct UCharacterConfigWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__ReverseName_K2Node_ComponentBoundEvent_1314_OnButtonClickedEvent__DelegateSignature
struct UCharacterConfigWidget_C_BndEvt__ReverseName_K2Node_ComponentBoundEvent_1314_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.InitName
struct UCharacterConfigWidget_C_InitName_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.UpdateMoney
struct UCharacterConfigWidget_C_UpdateMoney_Params
{
	int                                                money;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.CheckPlayerChange
struct UCharacterConfigWidget_C_CheckPlayerChange_Params
{
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__NameTextBox_K2Node_ComponentBoundEvent_217_OnEditableTextBoxChangedEvent__DelegateSignature
struct UCharacterConfigWidget_C_BndEvt__NameTextBox_K2Node_ComponentBoundEvent_217_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.ResetCharShow
struct UCharacterConfigWidget_C_ResetCharShow_Params
{
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.ReversePlayerName
struct UCharacterConfigWidget_C_ReversePlayerName_Params
{
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.ExecuteUbergraph_CharacterConfigWidget
struct UCharacterConfigWidget_C_ExecuteUbergraph_CharacterConfigWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.SendRemind__DelegateSignature
struct UCharacterConfigWidget_C_SendRemind__DelegateSignature_Params
{
	struct FText                                       Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.UpdateHairColor__DelegateSignature
struct UCharacterConfigWidget_C_UpdateHairColor__DelegateSignature_Params
{
	int                                                ColorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.UpdateSkinColor__DelegateSignature
struct UCharacterConfigWidget_C_UpdateSkinColor__DelegateSignature_Params
{
	int                                                ColorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.UpdateHair__DelegateSignature
struct UCharacterConfigWidget_C_UpdateHair__DelegateSignature_Params
{
	int                                                HairId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.UpdateHead__DelegateSignature
struct UCharacterConfigWidget_C_UpdateHead__DelegateSignature_Params
{
	int                                                FaceId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterConfigWidget.CharacterConfigWidget_C.UpdateSex__DelegateSignature
struct UCharacterConfigWidget_C_UpdateSex__DelegateSignature_Params
{
	ESexType                                           sex;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
