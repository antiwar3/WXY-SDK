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

// Function UserLoginInputWidget.UserLoginInputWidget_C.RemindInputPassword
struct UUserLoginInputWidget_C_RemindInputPassword_Params
{
};

// Function UserLoginInputWidget.UserLoginInputWidget_C.RemindUser
struct UUserLoginInputWidget_C_RemindUser_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UserLoginInputWidget.UserLoginInputWidget_C.BndEvt__TextBoxUser_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
struct UUserLoginInputWidget_C_BndEvt__TextBoxUser_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UserLoginInputWidget.UserLoginInputWidget_C.BndEvt__TextBoxPassWd_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
struct UUserLoginInputWidget_C_BndEvt__TextBoxPassWd_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UserLoginInputWidget.UserLoginInputWidget_C.BndEvt__Login_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
struct UUserLoginInputWidget_C_BndEvt__Login_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UserLoginInputWidget.UserLoginInputWidget_C.BndEvt__TextBoxPassWd_K2Node_ComponentBoundEvent_17_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UUserLoginInputWidget_C_BndEvt__TextBoxPassWd_K2Node_ComponentBoundEvent_17_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserLoginInputWidget.UserLoginInputWidget_C.BndEvt__TextBoxUser_K2Node_ComponentBoundEvent_18_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UUserLoginInputWidget_C_BndEvt__TextBoxUser_K2Node_ComponentBoundEvent_18_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserLoginInputWidget.UserLoginInputWidget_C.AutoLogin
struct UUserLoginInputWidget_C_AutoLogin_Params
{
	struct FString                                     UserName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     PassWord;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UserLoginInputWidget.UserLoginInputWidget_C.LoginGame
struct UUserLoginInputWidget_C_LoginGame_Params
{
	struct FString                                     user_name;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     PassWord;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                logintype;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserLoginInputWidget.UserLoginInputWidget_C.Construct
struct UUserLoginInputWidget_C_Construct_Params
{
};

// Function UserLoginInputWidget.UserLoginInputWidget_C.ExecuteUbergraph_UserLoginInputWidget
struct UUserLoginInputWidget_C_ExecuteUbergraph_UserLoginInputWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserLoginInputWidget.UserLoginInputWidget_C.LoginDispatch__DelegateSignature
struct UUserLoginInputWidget_C_LoginDispatch__DelegateSignature_Params
{
};

// Function UserLoginInputWidget.UserLoginInputWidget_C.IsLogin__DelegateSignature
struct UUserLoginInputWidget_C_IsLogin__DelegateSignature_Params
{
	ESlateVisibility                                   Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
