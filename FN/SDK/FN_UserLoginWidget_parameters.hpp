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

// Function UserLoginWidget.UserLoginWidget_C.IsLogin
struct UUserLoginWidget_C_IsLogin_Params
{
	ESlateVisibility                                   InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserLoginWidget.UserLoginWidget_C.UserUnFind
struct UUserLoginWidget_C_UserUnFind_Params
{
};

// Function UserLoginWidget.UserLoginWidget_C.CancelLogin
struct UUserLoginWidget_C_CancelLogin_Params
{
};

// Function UserLoginWidget.UserLoginWidget_C.DealwithLoginResponse
struct UUserLoginWidget_C_DealwithLoginResponse_Params
{
	ELoginResponseType                                 LoginResponse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserLoginWidget.UserLoginWidget_C.LoginRenamename
struct UUserLoginWidget_C_LoginRenamename_Params
{
};

// Function UserLoginWidget.UserLoginWidget_C.UnvalidVersion
struct UUserLoginWidget_C_UnvalidVersion_Params
{
};

// Function UserLoginWidget.UserLoginWidget_C.PlatformError
struct UUserLoginWidget_C_PlatformError_Params
{
};

// Function UserLoginWidget.UserLoginWidget_C.BndEvt__QuitGame_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UUserLoginWidget_C_BndEvt__QuitGame_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UserLoginWidget.UserLoginWidget_C.ServerError
struct UUserLoginWidget_C_ServerError_Params
{
};

// Function UserLoginWidget.UserLoginWidget_C.UserOutRule
struct UUserLoginWidget_C_UserOutRule_Params
{
};

// Function UserLoginWidget.UserLoginWidget_C.Construct
struct UUserLoginWidget_C_Construct_Params
{
};

// Function UserLoginWidget.UserLoginWidget_C.BndEvt__UserLoginInputWidget_K2Node_ComponentBoundEvent_1_IsLogin__DelegateSignature
struct UUserLoginWidget_C_BndEvt__UserLoginInputWidget_K2Node_ComponentBoundEvent_1_IsLogin__DelegateSignature_Params
{
	ESlateVisibility                                   Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserLoginWidget.UserLoginWidget_C.BndEvt__UserLoginInputWidget_K2Node_ComponentBoundEvent_2_LoginDispatch__DelegateSignature
struct UUserLoginWidget_C_BndEvt__UserLoginInputWidget_K2Node_ComponentBoundEvent_2_LoginDispatch__DelegateSignature_Params
{
};

// Function UserLoginWidget.UserLoginWidget_C.BndEvt__WaitLoginResponseWidget_K2Node_ComponentBoundEvent_37_LoginCancelDispatch__DelegateSignature
struct UUserLoginWidget_C_BndEvt__WaitLoginResponseWidget_K2Node_ComponentBoundEvent_37_LoginCancelDispatch__DelegateSignature_Params
{
};

// Function UserLoginWidget.UserLoginWidget_C.ExecuteUbergraph_UserLoginWidget
struct UUserLoginWidget_C_ExecuteUbergraph_UserLoginWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserLoginWidget.UserLoginWidget_C.LoginDispatch__DelegateSignature
struct UUserLoginWidget_C_LoginDispatch__DelegateSignature_Params
{
};

// Function UserLoginWidget.UserLoginWidget_C.SaveLoginInfo__DelegateSignature
struct UUserLoginWidget_C_SaveLoginInfo__DelegateSignature_Params
{
	struct FString                                     UserName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     PassWord;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
