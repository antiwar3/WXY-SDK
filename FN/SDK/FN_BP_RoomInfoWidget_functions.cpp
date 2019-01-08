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

// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.WaitAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RoomInfoWidget_C::WaitAnim(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.WaitAnim");

	UBP_RoomInfoWidget_C_WaitAnim_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.GetTotalTeamPlayerNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            TotalNum                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_RoomInfoWidget_C::GetTotalTeamPlayerNum(int* TotalNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.GetTotalTeamPlayerNum");

	UBP_RoomInfoWidget_C_GetTotalTeamPlayerNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TotalNum != nullptr)
		*TotalNum = params.TotalNum;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.GetWuxiaGameInstance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWuXiaXGameInstance*     AsWu_Xia_XGame_Instance        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_RoomInfoWidget_C::GetWuxiaGameInstance(class UWuXiaXGameInstance** AsWu_Xia_XGame_Instance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.GetWuxiaGameInstance");

	UBP_RoomInfoWidget_C_GetWuxiaGameInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsWu_Xia_XGame_Instance != nullptr)
		*AsWu_Xia_XGame_Instance = params.AsWu_Xia_XGame_Instance;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.GetNetActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AClientNetMessageHandle* NetActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_RoomInfoWidget_C::GetNetActor(class AClientNetMessageHandle** NetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.GetNetActor");

	UBP_RoomInfoWidget_C_GetNetActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NetActor != nullptr)
		*NetActor = params.NetActor;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.CalculatePlayerNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_RoomInfoWidget_C::CalculatePlayerNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.CalculatePlayerNum");

	UBP_RoomInfoWidget_C_CalculatePlayerNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.OperateUserFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoomUser               user                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_RoomInfoWidget_C::OperateUserFunc(const struct FRoomUser& user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.OperateUserFunc");

	UBP_RoomInfoWidget_C_OperateUserFunc_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.UserSelectFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URoomTeamPlayerUI*       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_RoomInfoWidget_C::UserSelectFunc(class URoomTeamPlayerUI* user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.UserSelectFunc");

	UBP_RoomInfoWidget_C_UserSelectFunc_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.CreateTeamPlayerFunc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoomUser               Player                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class URoomTeamPlayerUI*       OutPlayer                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_RoomInfoWidget_C::CreateTeamPlayerFunc(const struct FRoomUser& Player, class URoomTeamPlayerUI** OutPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.CreateTeamPlayerFunc");

	UBP_RoomInfoWidget_C_CreateTeamPlayerFunc_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPlayer != nullptr)
		*OutPlayer = params.OutPlayer;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.GetTeamByIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class URoomTeamWidget_C*       Team                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_RoomInfoWidget_C::GetTeamByIndex(int index, class URoomTeamWidget_C** Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.GetTeamByIndex");

	UBP_RoomInfoWidget_C_GetTeamByIndex_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Team != nullptr)
		*Team = params.Team;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.ClearAll
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_RoomInfoWidget_C::ClearAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.ClearAll");

	UBP_RoomInfoWidget_C_ClearAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.CreateTeamWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          is_team                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RoomInfoWidget_C::CreateTeamWidget(int* index, int* Num, bool* is_team)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.CreateTeamWidget");

	UBP_RoomInfoWidget_C_CreateTeamWidget_Params params;
	params.index = index;
	params.Num = Num;
	params.is_team = is_team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.CreatePlayer
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoomUser*              Player                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_RoomInfoWidget_C::CreatePlayer(struct FRoomUser* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.CreatePlayer");

	UBP_RoomInfoWidget_C_CreatePlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.RemovePlayer
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoomUser*              Player                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_RoomInfoWidget_C::RemovePlayer(struct FRoomUser* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.RemovePlayer");

	UBP_RoomInfoWidget_C_RemovePlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.WidgetGetRoomInfos
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_RoomInfoWidget_C::WidgetGetRoomInfos()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.WidgetGetRoomInfos");

	UBP_RoomInfoWidget_C_WidgetGetRoomInfos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.UserSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URoomTeamPlayerWidget_C* user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class URoomTeamWidget_C*       Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_RoomInfoWidget_C::UserSelect(class URoomTeamPlayerWidget_C* user, class URoomTeamWidget_C* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.UserSelect");

	UBP_RoomInfoWidget_C_UserSelect_Params params;
	params.user = user;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.CreatePlayerComplete
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_RoomInfoWidget_C::CreatePlayerComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.CreatePlayerComplete");

	UBP_RoomInfoWidget_C_CreatePlayerComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.OperatePlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoomUser               user                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_RoomInfoWidget_C::OperatePlayer(const struct FRoomUser& user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.OperatePlayer");

	UBP_RoomInfoWidget_C_OperatePlayer_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__RoomPeopleWidget_K2Node_ComponentBoundEvent_4_UserSelect__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URoomPeoplePlayerWidget_C* user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_RoomInfoWidget_C::BndEvt__RoomPeopleWidget_K2Node_ComponentBoundEvent_4_UserSelect__DelegateSignature(class URoomPeoplePlayerWidget_C* user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__RoomPeopleWidget_K2Node_ComponentBoundEvent_4_UserSelect__DelegateSignature");

	UBP_RoomInfoWidget_C_BndEvt__RoomPeopleWidget_K2Node_ComponentBoundEvent_4_UserSelect__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__RoomPeopleWidget_K2Node_ComponentBoundEvent_5_OperatePlayer__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FRoomUser               user                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_RoomInfoWidget_C::BndEvt__RoomPeopleWidget_K2Node_ComponentBoundEvent_5_OperatePlayer__DelegateSignature(const struct FRoomUser& user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__RoomPeopleWidget_K2Node_ComponentBoundEvent_5_OperatePlayer__DelegateSignature");

	UBP_RoomInfoWidget_C_BndEvt__RoomPeopleWidget_K2Node_ComponentBoundEvent_5_OperatePlayer__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__RoomViewerWidget_K2Node_ComponentBoundEvent_6_UserSelect__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URoomPeoplePlayerWidget_C* user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_RoomInfoWidget_C::BndEvt__RoomViewerWidget_K2Node_ComponentBoundEvent_6_UserSelect__DelegateSignature(class URoomPeoplePlayerWidget_C* user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__RoomViewerWidget_K2Node_ComponentBoundEvent_6_UserSelect__DelegateSignature");

	UBP_RoomInfoWidget_C_BndEvt__RoomViewerWidget_K2Node_ComponentBoundEvent_6_UserSelect__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__RoomViewerWidget_K2Node_ComponentBoundEvent_7_OperatePlayer__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FRoomUser               user                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_RoomInfoWidget_C::BndEvt__RoomViewerWidget_K2Node_ComponentBoundEvent_7_OperatePlayer__DelegateSignature(const struct FRoomUser& user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__RoomViewerWidget_K2Node_ComponentBoundEvent_7_OperatePlayer__DelegateSignature");

	UBP_RoomInfoWidget_C_BndEvt__RoomViewerWidget_K2Node_ComponentBoundEvent_7_OperatePlayer__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__PlayerOperate_K2Node_ComponentBoundEvent_8_AddFriendDispatch__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_RoomInfoWidget_C::BndEvt__PlayerOperate_K2Node_ComponentBoundEvent_8_AddFriendDispatch__DelegateSignature(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__PlayerOperate_K2Node_ComponentBoundEvent_8_AddFriendDispatch__DelegateSignature");

	UBP_RoomInfoWidget_C_BndEvt__PlayerOperate_K2Node_ComponentBoundEvent_8_AddFriendDispatch__DelegateSignature_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__PlayerOperate_K2Node_ComponentBoundEvent_9_KiclPlayer__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RoomInfoWidget_C::BndEvt__PlayerOperate_K2Node_ComponentBoundEvent_9_KiclPlayer__DelegateSignature(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__PlayerOperate_K2Node_ComponentBoundEvent_9_KiclPlayer__DelegateSignature");

	UBP_RoomInfoWidget_C_BndEvt__PlayerOperate_K2Node_ComponentBoundEvent_9_KiclPlayer__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__PlayerOperate_K2Node_ComponentBoundEvent_10_ToPeople__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RoomInfoWidget_C::BndEvt__PlayerOperate_K2Node_ComponentBoundEvent_10_ToPeople__DelegateSignature(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__PlayerOperate_K2Node_ComponentBoundEvent_10_ToPeople__DelegateSignature");

	UBP_RoomInfoWidget_C_BndEvt__PlayerOperate_K2Node_ComponentBoundEvent_10_ToPeople__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_RoomInfoWidget_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	UBP_RoomInfoWidget_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__People_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_RoomInfoWidget_C::BndEvt__People_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__People_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");

	UBP_RoomInfoWidget_C_BndEvt__People_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__Viewer_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_RoomInfoWidget_C::BndEvt__Viewer_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__Viewer_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");

	UBP_RoomInfoWidget_C_BndEvt__Viewer_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__DeleteRoom_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_RoomInfoWidget_C::BndEvt__DeleteRoom_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__DeleteRoom_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");

	UBP_RoomInfoWidget_C_BndEvt__DeleteRoom_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__StartGame_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_RoomInfoWidget_C::BndEvt__StartGame_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__StartGame_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	UBP_RoomInfoWidget_C_BndEvt__StartGame_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__LeaveRoom_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_RoomInfoWidget_C::BndEvt__LeaveRoom_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__LeaveRoom_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");

	UBP_RoomInfoWidget_C_BndEvt__LeaveRoom_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.ResetLanguage
// (BlueprintCallable, BlueprintEvent)

void UBP_RoomInfoWidget_C::ResetLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.ResetLanguage");

	UBP_RoomInfoWidget_C_ResetLanguage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.MasterStartGame
// (BlueprintCallable, BlueprintEvent)

void UBP_RoomInfoWidget_C::MasterStartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.MasterStartGame");

	UBP_RoomInfoWidget_C_MasterStartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.IsReadyGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RoomInfoWidget_C::IsReadyGame(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.IsReadyGame");

	UBP_RoomInfoWidget_C_IsReadyGame_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.Anim
// (BlueprintCallable, BlueprintEvent)

void UBP_RoomInfoWidget_C::Anim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.Anim");

	UBP_RoomInfoWidget_C_Anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.QuitTick
// (BlueprintCallable, BlueprintEvent)

void UBP_RoomInfoWidget_C::QuitTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.QuitTick");

	UBP_RoomInfoWidget_C_QuitTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__PeopleBGButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_RoomInfoWidget_C::BndEvt__PeopleBGButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__PeopleBGButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_RoomInfoWidget_C_BndEvt__PeopleBGButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__ViewerBGButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_RoomInfoWidget_C::BndEvt__ViewerBGButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.BndEvt__ViewerBGButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UBP_RoomInfoWidget_C_BndEvt__ViewerBGButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.SetSelectPlayer
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoomUser*              Player                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_RoomInfoWidget_C::SetSelectPlayer(struct FRoomUser* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.SetSelectPlayer");

	UBP_RoomInfoWidget_C_SetSelectPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.PlayerBeenRemove
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoomUser*              Player                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_RoomInfoWidget_C::PlayerBeenRemove(struct FRoomUser* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.PlayerBeenRemove");

	UBP_RoomInfoWidget_C_PlayerBeenRemove_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.PlayerBeenCreate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoomUser*              Player                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_RoomInfoWidget_C::PlayerBeenCreate(struct FRoomUser* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.PlayerBeenCreate");

	UBP_RoomInfoWidget_C_PlayerBeenCreate_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.ExecuteUbergraph_BP_RoomInfoWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RoomInfoWidget_C::ExecuteUbergraph_BP_RoomInfoWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.ExecuteUbergraph_BP_RoomInfoWidget");

	UBP_RoomInfoWidget_C_ExecuteUbergraph_BP_RoomInfoWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.MasterStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_RoomInfoWidget_C::MasterStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.MasterStart__DelegateSignature");

	UBP_RoomInfoWidget_C_MasterStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.HallRemind__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_RoomInfoWidget_C::HallRemind__DelegateSignature(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.HallRemind__DelegateSignature");

	UBP_RoomInfoWidget_C_HallRemind__DelegateSignature_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.DeleteRoomDispatch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUIRoomInfo             room                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_RoomInfoWidget_C::DeleteRoomDispatch__DelegateSignature(const struct FUIRoomInfo& room)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoomInfoWidget.BP_RoomInfoWidget_C.DeleteRoomDispatch__DelegateSignature");

	UBP_RoomInfoWidget_C_DeleteRoomDispatch__DelegateSignature_Params params;
	params.room = room;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
