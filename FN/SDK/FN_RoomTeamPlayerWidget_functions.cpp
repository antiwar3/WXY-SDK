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

// Function RoomTeamPlayerWidget.RoomTeamPlayerWidget_C.SetMasterState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URoomTeamPlayerWidget_C::SetMasterState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTeamPlayerWidget.RoomTeamPlayerWidget_C.SetMasterState");

	URoomTeamPlayerWidget_C_SetMasterState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomTeamPlayerWidget.RoomTeamPlayerWidget_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply URoomTeamPlayerWidget_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTeamPlayerWidget.RoomTeamPlayerWidget_C.OnMouseButtonDown");

	URoomTeamPlayerWidget_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RoomTeamPlayerWidget.RoomTeamPlayerWidget_C.UpdatePlayerInfo
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoomUser*              Player                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int*                           master_id                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          is_master                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URoomTeamPlayerWidget_C::UpdatePlayerInfo(struct FRoomUser* Player, int* master_id, bool* is_master)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTeamPlayerWidget.RoomTeamPlayerWidget_C.UpdatePlayerInfo");

	URoomTeamPlayerWidget_C_UpdatePlayerInfo_Params params;
	params.Player = Player;
	params.master_id = master_id;
	params.is_master = is_master;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomTeamPlayerWidget.RoomTeamPlayerWidget_C.Remove
// (Event, Public, BlueprintCallable, BlueprintEvent)

void URoomTeamPlayerWidget_C::Remove()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTeamPlayerWidget.RoomTeamPlayerWidget_C.Remove");

	URoomTeamPlayerWidget_C_Remove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomTeamPlayerWidget.RoomTeamPlayerWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void URoomTeamPlayerWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTeamPlayerWidget.RoomTeamPlayerWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	URoomTeamPlayerWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomTeamPlayerWidget.RoomTeamPlayerWidget_C.SetSelectState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URoomTeamPlayerWidget_C::SetSelectState(bool* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTeamPlayerWidget.RoomTeamPlayerWidget_C.SetSelectState");

	URoomTeamPlayerWidget_C_SetSelectState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomTeamPlayerWidget.RoomTeamPlayerWidget_C.ShowLines
// (BlueprintCallable, BlueprintEvent)

void URoomTeamPlayerWidget_C::ShowLines()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTeamPlayerWidget.RoomTeamPlayerWidget_C.ShowLines");

	URoomTeamPlayerWidget_C_ShowLines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomTeamPlayerWidget.RoomTeamPlayerWidget_C.ExecuteUbergraph_RoomTeamPlayerWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URoomTeamPlayerWidget_C::ExecuteUbergraph_RoomTeamPlayerWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTeamPlayerWidget.RoomTeamPlayerWidget_C.ExecuteUbergraph_RoomTeamPlayerWidget");

	URoomTeamPlayerWidget_C_ExecuteUbergraph_RoomTeamPlayerWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomTeamPlayerWidget.RoomTeamPlayerWidget_C.RightClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoomUser               user                           (BlueprintVisible, BlueprintReadOnly, Parm)

void URoomTeamPlayerWidget_C::RightClick__DelegateSignature(const struct FRoomUser& user)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTeamPlayerWidget.RoomTeamPlayerWidget_C.RightClick__DelegateSignature");

	URoomTeamPlayerWidget_C_RightClick__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomTeamPlayerWidget.RoomTeamPlayerWidget_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URoomTeamPlayerWidget_C* user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URoomTeamPlayerWidget_C::OnClick__DelegateSignature(class URoomTeamPlayerWidget_C* user)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomTeamPlayerWidget.RoomTeamPlayerWidget_C.OnClick__DelegateSignature");

	URoomTeamPlayerWidget_C_OnClick__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
