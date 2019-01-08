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

// Function FriendWidget.FriendWidget_C.SetCurrentOnlineStateShow
// (Public, BlueprintCallable, BlueprintEvent)

void UFriendWidget_C::SetCurrentOnlineStateShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.SetCurrentOnlineStateShow");

	UFriendWidget_C_SetCurrentOnlineStateShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.CheckDeleteFriend
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendWidget_C::CheckDeleteFriend(int PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.CheckDeleteFriend");

	UFriendWidget_C_CheckDeleteFriend_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.CheckPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UTexture2D*              Head                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendWidget_C::CheckPlayer(int ID, const struct FString& Name, class UTexture2D* Head)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.CheckPlayer");

	UFriendWidget_C_CheckPlayer_Params params;
	params.ID = ID;
	params.Name = Name;
	params.Head = Head;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.CheckRemoveTeamPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    NewTeamers                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFriendWidget_C::CheckRemoveTeamPlayer(TArray<int>* NewTeamers)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.CheckRemoveTeamPlayer");

	UFriendWidget_C_CheckRemoveTeamPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewTeamers != nullptr)
		*NewTeamers = params.NewTeamers;
}


// Function FriendWidget.FriendWidget_C.GetIndexByPlayerId
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UVerticalBox*            Area                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFriendWidget_C::GetIndexByPlayerId(class UVerticalBox* Area, int Player, int* index)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.GetIndexByPlayerId");

	UFriendWidget_C_GetIndexByPlayerId_Params params;
	params.Area = Area;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (index != nullptr)
		*index = params.index;
}


