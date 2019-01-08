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

// Function PlayGameWidget.PlayGameWidget_C.TrySetGameMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayGameWidget_C::TrySetGameMode(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.TrySetGameMode");

	UPlayGameWidget_C_TrySetGameMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.ResetSortMode
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayGameWidget_C::ResetSortMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.ResetSortMode");

	UPlayGameWidget_C_ResetSortMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.CheckSelectSortMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayGameWidget_C::CheckSelectSortMode(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.CheckSelectSortMode");

	UPlayGameWidget_C_CheckSelectSortMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.SetPlayMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayGameWidget_C::SetPlayMode(int PlayMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.SetPlayMode");

	UPlayGameWidget_C_SetPlayMode_Params params;
	params.PlayMode = PlayMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.BndEvt__Hide_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayGameWidget_C::BndEvt__Hide_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.BndEvt__Hide_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UPlayGameWidget_C_BndEvt__Hide_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.BndEvt__TaoSha_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// (BlueprintEvent)

void UPlayGameWidget_C::BndEvt__TaoSha_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.BndEvt__TaoSha_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");

	UPlayGameWidget_C_BndEvt__TaoSha_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.BndEvt__TaoSha_K2Node_ComponentBoundEvent_2_SendRemind__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayGameWidget_C::BndEvt__TaoSha_K2Node_ComponentBoundEvent_2_SendRemind__DelegateSignature(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.BndEvt__TaoSha_K2Node_ComponentBoundEvent_2_SendRemind__DelegateSignature");

	UPlayGameWidget_C_BndEvt__TaoSha_K2Node_ComponentBoundEvent_2_SendRemind__DelegateSignature_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.BndEvt__LuanDou_K2Node_ComponentBoundEvent_3_SendRemind__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayGameWidget_C::BndEvt__LuanDou_K2Node_ComponentBoundEvent_3_SendRemind__DelegateSignature(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.BndEvt__LuanDou_K2Node_ComponentBoundEvent_3_SendRemind__DelegateSignature");

	UPlayGameWidget_C_BndEvt__LuanDou_K2Node_ComponentBoundEvent_3_SendRemind__DelegateSignature_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.BndEvt__LuanDou_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature
// (BlueprintEvent)

void UPlayGameWidget_C::BndEvt__LuanDou_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.BndEvt__LuanDou_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature");

	UPlayGameWidget_C_BndEvt__LuanDou_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.SetButtonState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESortState>        SortState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayGameWidget_C::SetButtonState(TEnumAsByte<ESortState> SortState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.SetButtonState");

	UPlayGameWidget_C_SetButtonState_Params params;
	params.SortState = SortState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayGameWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.Construct");

	UPlayGameWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.BndEvt__Play_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayGameWidget_C::BndEvt__Play_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.BndEvt__Play_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature");

	UPlayGameWidget_C_BndEvt__Play_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.BndEvt__Play_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayGameWidget_C::BndEvt__Play_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.BndEvt__Play_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature");

	UPlayGameWidget_C_BndEvt__Play_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.BndEvt__Play_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayGameWidget_C::BndEvt__Play_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.BndEvt__Play_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");

	UPlayGameWidget_C_BndEvt__Play_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.BndEvt__Play_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayGameWidget_C::BndEvt__Play_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.BndEvt__Play_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UPlayGameWidget_C_BndEvt__Play_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.BndEvt__Play_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayGameWidget_C::BndEvt__Play_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.BndEvt__Play_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	UPlayGameWidget_C_BndEvt__Play_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.AppendPlayer
// (BlueprintCallable, BlueprintEvent)

void UPlayGameWidget_C::AppendPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.AppendPlayer");

	UPlayGameWidget_C_AppendPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.SetMasterMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsMaster                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayGameWidget_C::SetMasterMode(bool IsMaster)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.SetMasterMode");

	UPlayGameWidget_C_SetMasterMode_Params params;
	params.IsMaster = IsMaster;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.ResetServerName
// (BlueprintCallable, BlueprintEvent)

void UPlayGameWidget_C::ResetServerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.ResetServerName");

	UPlayGameWidget_C_ResetServerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.SetPlayModeState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayGameWidget_C::SetPlayModeState(int PlayMode, int State)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.SetPlayModeState");

	UPlayGameWidget_C_SetPlayModeState_Params params;
	params.PlayMode = PlayMode;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.SetServerId
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ServerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayGameWidget_C::SetServerId(int ServerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.SetServerId");

	UPlayGameWidget_C_SetServerId_Params params;
	params.ServerId = ServerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.SetPlayModeEndTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            days                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Hours                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Minutes                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayGameWidget_C::SetPlayModeEndTime(int PlayMode, int days, int Hours, int Minutes, bool Start)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.SetPlayModeEndTime");

	UPlayGameWidget_C_SetPlayModeEndTime_Params params;
	params.PlayMode = PlayMode;
	params.days = days;
	params.Hours = Hours;
	params.Minutes = Minutes;
	params.Start = Start;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.SetSortModeNoMaster
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SortMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayGameWidget_C::SetSortModeNoMaster(int SortMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.SetSortModeNoMaster");

	UPlayGameWidget_C_SetSortModeNoMaster_Params params;
	params.SortMode = SortMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.Reset
// (BlueprintCallable, BlueprintEvent)

void UPlayGameWidget_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.Reset");

	UPlayGameWidget_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.InitServers
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    Servers                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPlayGameWidget_C::InitServers(TArray<int> Servers)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.InitServers");

	UPlayGameWidget_C_InitServers_Params params;
	params.Servers = Servers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.BndEvt__CreateRoom_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature
// (BlueprintEvent)

void UPlayGameWidget_C::BndEvt__CreateRoom_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.BndEvt__CreateRoom_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature");

	UPlayGameWidget_C_BndEvt__CreateRoom_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.BndEvt__PreviewRoom_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature
// (BlueprintEvent)

void UPlayGameWidget_C::BndEvt__PreviewRoom_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.BndEvt__PreviewRoom_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature");

	UPlayGameWidget_C_BndEvt__PreviewRoom_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.PlayAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EUMGSequencePlayMode> Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayGameWidget_C::PlayAnim(TEnumAsByte<EUMGSequencePlayMode> Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.PlayAnim");

	UPlayGameWidget_C_PlayAnim_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.BndEvt__Anim_K2Node_ComponentBoundEvent_15_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UPlayGameWidget_C::BndEvt__Anim_K2Node_ComponentBoundEvent_15_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.BndEvt__Anim_K2Node_ComponentBoundEvent_15_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UPlayGameWidget_C_BndEvt__Anim_K2Node_ComponentBoundEvent_15_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.BndEvt__Hide_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayGameWidget_C::BndEvt__Hide_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.BndEvt__Hide_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature");

	UPlayGameWidget_C_BndEvt__Hide_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.BndEvt__Hide_K2Node_ComponentBoundEvent_18_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayGameWidget_C::BndEvt__Hide_K2Node_ComponentBoundEvent_18_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.BndEvt__Hide_K2Node_ComponentBoundEvent_18_OnButtonReleasedEvent__DelegateSignature");

	UPlayGameWidget_C_BndEvt__Hide_K2Node_ComponentBoundEvent_18_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.BndEvt__AreaButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayGameWidget_C::BndEvt__AreaButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.BndEvt__AreaButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");

	UPlayGameWidget_C_BndEvt__AreaButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.BndEvt__AreaButton_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayGameWidget_C::BndEvt__AreaButton_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.BndEvt__AreaButton_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature");

	UPlayGameWidget_C_BndEvt__AreaButton_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.BndEvt__AreaButton_K2Node_ComponentBoundEvent_19_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayGameWidget_C::BndEvt__AreaButton_K2Node_ComponentBoundEvent_19_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.BndEvt__AreaButton_K2Node_ComponentBoundEvent_19_OnButtonReleasedEvent__DelegateSignature");

	UPlayGameWidget_C_BndEvt__AreaButton_K2Node_ComponentBoundEvent_19_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.BndEvt__AreaButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayGameWidget_C::BndEvt__AreaButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.BndEvt__AreaButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");

	UPlayGameWidget_C_BndEvt__AreaButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.BndEvt__AreaButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayGameWidget_C::BndEvt__AreaButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.BndEvt__AreaButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature");

	UPlayGameWidget_C_BndEvt__AreaButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.BndEvt__SortMoteButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayGameWidget_C::BndEvt__SortMoteButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.BndEvt__SortMoteButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature");

	UPlayGameWidget_C_BndEvt__SortMoteButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.BndEvt__SortMoteButton_K2Node_ComponentBoundEvent_23_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayGameWidget_C::BndEvt__SortMoteButton_K2Node_ComponentBoundEvent_23_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.BndEvt__SortMoteButton_K2Node_ComponentBoundEvent_23_OnButtonPressedEvent__DelegateSignature");

	UPlayGameWidget_C_BndEvt__SortMoteButton_K2Node_ComponentBoundEvent_23_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.BndEvt__SortMoteButton_K2Node_ComponentBoundEvent_24_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayGameWidget_C::BndEvt__SortMoteButton_K2Node_ComponentBoundEvent_24_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.BndEvt__SortMoteButton_K2Node_ComponentBoundEvent_24_OnButtonReleasedEvent__DelegateSignature");

	UPlayGameWidget_C_BndEvt__SortMoteButton_K2Node_ComponentBoundEvent_24_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.BndEvt__SortMoteButton_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayGameWidget_C::BndEvt__SortMoteButton_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.BndEvt__SortMoteButton_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature");

	UPlayGameWidget_C_BndEvt__SortMoteButton_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.BndEvt__SortMoteButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayGameWidget_C::BndEvt__SortMoteButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.BndEvt__SortMoteButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature");

	UPlayGameWidget_C_BndEvt__SortMoteButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.ResetPlayMode
// (BlueprintCallable, BlueprintEvent)

void UPlayGameWidget_C::ResetPlayMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.ResetPlayMode");

	UPlayGameWidget_C_ResetPlayMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.ExecuteUbergraph_PlayGameWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayGameWidget_C::ExecuteUbergraph_PlayGameWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.ExecuteUbergraph_PlayGameWidget");

	UPlayGameWidget_C_ExecuteUbergraph_PlayGameWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.EventPreviewRoom__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPlayGameWidget_C::EventPreviewRoom__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.EventPreviewRoom__DelegateSignature");

	UPlayGameWidget_C_EventPreviewRoom__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.EventCreateRoom__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPlayGameWidget_C::EventCreateRoom__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.EventCreateRoom__DelegateSignature");

	UPlayGameWidget_C_EventCreateRoom__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.PopServerMode__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ServerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayGameWidget_C::PopServerMode__DelegateSignature(int ServerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.PopServerMode__DelegateSignature");

	UPlayGameWidget_C_PopServerMode__DelegateSignature_Params params;
	params.ServerId = ServerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.PopSortMode__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayGameWidget_C::PopSortMode__DelegateSignature(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.PopSortMode__DelegateSignature");

	UPlayGameWidget_C_PopSortMode__DelegateSignature_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.HallRemind__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayGameWidget_C::HallRemind__DelegateSignature(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.HallRemind__DelegateSignature");

	UPlayGameWidget_C_HallRemind__DelegateSignature_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayGameWidget.PlayGameWidget_C.Close__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPlayGameWidget_C::Close__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayGameWidget.PlayGameWidget_C.Close__DelegateSignature");

	UPlayGameWidget_C_Close__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
