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

// Function RoomTeamWidget.RoomTeamWidget_C.GetValidPlayerNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Num                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URoomTeamWidget_C::GetValidPlayerNum(int* Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTeamWidget.RoomTeamWidget_C.GetValidPlayerNum");

	URoomTeamWidget_C_GetValidPlayerNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Num != nullptr)
		*Num = params.Num;
}


// Function RoomTeamWidget.RoomTeamWidget_C.Resort
// (Public, BlueprintCallable, BlueprintEvent)

void URoomTeamWidget_C::Resort()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTeamWidget.RoomTeamWidget_C.Resort");

	URoomTeamWidget_C_Resort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomTeamWidget.RoomTeamWidget_C.RemovePlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoomUser               Player                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            MasterId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsMaster                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URoomTeamWidget_C::RemovePlayer(const struct FRoomUser& Player, int MasterId, bool IsMaster)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTeamWidget.RoomTeamWidget_C.RemovePlayer");

	URoomTeamWidget_C_RemovePlayer_Params params;
	params.Player = Player;
	params.MasterId = MasterId;
	params.IsMaster = IsMaster;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomTeamWidget.RoomTeamWidget_C.CreatePlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoomUser               user                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            MasterId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsMaster                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class URoomTeamPlayerUI*       OutPlayer                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URoomTeamWidget_C::CreatePlayer(const struct FRoomUser& user, int MasterId, bool IsMaster, class URoomTeamPlayerUI** OutPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTeamWidget.RoomTeamWidget_C.CreatePlayer");

	URoomTeamWidget_C_CreatePlayer_Params params;
	params.user = user;
	params.MasterId = MasterId;
	params.IsMaster = IsMaster;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPlayer != nullptr)
		*OutPlayer = params.OutPlayer;
}


// Function RoomTeamWidget.RoomTeamWidget_C.GetFreeTeamPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URoomTeamPlayerUI*       Player                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URoomTeamWidget_C::GetFreeTeamPlayer(class URoomTeamPlayerUI** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTeamWidget.RoomTeamWidget_C.GetFreeTeamPlayer");

	URoomTeamWidget_C_GetFreeTeamPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player != nullptr)
		*Player = params.Player;
}


// Function RoomTeamWidget.RoomTeamWidget_C.Init
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          is_team                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URoomTeamWidget_C::Init(int* index, int* Num, bool* is_team)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTeamWidget.RoomTeamWidget_C.Init");

	URoomTeamWidget_C_Init_Params params;
	params.index = index;
	params.Num = Num;
	params.is_team = is_team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomTeamWidget.RoomTeamWidget_C.RoomUserOnclick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URoomTeamPlayerWidget_C* user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URoomTeamWidget_C::RoomUserOnclick(class URoomTeamPlayerWidget_C* user)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTeamWidget.RoomTeamWidget_C.RoomUserOnclick");

	URoomTeamWidget_C_RoomUserOnclick_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomTeamWidget.RoomTeamWidget_C.BndEvt__RoomTeamPlayerOnly_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URoomTeamPlayerWidget_C* user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URoomTeamWidget_C::BndEvt__RoomTeamPlayerOnly_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(class URoomTeamPlayerWidget_C* user)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTeamWidget.RoomTeamWidget_C.BndEvt__RoomTeamPlayerOnly_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");

	URoomTeamWidget_C_BndEvt__RoomTeamPlayerOnly_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomTeamWidget.RoomTeamWidget_C.BndEvt__TeamButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void URoomTeamWidget_C::BndEvt__TeamButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTeamWidget.RoomTeamWidget_C.BndEvt__TeamButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	URoomTeamWidget_C_BndEvt__TeamButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomTeamWidget.RoomTeamWidget_C.RightClickPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoomUser               user                           (BlueprintVisible, BlueprintReadOnly, Parm)

void URoomTeamWidget_C::RightClickPlayer(const struct FRoomUser& user)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTeamWidget.RoomTeamWidget_C.RightClickPlayer");

	URoomTeamWidget_C_RightClickPlayer_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomTeamWidget.RoomTeamWidget_C.BndEvt__RoomTeamPlayerOnly_K2Node_ComponentBoundEvent_2_RightClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FRoomUser               user                           (BlueprintVisible, BlueprintReadOnly, Parm)

void URoomTeamWidget_C::BndEvt__RoomTeamPlayerOnly_K2Node_ComponentBoundEvent_2_RightClick__DelegateSignature(const struct FRoomUser& user)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTeamWidget.RoomTeamWidget_C.BndEvt__RoomTeamPlayerOnly_K2Node_ComponentBoundEvent_2_RightClick__DelegateSignature");

	URoomTeamWidget_C_BndEvt__RoomTeamPlayerOnly_K2Node_ComponentBoundEvent_2_RightClick__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomTeamWidget.RoomTeamWidget_C.ExecuteUbergraph_RoomTeamWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URoomTeamWidget_C::ExecuteUbergraph_RoomTeamWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTeamWidget.RoomTeamWidget_C.ExecuteUbergraph_RoomTeamWidget");

	URoomTeamWidget_C_ExecuteUbergraph_RoomTeamWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomTeamWidget.RoomTeamWidget_C.OperatePlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoomUser               user                           (BlueprintVisible, BlueprintReadOnly, Parm)

void URoomTeamWidget_C::OperatePlayer__DelegateSignature(const struct FRoomUser& user)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTeamWidget.RoomTeamWidget_C.OperatePlayer__DelegateSignature");

	URoomTeamWidget_C_OperatePlayer__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomTeamWidget.RoomTeamWidget_C.SelectUser__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URoomTeamPlayerWidget_C* user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class URoomTeamWidget_C*       Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URoomTeamWidget_C::SelectUser__DelegateSignature(class URoomTeamPlayerWidget_C* user, class URoomTeamWidget_C* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTeamWidget.RoomTeamWidget_C.SelectUser__DelegateSignature");

	URoomTeamWidget_C_SelectUser__DelegateSignature_Params params;
	params.user = user;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