// Function FriendWidget.FriendWidget_C.CheckHoverButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFriendButtonHoverState> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendWidget_C::CheckHoverButton(TEnumAsByte<EFriendButtonHoverState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.CheckHoverButton");

	UFriendWidget_C_CheckHoverButton_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.CheckAreaHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UVerticalBox*            Area                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFriendWidget_C::CheckAreaHover(int index, class UVerticalBox* Area)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.CheckAreaHover");

	UFriendWidget_C_CheckAreaHover_Params params;
	params.index = index;
	params.Area = Area;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.HoverPlayerUserFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendWidget_C::HoverPlayerUserFunc(int ID, int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.HoverPlayerUserFunc");

	UFriendWidget_C_HoverPlayerUserFunc_Params params;
	params.ID = ID;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.DealAreaAppend
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFriendButtonHoverState> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Append                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendWidget_C::DealAreaAppend(TEnumAsByte<EFriendButtonHoverState> State, int Append)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.DealAreaAppend");

	UFriendWidget_C_DealAreaAppend_Params params;
	params.State = State;
	params.Append = Append;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.StartIntoButtomButton
// (Public, BlueprintCallable, BlueprintEvent)

void UFriendWidget_C::StartIntoButtomButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.StartIntoButtomButton");

	UFriendWidget_C_StartIntoButtomButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.SetHoverButtonToNone
// (Public, BlueprintCallable, BlueprintEvent)

void UFriendWidget_C::SetHoverButtonToNone()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.SetHoverButtonToNone");

	UFriendWidget_C_SetHoverButtonToNone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.SetFriendListIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EButtonState>      State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendWidget_C::SetFriendListIcon(TEnumAsByte<EButtonState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.SetFriendListIcon");

	UFriendWidget_C_SetFriendListIcon_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.SetAddPlayer3Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EButtonState>      State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendWidget_C::SetAddPlayer3Icon(TEnumAsByte<EButtonState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.SetAddPlayer3Icon");

	UFriendWidget_C_SetAddPlayer3Icon_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.SetAddPlayer2Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EButtonState>      State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendWidget_C::SetAddPlayer2Icon(TEnumAsByte<EButtonState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.SetAddPlayer2Icon");

	UFriendWidget_C_SetAddPlayer2Icon_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.SetAddPlayer1Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EButtonState>      State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendWidget_C::SetAddPlayer1Icon(TEnumAsByte<EButtonState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.SetAddPlayer1Icon");

	UFriendWidget_C_SetAddPlayer1Icon_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.SetOutlineAreaState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EButtonState>      State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendWidget_C::SetOutlineAreaState(TEnumAsByte<EButtonState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.SetOutlineAreaState");

	UFriendWidget_C_SetOutlineAreaState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.SetOnlineAreaState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EButtonState>      State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendWidget_C::SetOnlineAreaState(TEnumAsByte<EButtonState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.SetOnlineAreaState");

	UFriendWidget_C_SetOnlineAreaState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.SetTeamAreaState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EButtonState>      State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendWidget_C::SetTeamAreaState(TEnumAsByte<EButtonState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.SetTeamAreaState");

	UFriendWidget_C_SetTeamAreaState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.SetExpandStateChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UExpandableArea*         Expand                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFriendWidget_C::SetExpandStateChange(class UExpandableArea* Expand)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.SetExpandStateChange");

	UFriendWidget_C_SetExpandStateChange_Params params;
	params.Expand = Expand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.IsPlayerInTeam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsInTeam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFriendWidget_C::IsPlayerInTeam(const struct FString& Name, bool* IsInTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.IsPlayerInTeam");

	UFriendWidget_C_IsPlayerInTeam_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInTeam != nullptr)
		*IsInTeam = params.IsInTeam;
}


// Function FriendWidget.FriendWidget_C.CheckFriendInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              TEX                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            YSState                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendWidget_C::CheckFriendInfo(class UTexture2D* TEX, const struct FString& Name, int State, int YSState, int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.CheckFriendInfo");

	UFriendWidget_C_CheckFriendInfo_Params params;
	params.TEX = TEX;
	params.Name = Name;
	params.State = State;
	params.YSState = YSState;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.IsHasFriend
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFriendWidget_C::IsHasFriend(const struct FString& Name, bool* result)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.IsHasFriend");

	UFriendWidget_C_IsHasFriend_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (result != nullptr)
		*result = params.result;
}


// Function FriendWidget.FriendWidget_C.CheckTeamPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Head                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendWidget_C::CheckTeamPlayer(int ID, const struct FString& Name, int State, class UTexture2D* Head)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.CheckTeamPlayer");

	UFriendWidget_C_CheckTeamPlayer_Params params;
	params.ID = ID;
	params.Name = Name;
	params.State = State;
	params.Head = Head;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.On_InviteTypeSelect_GenerateWidget_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UFriendWidget_C::On_InviteTypeSelect_GenerateWidget_1(const struct FString& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.On_InviteTypeSelect_GenerateWidget_1");

	UFriendWidget_C_On_InviteTypeSelect_GenerateWidget_1_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FriendWidget.FriendWidget_C.SetFriendPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              TEX                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            YSState                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendWidget_C::SetFriendPlayer(class UTexture2D* TEX, const struct FString& Name, int State, int YSState, int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.SetFriendPlayer");

	UFriendWidget_C_SetFriendPlayer_Params params;
	params.TEX = TEX;
	params.Name = Name;
	params.State = State;
	params.YSState = YSState;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.SetTeamPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Head                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendWidget_C::SetTeamPlayer(int ID, const struct FString& Name, int State, class UTexture2D* Head)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.SetTeamPlayer");

	UFriendWidget_C_SetTeamPlayer_Params params;
	params.ID = ID;
	params.Name = Name;
	params.State = State;
	params.Head = Head;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.RemoveFromTeam
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    NewTeamer                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFriendWidget_C::RemoveFromTeam(TArray<int> NewTeamer)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.RemoveFromTeam");

	UFriendWidget_C_RemoveFromTeam_Params params;
	params.NewTeamer = NewTeamer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.ChangePlayerState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendWidget_C::ChangePlayerState(int ID, int NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.ChangePlayerState");

	UFriendWidget_C_ChangePlayerState_Params params;
	params.ID = ID;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.SetCurrentChooseFriend
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UFriendWidget_C::SetCurrentChooseFriend(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.SetCurrentChooseFriend");

	UFriendWidget_C_SetCurrentChooseFriend_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.ResortNum
// (BlueprintCallable, BlueprintEvent)

void UFriendWidget_C::ResortNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.ResortNum");

	UFriendWidget_C_ResortNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__CloseFriendList_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__CloseFriendList_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__CloseFriendList_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__CloseFriendList_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__FriendListButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__FriendListButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__FriendListButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__FriendListButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__Search_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__Search_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__Search_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__Search_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__AddTeamPlayer1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__AddTeamPlayer1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__AddTeamPlayer2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__AddTeamPlayer2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer3_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__AddTeamPlayer3_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer3_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__AddTeamPlayer3_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFriendWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.Construct");

	UFriendWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__Refresh_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__Refresh_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__Refresh_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__Refresh_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__LeaveTeam_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__LeaveTeam_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__LeaveTeam_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__LeaveTeam_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.SetLeaveTeamState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendWidget_C::SetLeaveTeamState(bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.SetLeaveTeamState");

	UFriendWidget_C_SetLeaveTeamState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.RemindPlayerIsInTeam
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UFriendWidget_C::RemindPlayerIsInTeam(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.RemindPlayerIsInTeam");

	UFriendWidget_C_RemindPlayerIsInTeam_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__TeamHeaderButton_K2Node_ComponentBoundEvent_383_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__TeamHeaderButton_K2Node_ComponentBoundEvent_383_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__TeamHeaderButton_K2Node_ComponentBoundEvent_383_OnButtonClickedEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__TeamHeaderButton_K2Node_ComponentBoundEvent_383_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__OnlineHeaderButton_K2Node_ComponentBoundEvent_832_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__OnlineHeaderButton_K2Node_ComponentBoundEvent_832_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__OnlineHeaderButton_K2Node_ComponentBoundEvent_832_OnButtonClickedEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__OnlineHeaderButton_K2Node_ComponentBoundEvent_832_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__OutlineHeaderButton_K2Node_ComponentBoundEvent_871_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__OutlineHeaderButton_K2Node_ComponentBoundEvent_871_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__OutlineHeaderButton_K2Node_ComponentBoundEvent_871_OnButtonClickedEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__OutlineHeaderButton_K2Node_ComponentBoundEvent_871_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.HoverPlayerUser
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendWidget_C::HoverPlayerUser(int ID, int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.HoverPlayerUser");

	UFriendWidget_C_HoverPlayerUser_Params params;
	params.ID = ID;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.CloseButtonSure
// (BlueprintCallable, BlueprintEvent)

void UFriendWidget_C::CloseButtonSure()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.CloseButtonSure");

	UFriendWidget_C_CloseButtonSure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.FriendListSure
// (BlueprintCallable, BlueprintEvent)

void UFriendWidget_C::FriendListSure()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.FriendListSure");

	UFriendWidget_C_FriendListSure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.SearchSure
// (BlueprintCallable, BlueprintEvent)

void UFriendWidget_C::SearchSure()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.SearchSure");

	UFriendWidget_C_SearchSure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.AddTeamerSure
// (BlueprintCallable, BlueprintEvent)

void UFriendWidget_C::AddTeamerSure()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.AddTeamerSure");

	UFriendWidget_C_AddTeamerSure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.RefreshSure
// (BlueprintCallable, BlueprintEvent)

void UFriendWidget_C::RefreshSure()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.RefreshSure");

	UFriendWidget_C_RefreshSure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.LeaveTeamSure
// (BlueprintCallable, BlueprintEvent)

void UFriendWidget_C::LeaveTeamSure()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.LeaveTeamSure");

	UFriendWidget_C_LeaveTeamSure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.StartInto
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendWidget_C::StartInto(bool* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.StartInto");

	UFriendWidget_C_StartInto_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.Verticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsDown                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendWidget_C::Verticle(bool* State, bool* IsDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.Verticle");

	UFriendWidget_C_Verticle_Params params;
	params.State = State;
	params.IsDown = IsDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.Horizontal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsRight                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendWidget_C::Horizontal(bool* State, bool* IsRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.Horizontal");

	UFriendWidget_C_Horizontal_Params params;
	params.State = State;
	params.IsRight = IsRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.ResetHover
// (Public, BlueprintCallable, BlueprintEvent)

void UFriendWidget_C::ResetHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.ResetHover");

	UFriendWidget_C_ResetHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.Press
// (Public, BlueprintCallable, BlueprintEvent)

void UFriendWidget_C::Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.Press");

	UFriendWidget_C_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.Release
// (Public, BlueprintCallable, BlueprintEvent)

void UFriendWidget_C::Release()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.Release");

	UFriendWidget_C_Release_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.DeleteFriend
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UFriendWidget_C::DeleteFriend(int ID, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.DeleteFriend");

	UFriendWidget_C_DeleteFriend_Params params;
	params.ID = ID;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.ResetOnlineTypeLanguage
// (BlueprintCallable, BlueprintEvent)

void UFriendWidget_C::ResetOnlineTypeLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.ResetOnlineTypeLanguage");

	UFriendWidget_C_ResetOnlineTypeLanguage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.SetPlayerOnlineState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            OnlineState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendWidget_C::SetPlayerOnlineState(int OnlineState)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.SetPlayerOnlineState");

	UFriendWidget_C_SetPlayerOnlineState_Params params;
	params.OnlineState = OnlineState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__InviteTypeSelect_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendWidget_C::BndEvt__InviteTypeSelect_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__InviteTypeSelect_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__InviteTypeSelect_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.ClearFriends
// (BlueprintCallable, BlueprintEvent)

void UFriendWidget_C::ClearFriends()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.ClearFriends");

	UFriendWidget_C_ClearFriends_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.CheckBackOnlineState
// (BlueprintCallable, BlueprintEvent)

void UFriendWidget_C::CheckBackOnlineState()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.CheckBackOnlineState");

	UFriendWidget_C_CheckBackOnlineState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.ChangePlayerYSState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            YSState                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendWidget_C::ChangePlayerYSState(int ID, int YSState)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.ChangePlayerYSState");

	UFriendWidget_C_ChangePlayerYSState_Params params;
	params.ID = ID;
	params.YSState = YSState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer1_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__AddTeamPlayer1_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer1_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__AddTeamPlayer1_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer1_K2Node_ComponentBoundEvent_15_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__AddTeamPlayer1_K2Node_ComponentBoundEvent_15_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer1_K2Node_ComponentBoundEvent_15_OnButtonReleasedEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__AddTeamPlayer1_K2Node_ComponentBoundEvent_15_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer1_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__AddTeamPlayer1_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer1_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__AddTeamPlayer1_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer1_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__AddTeamPlayer1_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer1_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__AddTeamPlayer1_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer2_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__AddTeamPlayer2_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer2_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__AddTeamPlayer2_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer2_K2Node_ComponentBoundEvent_19_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__AddTeamPlayer2_K2Node_ComponentBoundEvent_19_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer2_K2Node_ComponentBoundEvent_19_OnButtonReleasedEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__AddTeamPlayer2_K2Node_ComponentBoundEvent_19_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer2_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__AddTeamPlayer2_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer2_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__AddTeamPlayer2_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer2_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__AddTeamPlayer2_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer2_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__AddTeamPlayer2_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer3_K2Node_ComponentBoundEvent_22_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__AddTeamPlayer3_K2Node_ComponentBoundEvent_22_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer3_K2Node_ComponentBoundEvent_22_OnButtonPressedEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__AddTeamPlayer3_K2Node_ComponentBoundEvent_22_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer3_K2Node_ComponentBoundEvent_23_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__AddTeamPlayer3_K2Node_ComponentBoundEvent_23_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer3_K2Node_ComponentBoundEvent_23_OnButtonReleasedEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__AddTeamPlayer3_K2Node_ComponentBoundEvent_23_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer3_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__AddTeamPlayer3_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer3_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__AddTeamPlayer3_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer3_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__AddTeamPlayer3_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__AddTeamPlayer3_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__AddTeamPlayer3_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.AddTeamer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UFriendWidget_C::AddTeamer(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.AddTeamer");

	UFriendWidget_C_AddTeamer_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__TeamHeaderButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__TeamHeaderButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__TeamHeaderButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__TeamHeaderButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__TeamHeaderButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__TeamHeaderButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__TeamHeaderButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__TeamHeaderButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__TeamHeaderButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__TeamHeaderButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__TeamHeaderButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__TeamHeaderButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__TeamHeaderButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__TeamHeaderButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__TeamHeaderButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__TeamHeaderButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__OnlineHeaderButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__OnlineHeaderButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__OnlineHeaderButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__OnlineHeaderButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__OnlineHeaderButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__OnlineHeaderButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__OnlineHeaderButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__OnlineHeaderButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__OnlineHeaderButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__OnlineHeaderButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__OnlineHeaderButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__OnlineHeaderButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__OnlineHeaderButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__OnlineHeaderButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__OnlineHeaderButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__OnlineHeaderButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__OutlineHeaderButton_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__OutlineHeaderButton_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__OutlineHeaderButton_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__OutlineHeaderButton_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__OutlineHeaderButton_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__OutlineHeaderButton_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__OutlineHeaderButton_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__OutlineHeaderButton_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__OutlineHeaderButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__OutlineHeaderButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__OutlineHeaderButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__OutlineHeaderButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__OutlineHeaderButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__OutlineHeaderButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__OutlineHeaderButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__OutlineHeaderButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__FriendListButton_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__FriendListButton_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__FriendListButton_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__FriendListButton_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__FriendListButton_K2Node_ComponentBoundEvent_26_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__FriendListButton_K2Node_ComponentBoundEvent_26_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__FriendListButton_K2Node_ComponentBoundEvent_26_OnButtonReleasedEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__FriendListButton_K2Node_ComponentBoundEvent_26_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__FriendListButton_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__FriendListButton_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__FriendListButton_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__FriendListButton_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__FriendListButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__FriendListButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__FriendListButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__FriendListButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__LeaveTeam_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__LeaveTeam_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__LeaveTeam_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__LeaveTeam_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__LeaveTeam_K2Node_ComponentBoundEvent_30_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__LeaveTeam_K2Node_ComponentBoundEvent_30_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__LeaveTeam_K2Node_ComponentBoundEvent_30_OnButtonReleasedEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__LeaveTeam_K2Node_ComponentBoundEvent_30_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__LeaveTeam_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__LeaveTeam_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__LeaveTeam_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__LeaveTeam_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.BndEvt__LeaveTeam_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UFriendWidget_C::BndEvt__LeaveTeam_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.BndEvt__LeaveTeam_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature");

	UFriendWidget_C_BndEvt__LeaveTeam_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.ExecuteUbergraph_FriendWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendWidget_C::ExecuteUbergraph_FriendWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.ExecuteUbergraph_FriendWidget");

	UFriendWidget_C_ExecuteUbergraph_FriendWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.DeleteFriendDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UFriendWidget_C::DeleteFriendDispatcher__DelegateSignature(int ID, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.DeleteFriendDispatcher__DelegateSignature");

	UFriendWidget_C_DeleteFriendDispatcher__DelegateSignature_Params params;
	params.ID = ID;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.SearchFriend__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFriendWidget_C::SearchFriend__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.SearchFriend__DelegateSignature");

	UFriendWidget_C_SearchFriend__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.RemindPlayerIsInTeamDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UFriendWidget_C::RemindPlayerIsInTeamDispatcher__DelegateSignature(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.RemindPlayerIsInTeamDispatcher__DelegateSignature");

	UFriendWidget_C_RemindPlayerIsInTeamDispatcher__DelegateSignature_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendWidget.FriendWidget_C.ResetFocus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFriendWidget_C::ResetFocus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendWidget.FriendWidget_C.ResetFocus__DelegateSignature");

	UFriendWidget_C_ResetFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
