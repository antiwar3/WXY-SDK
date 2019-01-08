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

// Function CustomGameWidget.CustomGameWidget_C.CheckRoomNameValid
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCustomGameWidget_C::CheckRoomNameValid(bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.CheckRoomNameValid");

	UCustomGameWidget_C_CheckRoomNameValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function CustomGameWidget.CustomGameWidget_C.ResetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UCustomGameWidget_C::ResetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.ResetFocus");

	UCustomGameWidget_C_ResetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.GetRoomListByRoomLimit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCustomGameWidget_C::GetRoomListByRoomLimit()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.GetRoomListByRoomLimit");

	UCustomGameWidget_C_GetRoomListByRoomLimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.GetNetActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsSorting                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AClientNetMessageHandle* NetActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCustomGameWidget_C::GetNetActor(bool* IsSorting, class AClientNetMessageHandle** NetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.GetNetActor");

	UCustomGameWidget_C_GetNetActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSorting != nullptr)
		*IsSorting = params.IsSorting;
	if (NetActor != nullptr)
		*NetActor = params.NetActor;
}


// Function CustomGameWidget.CustomGameWidget_C.ResetServerOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UCustomGameWidget_C::ResetServerOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.ResetServerOptions");

	UCustomGameWidget_C_ResetServerOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.ResetPresetOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCustomGameWidget_C::ResetPresetOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.ResetPresetOptions");

	UCustomGameWidget_C_ResetPresetOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.CreateServerList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    Servers                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCustomGameWidget_C::CreateServerList(TArray<int>* Servers)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.CreateServerList");

	UCustomGameWidget_C_CreateServerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Servers != nullptr)
		*Servers = params.Servers;
}


