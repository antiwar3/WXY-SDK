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

// Function MainLoginWidget.MainLoginWidget_C.LoginComplete
// (Public, BlueprintCallable, BlueprintEvent)

void UMainLoginWidget_C::LoginComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.LoginComplete");

	UMainLoginWidget_C_LoginComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMainLoginWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.Construct");

	UMainLoginWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.OpenLoginWidget
// (BlueprintCallable, BlueprintEvent)

void UMainLoginWidget_C::OpenLoginWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.OpenLoginWidget");

	UMainLoginWidget_C_OpenLoginWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.LoginResponse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ELoginResponseType             LoginResponse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 player_name                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMainLoginWidget_C::LoginResponse(ELoginResponseType LoginResponse, const struct FString& player_name)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.LoginResponse");

	UMainLoginWidget_C_LoginResponse_Params params;
	params.LoginResponse = LoginResponse;
	params.player_name = player_name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.LoginSuccess
// (BlueprintCallable, BlueprintEvent)

void UMainLoginWidget_C::LoginSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.LoginSuccess");

	UMainLoginWidget_C_LoginSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.PlayerNameResponse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerNameResponseType        PlayerNameResponse             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::PlayerNameResponse(EPlayerNameResponseType PlayerNameResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.PlayerNameResponse");

	UMainLoginWidget_C_PlayerNameResponse_Params params;
	params.PlayerNameResponse = PlayerNameResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.GetConnectStr
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 connect_server_str             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMainLoginWidget_C::GetConnectStr(const struct FString& connect_server_str)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.GetConnectStr");

	UMainLoginWidget_C_GetConnectStr_Params params;
	params.connect_server_str = connect_server_str;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.CreateItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           item_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESexType*                      sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             item_texture                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           item_level                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                item_name                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMainLoginWidget_C::CreateItem(int* item_id, int* Num, ESexType* sex, class UTexture2D** item_texture, int* item_level, struct FString* item_name)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.CreateItem");

	UMainLoginWidget_C_CreateItem_Params params;
	params.item_id = item_id;
	params.Num = Num;
	params.sex = sex;
	params.item_texture = item_texture;
	params.item_level = item_level;
	params.item_name = item_name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.ShowReconnect
// (BlueprintCallable, BlueprintEvent)

void UMainLoginWidget_C::ShowReconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.ShowReconnect");

	UMainLoginWidget_C_ShowReconnect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.HideReconnect
// (BlueprintCallable, BlueprintEvent)

void UMainLoginWidget_C::HideReconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.HideReconnect");

	UMainLoginWidget_C_HideReconnect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.ShowSorting
// (BlueprintCallable, BlueprintEvent)

void UMainLoginWidget_C::ShowSorting()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.ShowSorting");

	UMainLoginWidget_C_ShowSorting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.HideSorting
// (BlueprintCallable, BlueprintEvent)

void UMainLoginWidget_C::HideSorting()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.HideSorting");

	UMainLoginWidget_C_HideSorting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.ReadyGame
// (BlueprintCallable, BlueprintEvent)

void UMainLoginWidget_C::ReadyGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.ReadyGame");

	UMainLoginWidget_C_ReadyGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.Init
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AClientNetMessageHandle** Net_actor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::Init(class AClientNetMessageHandle** Net_actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.Init");

	UMainLoginWidget_C_Init_Params params;
	params.Net_actor = Net_actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.SaveLoginInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 PassWord                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMainLoginWidget_C::SaveLoginInfo(const struct FString& UserName, const struct FString& PassWord)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.SaveLoginInfo");

	UMainLoginWidget_C_SaveLoginInfo_Params params;
	params.UserName = UserName;
	params.PassWord = PassWord;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.ShowCreateCharacter
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMainLoginWidget_C::ShowCreateCharacter(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.ShowCreateCharacter");

	UMainLoginWidget_C_ShowCreateCharacter_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.InitCharacterInfo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESexType*                      sex_type                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           face_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           skin_color_id                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           hair_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           hair_color_id                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           money                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::InitCharacterInfo(ESexType* sex_type, struct FString* Name, int* face_id, int* skin_color_id, int* hair_id, int* hair_color_id, int* money)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.InitCharacterInfo");

	UMainLoginWidget_C_InitCharacterInfo_Params params;
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


// Function MainLoginWidget.MainLoginWidget_C.SetFriendInfo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           login_state                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ys_state                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::SetFriendInfo(int* ID, struct FString* Name, int* login_state, int* ys_state, class UTexture2D** icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.SetFriendInfo");

	UMainLoginWidget_C_SetFriendInfo_Params params;
	params.ID = ID;
	params.Name = Name;
	params.login_state = login_state;
	params.ys_state = ys_state;
	params.icon = icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.InitTeamInfo
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESexType*                      sex_type                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           user_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           face_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           skin_color_id                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           hair_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           hair_color_id                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ready                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          in_room                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>*                   equip_items                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UTexture2D**             icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::InitTeamInfo(ESexType* sex_type, int* user_id, struct FString* Name, int* face_id, int* skin_color_id, int* hair_id, int* hair_color_id, int* State, int* ready, bool* in_room, TArray<int>* equip_items, class UTexture2D** icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.InitTeamInfo");

	UMainLoginWidget_C_InitTeamInfo_Params params;
	params.sex_type = sex_type;
	params.user_id = user_id;
	params.Name = Name;
	params.face_id = face_id;
	params.skin_color_id = skin_color_id;
	params.hair_id = hair_id;
	params.hair_color_id = hair_color_id;
	params.State = State;
	params.ready = ready;
	params.in_room = in_room;
	params.equip_items = equip_items;
	params.icon = icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.PlayerQuitTeam
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainLoginWidget_C::PlayerQuitTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.PlayerQuitTeam");

	UMainLoginWidget_C_PlayerQuitTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.PlayerBeInvite
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           invite_id                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMainLoginWidget_C::PlayerBeInvite(int* invite_id, struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.PlayerBeInvite");

	UMainLoginWidget_C_PlayerBeInvite_Params params;
	params.invite_id = invite_id;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.PlayerInviteResponse
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::PlayerInviteResponse(struct FString* Name, int* result)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.PlayerInviteResponse");

	UMainLoginWidget_C_PlayerInviteResponse_Params params;
	params.Name = Name;
	params.result = result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.PlayerBeFriendInvite
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           invite_id                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMainLoginWidget_C::PlayerBeFriendInvite(int* invite_id, struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.PlayerBeFriendInvite");

	UMainLoginWidget_C_PlayerBeFriendInvite_Params params;
	params.invite_id = invite_id;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.PlayerInviteFriendResponse
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::PlayerInviteFriendResponse(struct FString* Name, int* result)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.PlayerInviteFriendResponse");

	UMainLoginWidget_C_PlayerInviteFriendResponse_Params params;
	params.Name = Name;
	params.result = result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.PlayerEquip
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>*                   equips                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMainLoginWidget_C::PlayerEquip(TArray<int>* equips)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.PlayerEquip");

	UMainLoginWidget_C_PlayerEquip_Params params;
	params.equips = equips;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.TeamPlayerEquipChange
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           old_item_id                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           new_item_id                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           user_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::TeamPlayerEquipChange(int* old_item_id, int* new_item_id, int* user_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.TeamPlayerEquipChange");

	UMainLoginWidget_C_TeamPlayerEquipChange_Params params;
	params.old_item_id = old_item_id;
	params.new_item_id = new_item_id;
	params.user_id = user_id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.ConfigLogin
// (BlueprintCallable, BlueprintEvent)

void UMainLoginWidget_C::ConfigLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.ConfigLogin");

	UMainLoginWidget_C_ConfigLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.SetIsMasterMode
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::SetIsMasterMode(bool* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.SetIsMasterMode");

	UMainLoginWidget_C_SetIsMasterMode_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.PlayerNameRepeat
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainLoginWidget_C::PlayerNameRepeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.PlayerNameRepeat");

	UMainLoginWidget_C_PlayerNameRepeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.SetLeaveTeamButtonValid
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::SetLeaveTeamButtonValid(bool* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.SetLeaveTeamButtonValid");

	UMainLoginWidget_C_SetLeaveTeamButtonValid_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.ClearTeam
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>*                   new_team_ids                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMainLoginWidget_C::ClearTeam(TArray<int>* new_team_ids)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.ClearTeam");

	UMainLoginWidget_C_ClearTeam_Params params;
	params.new_team_ids = new_team_ids;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.ComfirmMaster
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           master_id                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::ComfirmMaster(int* master_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.ComfirmMaster");

	UMainLoginWidget_C_ComfirmMaster_Params params;
	params.master_id = master_id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.SetPLayerLoginState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           user_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           login_state                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::SetPLayerLoginState(int* user_id, int* login_state)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.SetPLayerLoginState");

	UMainLoginWidget_C_SetPLayerLoginState_Params params;
	params.user_id = user_id;
	params.login_state = login_state;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.ClearHallItem
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainLoginWidget_C::ClearHallItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.ClearHallItem");

	UMainLoginWidget_C_ClearHallItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.SetPingTaiLogin
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                user_name                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                PassWord                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESlateVisibility*              showCancle                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::SetPingTaiLogin(struct FString* user_name, struct FString* PassWord, int* Type, ESlateVisibility* showCancle)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.SetPingTaiLogin");

	UMainLoginWidget_C_SetPingTaiLogin_Params params;
	params.user_name = user_name;
	params.PassWord = PassWord;
	params.Type = Type;
	params.showCancle = showCancle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.AppendGongGao
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGongGaoType*                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Info                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMainLoginWidget_C::AppendGongGao(EGongGaoType* Type, struct FText* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.AppendGongGao");

	UMainLoginWidget_C_AppendGongGao_Params params;
	params.Type = Type;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.ResetHallItemLanguageInfo
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainLoginWidget_C::ResetHallItemLanguageInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.ResetHallItemLanguageInfo");

	UMainLoginWidget_C_ResetHallItemLanguageInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.ShowInputName
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainLoginWidget_C::ShowInputName()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.ShowInputName");

	UMainLoginWidget_C_ShowInputName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.CreateSkin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           skin_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESexType*                      sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             item_texture                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::CreateSkin(int* skin_id, int* Num, ESexType* sex, int* Type, class UTexture2D** item_texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.CreateSkin");

	UMainLoginWidget_C_CreateSkin_Params params;
	params.skin_id = skin_id;
	params.Num = Num;
	params.sex = sex;
	params.Type = Type;
	params.item_texture = item_texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.InitSkinSelectId
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           skin_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             icon_texture                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          is_show                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::InitSkinSelectId(int* skin_id, int* Type, class UTexture2D** icon_texture, bool* is_show)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.InitSkinSelectId");

	UMainLoginWidget_C_InitSkinSelectId_Params params;
	params.skin_id = skin_id;
	params.Type = Type;
	params.icon_texture = icon_texture;
	params.is_show = is_show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.SetSkinSelectId
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           skin_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             icon_texture                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::SetSkinSelectId(int* skin_id, int* Type, class UTexture2D** icon_texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.SetSkinSelectId");

	UMainLoginWidget_C_SetSkinSelectId_Params params;
	params.skin_id = skin_id;
	params.Type = Type;
	params.icon_texture = icon_texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.SetPreviewSkin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           player_id                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPreviewType*                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           skin_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::SetPreviewSkin(int* player_id, EPreviewType* Type, int* skin_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.SetPreviewSkin");

	UMainLoginWidget_C_SetPreviewSkin_Params params;
	params.player_id = player_id;
	params.Type = Type;
	params.skin_id = skin_id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.ClearGoods
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainLoginWidget_C::ClearGoods()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.ClearGoods");

	UMainLoginWidget_C_ClearGoods_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.CreateOwnerKey
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           item_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::CreateOwnerKey(int* item_id, struct FString* Name, int* Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.CreateOwnerKey");

	UMainLoginWidget_C_CreateOwnerKey_Params params;
	params.item_id = item_id;
	params.Name = Name;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.CreateOwnerBox
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           item_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          is_need_key                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::CreateOwnerBox(int* item_id, struct FString* Name, int* Num, class UTexture2D** icon, bool* is_need_key)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.CreateOwnerBox");

	UMainLoginWidget_C_CreateOwnerBox_Params params;
	params.item_id = item_id;
	params.Name = Name;
	params.Num = Num;
	params.icon = icon;
	params.is_need_key = is_need_key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.UpdateUserMoney
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           money                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::UpdateUserMoney(int* money)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.UpdateUserMoney");

	UMainLoginWidget_C_UpdateUserMoney_Params params;
	params.money = money;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.ObtainNewBox
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           item_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UTexture2D**             icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          is_need_key                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::ObtainNewBox(int* item_id, struct FString* Name, class UTexture2D** icon, bool* is_need_key)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.ObtainNewBox");

	UMainLoginWidget_C_ObtainNewBox_Params params;
	params.item_id = item_id;
	params.Name = Name;
	params.icon = icon;
	params.is_need_key = is_need_key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.ObtainNewItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UTexture2D**             icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::ObtainNewItem(struct FString* Name, class UTexture2D** icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.ObtainNewItem");

	UMainLoginWidget_C_ObtainNewItem_Params params;
	params.Name = Name;
	params.icon = icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.CreateBuyBox
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           random_box                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           fixed_box                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::CreateBuyBox(int* random_box, int* fixed_box)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.CreateBuyBox");

	UMainLoginWidget_C_CreateBuyBox_Params params;
	params.random_box = random_box;
	params.fixed_box = fixed_box;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.ReCalculateBoxPrice
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           item_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Times                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::ReCalculateBoxPrice(int* item_id, int* Times)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.ReCalculateBoxPrice");

	UMainLoginWidget_C_ReCalculateBoxPrice_Params params;
	params.item_id = item_id;
	params.Times = Times;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.AppendHallItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           item_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::AppendHallItem(int* item_id, int* Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.AppendHallItem");

	UMainLoginWidget_C_AppendHallItem_Params params;
	params.item_id = item_id;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.AppendHallSkin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           item_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::AppendHallSkin(int* item_id, int* Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.AppendHallSkin");

	UMainLoginWidget_C_AppendHallSkin_Params params;
	params.item_id = item_id;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.RemoveItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::RemoveItem(int itemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.RemoveItem");

	UMainLoginWidget_C_RemoveItem_Params params;
	params.itemID = itemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.ResetServerListLanguageInfo
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainLoginWidget_C::ResetServerListLanguageInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.ResetServerListLanguageInfo");

	UMainLoginWidget_C_ResetServerListLanguageInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.SetUserRank
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWuXiaX_FUserRank*      rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           player_id                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::SetUserRank(struct FWuXiaX_FUserRank* rank, int* player_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.SetUserRank");

	UMainLoginWidget_C_SetUserRank_Params params;
	params.rank = rank;
	params.player_id = player_id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.ResetTotalRank
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTotalRank>*     total_rank                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMainLoginWidget_C::ResetTotalRank(TArray<struct FTotalRank>* total_rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.ResetTotalRank");

	UMainLoginWidget_C_ResetTotalRank_Params params;
	params.total_rank = total_rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.ResetVicRank
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVictoryRank>*   vic_rank                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMainLoginWidget_C::ResetVicRank(TArray<struct FVictoryRank>* vic_rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.ResetVicRank");

	UMainLoginWidget_C_ResetVicRank_Params params;
	params.vic_rank = vic_rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.ResetFightRank
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFightRank>*     fight_rank                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMainLoginWidget_C::ResetFightRank(TArray<struct FFightRank>* fight_rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.ResetFightRank");

	UMainLoginWidget_C_ResetFightRank_Params params;
	params.fight_rank = fight_rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.InitServerList
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>*                   server_list                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMainLoginWidget_C::InitServerList(TArray<int>* server_list)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.InitServerList");

	UMainLoginWidget_C_InitServerList_Params params;
	params.server_list = server_list;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.LoginCharacterMoveComplete
// (BlueprintCallable, BlueprintEvent)

void UMainLoginWidget_C::LoginCharacterMoveComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.LoginCharacterMoveComplete");

	UMainLoginWidget_C_LoginCharacterMoveComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.ResetGoodsLanguage
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainLoginWidget_C::ResetGoodsLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.ResetGoodsLanguage");

	UMainLoginWidget_C_ResetGoodsLanguage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.UserHallBackGroundAlpha
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::UserHallBackGroundAlpha(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.UserHallBackGroundAlpha");

	UMainLoginWidget_C_UserHallBackGroundAlpha_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.HallRemind
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  remind                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMainLoginWidget_C::HallRemind(struct FText* remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.HallRemind");

	UMainLoginWidget_C_HallRemind_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.BuyBoxRemind
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  remind                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMainLoginWidget_C::BuyBoxRemind(struct FText* remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.BuyBoxRemind");

	UMainLoginWidget_C_BuyBoxRemind_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.OpenBoxRemind
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  remind                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMainLoginWidget_C::OpenBoxRemind(struct FText* remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.OpenBoxRemind");

	UMainLoginWidget_C_OpenBoxRemind_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.SetTeamMode
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::SetTeamMode(int* Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.SetTeamMode");

	UMainLoginWidget_C_SetTeamMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.CreateOwnerItemComplete
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainLoginWidget_C::CreateOwnerItemComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.CreateOwnerItemComplete");

	UMainLoginWidget_C_CreateOwnerItemComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.BuyKeyResponse
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           item_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::BuyKeyResponse(int* item_id, class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.BuyKeyResponse");

	UMainLoginWidget_C_BuyKeyResponse_Params params;
	params.item_id = item_id;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.RemoveHallItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           item_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::RemoveHallItem(int* item_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.RemoveHallItem");

	UMainLoginWidget_C_RemoveHallItem_Params params;
	params.item_id = item_id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.RemoveHallSkin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           skin_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::RemoveHallSkin(int* skin_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.RemoveHallSkin");

	UMainLoginWidget_C_RemoveHallSkin_Params params;
	params.skin_id = skin_id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.JiHuoMaItemAppend
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::JiHuoMaItemAppend(struct FString* Name, class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.JiHuoMaItemAppend");

	UMainLoginWidget_C_JiHuoMaItemAppend_Params params;
	params.Name = Name;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.JiHuoMaRemind
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  remind                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMainLoginWidget_C::JiHuoMaRemind(struct FText* remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.JiHuoMaRemind");

	UMainLoginWidget_C_JiHuoMaRemind_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.GetNewSkin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::GetNewSkin(int* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.GetNewSkin");

	UMainLoginWidget_C_GetNewSkin_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.ObtainNewItems
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBoxRewardItem>* items                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMainLoginWidget_C::ObtainNewItems(TArray<struct FBoxRewardItem>* items)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.ObtainNewItems");

	UMainLoginWidget_C_ObtainNewItems_Params params;
	params.items = items;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.LoadUrl
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                URL                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMainLoginWidget_C::LoadUrl(struct FString* URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.LoadUrl");

	UMainLoginWidget_C_LoadUrl_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.HideUrl
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainLoginWidget_C::HideUrl()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.HideUrl");

	UMainLoginWidget_C_HideUrl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.BuyKeyRemind
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  remind                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMainLoginWidget_C::BuyKeyRemind(struct FText* remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.BuyKeyRemind");

	UMainLoginWidget_C_BuyKeyRemind_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.BndEvt__UserHallWidget_K2Node_ComponentBoundEvent_0_PlayBGSound__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::BndEvt__UserHallWidget_K2Node_ComponentBoundEvent_0_PlayBGSound__DelegateSignature(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.BndEvt__UserHallWidget_K2Node_ComponentBoundEvent_0_PlayBGSound__DelegateSignature");

	UMainLoginWidget_C_BndEvt__UserHallWidget_K2Node_ComponentBoundEvent_0_PlayBGSound__DelegateSignature_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.WidgetEscape
// (BlueprintCallable, BlueprintEvent)

void UMainLoginWidget_C::WidgetEscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.WidgetEscape");

	UMainLoginWidget_C_WidgetEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.WidgetNextTips
// (BlueprintCallable, BlueprintEvent)

void UMainLoginWidget_C::WidgetNextTips()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.WidgetNextTips");

	UMainLoginWidget_C_WidgetNextTips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.ClearAllEquip
// (Event, Public, BlueprintEvent)

void UMainLoginWidget_C::ClearAllEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.ClearAllEquip");

	UMainLoginWidget_C_ClearAllEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.BndEvt__UserLoginWidget_K2Node_ComponentBoundEvent_0_SaveLoginInfo__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 UserName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 PassWord                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMainLoginWidget_C::BndEvt__UserLoginWidget_K2Node_ComponentBoundEvent_0_SaveLoginInfo__DelegateSignature(const struct FString& UserName, const struct FString& PassWord)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.BndEvt__UserLoginWidget_K2Node_ComponentBoundEvent_0_SaveLoginInfo__DelegateSignature");

	UMainLoginWidget_C_BndEvt__UserLoginWidget_K2Node_ComponentBoundEvent_0_SaveLoginInfo__DelegateSignature_Params params;
	params.UserName = UserName;
	params.PassWord = PassWord;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.BndEvt__UserLoginWidget_K2Node_ComponentBoundEvent_8_LoginDispatch__DelegateSignature
// (BlueprintEvent)

void UMainLoginWidget_C::BndEvt__UserLoginWidget_K2Node_ComponentBoundEvent_8_LoginDispatch__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.BndEvt__UserLoginWidget_K2Node_ComponentBoundEvent_8_LoginDispatch__DelegateSignature");

	UMainLoginWidget_C_BndEvt__UserLoginWidget_K2Node_ComponentBoundEvent_8_LoginDispatch__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.TeamChangeLook
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           player_id                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESexType*                      sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           user_face                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           skin_color                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           user_hair                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           user_haircolor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::TeamChangeLook(int* player_id, ESexType* sex, struct FString* Name, int* user_face, int* skin_color, int* user_hair, int* user_haircolor, class UTexture2D** icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.TeamChangeLook");

	UMainLoginWidget_C_TeamChangeLook_Params params;
	params.player_id = player_id;
	params.sex = sex;
	params.Name = Name;
	params.user_face = user_face;
	params.skin_color = skin_color;
	params.user_hair = user_hair;
	params.user_haircolor = user_haircolor;
	params.icon = icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.SoldItemComplete
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainLoginWidget_C::SoldItemComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.SoldItemComplete");

	UMainLoginWidget_C_SoldItemComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.SetPlayMode
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::SetPlayMode(int* Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.SetPlayMode");

	UMainLoginWidget_C_SetPlayMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.DeleteFriendComplete
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           player_id                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::DeleteFriendComplete(int* player_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.DeleteFriendComplete");

	UMainLoginWidget_C_DeleteFriendComplete_Params params;
	params.player_id = player_id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.ClearFriends
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainLoginWidget_C::ClearFriends()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.ClearFriends");

	UMainLoginWidget_C_ClearFriends_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.SetOnlineType
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           online_type                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::SetOnlineType(int* online_type)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.SetOnlineType");

	UMainLoginWidget_C_SetOnlineType_Params params;
	params.online_type = online_type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.SetFriendYSState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           user_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           login_state                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::SetFriendYSState(int* user_id, int* login_state)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.SetFriendYSState");

	UMainLoginWidget_C_SetFriendYSState_Params params;
	params.user_id = user_id;
	params.login_state = login_state;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.SetPlayModeState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::SetPlayModeState(int* Mode, int* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.SetPlayModeState");

	UMainLoginWidget_C_SetPlayModeState_Params params;
	params.Mode = Mode;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.SetPlayModeEndTime
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           days                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Hours                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Minutes                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          is_start                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::SetPlayModeEndTime(int* Mode, int* days, int* Hours, int* Minutes, bool* is_start)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.SetPlayModeEndTime");

	UMainLoginWidget_C_SetPlayModeEndTime_Params params;
	params.Mode = Mode;
	params.days = days;
	params.Hours = Hours;
	params.Minutes = Minutes;
	params.is_start = is_start;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.TeamPlayerTalk
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           player_id                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::TeamPlayerTalk(int* player_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.TeamPlayerTalk");

	UMainLoginWidget_C_TeamPlayerTalk_Params params;
	params.player_id = player_id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.UpdateVersion
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainLoginWidget_C::UpdateVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.UpdateVersion");

	UMainLoginWidget_C_UpdateVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.CreateRooms
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FUIRoomInfo>*    rooms                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMainLoginWidget_C::CreateRooms(TArray<struct FUIRoomInfo>* rooms)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.CreateRooms");

	UMainLoginWidget_C_CreateRooms_Params params;
	params.rooms = rooms;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.PlayerJoinedRoom
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FUIRoomInfo*            room                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int*                           master_id                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FRoomUser>*      users                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMainLoginWidget_C::PlayerJoinedRoom(struct FUIRoomInfo* room, int* master_id, TArray<struct FRoomUser>* users)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.PlayerJoinedRoom");

	UMainLoginWidget_C_PlayerJoinedRoom_Params params;
	params.room = room;
	params.master_id = master_id;
	params.users = users;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.QuitFromRoom
// (Event, Public, BlueprintEvent)

void UMainLoginWidget_C::QuitFromRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.QuitFromRoom");

	UMainLoginWidget_C_QuitFromRoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.PlayerLeaveRoom
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           player_id                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::PlayerLeaveRoom(int* player_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.PlayerLeaveRoom");

	UMainLoginWidget_C_PlayerLeaveRoom_Params params;
	params.player_id = player_id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.DeleteRoomComplete
// (Event, Public, BlueprintEvent)

void UMainLoginWidget_C::DeleteRoomComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.DeleteRoomComplete");

	UMainLoginWidget_C_DeleteRoomComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.UpdateRoomPlayer
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FRoomUser*              user                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMainLoginWidget_C::UpdateRoomPlayer(struct FRoomUser* user)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.UpdateRoomPlayer");

	UMainLoginWidget_C_UpdateRoomPlayer_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.SetPageNum
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::SetPageNum(int* Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.SetPageNum");

	UMainLoginWidget_C_SetPageNum_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.PopOBReconnect
// (Event, Public, BlueprintEvent)

void UMainLoginWidget_C::PopOBReconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.PopOBReconnect");

	UMainLoginWidget_C_PopOBReconnect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.SetMaxPage
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           page                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::SetMaxPage(int* page)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.SetMaxPage");

	UMainLoginWidget_C_SetMaxPage_Params params;
	params.page = page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.StartRoomTick
// (Event, Public, BlueprintEvent)

void UMainLoginWidget_C::StartRoomTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.StartRoomTick");

	UMainLoginWidget_C_StartRoomTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.QuitRoomTick
// (Event, Public, BlueprintEvent)

void UMainLoginWidget_C::QuitRoomTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.QuitRoomTick");

	UMainLoginWidget_C_QuitRoomTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.TeamPlayerRoomStateChange
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           player_id                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::TeamPlayerRoomStateChange(int* player_id, bool* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.TeamPlayerRoomStateChange");

	UMainLoginWidget_C_TeamPlayerRoomStateChange_Params params;
	params.player_id = player_id;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.SetServerMode
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           server_id                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::SetServerMode(int* server_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.SetServerMode");

	UMainLoginWidget_C_SetServerMode_Params params;
	params.server_id = server_id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.CheckResetSortState
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainLoginWidget_C::CheckResetSortState()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.CheckResetSortState");

	UMainLoginWidget_C_CheckResetSortState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLoginWidget.MainLoginWidget_C.ExecuteUbergraph_MainLoginWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginWidget_C::ExecuteUbergraph_MainLoginWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLoginWidget.MainLoginWidget_C.ExecuteUbergraph_MainLoginWidget");

	UMainLoginWidget_C_ExecuteUbergraph_MainLoginWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
