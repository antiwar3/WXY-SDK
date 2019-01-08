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

// Function UserInputNameWidget.UserInputNameWidget_C.CheckName
struct UUserInputNameWidget_C_CheckName_Params
{
};

// Function UserInputNameWidget.UserInputNameWidget_C.NameRemind
struct UUserInputNameWidget_C_NameRemind_Params
{
	int                                                remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserInputNameWidget.UserInputNameWidget_C.BndEvt__Sure_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UUserInputNameWidget_C_BndEvt__Sure_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UserInputNameWidget.UserInputNameWidget_C.Construct
struct UUserInputNameWidget_C_Construct_Params
{
};

// Function UserInputNameWidget.UserInputNameWidget_C.BndEvt__NameInputBox_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UUserInputNameWidget_C_BndEvt__NameInputBox_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserInputNameWidget.UserInputNameWidget_C.BndEvt__QuitGame_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UUserInputNameWidget_C_BndEvt__QuitGame_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UserInputNameWidget.UserInputNameWidget_C.ExecuteUbergraph_UserInputNameWidget
struct UUserInputNameWidget_C_ExecuteUbergraph_UserInputNameWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserInputNameWidget.UserInputNameWidget_C.CreateCharacterName__DelegateSignature
struct UUserInputNameWidget_C_CreateCharacterName__DelegateSignature_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