// Function CustomGameWidget.CustomGameWidget_C.SetCreateMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomGameWidget_C::SetCreateMode(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.SetCreateMode");

	UCustomGameWidget_C_SetCreateMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.SelectRoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URoomChildWidget_C*      Info                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCustomGameWidget_C::SelectRoom(class URoomChildWidget_C* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.SelectRoom");

	UCustomGameWidget_C_SelectRoom_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.RequestPageInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            page                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomGameWidget_C::RequestPageInfo(int page)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.RequestPageInfo");

	UCustomGameWidget_C_RequestPageInfo_Params params;
	params.page = page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.CheckResortList
// (Public, BlueprintCallable, BlueprintEvent)

void UCustomGameWidget_C::CheckResortList()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.CheckResortList");

	UCustomGameWidget_C_CheckResortList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.PlayerCountSortChange
// (Public, BlueprintCallable, BlueprintEvent)

void UCustomGameWidget_C::PlayerCountSortChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.PlayerCountSortChange");

	UCustomGameWidget_C_PlayerCountSortChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.StateSortChange
// (Public, BlueprintCallable, BlueprintEvent)

void UCustomGameWidget_C::StateSortChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.StateSortChange");

	UCustomGameWidget_C_StateSortChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.SetServerLimitText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomGameWidget_C::SetServerLimitText(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.SetServerLimitText");

	UCustomGameWidget_C_SetServerLimitText_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.SetSelectLimitState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomGameWidget_C::SetSelectLimitState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.SetSelectLimitState");

	UCustomGameWidget_C_SetSelectLimitState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.SetSwitcherIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomGameWidget_C::SetSwitcherIndex(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.SetSwitcherIndex");

	UCustomGameWidget_C_SetSwitcherIndex_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__ViewRoom_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__ViewRoom_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__ViewRoom_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__ViewRoom_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__CreateRoom_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__CreateRoom_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__CreateRoom_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__CreateRoom_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__Refresh_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__Refresh_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__Refresh_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__Refresh_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__ViewRoom_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__ViewRoom_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__ViewRoom_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__ViewRoom_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__ViewRoom_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__ViewRoom_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__ViewRoom_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__ViewRoom_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__ViewRoom_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__ViewRoom_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__ViewRoom_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__ViewRoom_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__ViewRoom_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__ViewRoom_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__ViewRoom_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__ViewRoom_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__CreateRoom_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__CreateRoom_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__CreateRoom_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__CreateRoom_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__CreateRoom_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__CreateRoom_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__CreateRoom_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__CreateRoom_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__CreateRoom_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__CreateRoom_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__CreateRoom_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__CreateRoom_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__CreateRoom_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__CreateRoom_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__CreateRoom_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__CreateRoom_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__Refresh_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__Refresh_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__Refresh_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__Refresh_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__Refresh_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__Refresh_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__Refresh_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__Refresh_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__Refresh_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__Refresh_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__Refresh_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__Refresh_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__Select_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__Select_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__Select_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__Select_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__SelectLimit_K2Node_ComponentBoundEvent_18_LimitChange__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__SelectLimit_K2Node_ComponentBoundEvent_18_LimitChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__SelectLimit_K2Node_ComponentBoundEvent_18_LimitChange__DelegateSignature");

	UCustomGameWidget_C_BndEvt__SelectLimit_K2Node_ComponentBoundEvent_18_LimitChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.ResetLanguage
// (BlueprintCallable, BlueprintEvent)

void UCustomGameWidget_C::ResetLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.ResetLanguage");

	UCustomGameWidget_C_ResetLanguage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomGameWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.Tick");

	UCustomGameWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__SearchName_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomGameWidget_C::BndEvt__SearchName_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__SearchName_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__SearchName_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__StateSort_K2Node_ComponentBoundEvent_20_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__StateSort_K2Node_ComponentBoundEvent_20_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__StateSort_K2Node_ComponentBoundEvent_20_OnButtonPressedEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__StateSort_K2Node_ComponentBoundEvent_20_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__StateSort_K2Node_ComponentBoundEvent_21_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__StateSort_K2Node_ComponentBoundEvent_21_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__StateSort_K2Node_ComponentBoundEvent_21_OnButtonReleasedEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__StateSort_K2Node_ComponentBoundEvent_21_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__StateSort_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__StateSort_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__StateSort_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__StateSort_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__StateSort_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__StateSort_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__StateSort_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__StateSort_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__PlayerCount_K2Node_ComponentBoundEvent_24_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__PlayerCount_K2Node_ComponentBoundEvent_24_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__PlayerCount_K2Node_ComponentBoundEvent_24_OnButtonPressedEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__PlayerCount_K2Node_ComponentBoundEvent_24_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__PlayerCount_K2Node_ComponentBoundEvent_25_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__PlayerCount_K2Node_ComponentBoundEvent_25_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__PlayerCount_K2Node_ComponentBoundEvent_25_OnButtonReleasedEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__PlayerCount_K2Node_ComponentBoundEvent_25_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__PlayerCount_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__PlayerCount_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__PlayerCount_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__PlayerCount_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__PlayerCount_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__PlayerCount_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__PlayerCount_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__PlayerCount_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__StateSort_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__StateSort_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__StateSort_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__StateSort_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__PlayerCount_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__PlayerCount_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__PlayerCount_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__PlayerCount_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.CreateRoomInfos
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FUIRoomInfo>*    roominfos                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCustomGameWidget_C::CreateRoomInfos(TArray<struct FUIRoomInfo>* roominfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.CreateRoomInfos");

	UCustomGameWidget_C_CreateRoomInfos_Params params;
	params.roominfos = roominfos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__LastPage_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__LastPage_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__LastPage_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__LastPage_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__NextPage_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__NextPage_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__NextPage_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__NextPage_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.SetPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            page                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomGameWidget_C::SetPage(int page)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.SetPage");

	UCustomGameWidget_C_SetPage_Params params;
	params.page = page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.ResetPageOperateState
// (BlueprintCallable, BlueprintEvent)

void UCustomGameWidget_C::ResetPageOperateState()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.ResetPageOperateState");

	UCustomGameWidget_C_ResetPageOperateState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__TaoSha_K2Node_ComponentBoundEvent_31_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomGameWidget_C::BndEvt__TaoSha_K2Node_ComponentBoundEvent_31_OnClick__DelegateSignature(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__TaoSha_K2Node_ComponentBoundEvent_31_OnClick__DelegateSignature");

	UCustomGameWidget_C_BndEvt__TaoSha_K2Node_ComponentBoundEvent_31_OnClick__DelegateSignature_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__LuanDou_K2Node_ComponentBoundEvent_32_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomGameWidget_C::BndEvt__LuanDou_K2Node_ComponentBoundEvent_32_OnClick__DelegateSignature(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__LuanDou_K2Node_ComponentBoundEvent_32_OnClick__DelegateSignature");

	UCustomGameWidget_C_BndEvt__LuanDou_K2Node_ComponentBoundEvent_32_OnClick__DelegateSignature_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCustomGameWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.Construct");

	UCustomGameWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__PresetSelect_K2Node_ComponentBoundEvent_33_OptionChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomGameWidget_C::BndEvt__PresetSelect_K2Node_ComponentBoundEvent_33_OptionChange__DelegateSignature(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__PresetSelect_K2Node_ComponentBoundEvent_33_OptionChange__DelegateSignature");

	UCustomGameWidget_C_BndEvt__PresetSelect_K2Node_ComponentBoundEvent_33_OptionChange__DelegateSignature_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__ServerSelect_K2Node_ComponentBoundEvent_34_OptionChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomGameWidget_C::BndEvt__ServerSelect_K2Node_ComponentBoundEvent_34_OptionChange__DelegateSignature(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__ServerSelect_K2Node_ComponentBoundEvent_34_OptionChange__DelegateSignature");

	UCustomGameWidget_C_BndEvt__ServerSelect_K2Node_ComponentBoundEvent_34_OptionChange__DelegateSignature_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__WatchNum_K2Node_ComponentBoundEvent_35_CurrentValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomGameWidget_C::BndEvt__WatchNum_K2Node_ComponentBoundEvent_35_CurrentValueChange__DelegateSignature(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__WatchNum_K2Node_ComponentBoundEvent_35_CurrentValueChange__DelegateSignature");

	UCustomGameWidget_C_BndEvt__WatchNum_K2Node_ComponentBoundEvent_35_CurrentValueChange__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__TextBoxPwd_K2Node_ComponentBoundEvent_36_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCustomGameWidget_C::BndEvt__TextBoxPwd_K2Node_ComponentBoundEvent_36_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__TextBoxPwd_K2Node_ComponentBoundEvent_36_OnEditableTextBoxChangedEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__TextBoxPwd_K2Node_ComponentBoundEvent_36_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__Room_K2Node_ComponentBoundEvent_37_Create__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__Room_K2Node_ComponentBoundEvent_37_Create__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__Room_K2Node_ComponentBoundEvent_37_Create__DelegateSignature");

	UCustomGameWidget_C_BndEvt__Room_K2Node_ComponentBoundEvent_37_Create__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__Room_K2Node_ComponentBoundEvent_38_JoinRoom__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FUIRoomInfo             room                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UCustomGameWidget_C::BndEvt__Room_K2Node_ComponentBoundEvent_38_JoinRoom__DelegateSignature(const struct FUIRoomInfo& room)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__Room_K2Node_ComponentBoundEvent_38_JoinRoom__DelegateSignature");

	UCustomGameWidget_C_BndEvt__Room_K2Node_ComponentBoundEvent_38_JoinRoom__DelegateSignature_Params params;
	params.room = room;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__Create_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__Create_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__Create_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__Create_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__Refresh_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__Refresh_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__Refresh_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__Refresh_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__TextBoxTile_K2Node_ComponentBoundEvent_41_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomGameWidget_C::BndEvt__TextBoxTile_K2Node_ComponentBoundEvent_41_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__TextBoxTile_K2Node_ComponentBoundEvent_41_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__TextBoxTile_K2Node_ComponentBoundEvent_41_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__TextBoxPwd_K2Node_ComponentBoundEvent_42_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomGameWidget_C::BndEvt__TextBoxPwd_K2Node_ComponentBoundEvent_42_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__TextBoxPwd_K2Node_ComponentBoundEvent_42_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__TextBoxPwd_K2Node_ComponentBoundEvent_42_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.BndEvt__PreviewPanelBGButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCustomGameWidget_C::BndEvt__PreviewPanelBGButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.BndEvt__PreviewPanelBGButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature");

	UCustomGameWidget_C_BndEvt__PreviewPanelBGButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.SetMaxPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            page                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomGameWidget_C::SetMaxPage(int page)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.SetMaxPage");

	UCustomGameWidget_C_SetMaxPage_Params params;
	params.page = page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.SelectByPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URoomChildWidget_C*      room                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCustomGameWidget_C::SelectByPlayer(class URoomChildWidget_C* room)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.SelectByPlayer");

	UCustomGameWidget_C_SelectByPlayer_Params params;
	params.room = room;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.ExecuteUbergraph_CustomGameWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomGameWidget_C::ExecuteUbergraph_CustomGameWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.ExecuteUbergraph_CustomGameWidget");

	UCustomGameWidget_C_ExecuteUbergraph_CustomGameWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.HallRemind__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UCustomGameWidget_C::HallRemind__DelegateSignature(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.HallRemind__DelegateSignature");

	UCustomGameWidget_C_HallRemind__DelegateSignature_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameWidget.CustomGameWidget_C.JoinRoom__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUIRoomInfo             room                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UCustomGameWidget_C::JoinRoom__DelegateSignature(const struct FUIRoomInfo& room)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameWidget.CustomGameWidget_C.JoinRoom__DelegateSignature");

	UCustomGameWidget_C_JoinRoom__DelegateSignature_Params params;
	params.room = room;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
