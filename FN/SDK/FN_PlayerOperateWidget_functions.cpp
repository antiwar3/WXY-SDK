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

// Function PlayerOperateWidget.PlayerOperateWidget_C.BndEvt__AddFriend_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerOperateWidget_C::BndEvt__AddFriend_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerOperateWidget.PlayerOperateWidget_C.BndEvt__AddFriend_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UPlayerOperateWidget_C_BndEvt__AddFriend_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerOperateWidget.PlayerOperateWidget_C.BndEvt__Kick_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerOperateWidget_C::BndEvt__Kick_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerOperateWidget.PlayerOperateWidget_C.BndEvt__Kick_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UPlayerOperateWidget_C_BndEvt__Kick_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerOperateWidget.PlayerOperateWidget_C.BndEvt__SetToPeople_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerOperateWidget_C::BndEvt__SetToPeople_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerOperateWidget.PlayerOperateWidget_C.BndEvt__SetToPeople_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UPlayerOperateWidget_C_BndEvt__SetToPeople_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerOperateWidget.PlayerOperateWidget_C.SetPlayerInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoomUser               user                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsMaster                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowMoveToView                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerOperateWidget_C::SetPlayerInfo(const struct FRoomUser& user, bool IsMaster, bool ShowMoveToView)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerOperateWidget.PlayerOperateWidget_C.SetPlayerInfo");

	UPlayerOperateWidget_C_SetPlayerInfo_Params params;
	params.user = user;
	params.IsMaster = IsMaster;
	params.ShowMoveToView = ShowMoveToView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerOperateWidget.PlayerOperateWidget_C.BndEvt__MoveToView_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerOperateWidget_C::BndEvt__MoveToView_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerOperateWidget.PlayerOperateWidget_C.BndEvt__MoveToView_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UPlayerOperateWidget_C_BndEvt__MoveToView_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerOperateWidget.PlayerOperateWidget_C.ExecuteUbergraph_PlayerOperateWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerOperateWidget_C::ExecuteUbergraph_PlayerOperateWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerOperateWidget.PlayerOperateWidget_C.ExecuteUbergraph_PlayerOperateWidget");

	UPlayerOperateWidget_C_ExecuteUbergraph_PlayerOperateWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerOperateWidget.PlayerOperateWidget_C.ToViewer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerOperateWidget_C::ToViewer__DelegateSignature(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerOperateWidget.PlayerOperateWidget_C.ToViewer__DelegateSignature");

	UPlayerOperateWidget_C_ToViewer__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerOperateWidget.PlayerOperateWidget_C.ToPeople__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerOperateWidget_C::ToPeople__DelegateSignature(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerOperateWidget.PlayerOperateWidget_C.ToPeople__DelegateSignature");

	UPlayerOperateWidget_C_ToPeople__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerOperateWidget.PlayerOperateWidget_C.KiclPlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerOperateWidget_C::KiclPlayer__DelegateSignature(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerOperateWidget.PlayerOperateWidget_C.KiclPlayer__DelegateSignature");

	UPlayerOperateWidget_C_KiclPlayer__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerOperateWidget.PlayerOperateWidget_C.AddFriendDispatch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerOperateWidget_C::AddFriendDispatch__DelegateSignature(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerOperateWidget.PlayerOperateWidget_C.AddFriendDispatch__DelegateSignature");

	UPlayerOperateWidget_C_AddFriendDispatch__DelegateSignature_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
