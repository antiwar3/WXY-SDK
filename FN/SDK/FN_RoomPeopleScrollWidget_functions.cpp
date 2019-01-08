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

// Function RoomPeopleScrollWidget.RoomPeopleScrollWidget_C.ClearAll
// (Public, BlueprintCallable, BlueprintEvent)

void URoomPeopleScrollWidget_C::ClearAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomPeopleScrollWidget.RoomPeopleScrollWidget_C.ClearAll");

	URoomPeopleScrollWidget_C_ClearAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomPeopleScrollWidget.RoomPeopleScrollWidget_C.GetPlayerNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Num                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URoomPeopleScrollWidget_C::GetPlayerNum(int* Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomPeopleScrollWidget.RoomPeopleScrollWidget_C.GetPlayerNum");

	URoomPeopleScrollWidget_C_GetPlayerNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Num != nullptr)
		*Num = params.Num;
}


// Function RoomPeopleScrollWidget.RoomPeopleScrollWidget_C.RemovePlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoomUser               user                           (BlueprintVisible, BlueprintReadOnly, Parm)

void URoomPeopleScrollWidget_C::RemovePlayer(const struct FRoomUser& user)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomPeopleScrollWidget.RoomPeopleScrollWidget_C.RemovePlayer");

	URoomPeopleScrollWidget_C_RemovePlayer_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomPeopleScrollWidget.RoomPeopleScrollWidget_C.CreatePlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoomUser               user                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            MasterId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsMaster                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class URoomPeoplePlayerWidget_C* OutPlayer                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URoomPeopleScrollWidget_C::CreatePlayer(const struct FRoomUser& user, int MasterId, bool IsMaster, class URoomPeoplePlayerWidget_C** OutPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomPeopleScrollWidget.RoomPeopleScrollWidget_C.CreatePlayer");

	URoomPeopleScrollWidget_C_CreatePlayer_Params params;
	params.user = user;
	params.MasterId = MasterId;
	params.IsMaster = IsMaster;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPlayer != nullptr)
		*OutPlayer = params.OutPlayer;
}


// Function RoomPeopleScrollWidget.RoomPeopleScrollWidget_C.RightClickPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoomUser               Player                         (BlueprintVisible, BlueprintReadOnly, Parm)

void URoomPeopleScrollWidget_C::RightClickPlayer(const struct FRoomUser& Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomPeopleScrollWidget.RoomPeopleScrollWidget_C.RightClickPlayer");

	URoomPeopleScrollWidget_C_RightClickPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomPeopleScrollWidget.RoomPeopleScrollWidget_C.RoomUserOnclick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URoomPeoplePlayerWidget_C* user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URoomPeopleScrollWidget_C::RoomUserOnclick(class URoomPeoplePlayerWidget_C* user)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomPeopleScrollWidget.RoomPeopleScrollWidget_C.RoomUserOnclick");

	URoomPeopleScrollWidget_C_RoomUserOnclick_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomPeopleScrollWidget.RoomPeopleScrollWidget_C.ExecuteUbergraph_RoomPeopleScrollWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URoomPeopleScrollWidget_C::ExecuteUbergraph_RoomPeopleScrollWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomPeopleScrollWidget.RoomPeopleScrollWidget_C.ExecuteUbergraph_RoomPeopleScrollWidget");

	URoomPeopleScrollWidget_C_ExecuteUbergraph_RoomPeopleScrollWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomPeopleScrollWidget.RoomPeopleScrollWidget_C.OperatePlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoomUser               user                           (BlueprintVisible, BlueprintReadOnly, Parm)

void URoomPeopleScrollWidget_C::OperatePlayer__DelegateSignature(const struct FRoomUser& user)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomPeopleScrollWidget.RoomPeopleScrollWidget_C.OperatePlayer__DelegateSignature");

	URoomPeopleScrollWidget_C_OperatePlayer__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomPeopleScrollWidget.RoomPeopleScrollWidget_C.UserSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URoomPeoplePlayerWidget_C* user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URoomPeopleScrollWidget_C::UserSelect__DelegateSignature(class URoomPeoplePlayerWidget_C* user)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomPeopleScrollWidget.RoomPeopleScrollWidget_C.UserSelect__DelegateSignature");

	URoomPeopleScrollWidget_C_UserSelect__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
