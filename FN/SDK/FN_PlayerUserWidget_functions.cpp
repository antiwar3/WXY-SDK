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

// Function PlayerUserWidget.PlayerUserWidget_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UPlayerUserWidget_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerUserWidget.PlayerUserWidget_C.OnMouseButtonDown");

	UPlayerUserWidget_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerUserWidget.PlayerUserWidget_C.GetType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerUserWidget_C::GetType(int* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerUserWidget.PlayerUserWidget_C.GetType");

	UPlayerUserWidget_C_GetType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function PlayerUserWidget.PlayerUserWidget_C.SetAddTeamerIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EButtonState>      State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerUserWidget_C::SetAddTeamerIcon(TEnumAsByte<EButtonState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerUserWidget.PlayerUserWidget_C.SetAddTeamerIcon");

	UPlayerUserWidget_C_SetAddTeamerIcon_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerUserWidget.PlayerUserWidget_C.SetButtonIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EButtonState>      State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerUserWidget_C::SetButtonIcon(TEnumAsByte<EButtonState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerUserWidget.PlayerUserWidget_C.SetButtonIcon");

	UPlayerUserWidget_C_SetButtonIcon_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerUserWidget.PlayerUserWidget_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              HeadTex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            YSState                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            UserId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsTeam                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerUserWidget_C::Init(class UTexture2D* HeadTex, const struct FString& Name, int State, int YSState, int UserId, bool IsTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerUserWidget.PlayerUserWidget_C.Init");

	UPlayerUserWidget_C_Init_Params params;
	params.HeadTex = HeadTex;
	params.Name = Name;
	params.State = State;
	params.YSState = YSState;
	params.UserId = UserId;
	params.IsTeam = IsTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerUserWidget.PlayerUserWidget_C.SetPlayerState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            YSState                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerUserWidget_C::SetPlayerState(int State, int YSState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerUserWidget.PlayerUserWidget_C.SetPlayerState");

	UPlayerUserWidget_C_SetPlayerState_Params params;
	params.State = State;
	params.YSState = YSState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerUserWidget.PlayerUserWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerUserWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerUserWidget.PlayerUserWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UPlayerUserWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerUserWidget.PlayerUserWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerUserWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerUserWidget.PlayerUserWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature");

	UPlayerUserWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerUserWidget.PlayerUserWidget_C.SetChooseState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerUserWidget_C::SetChooseState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerUserWidget.PlayerUserWidget_C.SetChooseState");

	UPlayerUserWidget_C_SetChooseState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerUserWidget.PlayerUserWidget_C.BndEvt__AddTeamPlayer_K2Node_ComponentBoundEvent_73_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerUserWidget_C::BndEvt__AddTeamPlayer_K2Node_ComponentBoundEvent_73_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerUserWidget.PlayerUserWidget_C.BndEvt__AddTeamPlayer_K2Node_ComponentBoundEvent_73_OnButtonClickedEvent__DelegateSignature");

	UPlayerUserWidget_C_BndEvt__AddTeamPlayer_K2Node_ComponentBoundEvent_73_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerUserWidget.PlayerUserWidget_C.BndEvt__AddTeamPlayer_K2Node_ComponentBoundEvent_102_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerUserWidget_C::BndEvt__AddTeamPlayer_K2Node_ComponentBoundEvent_102_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerUserWidget.PlayerUserWidget_C.BndEvt__AddTeamPlayer_K2Node_ComponentBoundEvent_102_OnButtonHoverEvent__DelegateSignature");

	UPlayerUserWidget_C_BndEvt__AddTeamPlayer_K2Node_ComponentBoundEvent_102_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerUserWidget.PlayerUserWidget_C.BndEvt__AddTeamPlayer_K2Node_ComponentBoundEvent_112_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerUserWidget_C::BndEvt__AddTeamPlayer_K2Node_ComponentBoundEvent_112_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerUserWidget.PlayerUserWidget_C.BndEvt__AddTeamPlayer_K2Node_ComponentBoundEvent_112_OnButtonHoverEvent__DelegateSignature");

	UPlayerUserWidget_C_BndEvt__AddTeamPlayer_K2Node_ComponentBoundEvent_112_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerUserWidget.PlayerUserWidget_C.BndEvt__AddTeamPlayer_K2Node_ComponentBoundEvent_123_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerUserWidget_C::BndEvt__AddTeamPlayer_K2Node_ComponentBoundEvent_123_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerUserWidget.PlayerUserWidget_C.BndEvt__AddTeamPlayer_K2Node_ComponentBoundEvent_123_OnButtonPressedEvent__DelegateSignature");

	UPlayerUserWidget_C_BndEvt__AddTeamPlayer_K2Node_ComponentBoundEvent_123_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerUserWidget.PlayerUserWidget_C.BndEvt__AddTeamPlayer_K2Node_ComponentBoundEvent_68_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerUserWidget_C::BndEvt__AddTeamPlayer_K2Node_ComponentBoundEvent_68_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerUserWidget.PlayerUserWidget_C.BndEvt__AddTeamPlayer_K2Node_ComponentBoundEvent_68_OnButtonReleasedEvent__DelegateSignature");

	UPlayerUserWidget_C_BndEvt__AddTeamPlayer_K2Node_ComponentBoundEvent_68_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerUserWidget.PlayerUserWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_96_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerUserWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_96_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerUserWidget.PlayerUserWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_96_OnButtonReleasedEvent__DelegateSignature");

	UPlayerUserWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_96_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerUserWidget.PlayerUserWidget_C.PlayerChangeInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UTexture2D*              Head                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerUserWidget_C::PlayerChangeInfo(const struct FString& Name, class UTexture2D* Head)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerUserWidget.PlayerUserWidget_C.PlayerChangeInfo");

	UPlayerUserWidget_C_PlayerChangeInfo_Params params;
	params.Name = Name;
	params.Head = Head;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerUserWidget.PlayerUserWidget_C.ExecuteUbergraph_PlayerUserWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerUserWidget_C::ExecuteUbergraph_PlayerUserWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerUserWidget.PlayerUserWidget_C.ExecuteUbergraph_PlayerUserWidget");

	UPlayerUserWidget_C_ExecuteUbergraph_PlayerUserWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerUserWidget.PlayerUserWidget_C.AddTeamer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Teamer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerUserWidget_C::AddTeamer__DelegateSignature(const struct FString& Teamer)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerUserWidget.PlayerUserWidget_C.AddTeamer__DelegateSignature");

	UPlayerUserWidget_C_AddTeamer__DelegateSignature_Params params;
	params.Teamer = Teamer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerUserWidget.PlayerUserWidget_C.SelectFreiend__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerUserWidget_C::SelectFreiend__DelegateSignature(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerUserWidget.PlayerUserWidget_C.SelectFreiend__DelegateSignature");

	UPlayerUserWidget_C_SelectFreiend__DelegateSignature_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerUserWidget.PlayerUserWidget_C.DeleteFriend__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerUserWidget_C::DeleteFriend__DelegateSignature(int ID, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerUserWidget.PlayerUserWidget_C.DeleteFriend__DelegateSignature");

	UPlayerUserWidget_C_DeleteFriend__DelegateSignature_Params params;
	params.ID = ID;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerUserWidget.PlayerUserWidget_C.MouseHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerUserWidget_C::MouseHover__DelegateSignature(int ID, int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerUserWidget.PlayerUserWidget_C.MouseHover__DelegateSignature");

	UPlayerUserWidget_C_MouseHover__DelegateSignature_Params params;
	params.ID = ID;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
