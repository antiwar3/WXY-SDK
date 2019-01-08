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

// Function UserInputNameWidget.UserInputNameWidget_C.CheckName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUserInputNameWidget_C::CheckName()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserInputNameWidget.UserInputNameWidget_C.CheckName");

	UUserInputNameWidget_C_CheckName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserInputNameWidget.UserInputNameWidget_C.NameRemind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            remind                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserInputNameWidget_C::NameRemind(int remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserInputNameWidget.UserInputNameWidget_C.NameRemind");

	UUserInputNameWidget_C_NameRemind_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserInputNameWidget.UserInputNameWidget_C.BndEvt__Sure_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUserInputNameWidget_C::BndEvt__Sure_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserInputNameWidget.UserInputNameWidget_C.BndEvt__Sure_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UUserInputNameWidget_C_BndEvt__Sure_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserInputNameWidget.UserInputNameWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUserInputNameWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserInputNameWidget.UserInputNameWidget_C.Construct");

	UUserInputNameWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserInputNameWidget.UserInputNameWidget_C.BndEvt__NameInputBox_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserInputNameWidget_C::BndEvt__NameInputBox_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserInputNameWidget.UserInputNameWidget_C.BndEvt__NameInputBox_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UUserInputNameWidget_C_BndEvt__NameInputBox_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserInputNameWidget.UserInputNameWidget_C.BndEvt__QuitGame_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUserInputNameWidget_C::BndEvt__QuitGame_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserInputNameWidget.UserInputNameWidget_C.BndEvt__QuitGame_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UUserInputNameWidget_C_BndEvt__QuitGame_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserInputNameWidget.UserInputNameWidget_C.ExecuteUbergraph_UserInputNameWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserInputNameWidget_C::ExecuteUbergraph_UserInputNameWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserInputNameWidget.UserInputNameWidget_C.ExecuteUbergraph_UserInputNameWidget");

	UUserInputNameWidget_C_ExecuteUbergraph_UserInputNameWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserInputNameWidget.UserInputNameWidget_C.CreateCharacterName__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUserInputNameWidget_C::CreateCharacterName__DelegateSignature(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserInputNameWidget.UserInputNameWidget_C.CreateCharacterName__DelegateSignature");

	UUserInputNameWidget_C_CreateCharacterName__DelegateSignature_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
