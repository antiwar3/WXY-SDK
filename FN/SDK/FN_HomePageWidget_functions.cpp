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

// Function HomePageWidget.HomePageWidget_C.BndEvt__Show_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHomePageWidget_C::BndEvt__Show_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomePageWidget.HomePageWidget_C.BndEvt__Show_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UHomePageWidget_C_BndEvt__Show_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomePageWidget.HomePageWidget_C.SetButtonState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESortState>        SortState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHomePageWidget_C::SetButtonState(TEnumAsByte<ESortState> SortState)
{
	static auto fn = UObject::FindObject<UFunction>("Function HomePageWidget.HomePageWidget_C.SetButtonState");

	UHomePageWidget_C_SetButtonState_Params params;
	params.SortState = SortState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomePageWidget.HomePageWidget_C.AppendPlayer
// (BlueprintCallable, BlueprintEvent)

void UHomePageWidget_C::AppendPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomePageWidget.HomePageWidget_C.AppendPlayer");

	UHomePageWidget_C_AppendPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomePageWidget.HomePageWidget_C.SetMasterMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsMaster                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHomePageWidget_C::SetMasterMode(bool IsMaster)
{
	static auto fn = UObject::FindObject<UFunction>("Function HomePageWidget.HomePageWidget_C.SetMasterMode");

	UHomePageWidget_C_SetMasterMode_Params params;
	params.IsMaster = IsMaster;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomePageWidget.HomePageWidget_C.SetPlayModeState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHomePageWidget_C::SetPlayModeState(int PlayMode, int State)
{
	static auto fn = UObject::FindObject<UFunction>("Function HomePageWidget.HomePageWidget_C.SetPlayModeState");

	UHomePageWidget_C_SetPlayModeState_Params params;
	params.PlayMode = PlayMode;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomePageWidget.HomePageWidget_C.SetPlayModeEndTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            days                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Hours                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Minutes                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHomePageWidget_C::SetPlayModeEndTime(int PlayMode, int days, int Hours, int Minutes, bool Start)
{
	static auto fn = UObject::FindObject<UFunction>("Function HomePageWidget.HomePageWidget_C.SetPlayModeEndTime");

	UHomePageWidget_C_SetPlayModeEndTime_Params params;
	params.PlayMode = PlayMode;
	params.days = days;
	params.Hours = Hours;
	params.Minutes = Minutes;
	params.Start = Start;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomePageWidget.HomePageWidget_C.Reset
// (BlueprintCallable, BlueprintEvent)

void UHomePageWidget_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomePageWidget.HomePageWidget_C.Reset");

	UHomePageWidget_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomePageWidget.HomePageWidget_C.BndEvt__PlayGame_K2Node_ComponentBoundEvent_2_HallRemind__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UHomePageWidget_C::BndEvt__PlayGame_K2Node_ComponentBoundEvent_2_HallRemind__DelegateSignature(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function HomePageWidget.HomePageWidget_C.BndEvt__PlayGame_K2Node_ComponentBoundEvent_2_HallRemind__DelegateSignature");

	UHomePageWidget_C_BndEvt__PlayGame_K2Node_ComponentBoundEvent_2_HallRemind__DelegateSignature_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomePageWidget.HomePageWidget_C.BndEvt__PlayGame_K2Node_ComponentBoundEvent_3_PopSortMode__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHomePageWidget_C::BndEvt__PlayGame_K2Node_ComponentBoundEvent_3_PopSortMode__DelegateSignature(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function HomePageWidget.HomePageWidget_C.BndEvt__PlayGame_K2Node_ComponentBoundEvent_3_PopSortMode__DelegateSignature");

	UHomePageWidget_C_BndEvt__PlayGame_K2Node_ComponentBoundEvent_3_PopSortMode__DelegateSignature_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomePageWidget.HomePageWidget_C.BndEvt__PlayGame_K2Node_ComponentBoundEvent_4_PopServerMode__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            ServerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHomePageWidget_C::BndEvt__PlayGame_K2Node_ComponentBoundEvent_4_PopServerMode__DelegateSignature(int ServerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function HomePageWidget.HomePageWidget_C.BndEvt__PlayGame_K2Node_ComponentBoundEvent_4_PopServerMode__DelegateSignature");

	UHomePageWidget_C_BndEvt__PlayGame_K2Node_ComponentBoundEvent_4_PopServerMode__DelegateSignature_Params params;
	params.ServerId = ServerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomePageWidget.HomePageWidget_C.BndEvt__PlayGame_K2Node_ComponentBoundEvent_5_EventCreateRoom__DelegateSignature
// (BlueprintEvent)

void UHomePageWidget_C::BndEvt__PlayGame_K2Node_ComponentBoundEvent_5_EventCreateRoom__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomePageWidget.HomePageWidget_C.BndEvt__PlayGame_K2Node_ComponentBoundEvent_5_EventCreateRoom__DelegateSignature");

	UHomePageWidget_C_BndEvt__PlayGame_K2Node_ComponentBoundEvent_5_EventCreateRoom__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomePageWidget.HomePageWidget_C.BndEvt__PlayGame_K2Node_ComponentBoundEvent_6_EventPreviewRoom__DelegateSignature
// (BlueprintEvent)

void UHomePageWidget_C::BndEvt__PlayGame_K2Node_ComponentBoundEvent_6_EventPreviewRoom__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomePageWidget.HomePageWidget_C.BndEvt__PlayGame_K2Node_ComponentBoundEvent_6_EventPreviewRoom__DelegateSignature");

	UHomePageWidget_C_BndEvt__PlayGame_K2Node_ComponentBoundEvent_6_EventPreviewRoom__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomePageWidget.HomePageWidget_C.BndEvt__Show_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UHomePageWidget_C::BndEvt__Show_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomePageWidget.HomePageWidget_C.BndEvt__Show_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature");

	UHomePageWidget_C_BndEvt__Show_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomePageWidget.HomePageWidget_C.BndEvt__Show_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UHomePageWidget_C::BndEvt__Show_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomePageWidget.HomePageWidget_C.BndEvt__Show_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature");

	UHomePageWidget_C_BndEvt__Show_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomePageWidget.HomePageWidget_C.BndEvt__Show_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomePageWidget_C::BndEvt__Show_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomePageWidget.HomePageWidget_C.BndEvt__Show_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");

	UHomePageWidget_C_BndEvt__Show_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomePageWidget.HomePageWidget_C.BndEvt__Show_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomePageWidget_C::BndEvt__Show_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomePageWidget.HomePageWidget_C.BndEvt__Show_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UHomePageWidget_C_BndEvt__Show_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomePageWidget.HomePageWidget_C.AnimFinish
// (BlueprintCallable, BlueprintEvent)

void UHomePageWidget_C::AnimFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomePageWidget.HomePageWidget_C.AnimFinish");

	UHomePageWidget_C_AnimFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomePageWidget.HomePageWidget_C.BndEvt__PlayGame_K2Node_ComponentBoundEvent_0_Close__DelegateSignature
// (BlueprintEvent)

void UHomePageWidget_C::BndEvt__PlayGame_K2Node_ComponentBoundEvent_0_Close__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomePageWidget.HomePageWidget_C.BndEvt__PlayGame_K2Node_ComponentBoundEvent_0_Close__DelegateSignature");

	UHomePageWidget_C_BndEvt__PlayGame_K2Node_ComponentBoundEvent_0_Close__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomePageWidget.HomePageWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHomePageWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomePageWidget.HomePageWidget_C.Construct");

	UHomePageWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomePageWidget.HomePageWidget_C.ResetLanguage
// (BlueprintCallable, BlueprintEvent)

void UHomePageWidget_C::ResetLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomePageWidget.HomePageWidget_C.ResetLanguage");

	UHomePageWidget_C_ResetLanguage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomePageWidget.HomePageWidget_C.ResetServerName
// (BlueprintCallable, BlueprintEvent)

void UHomePageWidget_C::ResetServerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomePageWidget.HomePageWidget_C.ResetServerName");

	UHomePageWidget_C_ResetServerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomePageWidget.HomePageWidget_C.CheckSortState
// (BlueprintCallable, BlueprintEvent)

void UHomePageWidget_C::CheckSortState()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomePageWidget.HomePageWidget_C.CheckSortState");

	UHomePageWidget_C_CheckSortState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomePageWidget.HomePageWidget_C.ResetShowState
// (BlueprintCallable, BlueprintEvent)

void UHomePageWidget_C::ResetShowState()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomePageWidget.HomePageWidget_C.ResetShowState");

	UHomePageWidget_C_ResetShowState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomePageWidget.HomePageWidget_C.ExecuteUbergraph_HomePageWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHomePageWidget_C::ExecuteUbergraph_HomePageWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HomePageWidget.HomePageWidget_C.ExecuteUbergraph_HomePageWidget");

	UHomePageWidget_C_ExecuteUbergraph_HomePageWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomePageWidget.HomePageWidget_C.PreviewRoom__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHomePageWidget_C::PreviewRoom__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomePageWidget.HomePageWidget_C.PreviewRoom__DelegateSignature");

	UHomePageWidget_C_PreviewRoom__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomePageWidget.HomePageWidget_C.CreateRoom__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHomePageWidget_C::CreateRoom__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomePageWidget.HomePageWidget_C.CreateRoom__DelegateSignature");

	UHomePageWidget_C_CreateRoom__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomePageWidget.HomePageWidget_C.PopSortMode__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHomePageWidget_C::PopSortMode__DelegateSignature(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function HomePageWidget.HomePageWidget_C.PopSortMode__DelegateSignature");

	UHomePageWidget_C_PopSortMode__DelegateSignature_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomePageWidget.HomePageWidget_C.PopServerMode__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHomePageWidget_C::PopServerMode__DelegateSignature(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function HomePageWidget.HomePageWidget_C.PopServerMode__DelegateSignature");

	UHomePageWidget_C_PopServerMode__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomePageWidget.HomePageWidget_C.HallRemind__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UHomePageWidget_C::HallRemind__DelegateSignature(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function HomePageWidget.HomePageWidget_C.HallRemind__DelegateSignature");

	UHomePageWidget_C_HallRemind__DelegateSignature_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
