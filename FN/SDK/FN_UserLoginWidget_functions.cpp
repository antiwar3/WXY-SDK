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

// Function UserLoginWidget.UserLoginWidget_C.IsLogin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserLoginWidget_C::IsLogin(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserLoginWidget.UserLoginWidget_C.IsLogin");

	UUserLoginWidget_C_IsLogin_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserLoginWidget.UserLoginWidget_C.UserUnFind
// (BlueprintCallable, BlueprintEvent)

void UUserLoginWidget_C::UserUnFind()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserLoginWidget.UserLoginWidget_C.UserUnFind");

	UUserLoginWidget_C_UserUnFind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserLoginWidget.UserLoginWidget_C.CancelLogin
// (BlueprintCallable, BlueprintEvent)

void UUserLoginWidget_C::CancelLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserLoginWidget.UserLoginWidget_C.CancelLogin");

	UUserLoginWidget_C_CancelLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserLoginWidget.UserLoginWidget_C.DealwithLoginResponse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ELoginResponseType             LoginResponse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserLoginWidget_C::DealwithLoginResponse(ELoginResponseType LoginResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserLoginWidget.UserLoginWidget_C.DealwithLoginResponse");

	UUserLoginWidget_C_DealwithLoginResponse_Params params;
	params.LoginResponse = LoginResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserLoginWidget.UserLoginWidget_C.LoginRenamename
// (BlueprintCallable, BlueprintEvent)

void UUserLoginWidget_C::LoginRenamename()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserLoginWidget.UserLoginWidget_C.LoginRenamename");

	UUserLoginWidget_C_LoginRenamename_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserLoginWidget.UserLoginWidget_C.UnvalidVersion
// (BlueprintCallable, BlueprintEvent)

void UUserLoginWidget_C::UnvalidVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserLoginWidget.UserLoginWidget_C.UnvalidVersion");

	UUserLoginWidget_C_UnvalidVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserLoginWidget.UserLoginWidget_C.PlatformError
// (BlueprintCallable, BlueprintEvent)

void UUserLoginWidget_C::PlatformError()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserLoginWidget.UserLoginWidget_C.PlatformError");

	UUserLoginWidget_C_PlatformError_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserLoginWidget.UserLoginWidget_C.BndEvt__QuitGame_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUserLoginWidget_C::BndEvt__QuitGame_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserLoginWidget.UserLoginWidget_C.BndEvt__QuitGame_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UUserLoginWidget_C_BndEvt__QuitGame_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserLoginWidget.UserLoginWidget_C.ServerError
// (BlueprintCallable, BlueprintEvent)

void UUserLoginWidget_C::ServerError()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserLoginWidget.UserLoginWidget_C.ServerError");

	UUserLoginWidget_C_ServerError_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserLoginWidget.UserLoginWidget_C.UserOutRule
// (BlueprintCallable, BlueprintEvent)

void UUserLoginWidget_C::UserOutRule()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserLoginWidget.UserLoginWidget_C.UserOutRule");

	UUserLoginWidget_C_UserOutRule_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserLoginWidget.UserLoginWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUserLoginWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserLoginWidget.UserLoginWidget_C.Construct");

	UUserLoginWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserLoginWidget.UserLoginWidget_C.BndEvt__UserLoginInputWidget_K2Node_ComponentBoundEvent_1_IsLogin__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESlateVisibility               Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserLoginWidget_C::BndEvt__UserLoginInputWidget_K2Node_ComponentBoundEvent_1_IsLogin__DelegateSignature(ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserLoginWidget.UserLoginWidget_C.BndEvt__UserLoginInputWidget_K2Node_ComponentBoundEvent_1_IsLogin__DelegateSignature");

	UUserLoginWidget_C_BndEvt__UserLoginInputWidget_K2Node_ComponentBoundEvent_1_IsLogin__DelegateSignature_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserLoginWidget.UserLoginWidget_C.BndEvt__UserLoginInputWidget_K2Node_ComponentBoundEvent_2_LoginDispatch__DelegateSignature
// (BlueprintEvent)

void UUserLoginWidget_C::BndEvt__UserLoginInputWidget_K2Node_ComponentBoundEvent_2_LoginDispatch__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserLoginWidget.UserLoginWidget_C.BndEvt__UserLoginInputWidget_K2Node_ComponentBoundEvent_2_LoginDispatch__DelegateSignature");

	UUserLoginWidget_C_BndEvt__UserLoginInputWidget_K2Node_ComponentBoundEvent_2_LoginDispatch__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserLoginWidget.UserLoginWidget_C.BndEvt__WaitLoginResponseWidget_K2Node_ComponentBoundEvent_37_LoginCancelDispatch__DelegateSignature
// (BlueprintEvent)

void UUserLoginWidget_C::BndEvt__WaitLoginResponseWidget_K2Node_ComponentBoundEvent_37_LoginCancelDispatch__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserLoginWidget.UserLoginWidget_C.BndEvt__WaitLoginResponseWidget_K2Node_ComponentBoundEvent_37_LoginCancelDispatch__DelegateSignature");

	UUserLoginWidget_C_BndEvt__WaitLoginResponseWidget_K2Node_ComponentBoundEvent_37_LoginCancelDispatch__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserLoginWidget.UserLoginWidget_C.ExecuteUbergraph_UserLoginWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserLoginWidget_C::ExecuteUbergraph_UserLoginWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserLoginWidget.UserLoginWidget_C.ExecuteUbergraph_UserLoginWidget");

	UUserLoginWidget_C_ExecuteUbergraph_UserLoginWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserLoginWidget.UserLoginWidget_C.LoginDispatch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUserLoginWidget_C::LoginDispatch__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserLoginWidget.UserLoginWidget_C.LoginDispatch__DelegateSignature");

	UUserLoginWidget_C_LoginDispatch__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserLoginWidget.UserLoginWidget_C.SaveLoginInfo__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 PassWord                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUserLoginWidget_C::SaveLoginInfo__DelegateSignature(const struct FString& UserName, const struct FString& PassWord)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserLoginWidget.UserLoginWidget_C.SaveLoginInfo__DelegateSignature");

	UUserLoginWidget_C_SaveLoginInfo__DelegateSignature_Params params;
	params.UserName = UserName;
	params.PassWord = PassWord;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
