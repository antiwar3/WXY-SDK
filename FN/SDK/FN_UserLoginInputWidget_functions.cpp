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

// Function UserLoginInputWidget.UserLoginInputWidget_C.RemindInputPassword
// (BlueprintCallable, BlueprintEvent)

void UUserLoginInputWidget_C::RemindInputPassword()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserLoginInputWidget.UserLoginInputWidget_C.RemindInputPassword");

	UUserLoginInputWidget_C_RemindInputPassword_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserLoginInputWidget.UserLoginInputWidget_C.RemindUser
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UUserLoginInputWidget_C::RemindUser(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserLoginInputWidget.UserLoginInputWidget_C.RemindUser");

	UUserLoginInputWidget_C_RemindUser_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserLoginInputWidget.UserLoginInputWidget_C.BndEvt__TextBoxUser_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUserLoginInputWidget_C::BndEvt__TextBoxUser_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserLoginInputWidget.UserLoginInputWidget_C.BndEvt__TextBoxUser_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature");

	UUserLoginInputWidget_C_BndEvt__TextBoxUser_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserLoginInputWidget.UserLoginInputWidget_C.BndEvt__TextBoxPassWd_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUserLoginInputWidget_C::BndEvt__TextBoxPassWd_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserLoginInputWidget.UserLoginInputWidget_C.BndEvt__TextBoxPassWd_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature");

	UUserLoginInputWidget_C_BndEvt__TextBoxPassWd_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserLoginInputWidget.UserLoginInputWidget_C.BndEvt__Login_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUserLoginInputWidget_C::BndEvt__Login_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserLoginInputWidget.UserLoginInputWidget_C.BndEvt__Login_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");

	UUserLoginInputWidget_C_BndEvt__Login_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserLoginInputWidget.UserLoginInputWidget_C.BndEvt__TextBoxPassWd_K2Node_ComponentBoundEvent_17_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserLoginInputWidget_C::BndEvt__TextBoxPassWd_K2Node_ComponentBoundEvent_17_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserLoginInputWidget.UserLoginInputWidget_C.BndEvt__TextBoxPassWd_K2Node_ComponentBoundEvent_17_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UUserLoginInputWidget_C_BndEvt__TextBoxPassWd_K2Node_ComponentBoundEvent_17_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserLoginInputWidget.UserLoginInputWidget_C.BndEvt__TextBoxUser_K2Node_ComponentBoundEvent_18_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserLoginInputWidget_C::BndEvt__TextBoxUser_K2Node_ComponentBoundEvent_18_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserLoginInputWidget.UserLoginInputWidget_C.BndEvt__TextBoxUser_K2Node_ComponentBoundEvent_18_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UUserLoginInputWidget_C_BndEvt__TextBoxUser_K2Node_ComponentBoundEvent_18_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserLoginInputWidget.UserLoginInputWidget_C.AutoLogin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 PassWord                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUserLoginInputWidget_C::AutoLogin(const struct FString& UserName, const struct FString& PassWord)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserLoginInputWidget.UserLoginInputWidget_C.AutoLogin");

	UUserLoginInputWidget_C_AutoLogin_Params params;
	params.UserName = UserName;
	params.PassWord = PassWord;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserLoginInputWidget.UserLoginInputWidget_C.LoginGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 user_name                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 PassWord                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            logintype                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserLoginInputWidget_C::LoginGame(const struct FString& user_name, const struct FString& PassWord, int logintype, ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserLoginInputWidget.UserLoginInputWidget_C.LoginGame");

	UUserLoginInputWidget_C_LoginGame_Params params;
	params.user_name = user_name;
	params.PassWord = PassWord;
	params.logintype = logintype;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserLoginInputWidget.UserLoginInputWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUserLoginInputWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserLoginInputWidget.UserLoginInputWidget_C.Construct");

	UUserLoginInputWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserLoginInputWidget.UserLoginInputWidget_C.ExecuteUbergraph_UserLoginInputWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserLoginInputWidget_C::ExecuteUbergraph_UserLoginInputWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserLoginInputWidget.UserLoginInputWidget_C.ExecuteUbergraph_UserLoginInputWidget");

	UUserLoginInputWidget_C_ExecuteUbergraph_UserLoginInputWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserLoginInputWidget.UserLoginInputWidget_C.LoginDispatch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUserLoginInputWidget_C::LoginDispatch__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserLoginInputWidget.UserLoginInputWidget_C.LoginDispatch__DelegateSignature");

	UUserLoginInputWidget_C_LoginDispatch__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserLoginInputWidget.UserLoginInputWidget_C.IsLogin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserLoginInputWidget_C::IsLogin__DelegateSignature(ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserLoginInputWidget.UserLoginInputWidget_C.IsLogin__DelegateSignature");

	UUserLoginInputWidget_C_IsLogin__DelegateSignature_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
