#pragma once

// Fortnite (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MainLoginWidget.MainLoginWidget_C.LoginComplete
struct UMainLoginWidget_C_LoginComplete_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.Construct
struct UMainLoginWidget_C_Construct_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.OpenLoginWidget
struct UMainLoginWidget_C_OpenLoginWidget_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.LoginResponse
struct UMainLoginWidget_C_LoginResponse_Params
{
	ELoginResponseType                                 LoginResponse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     player_name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MainLoginWidget.MainLoginWidget_C.LoginSuccess
struct UMainLoginWidget_C_LoginSuccess_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.PlayerNameResponse
struct UMainLoginWidget_C_PlayerNameResponse_Params
{
	EPlayerNameResponseType                            PlayerNameResponse;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.GetConnectStr
struct UMainLoginWidget_C_GetConnectStr_Params
{
	struct FString                                     connect_server_str;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MainLoginWidget.MainLoginWidget_C.CreateItem
struct UMainLoginWidget_C_CreateItem_Params
{
	int*                                               item_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESexType*                                          sex;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 item_texture;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               item_level;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    item_name;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MainLoginWidget.MainLoginWidget_C.ShowReconnect
struct UMainLoginWidget_C_ShowReconnect_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.HideReconnect
struct UMainLoginWidget_C_HideReconnect_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.ShowSorting
struct UMainLoginWidget_C_ShowSorting_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.HideSorting
struct UMainLoginWidget_C_HideSorting_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.ReadyGame
struct UMainLoginWidget_C_ReadyGame_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.Init
struct UMainLoginWidget_C_Init_Params
{
	class AClientNetMessageHandle**                    Net_actor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.SaveLoginInfo
struct UMainLoginWidget_C_SaveLoginInfo_Params
{
	struct FString                                     UserName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     PassWord;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MainLoginWidget.MainLoginWidget_C.ShowCreateCharacter
struct UMainLoginWidget_C_ShowCreateCharacter_Params
{
	struct FString*                                    Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MainLoginWidget.MainLoginWidget_C.InitCharacterInfo
struct UMainLoginWidget_C_InitCharacterInfo_Params
{
	ESexType*                                          sex_type;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               face_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               skin_color_id;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               hair_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               hair_color_id;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               money;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.SetFriendInfo
struct UMainLoginWidget_C_SetFriendInfo_Params
{
	int*                                               ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               login_state;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ys_state;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.InitTeamInfo
struct UMainLoginWidget_C_InitTeamInfo_Params
{
	ESexType*                                          sex_type;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               user_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               face_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               skin_color_id;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               hair_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               hair_color_id;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ready;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              in_room;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>*                                       equip_items;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UTexture2D**                                 icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.PlayerQuitTeam
struct UMainLoginWidget_C_PlayerQuitTeam_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.PlayerBeInvite
struct UMainLoginWidget_C_PlayerBeInvite_Params
{
	int*                                               invite_id;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MainLoginWidget.MainLoginWidget_C.PlayerInviteResponse
struct UMainLoginWidget_C_PlayerInviteResponse_Params
{
	struct FString*                                    Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.PlayerBeFriendInvite
struct UMainLoginWidget_C_PlayerBeFriendInvite_Params
{
	int*                                               invite_id;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MainLoginWidget.MainLoginWidget_C.PlayerInviteFriendResponse
struct UMainLoginWidget_C_PlayerInviteFriendResponse_Params
{
	struct FString*                                    Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.PlayerEquip
struct UMainLoginWidget_C_PlayerEquip_Params
{
	TArray<int>*                                       equips;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MainLoginWidget.MainLoginWidget_C.TeamPlayerEquipChange
struct UMainLoginWidget_C_TeamPlayerEquipChange_Params
{
	int*                                               old_item_id;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               new_item_id;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               user_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.ConfigLogin
struct UMainLoginWidget_C_ConfigLogin_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.SetIsMasterMode
struct UMainLoginWidget_C_SetIsMasterMode_Params
{
	bool*                                              State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.PlayerNameRepeat
struct UMainLoginWidget_C_PlayerNameRepeat_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.SetLeaveTeamButtonValid
struct UMainLoginWidget_C_SetLeaveTeamButtonValid_Params
{
	bool*                                              State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.ClearTeam
struct UMainLoginWidget_C_ClearTeam_Params
{
	TArray<int>*                                       new_team_ids;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MainLoginWidget.MainLoginWidget_C.ComfirmMaster
struct UMainLoginWidget_C_ComfirmMaster_Params
{
	int*                                               master_id;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.SetPLayerLoginState
struct UMainLoginWidget_C_SetPLayerLoginState_Params
{
	int*                                               user_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               login_state;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.ClearHallItem
struct UMainLoginWidget_C_ClearHallItem_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.SetPingTaiLogin
struct UMainLoginWidget_C_SetPingTaiLogin_Params
{
	struct FString*                                    user_name;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    PassWord;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESlateVisibility*                                  showCancle;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.AppendGongGao
struct UMainLoginWidget_C_AppendGongGao_Params
{
	EGongGaoType*                                      Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Info;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MainLoginWidget.MainLoginWidget_C.ResetHallItemLanguageInfo
struct UMainLoginWidget_C_ResetHallItemLanguageInfo_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.ShowInputName
struct UMainLoginWidget_C_ShowInputName_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.CreateSkin
struct UMainLoginWidget_C_CreateSkin_Params
{
	int*                                               skin_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESexType*                                          sex;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 item_texture;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.InitSkinSelectId
struct UMainLoginWidget_C_InitSkinSelectId_Params
{
	int*                                               skin_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 icon_texture;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              is_show;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.SetSkinSelectId
struct UMainLoginWidget_C_SetSkinSelectId_Params
{
	int*                                               skin_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 icon_texture;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.SetPreviewSkin
struct UMainLoginWidget_C_SetPreviewSkin_Params
{
	int*                                               player_id;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPreviewType*                                      Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               skin_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.ClearGoods
struct UMainLoginWidget_C_ClearGoods_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.CreateOwnerKey
struct UMainLoginWidget_C_CreateOwnerKey_Params
{
	int*                                               item_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.CreateOwnerBox
struct UMainLoginWidget_C_CreateOwnerBox_Params
{
	int*                                               item_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              is_need_key;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.UpdateUserMoney
struct UMainLoginWidget_C_UpdateUserMoney_Params
{
	int*                                               money;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.ObtainNewBox
struct UMainLoginWidget_C_ObtainNewBox_Params
{
	int*                                               item_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UTexture2D**                                 icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              is_need_key;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.ObtainNewItem
struct UMainLoginWidget_C_ObtainNewItem_Params
{
	struct FString*                                    Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UTexture2D**                                 icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.CreateBuyBox
struct UMainLoginWidget_C_CreateBuyBox_Params
{
	int*                                               random_box;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               fixed_box;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.ReCalculateBoxPrice
struct UMainLoginWidget_C_ReCalculateBoxPrice_Params
{
	int*                                               item_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Times;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.AppendHallItem
struct UMainLoginWidget_C_AppendHallItem_Params
{
	int*                                               item_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.AppendHallSkin
struct UMainLoginWidget_C_AppendHallSkin_Params
{
	int*                                               item_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.RemoveItem
struct UMainLoginWidget_C_RemoveItem_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.ResetServerListLanguageInfo
struct UMainLoginWidget_C_ResetServerListLanguageInfo_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.SetUserRank
struct UMainLoginWidget_C_SetUserRank_Params
{
	struct FWuXiaX_FUserRank*                          rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               player_id;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.ResetTotalRank
struct UMainLoginWidget_C_ResetTotalRank_Params
{
	TArray<struct FTotalRank>*                         total_rank;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MainLoginWidget.MainLoginWidget_C.ResetVicRank
struct UMainLoginWidget_C_ResetVicRank_Params
{
	TArray<struct FVictoryRank>*                       vic_rank;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MainLoginWidget.MainLoginWidget_C.ResetFightRank
struct UMainLoginWidget_C_ResetFightRank_Params
{
	TArray<struct FFightRank>*                         fight_rank;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MainLoginWidget.MainLoginWidget_C.InitServerList
struct UMainLoginWidget_C_InitServerList_Params
{
	TArray<int>*                                       server_list;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MainLoginWidget.MainLoginWidget_C.LoginCharacterMoveComplete
struct UMainLoginWidget_C_LoginCharacterMoveComplete_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.ResetGoodsLanguage
struct UMainLoginWidget_C_ResetGoodsLanguage_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.UserHallBackGroundAlpha
struct UMainLoginWidget_C_UserHallBackGroundAlpha_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.HallRemind
struct UMainLoginWidget_C_HallRemind_Params
{
	struct FText*                                      remind;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MainLoginWidget.MainLoginWidget_C.BuyBoxRemind
struct UMainLoginWidget_C_BuyBoxRemind_Params
{
	struct FText*                                      remind;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MainLoginWidget.MainLoginWidget_C.OpenBoxRemind
struct UMainLoginWidget_C_OpenBoxRemind_Params
{
	struct FText*                                      remind;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MainLoginWidget.MainLoginWidget_C.SetTeamMode
struct UMainLoginWidget_C_SetTeamMode_Params
{
	int*                                               Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.CreateOwnerItemComplete
struct UMainLoginWidget_C_CreateOwnerItemComplete_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.BuyKeyResponse
struct UMainLoginWidget_C_BuyKeyResponse_Params
{
	int*                                               item_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.RemoveHallItem
struct UMainLoginWidget_C_RemoveHallItem_Params
{
	int*                                               item_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.RemoveHallSkin
struct UMainLoginWidget_C_RemoveHallSkin_Params
{
	int*                                               skin_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.JiHuoMaItemAppend
struct UMainLoginWidget_C_JiHuoMaItemAppend_Params
{
	struct FString*                                    Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.JiHuoMaRemind
struct UMainLoginWidget_C_JiHuoMaRemind_Params
{
	struct FText*                                      remind;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MainLoginWidget.MainLoginWidget_C.GetNewSkin
struct UMainLoginWidget_C_GetNewSkin_Params
{
	int*                                               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.ObtainNewItems
struct UMainLoginWidget_C_ObtainNewItems_Params
{
	TArray<struct FBoxRewardItem>*                     items;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MainLoginWidget.MainLoginWidget_C.LoadUrl
struct UMainLoginWidget_C_LoadUrl_Params
{
	struct FString*                                    URL;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MainLoginWidget.MainLoginWidget_C.HideUrl
struct UMainLoginWidget_C_HideUrl_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.BuyKeyRemind
struct UMainLoginWidget_C_BuyKeyRemind_Params
{
	struct FText*                                      remind;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MainLoginWidget.MainLoginWidget_C.BndEvt__UserHallWidget_K2Node_ComponentBoundEvent_0_PlayBGSound__DelegateSignature
struct UMainLoginWidget_C_BndEvt__UserHallWidget_K2Node_ComponentBoundEvent_0_PlayBGSound__DelegateSignature_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.WidgetEscape
struct UMainLoginWidget_C_WidgetEscape_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.WidgetNextTips
struct UMainLoginWidget_C_WidgetNextTips_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.ClearAllEquip
struct UMainLoginWidget_C_ClearAllEquip_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.BndEvt__UserLoginWidget_K2Node_ComponentBoundEvent_0_SaveLoginInfo__DelegateSignature
struct UMainLoginWidget_C_BndEvt__UserLoginWidget_K2Node_ComponentBoundEvent_0_SaveLoginInfo__DelegateSignature_Params
{
	struct FString                                     UserName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     PassWord;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MainLoginWidget.MainLoginWidget_C.BndEvt__UserLoginWidget_K2Node_ComponentBoundEvent_8_LoginDispatch__DelegateSignature
struct UMainLoginWidget_C_BndEvt__UserLoginWidget_K2Node_ComponentBoundEvent_8_LoginDispatch__DelegateSignature_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.TeamChangeLook
struct UMainLoginWidget_C_TeamChangeLook_Params
{
	int*                                               player_id;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESexType*                                          sex;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               user_face;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               skin_color;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               user_hair;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               user_haircolor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.SoldItemComplete
struct UMainLoginWidget_C_SoldItemComplete_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.SetPlayMode
struct UMainLoginWidget_C_SetPlayMode_Params
{
	int*                                               Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.DeleteFriendComplete
struct UMainLoginWidget_C_DeleteFriendComplete_Params
{
	int*                                               player_id;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.ClearFriends
struct UMainLoginWidget_C_ClearFriends_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.SetOnlineType
struct UMainLoginWidget_C_SetOnlineType_Params
{
	int*                                               online_type;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.SetFriendYSState
struct UMainLoginWidget_C_SetFriendYSState_Params
{
	int*                                               user_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               login_state;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.SetPlayModeState
struct UMainLoginWidget_C_SetPlayModeState_Params
{
	int*                                               Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.SetPlayModeEndTime
struct UMainLoginWidget_C_SetPlayModeEndTime_Params
{
	int*                                               Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               days;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Hours;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Minutes;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              is_start;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.TeamPlayerTalk
struct UMainLoginWidget_C_TeamPlayerTalk_Params
{
	int*                                               player_id;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.UpdateVersion
struct UMainLoginWidget_C_UpdateVersion_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.CreateRooms
struct UMainLoginWidget_C_CreateRooms_Params
{
	TArray<struct FUIRoomInfo>*                        rooms;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MainLoginWidget.MainLoginWidget_C.PlayerJoinedRoom
struct UMainLoginWidget_C_PlayerJoinedRoom_Params
{
	struct FUIRoomInfo*                                room;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int*                                               master_id;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FRoomUser>*                          users;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MainLoginWidget.MainLoginWidget_C.QuitFromRoom
struct UMainLoginWidget_C_QuitFromRoom_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.PlayerLeaveRoom
struct UMainLoginWidget_C_PlayerLeaveRoom_Params
{
	int*                                               player_id;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.DeleteRoomComplete
struct UMainLoginWidget_C_DeleteRoomComplete_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.UpdateRoomPlayer
struct UMainLoginWidget_C_UpdateRoomPlayer_Params
{
	struct FRoomUser*                                  user;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MainLoginWidget.MainLoginWidget_C.SetPageNum
struct UMainLoginWidget_C_SetPageNum_Params
{
	int*                                               Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.PopOBReconnect
struct UMainLoginWidget_C_PopOBReconnect_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.SetMaxPage
struct UMainLoginWidget_C_SetMaxPage_Params
{
	int*                                               page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.StartRoomTick
struct UMainLoginWidget_C_StartRoomTick_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.QuitRoomTick
struct UMainLoginWidget_C_QuitRoomTick_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.TeamPlayerRoomStateChange
struct UMainLoginWidget_C_TeamPlayerRoomStateChange_Params
{
	int*                                               player_id;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.SetServerMode
struct UMainLoginWidget_C_SetServerMode_Params
{
	int*                                               server_id;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainLoginWidget.MainLoginWidget_C.CheckResetSortState
struct UMainLoginWidget_C_CheckResetSortState_Params
{
};

// Function MainLoginWidget.MainLoginWidget_C.ExecuteUbergraph_MainLoginWidget
struct UMainLoginWidget_C_ExecuteUbergraph_MainLoginWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
