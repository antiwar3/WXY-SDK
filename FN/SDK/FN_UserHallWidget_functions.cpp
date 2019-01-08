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

// Function UserHallWidget.UserHallWidget_C.RoomStateChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::RoomStateChange(int ID, bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.RoomStateChange");

	UUserHallWidget_C_RoomStateChange_Params params;
	params.ID = ID;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.SetPlayerTalk
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::SetPlayerTalk(int PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.SetPlayerTalk");

	UUserHallWidget_C_SetPlayerTalk_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.TeamChangeLook
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESexType                       sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            face                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            skin                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Hair                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HairColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Head                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::TeamChangeLook(int ID, ESexType sex, const struct FString& Name, int face, int skin, int Hair, int HairColor, class UTexture2D* Head)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.TeamChangeLook");

	UUserHallWidget_C_TeamChangeLook_Params params;
	params.ID = ID;
	params.sex = sex;
	params.Name = Name;
	params.face = face;
	params.skin = skin;
	params.Hair = Hair;
	params.HairColor = HairColor;
	params.Head = Head;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.ResetTMap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    TargetArray                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUserHallWidget_C::ResetTMap(TArray<int> TargetArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.ResetTMap");

	UUserHallWidget_C_ResetTMap_Params params;
	params.TargetArray = TargetArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.FocusSelf
// (Public, BlueprintCallable, BlueprintEvent)

void UUserHallWidget_C::FocusSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.FocusSelf");

	UUserHallWidget_C_FocusSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.Horizontal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsRight                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::Horizontal(bool State, bool IsRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.Horizontal");

	UUserHallWidget_C_Horizontal_Params params;
	params.State = State;
	params.IsRight = IsRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.Verticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsDown                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::Verticle(bool State, bool IsDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.Verticle");

	UUserHallWidget_C_Verticle_Params params;
	params.State = State;
	params.IsDown = IsDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.ReCalculateConnectServerButtonPlayerNum
// (Public, BlueprintCallable, BlueprintEvent)

void UUserHallWidget_C::ReCalculateConnectServerButtonPlayerNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.ReCalculateConnectServerButtonPlayerNum");

	UUserHallWidget_C_ReCalculateConnectServerButtonPlayerNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.SendEquipFunc
// (Public, BlueprintCallable, BlueprintEvent)

void UUserHallWidget_C::SendEquipFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.SendEquipFunc");

	UUserHallWidget_C_SendEquipFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.CheckNeedSaveEquip
// (Public, BlueprintCallable, BlueprintEvent)

void UUserHallWidget_C::CheckNeedSaveEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.CheckNeedSaveEquip");

	UUserHallWidget_C_CheckNeedSaveEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.CheckEquipChangeButtonEnable
// (Public, BlueprintCallable, BlueprintEvent)

void UUserHallWidget_C::CheckEquipChangeButtonEnable()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.CheckEquipChangeButtonEnable");

	UUserHallWidget_C_CheckEquipChangeButtonEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.CheckPlayerEquipChange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsChange                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::CheckPlayerEquipChange(bool* IsChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.CheckPlayerEquipChange");

	UUserHallWidget_C_CheckPlayerEquipChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsChange != nullptr)
		*IsChange = params.IsChange;
}


// Function UserHallWidget.UserHallWidget_C.ResetSkinPreview
// (Public, BlueprintCallable, BlueprintEvent)

void UUserHallWidget_C::ResetSkinPreview()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.ResetSkinPreview");

	UUserHallWidget_C_ResetSkinPreview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.AppendSavePreview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::AppendSavePreview(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.AppendSavePreview");

	UUserHallWidget_C_AppendSavePreview_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.ResetEquip
// (Public, BlueprintCallable, BlueprintEvent)

void UUserHallWidget_C::ResetEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.ResetEquip");

	UUserHallWidget_C_ResetEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.ResetSkinPreviewState
// (Public, BlueprintCallable, BlueprintEvent)

void UUserHallWidget_C::ResetSkinPreviewState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.ResetSkinPreviewState");

	UUserHallWidget_C_ResetSkinPreviewState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.ResetEquipSkin
// (Public, BlueprintCallable, BlueprintEvent)

void UUserHallWidget_C::ResetEquipSkin()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.ResetEquipSkin");

	UUserHallWidget_C_ResetEquipSkin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.CheckSendSkin
// (Public, BlueprintCallable, BlueprintEvent)

void UUserHallWidget_C::CheckSendSkin()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.CheckSendSkin");

	UUserHallWidget_C_CheckSendSkin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.CheckSendEquipItem
// (Public, BlueprintCallable, BlueprintEvent)

void UUserHallWidget_C::CheckSendEquipItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.CheckSendEquipItem");

	UUserHallWidget_C_CheckSendEquipItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.ResetEquipItem
// (Public, BlueprintCallable, BlueprintEvent)

void UUserHallWidget_C::ResetEquipItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.ResetEquipItem");

	UUserHallWidget_C_ResetEquipItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.SetMoney
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            money                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::SetMoney(int money)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.SetMoney");

	UUserHallWidget_C_SetMoney_Params params;
	params.money = money;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.SetPlayerSkin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCapture_C*        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPreviewType                   Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::SetPlayerSkin(class APlayerCapture_C* Player, int ID, EPreviewType Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.SetPlayerSkin");

	UUserHallWidget_C_SetPlayerSkin_Params params;
	params.Player = Player;
	params.ID = ID;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.CheckUpdatePreview
// (Public, BlueprintCallable, BlueprintEvent)

void UUserHallWidget_C::CheckUpdatePreview()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.CheckUpdatePreview");

	UUserHallWidget_C_CheckUpdatePreview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.GetEquipTypeAndIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            OldItemId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewItemId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBagType                       bagtype                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::GetEquipTypeAndIndex(int OldItemId, int NewItemId, EBagType* bagtype, int* index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.GetEquipTypeAndIndex");

	UUserHallWidget_C_GetEquipTypeAndIndex_Params params;
	params.OldItemId = OldItemId;
	params.NewItemId = NewItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bagtype != nullptr)
		*bagtype = params.bagtype;
	if (index != nullptr)
		*index = params.index;
}


// Function UserHallWidget.UserHallWidget_C.SetTeamPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESexType                       sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            face                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            skin                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Hair                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HairColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ready                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InRoom                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    equips                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           IsContain                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::SetTeamPlayer(ESexType sex, int ID, const struct FString& Name, int face, int skin, int Hair, int HairColor, int State, int ready, bool InRoom, TArray<int>* equips, bool* IsContain)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.SetTeamPlayer");

	UUserHallWidget_C_SetTeamPlayer_Params params;
	params.sex = sex;
	params.ID = ID;
	params.Name = Name;
	params.face = face;
	params.skin = skin;
	params.Hair = Hair;
	params.HairColor = HairColor;
	params.State = State;
	params.ready = ready;
	params.InRoom = InRoom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (equips != nullptr)
		*equips = params.equips;
	if (IsContain != nullptr)
		*IsContain = params.IsContain;
}


// Function UserHallWidget.UserHallWidget_C.SetPlayerName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUserHallWidget_C::SetPlayerName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.SetPlayerName");

	UUserHallWidget_C_SetPlayerName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUserHallWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.Construct");

	UUserHallWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.PlayerItemChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBagType                       bagtype                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::PlayerItemChange(int itemID, EBagType bagtype, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.PlayerItemChange");

	UUserHallWidget_C_PlayerItemChange_Params params;
	params.itemID = itemID;
	params.bagtype = bagtype;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.Init
// (BlueprintCallable, BlueprintEvent)

void UUserHallWidget_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.Init");

	UUserHallWidget_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.ShwoReconnect
// (BlueprintCallable, BlueprintEvent)

void UUserHallWidget_C::ShwoReconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.ShwoReconnect");

	UUserHallWidget_C_ShwoReconnect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.HideReconnect
// (BlueprintCallable, BlueprintEvent)

void UUserHallWidget_C::HideReconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.HideReconnect");

	UUserHallWidget_C_HideReconnect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.ShowSorting
// (BlueprintCallable, BlueprintEvent)

void UUserHallWidget_C::ShowSorting()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.ShowSorting");

	UUserHallWidget_C_ShowSorting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.HideSorting
// (BlueprintCallable, BlueprintEvent)

void UUserHallWidget_C::HideSorting()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.HideSorting");

	UUserHallWidget_C_HideSorting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.ReadyGame
// (BlueprintCallable, BlueprintEvent)

void UUserHallWidget_C::ReadyGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.ReadyGame");

	UUserHallWidget_C_ReadyGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__QuitButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");

	UUserHallWidget_C_BndEvt__QuitButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__SettingButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__SettingButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__SettingButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");

	UUserHallWidget_C_BndEvt__SettingButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.ShowCharacterCreate
// (BlueprintCallable, BlueprintEvent)

void UUserHallWidget_C::ShowCharacterCreate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.ShowCharacterCreate");

	UUserHallWidget_C_ShowCharacterCreate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.HideCharacterCreate
// (BlueprintCallable, BlueprintEvent)

void UUserHallWidget_C::HideCharacterCreate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.HideCharacterCreate");

	UUserHallWidget_C_HideCharacterCreate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.InputName
// (BlueprintCallable, BlueprintEvent)

void UUserHallWidget_C::InputName()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.InputName");

	UUserHallWidget_C_InputName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.CreateCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUserHallWidget_C::CreateCharacter(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.CreateCharacter");

	UUserHallWidget_C_CreateCharacter_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.ShowUserInterfaceWidget
// (BlueprintCallable, BlueprintEvent)

void UUserHallWidget_C::ShowUserInterfaceWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.ShowUserInterfaceWidget");

	UUserHallWidget_C_ShowUserInterfaceWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.InitCharacterInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESexType                       sex_type                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            face_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            skin_color_id                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            hair_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            hair_color_id                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            money                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::InitCharacterInfo(ESexType sex_type, const struct FString& Name, int face_id, int skin_color_id, int hair_id, int hair_color_id, int money)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.InitCharacterInfo");

	UUserHallWidget_C_InitCharacterInfo_Params params;
	params.sex_type = sex_type;
	params.Name = Name;
	params.face_id = face_id;
	params.skin_color_id = skin_color_id;
	params.hair_id = hair_id;
	params.hair_color_id = hair_color_id;
	params.money = money;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.CreateTeamPlayer
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESexType                       sex_type                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            user_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            face_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            skin_color_id                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            hair_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            hair_color_id                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ready                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InRoom                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    equips                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UTexture2D*              Head                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::CreateTeamPlayer(ESexType sex_type, int user_id, const struct FString& Name, int face_id, int skin_color_id, int hair_id, int hair_color_id, int State, int ready, bool InRoom, TArray<int> equips, class UTexture2D* Head)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.CreateTeamPlayer");

	UUserHallWidget_C_CreateTeamPlayer_Params params;
	params.sex_type = sex_type;
	params.user_id = user_id;
	params.Name = Name;
	params.face_id = face_id;
	params.skin_color_id = skin_color_id;
	params.hair_id = hair_id;
	params.hair_color_id = hair_color_id;
	params.State = State;
	params.ready = ready;
	params.InRoom = InRoom;
	params.equips = equips;
	params.Head = Head;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.PlayerEquip
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    equips                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUserHallWidget_C::PlayerEquip(TArray<int> equips)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.PlayerEquip");

	UUserHallWidget_C_PlayerEquip_Params params;
	params.equips = equips;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.TeamPlayerEquipChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            OldItemId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewItemId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            UserId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::TeamPlayerEquipChange(int OldItemId, int NewItemId, int UserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.TeamPlayerEquipChange");

	UUserHallWidget_C_TeamPlayerEquipChange_Params params;
	params.OldItemId = OldItemId;
	params.NewItemId = NewItemId;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.QuitFromTeam
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    NewTeamArray                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUserHallWidget_C::QuitFromTeam(TArray<int> NewTeamArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.QuitFromTeam");

	UUserHallWidget_C_QuitFromTeam_Params params;
	params.NewTeamArray = NewTeamArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.ComfirmMaster
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Master                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::ComfirmMaster(int Master)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.ComfirmMaster");

	UUserHallWidget_C_ComfirmMaster_Params params;
	params.Master = Master;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.ChangeTeamPlayerState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::ChangeTeamPlayerState(int PlayerID, int NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.ChangeTeamPlayerState");

	UUserHallWidget_C_ChangeTeamPlayerState_Params params;
	params.PlayerID = PlayerID;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.ResetHall
// (BlueprintCallable, BlueprintEvent)

void UUserHallWidget_C::ResetHall()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.ResetHall");

	UUserHallWidget_C_ResetHall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.AppendGongGao
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   GongGaoInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UUserHallWidget_C::AppendGongGao(const struct FText& GongGaoInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.AppendGongGao");

	UUserHallWidget_C_AppendGongGao_Params params;
	params.GongGaoInfo = GongGaoInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__QuitGame_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__QuitGame_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__QuitGame_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UUserHallWidget_C_BndEvt__QuitGame_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.PreConstruct");

	UUserHallWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.SetTeamPlayerPreviewSkin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPreviewType                   Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::SetTeamPlayerPreviewSkin(int PlayerID, EPreviewType Type, int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.SetTeamPlayerPreviewSkin");

	UUserHallWidget_C_SetTeamPlayerPreviewSkin_Params params;
	params.PlayerID = PlayerID;
	params.Type = Type;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.UpdateMoney
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            money                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::UpdateMoney(int money)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.UpdateMoney");

	UUserHallWidget_C_UpdateMoney_Params params;
	params.money = money;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__BP_StoreWidget_K2Node_ComponentBoundEvent_55_SendRemindText__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UUserHallWidget_C::BndEvt__BP_StoreWidget_K2Node_ComponentBoundEvent_55_SendRemindText__DelegateSignature(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__BP_StoreWidget_K2Node_ComponentBoundEvent_55_SendRemindText__DelegateSignature");

	UUserHallWidget_C_BndEvt__BP_StoreWidget_K2Node_ComponentBoundEvent_55_SendRemindText__DelegateSignature_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__BP_StoreWidget_K2Node_ComponentBoundEvent_129_BuyNewBox__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::BndEvt__BP_StoreWidget_K2Node_ComponentBoundEvent_129_BuyNewBox__DelegateSignature(int itemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__BP_StoreWidget_K2Node_ComponentBoundEvent_129_BuyNewBox__DelegateSignature");

	UUserHallWidget_C_BndEvt__BP_StoreWidget_K2Node_ComponentBoundEvent_129_BuyNewBox__DelegateSignature_Params params;
	params.itemID = itemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__BP_StoreWidget_K2Node_ComponentBoundEvent_2_OpenBoxInfo__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UTexture2D*              icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              OpenBoxIcon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              KeyIcon                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            KeyNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BoxId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNeedKey                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::BndEvt__BP_StoreWidget_K2Node_ComponentBoundEvent_2_OpenBoxInfo__DelegateSignature(class UTexture2D* icon, class UTexture2D* OpenBoxIcon, class UTexture2D* KeyIcon, int KeyNum, int BoxId, bool IsNeedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__BP_StoreWidget_K2Node_ComponentBoundEvent_2_OpenBoxInfo__DelegateSignature");

	UUserHallWidget_C_BndEvt__BP_StoreWidget_K2Node_ComponentBoundEvent_2_OpenBoxInfo__DelegateSignature_Params params;
	params.icon = icon;
	params.OpenBoxIcon = OpenBoxIcon;
	params.KeyIcon = KeyIcon;
	params.KeyNum = KeyNum;
	params.BoxId = BoxId;
	params.IsNeedKey = IsNeedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__BP_StoreWidget_K2Node_ComponentBoundEvent_3_BuyKeyInfo__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UTexture2D*              icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              OpenBoxIcon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              KeyIcon                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            KeyId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BoxId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::BndEvt__BP_StoreWidget_K2Node_ComponentBoundEvent_3_BuyKeyInfo__DelegateSignature(class UTexture2D* icon, class UTexture2D* OpenBoxIcon, class UTexture2D* KeyIcon, int KeyId, int BoxId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__BP_StoreWidget_K2Node_ComponentBoundEvent_3_BuyKeyInfo__DelegateSignature");

	UUserHallWidget_C_BndEvt__BP_StoreWidget_K2Node_ComponentBoundEvent_3_BuyKeyInfo__DelegateSignature_Params params;
	params.icon = icon;
	params.OpenBoxIcon = OpenBoxIcon;
	params.KeyIcon = KeyIcon;
	params.KeyId = KeyId;
	params.BoxId = BoxId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.GetNewItem
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBoxRewardItem>  items                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUserHallWidget_C::GetNewItem(TArray<struct FBoxRewardItem> items)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.GetNewItem");

	UUserHallWidget_C_GetNewItem_Params params;
	params.items = items;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.CreateOwnerKey
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::CreateOwnerKey(int itemID, const struct FString& Name, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.CreateOwnerKey");

	UUserHallWidget_C_CreateOwnerKey_Params params;
	params.itemID = itemID;
	params.Name = Name;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.ResetLanguage
// (BlueprintCallable, BlueprintEvent)

void UUserHallWidget_C::ResetLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.ResetLanguage");

	UUserHallWidget_C_ResetLanguage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__Rank_K2Node_ComponentBoundEvent_1_OpenPlayerRank__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            SortMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ServerMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::BndEvt__Rank_K2Node_ComponentBoundEvent_1_OpenPlayerRank__DelegateSignature(int SortMode, int ServerMode, int PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__Rank_K2Node_ComponentBoundEvent_1_OpenPlayerRank__DelegateSignature");

	UUserHallWidget_C_BndEvt__Rank_K2Node_ComponentBoundEvent_1_OpenPlayerRank__DelegateSignature_Params params;
	params.SortMode = SortMode;
	params.ServerMode = ServerMode;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.UserRank
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWuXiaX_FUserRank       UserRank                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::UserRank(const struct FWuXiaX_FUserRank& UserRank, int PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.UserRank");

	UUserHallWidget_C_UserRank_Params params;
	params.UserRank = UserRank;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.InitServerList
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    ServerList                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUserHallWidget_C::InitServerList(TArray<int> ServerList)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.InitServerList");

	UUserHallWidget_C_InitServerList_Params params;
	params.ServerList = ServerList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.LoginCharacterMoveComplete
// (BlueprintCallable, BlueprintEvent)

void UUserHallWidget_C::LoginCharacterMoveComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.LoginCharacterMoveComplete");

	UUserHallWidget_C_LoginCharacterMoveComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BackGroundAlpha
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::BackGroundAlpha(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BackGroundAlpha");

	UUserHallWidget_C_BackGroundAlpha_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_0_SendRemind__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UUserHallWidget_C::BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_0_SendRemind__DelegateSignature(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_0_SendRemind__DelegateSignature");

	UUserHallWidget_C_BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_0_SendRemind__DelegateSignature_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_1_EquipItemChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_1_EquipItemChange__DelegateSignature(int itemID, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_1_EquipItemChange__DelegateSignature");

	UUserHallWidget_C_BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_1_EquipItemChange__DelegateSignature_Params params;
	params.itemID = itemID;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_0_OldSkinChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SkinId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_0_OldSkinChange__DelegateSignature(int Type, int SkinId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_0_OldSkinChange__DelegateSignature");

	UUserHallWidget_C_BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_0_OldSkinChange__DelegateSignature_Params params;
	params.Type = Type;
	params.SkinId = SkinId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_19_NewSkinChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SkinId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_19_NewSkinChange__DelegateSignature(int Type, int SkinId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_19_NewSkinChange__DelegateSignature");

	UUserHallWidget_C_BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_19_NewSkinChange__DelegateSignature_Params params;
	params.Type = Type;
	params.SkinId = SkinId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__SendEquip_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__SendEquip_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__SendEquip_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature");

	UUserHallWidget_C_BndEvt__SendEquip_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__BP_Store_K2Node_ComponentBoundEvent_4_BuySelectKey__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 descript                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UTexture2D*              icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::BndEvt__BP_Store_K2Node_ComponentBoundEvent_4_BuySelectKey__DelegateSignature(int itemID, const struct FString& Name, const struct FString& descript, class UTexture2D* icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__BP_Store_K2Node_ComponentBoundEvent_4_BuySelectKey__DelegateSignature");

	UUserHallWidget_C_BndEvt__BP_Store_K2Node_ComponentBoundEvent_4_BuySelectKey__DelegateSignature_Params params;
	params.itemID = itemID;
	params.Name = Name;
	params.descript = descript;
	params.icon = icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__BP_Store_K2Node_ComponentBoundEvent_0_JiHuoMaDuiHuan__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__BP_Store_K2Node_ComponentBoundEvent_0_JiHuoMaDuiHuan__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__BP_Store_K2Node_ComponentBoundEvent_0_JiHuoMaDuiHuan__DelegateSignature");

	UUserHallWidget_C_BndEvt__BP_Store_K2Node_ComponentBoundEvent_0_JiHuoMaDuiHuan__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__BuyKeyBox_K2Node_ComponentBoundEvent_0_HasBuyKey__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__BuyKeyBox_K2Node_ComponentBoundEvent_0_HasBuyKey__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__BuyKeyBox_K2Node_ComponentBoundEvent_0_HasBuyKey__DelegateSignature");

	UUserHallWidget_C_BndEvt__BuyKeyBox_K2Node_ComponentBoundEvent_0_HasBuyKey__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_1_PreviewIndexChange__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_1_PreviewIndexChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_1_PreviewIndexChange__DelegateSignature");

	UUserHallWidget_C_BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_1_PreviewIndexChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__RemindSaveEquip_K2Node_ComponentBoundEvent_2_PlayerSaveEquip__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           IsSave                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::BndEvt__RemindSaveEquip_K2Node_ComponentBoundEvent_2_PlayerSaveEquip__DelegateSignature(bool IsSave)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__RemindSaveEquip_K2Node_ComponentBoundEvent_2_PlayerSaveEquip__DelegateSignature");

	UUserHallWidget_C_BndEvt__RemindSaveEquip_K2Node_ComponentBoundEvent_2_PlayerSaveEquip__DelegateSignature_Params params;
	params.IsSave = IsSave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.TurnToNextPanelState
// (BlueprintCallable, BlueprintEvent)

void UUserHallWidget_C::TurnToNextPanelState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.TurnToNextPanelState");

	UUserHallWidget_C_TurnToNextPanelState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__Button_PlayerConfigBg_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__Button_PlayerConfigBg_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__Button_PlayerConfigBg_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature");

	UUserHallWidget_C_BndEvt__Button_PlayerConfigBg_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.LabelAppend
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Append                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::LabelAppend(int Append)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.LabelAppend");

	UUserHallWidget_C_LabelAppend_Params params;
	params.Append = Append;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__Friend_K2Node_ComponentBoundEvent_1_ResetFocus__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__Friend_K2Node_ComponentBoundEvent_1_ResetFocus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__Friend_K2Node_ComponentBoundEvent_1_ResetFocus__DelegateSignature");

	UUserHallWidget_C_BndEvt__Friend_K2Node_ComponentBoundEvent_1_ResetFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.OpenUrl
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 URL                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUserHallWidget_C::OpenUrl(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.OpenUrl");

	UUserHallWidget_C_OpenUrl_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__BuyKeyBox_K2Node_ComponentBoundEvent_732_BuyResponse__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__BuyKeyBox_K2Node_ComponentBoundEvent_732_BuyResponse__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__BuyKeyBox_K2Node_ComponentBoundEvent_732_BuyResponse__DelegateSignature");

	UUserHallWidget_C_BndEvt__BuyKeyBox_K2Node_ComponentBoundEvent_732_BuyResponse__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__CloseWeb_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__CloseWeb_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__CloseWeb_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UUserHallWidget_C_BndEvt__CloseWeb_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__RefreshButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__RefreshButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__RefreshButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UUserHallWidget_C_BndEvt__RefreshButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__XinShouYinDao_K2Node_ComponentBoundEvent_360_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__XinShouYinDao_K2Node_ComponentBoundEvent_360_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__XinShouYinDao_K2Node_ComponentBoundEvent_360_OnButtonClickedEvent__DelegateSignature");

	UUserHallWidget_C_BndEvt__XinShouYinDao_K2Node_ComponentBoundEvent_360_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__Video_K2Node_ComponentBoundEvent_252_PlayBGSound__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__Video_K2Node_ComponentBoundEvent_252_PlayBGSound__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__Video_K2Node_ComponentBoundEvent_252_PlayBGSound__DelegateSignature");

	UUserHallWidget_C_BndEvt__Video_K2Node_ComponentBoundEvent_252_PlayBGSound__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__XinShouYinDao_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__XinShouYinDao_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__XinShouYinDao_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UUserHallWidget_C_BndEvt__XinShouYinDao_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__XinShouYinDao_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__XinShouYinDao_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__XinShouYinDao_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");

	UUserHallWidget_C_BndEvt__XinShouYinDao_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__XinShouYinDao_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__XinShouYinDao_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__XinShouYinDao_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UUserHallWidget_C_BndEvt__XinShouYinDao_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__XinShouYinDao_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__XinShouYinDao_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__XinShouYinDao_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UUserHallWidget_C_BndEvt__XinShouYinDao_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__CharacterConfig_K2Node_ComponentBoundEvent_3_UpdateSex__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESexType                       sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::BndEvt__CharacterConfig_K2Node_ComponentBoundEvent_3_UpdateSex__DelegateSignature(ESexType sex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__CharacterConfig_K2Node_ComponentBoundEvent_3_UpdateSex__DelegateSignature");

	UUserHallWidget_C_BndEvt__CharacterConfig_K2Node_ComponentBoundEvent_3_UpdateSex__DelegateSignature_Params params;
	params.sex = sex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__CharacterConfig_K2Node_ComponentBoundEvent_4_UpdateHead__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            FaceId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::BndEvt__CharacterConfig_K2Node_ComponentBoundEvent_4_UpdateHead__DelegateSignature(int FaceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__CharacterConfig_K2Node_ComponentBoundEvent_4_UpdateHead__DelegateSignature");

	UUserHallWidget_C_BndEvt__CharacterConfig_K2Node_ComponentBoundEvent_4_UpdateHead__DelegateSignature_Params params;
	params.FaceId = FaceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__CharacterConfig_K2Node_ComponentBoundEvent_5_UpdateHair__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            HairId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::BndEvt__CharacterConfig_K2Node_ComponentBoundEvent_5_UpdateHair__DelegateSignature(int HairId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__CharacterConfig_K2Node_ComponentBoundEvent_5_UpdateHair__DelegateSignature");

	UUserHallWidget_C_BndEvt__CharacterConfig_K2Node_ComponentBoundEvent_5_UpdateHair__DelegateSignature_Params params;
	params.HairId = HairId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__CharacterConfig_K2Node_ComponentBoundEvent_6_UpdateSkinColor__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            ColorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::BndEvt__CharacterConfig_K2Node_ComponentBoundEvent_6_UpdateSkinColor__DelegateSignature(int ColorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__CharacterConfig_K2Node_ComponentBoundEvent_6_UpdateSkinColor__DelegateSignature");

	UUserHallWidget_C_BndEvt__CharacterConfig_K2Node_ComponentBoundEvent_6_UpdateSkinColor__DelegateSignature_Params params;
	params.ColorId = ColorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__CharacterConfig_K2Node_ComponentBoundEvent_7_UpdateHairColor__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            ColorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::BndEvt__CharacterConfig_K2Node_ComponentBoundEvent_7_UpdateHairColor__DelegateSignature(int ColorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__CharacterConfig_K2Node_ComponentBoundEvent_7_UpdateHairColor__DelegateSignature");

	UUserHallWidget_C_BndEvt__CharacterConfig_K2Node_ComponentBoundEvent_7_UpdateHairColor__DelegateSignature_Params params;
	params.ColorId = ColorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__Friend_K2Node_ComponentBoundEvent_1_RemindPlayerIsInTeamDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUserHallWidget_C::BndEvt__Friend_K2Node_ComponentBoundEvent_1_RemindPlayerIsInTeamDispatcher__DelegateSignature(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__Friend_K2Node_ComponentBoundEvent_1_RemindPlayerIsInTeamDispatcher__DelegateSignature");

	UUserHallWidget_C_BndEvt__Friend_K2Node_ComponentBoundEvent_1_RemindPlayerIsInTeamDispatcher__DelegateSignature_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__Friend_K2Node_ComponentBoundEvent_2_SearchFriend__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__Friend_K2Node_ComponentBoundEvent_2_SearchFriend__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__Friend_K2Node_ComponentBoundEvent_2_SearchFriend__DelegateSignature");

	UUserHallWidget_C_BndEvt__Friend_K2Node_ComponentBoundEvent_2_SearchFriend__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__AddFriendWindow_K2Node_ComponentBoundEvent_3_RequestAddFriend__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUserHallWidget_C::BndEvt__AddFriendWindow_K2Node_ComponentBoundEvent_3_RequestAddFriend__DelegateSignature(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__AddFriendWindow_K2Node_ComponentBoundEvent_3_RequestAddFriend__DelegateSignature");

	UUserHallWidget_C_BndEvt__AddFriendWindow_K2Node_ComponentBoundEvent_3_RequestAddFriend__DelegateSignature_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__UserInputName_K2Node_ComponentBoundEvent_4_CreateCharacterName__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUserHallWidget_C::BndEvt__UserInputName_K2Node_ComponentBoundEvent_4_CreateCharacterName__DelegateSignature(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__UserInputName_K2Node_ComponentBoundEvent_4_CreateCharacterName__DelegateSignature");

	UUserHallWidget_C_BndEvt__UserInputName_K2Node_ComponentBoundEvent_4_CreateCharacterName__DelegateSignature_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_697_SetPlayerCapturePreview__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EPreviewType                   Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SkinId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_697_SetPlayerCapturePreview__DelegateSignature(EPreviewType Type, int SkinId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_697_SetPlayerCapturePreview__DelegateSignature");

	UUserHallWidget_C_BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_697_SetPlayerCapturePreview__DelegateSignature_Params params;
	params.Type = Type;
	params.SkinId = SkinId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_9_SetReConstructCharState__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_9_SetReConstructCharState__DelegateSignature(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_9_SetReConstructCharState__DelegateSignature");

	UUserHallWidget_C_BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_9_SetReConstructCharState__DelegateSignature_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_1_UpdateSex__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESexType                       sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_1_UpdateSex__DelegateSignature(ESexType sex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_1_UpdateSex__DelegateSignature");

	UUserHallWidget_C_BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_1_UpdateSex__DelegateSignature_Params params;
	params.sex = sex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_2_UpdateHead__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            FaceId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_2_UpdateHead__DelegateSignature(int FaceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_2_UpdateHead__DelegateSignature");

	UUserHallWidget_C_BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_2_UpdateHead__DelegateSignature_Params params;
	params.FaceId = FaceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_3_UpdateHair__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            HairId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_3_UpdateHair__DelegateSignature(int HairId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_3_UpdateHair__DelegateSignature");

	UUserHallWidget_C_BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_3_UpdateHair__DelegateSignature_Params params;
	params.HairId = HairId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_4_UpdateSkinColor__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            ColorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_4_UpdateSkinColor__DelegateSignature(int ColorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_4_UpdateSkinColor__DelegateSignature");

	UUserHallWidget_C_BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_4_UpdateSkinColor__DelegateSignature_Params params;
	params.ColorId = ColorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_5_UpdateHairColor__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            ColorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_5_UpdateHairColor__DelegateSignature(int ColorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_5_UpdateHairColor__DelegateSignature");

	UUserHallWidget_C_BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_5_UpdateHairColor__DelegateSignature_Params params;
	params.ColorId = ColorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.ClearAllEquip
// (BlueprintCallable, BlueprintEvent)

void UUserHallWidget_C::ClearAllEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.ClearAllEquip");

	UUserHallWidget_C_ClearAllEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_1_SendRemind__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Info                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUserHallWidget_C::BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_1_SendRemind__DelegateSignature(const struct FText& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_1_SendRemind__DelegateSignature");

	UUserHallWidget_C_BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_1_SendRemind__DelegateSignature_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__PlayerConfigItem_K2Node_ComponentBoundEvent_1_EventSellItem__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           IsItem                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::BndEvt__PlayerConfigItem_K2Node_ComponentBoundEvent_1_EventSellItem__DelegateSignature(bool IsItem, int ID, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__PlayerConfigItem_K2Node_ComponentBoundEvent_1_EventSellItem__DelegateSignature");

	UUserHallWidget_C_BndEvt__PlayerConfigItem_K2Node_ComponentBoundEvent_1_EventSellItem__DelegateSignature_Params params;
	params.IsItem = IsItem;
	params.ID = ID;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__Friend_K2Node_ComponentBoundEvent_171_DeleteFriendDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUserHallWidget_C::BndEvt__Friend_K2Node_ComponentBoundEvent_171_DeleteFriendDispatcher__DelegateSignature(int ID, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__Friend_K2Node_ComponentBoundEvent_171_DeleteFriendDispatcher__DelegateSignature");

	UUserHallWidget_C_BndEvt__Friend_K2Node_ComponentBoundEvent_171_DeleteFriendDispatcher__DelegateSignature_Params params;
	params.ID = ID;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__BP_UserSetting_K2Node_ComponentBoundEvent_25_OnClose__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__BP_UserSetting_K2Node_ComponentBoundEvent_25_OnClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__BP_UserSetting_K2Node_ComponentBoundEvent_25_OnClose__DelegateSignature");

	UUserHallWidget_C_BndEvt__BP_UserSetting_K2Node_ComponentBoundEvent_25_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__Douyu_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__Douyu_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__Douyu_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature");

	UUserHallWidget_C_BndEvt__Douyu_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__Douyu_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__Douyu_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__Douyu_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature");

	UUserHallWidget_C_BndEvt__Douyu_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__Douyu_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__Douyu_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__Douyu_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature");

	UUserHallWidget_C_BndEvt__Douyu_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__CustomGame_K2Node_ComponentBoundEvent_29_HallRemind__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UUserHallWidget_C::BndEvt__CustomGame_K2Node_ComponentBoundEvent_29_HallRemind__DelegateSignature(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__CustomGame_K2Node_ComponentBoundEvent_29_HallRemind__DelegateSignature");

	UUserHallWidget_C_BndEvt__CustomGame_K2Node_ComponentBoundEvent_29_HallRemind__DelegateSignature_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__CustomGame_K2Node_ComponentBoundEvent_30_JoinRoom__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FUIRoomInfo             room                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUserHallWidget_C::BndEvt__CustomGame_K2Node_ComponentBoundEvent_30_JoinRoom__DelegateSignature(const struct FUIRoomInfo& room)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__CustomGame_K2Node_ComponentBoundEvent_30_JoinRoom__DelegateSignature");

	UUserHallWidget_C_BndEvt__CustomGame_K2Node_ComponentBoundEvent_30_JoinRoom__DelegateSignature_Params params;
	params.room = room;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__BP_RoomInfo_K2Node_ComponentBoundEvent_33_DeleteRoomDispatch__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FUIRoomInfo             room                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUserHallWidget_C::BndEvt__BP_RoomInfo_K2Node_ComponentBoundEvent_33_DeleteRoomDispatch__DelegateSignature(const struct FUIRoomInfo& room)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__BP_RoomInfo_K2Node_ComponentBoundEvent_33_DeleteRoomDispatch__DelegateSignature");

	UUserHallWidget_C_BndEvt__BP_RoomInfo_K2Node_ComponentBoundEvent_33_DeleteRoomDispatch__DelegateSignature_Params params;
	params.room = room;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__DeleteRoomPop_K2Node_ComponentBoundEvent_36_Delete__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__DeleteRoomPop_K2Node_ComponentBoundEvent_36_Delete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__DeleteRoomPop_K2Node_ComponentBoundEvent_36_Delete__DelegateSignature");

	UUserHallWidget_C_BndEvt__DeleteRoomPop_K2Node_ComponentBoundEvent_36_Delete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__BP_RoomInfo_K2Node_ComponentBoundEvent_37_HallRemind__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UUserHallWidget_C::BndEvt__BP_RoomInfo_K2Node_ComponentBoundEvent_37_HallRemind__DelegateSignature(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__BP_RoomInfo_K2Node_ComponentBoundEvent_37_HallRemind__DelegateSignature");

	UUserHallWidget_C_BndEvt__BP_RoomInfo_K2Node_ComponentBoundEvent_37_HallRemind__DelegateSignature_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__RoomTime_K2Node_ComponentBoundEvent_39_TimeEnd__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__RoomTime_K2Node_ComponentBoundEvent_39_TimeEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__RoomTime_K2Node_ComponentBoundEvent_39_TimeEnd__DelegateSignature");

	UUserHallWidget_C_BndEvt__RoomTime_K2Node_ComponentBoundEvent_39_TimeEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.StartRoomTick
// (BlueprintCallable, BlueprintEvent)

void UUserHallWidget_C::StartRoomTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.StartRoomTick");

	UUserHallWidget_C_StartRoomTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.EndRoomTick
// (BlueprintCallable, BlueprintEvent)

void UUserHallWidget_C::EndRoomTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.EndRoomTick");

	UUserHallWidget_C_EndRoomTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__RoomTime_K2Node_ComponentBoundEvent_40_MasterQuitTick__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__RoomTime_K2Node_ComponentBoundEvent_40_MasterQuitTick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__RoomTime_K2Node_ComponentBoundEvent_40_MasterQuitTick__DelegateSignature");

	UUserHallWidget_C_BndEvt__RoomTime_K2Node_ComponentBoundEvent_40_MasterQuitTick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__HomePage_K2Node_ComponentBoundEvent_38_OnClick__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__HomePage_K2Node_ComponentBoundEvent_38_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__HomePage_K2Node_ComponentBoundEvent_38_OnClick__DelegateSignature");

	UUserHallWidget_C_BndEvt__HomePage_K2Node_ComponentBoundEvent_38_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__StaticsPage_K2Node_ComponentBoundEvent_41_OnClick__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__StaticsPage_K2Node_ComponentBoundEvent_41_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__StaticsPage_K2Node_ComponentBoundEvent_41_OnClick__DelegateSignature");

	UUserHallWidget_C_BndEvt__StaticsPage_K2Node_ComponentBoundEvent_41_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__CharacterPage_K2Node_ComponentBoundEvent_42_OnClick__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__CharacterPage_K2Node_ComponentBoundEvent_42_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__CharacterPage_K2Node_ComponentBoundEvent_42_OnClick__DelegateSignature");

	UUserHallWidget_C_BndEvt__CharacterPage_K2Node_ComponentBoundEvent_42_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__FeatsPage_K2Node_ComponentBoundEvent_43_OnClick__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__FeatsPage_K2Node_ComponentBoundEvent_43_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__FeatsPage_K2Node_ComponentBoundEvent_43_OnClick__DelegateSignature");

	UUserHallWidget_C_BndEvt__FeatsPage_K2Node_ComponentBoundEvent_43_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__CustomGamePage_K2Node_ComponentBoundEvent_44_OnClick__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__CustomGamePage_K2Node_ComponentBoundEvent_44_OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__CustomGamePage_K2Node_ComponentBoundEvent_44_OnClick__DelegateSignature");

	UUserHallWidget_C_BndEvt__CustomGamePage_K2Node_ComponentBoundEvent_44_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__HomePageWidget_K2Node_ComponentBoundEvent_45_HallRemind__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UUserHallWidget_C::BndEvt__HomePageWidget_K2Node_ComponentBoundEvent_45_HallRemind__DelegateSignature(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__HomePageWidget_K2Node_ComponentBoundEvent_45_HallRemind__DelegateSignature");

	UUserHallWidget_C_BndEvt__HomePageWidget_K2Node_ComponentBoundEvent_45_HallRemind__DelegateSignature_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__HomePageWidget_K2Node_ComponentBoundEvent_46_PopServerMode__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::BndEvt__HomePageWidget_K2Node_ComponentBoundEvent_46_PopServerMode__DelegateSignature(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__HomePageWidget_K2Node_ComponentBoundEvent_46_PopServerMode__DelegateSignature");

	UUserHallWidget_C_BndEvt__HomePageWidget_K2Node_ComponentBoundEvent_46_PopServerMode__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__PopServerModeSelect_K2Node_ComponentBoundEvent_47_SelectServerComplete__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::BndEvt__PopServerModeSelect_K2Node_ComponentBoundEvent_47_SelectServerComplete__DelegateSignature(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__PopServerModeSelect_K2Node_ComponentBoundEvent_47_SelectServerComplete__DelegateSignature");

	UUserHallWidget_C_BndEvt__PopServerModeSelect_K2Node_ComponentBoundEvent_47_SelectServerComplete__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__HomePageWidget_K2Node_ComponentBoundEvent_48_PopSortMode__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::BndEvt__HomePageWidget_K2Node_ComponentBoundEvent_48_PopSortMode__DelegateSignature(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__HomePageWidget_K2Node_ComponentBoundEvent_48_PopSortMode__DelegateSignature");

	UUserHallWidget_C_BndEvt__HomePageWidget_K2Node_ComponentBoundEvent_48_PopSortMode__DelegateSignature_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__PopSortModeSelect_K2Node_ComponentBoundEvent_49_SelectTypeComplete__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::BndEvt__PopSortModeSelect_K2Node_ComponentBoundEvent_49_SelectTypeComplete__DelegateSignature(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__PopSortModeSelect_K2Node_ComponentBoundEvent_49_SelectTypeComplete__DelegateSignature");

	UUserHallWidget_C_BndEvt__PopSortModeSelect_K2Node_ComponentBoundEvent_49_SelectTypeComplete__DelegateSignature_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__HomePageWidget_K2Node_ComponentBoundEvent_50_CreateRoom__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__HomePageWidget_K2Node_ComponentBoundEvent_50_CreateRoom__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__HomePageWidget_K2Node_ComponentBoundEvent_50_CreateRoom__DelegateSignature");

	UUserHallWidget_C_BndEvt__HomePageWidget_K2Node_ComponentBoundEvent_50_CreateRoom__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.BndEvt__HomePageWidget_K2Node_ComponentBoundEvent_51_PreviewRoom__DelegateSignature
// (BlueprintEvent)

void UUserHallWidget_C::BndEvt__HomePageWidget_K2Node_ComponentBoundEvent_51_PreviewRoom__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.BndEvt__HomePageWidget_K2Node_ComponentBoundEvent_51_PreviewRoom__DelegateSignature");

	UUserHallWidget_C_BndEvt__HomePageWidget_K2Node_ComponentBoundEvent_51_PreviewRoom__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.ExecuteUbergraph_UserHallWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::ExecuteUbergraph_UserHallWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.ExecuteUbergraph_UserHallWidget");

	UUserHallWidget_C_ExecuteUbergraph_UserHallWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserHallWidget.UserHallWidget_C.PlayBGSound__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserHallWidget_C::PlayBGSound__DelegateSignature(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserHallWidget.UserHallWidget_C.PlayBGSound__DelegateSignature");

	UUserHallWidget_C_PlayBGSound__DelegateSignature_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
