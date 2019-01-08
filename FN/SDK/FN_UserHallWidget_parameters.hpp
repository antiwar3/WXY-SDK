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

// Function UserHallWidget.UserHallWidget_C.RoomStateChange
struct UUserHallWidget_C_RoomStateChange_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.SetPlayerTalk
struct UUserHallWidget_C_SetPlayerTalk_Params
{
	int                                                PlayerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.TeamChangeLook
struct UUserHallWidget_C_TeamChangeLook_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESexType                                           sex;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                face;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                skin;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Hair;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HairColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Head;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.ResetTMap
struct UUserHallWidget_C_ResetTMap_Params
{
	TArray<int>                                        TargetArray;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UserHallWidget.UserHallWidget_C.FocusSelf
struct UUserHallWidget_C_FocusSelf_Params
{
};

// Function UserHallWidget.UserHallWidget_C.Horizontal
struct UUserHallWidget_C_Horizontal_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsRight;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.Verticle
struct UUserHallWidget_C_Verticle_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.ReCalculateConnectServerButtonPlayerNum
struct UUserHallWidget_C_ReCalculateConnectServerButtonPlayerNum_Params
{
};

// Function UserHallWidget.UserHallWidget_C.SendEquipFunc
struct UUserHallWidget_C_SendEquipFunc_Params
{
};

// Function UserHallWidget.UserHallWidget_C.CheckNeedSaveEquip
struct UUserHallWidget_C_CheckNeedSaveEquip_Params
{
};

// Function UserHallWidget.UserHallWidget_C.CheckEquipChangeButtonEnable
struct UUserHallWidget_C_CheckEquipChangeButtonEnable_Params
{
};

// Function UserHallWidget.UserHallWidget_C.CheckPlayerEquipChange
struct UUserHallWidget_C_CheckPlayerEquipChange_Params
{
	bool                                               IsChange;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.ResetSkinPreview
struct UUserHallWidget_C_ResetSkinPreview_Params
{
};

// Function UserHallWidget.UserHallWidget_C.AppendSavePreview
struct UUserHallWidget_C_AppendSavePreview_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.ResetEquip
struct UUserHallWidget_C_ResetEquip_Params
{
};

// Function UserHallWidget.UserHallWidget_C.ResetSkinPreviewState
struct UUserHallWidget_C_ResetSkinPreviewState_Params
{
};

// Function UserHallWidget.UserHallWidget_C.ResetEquipSkin
struct UUserHallWidget_C_ResetEquipSkin_Params
{
};

// Function UserHallWidget.UserHallWidget_C.CheckSendSkin
struct UUserHallWidget_C_CheckSendSkin_Params
{
};

// Function UserHallWidget.UserHallWidget_C.CheckSendEquipItem
struct UUserHallWidget_C_CheckSendEquipItem_Params
{
};

// Function UserHallWidget.UserHallWidget_C.ResetEquipItem
struct UUserHallWidget_C_ResetEquipItem_Params
{
};

// Function UserHallWidget.UserHallWidget_C.SetMoney
struct UUserHallWidget_C_SetMoney_Params
{
	int                                                money;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.SetPlayerSkin
struct UUserHallWidget_C_SetPlayerSkin_Params
{
	class APlayerCapture_C*                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPreviewType                                       Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.CheckUpdatePreview
struct UUserHallWidget_C_CheckUpdatePreview_Params
{
};

// Function UserHallWidget.UserHallWidget_C.GetEquipTypeAndIndex
struct UUserHallWidget_C_GetEquipTypeAndIndex_Params
{
	int                                                OldItemId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewItemId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBagType                                           bagtype;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.SetTeamPlayer
struct UUserHallWidget_C_SetTeamPlayer_Params
{
	ESexType                                           sex;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                face;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                skin;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Hair;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HairColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ready;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InRoom;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        equips;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               IsContain;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.SetPlayerName
struct UUserHallWidget_C_SetPlayerName_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UserHallWidget.UserHallWidget_C.Construct
struct UUserHallWidget_C_Construct_Params
{
};

// Function UserHallWidget.UserHallWidget_C.PlayerItemChange
struct UUserHallWidget_C_PlayerItemChange_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBagType                                           bagtype;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.Init
struct UUserHallWidget_C_Init_Params
{
};

// Function UserHallWidget.UserHallWidget_C.ShwoReconnect
struct UUserHallWidget_C_ShwoReconnect_Params
{
};

// Function UserHallWidget.UserHallWidget_C.HideReconnect
struct UUserHallWidget_C_HideReconnect_Params
{
};

// Function UserHallWidget.UserHallWidget_C.ShowSorting
struct UUserHallWidget_C_ShowSorting_Params
{
};

// Function UserHallWidget.UserHallWidget_C.HideSorting
struct UUserHallWidget_C_HideSorting_Params
{
};

// Function UserHallWidget.UserHallWidget_C.ReadyGame
struct UUserHallWidget_C_ReadyGame_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
struct UUserHallWidget_C_BndEvt__QuitButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__SettingButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
struct UUserHallWidget_C_BndEvt__SettingButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.ShowCharacterCreate
struct UUserHallWidget_C_ShowCharacterCreate_Params
{
};

// Function UserHallWidget.UserHallWidget_C.HideCharacterCreate
struct UUserHallWidget_C_HideCharacterCreate_Params
{
};

// Function UserHallWidget.UserHallWidget_C.InputName
struct UUserHallWidget_C_InputName_Params
{
};

// Function UserHallWidget.UserHallWidget_C.CreateCharacter
struct UUserHallWidget_C_CreateCharacter_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UserHallWidget.UserHallWidget_C.ShowUserInterfaceWidget
struct UUserHallWidget_C_ShowUserInterfaceWidget_Params
{
};

// Function UserHallWidget.UserHallWidget_C.InitCharacterInfo
struct UUserHallWidget_C_InitCharacterInfo_Params
{
	ESexType                                           sex_type;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                face_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                skin_color_id;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                hair_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                hair_color_id;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                money;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.CreateTeamPlayer
struct UUserHallWidget_C_CreateTeamPlayer_Params
{
	ESexType                                           sex_type;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                user_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                face_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                skin_color_id;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                hair_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                hair_color_id;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ready;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InRoom;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        equips;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UTexture2D*                                  Head;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.PlayerEquip
struct UUserHallWidget_C_PlayerEquip_Params
{
	TArray<int>                                        equips;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UserHallWidget.UserHallWidget_C.TeamPlayerEquipChange
struct UUserHallWidget_C_TeamPlayerEquipChange_Params
{
	int                                                OldItemId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewItemId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                UserId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.QuitFromTeam
struct UUserHallWidget_C_QuitFromTeam_Params
{
	TArray<int>                                        NewTeamArray;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UserHallWidget.UserHallWidget_C.ComfirmMaster
struct UUserHallWidget_C_ComfirmMaster_Params
{
	int                                                Master;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.ChangeTeamPlayerState
struct UUserHallWidget_C_ChangeTeamPlayerState_Params
{
	int                                                PlayerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.ResetHall
struct UUserHallWidget_C_ResetHall_Params
{
};

// Function UserHallWidget.UserHallWidget_C.AppendGongGao
struct UUserHallWidget_C_AppendGongGao_Params
{
	struct FText                                       GongGaoInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__QuitGame_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UUserHallWidget_C_BndEvt__QuitGame_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.PreConstruct
struct UUserHallWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.SetTeamPlayerPreviewSkin
struct UUserHallWidget_C_SetTeamPlayerPreviewSkin_Params
{
	int                                                PlayerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPreviewType                                       Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.UpdateMoney
struct UUserHallWidget_C_UpdateMoney_Params
{
	int                                                money;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__BP_StoreWidget_K2Node_ComponentBoundEvent_55_SendRemindText__DelegateSignature
struct UUserHallWidget_C_BndEvt__BP_StoreWidget_K2Node_ComponentBoundEvent_55_SendRemindText__DelegateSignature_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__BP_StoreWidget_K2Node_ComponentBoundEvent_129_BuyNewBox__DelegateSignature
struct UUserHallWidget_C_BndEvt__BP_StoreWidget_K2Node_ComponentBoundEvent_129_BuyNewBox__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__BP_StoreWidget_K2Node_ComponentBoundEvent_2_OpenBoxInfo__DelegateSignature
struct UUserHallWidget_C_BndEvt__BP_StoreWidget_K2Node_ComponentBoundEvent_2_OpenBoxInfo__DelegateSignature_Params
{
	class UTexture2D*                                  icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  OpenBoxIcon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  KeyIcon;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                KeyNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BoxId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNeedKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__BP_StoreWidget_K2Node_ComponentBoundEvent_3_BuyKeyInfo__DelegateSignature
struct UUserHallWidget_C_BndEvt__BP_StoreWidget_K2Node_ComponentBoundEvent_3_BuyKeyInfo__DelegateSignature_Params
{
	class UTexture2D*                                  icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  OpenBoxIcon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  KeyIcon;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                KeyId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BoxId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.GetNewItem
struct UUserHallWidget_C_GetNewItem_Params
{
	TArray<struct FBoxRewardItem>                      items;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UserHallWidget.UserHallWidget_C.CreateOwnerKey
struct UUserHallWidget_C_CreateOwnerKey_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.ResetLanguage
struct UUserHallWidget_C_ResetLanguage_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__Rank_K2Node_ComponentBoundEvent_1_OpenPlayerRank__DelegateSignature
struct UUserHallWidget_C_BndEvt__Rank_K2Node_ComponentBoundEvent_1_OpenPlayerRank__DelegateSignature_Params
{
	int                                                SortMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ServerMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.UserRank
struct UUserHallWidget_C_UserRank_Params
{
	struct FWuXiaX_FUserRank                           UserRank;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.InitServerList
struct UUserHallWidget_C_InitServerList_Params
{
	TArray<int>                                        ServerList;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UserHallWidget.UserHallWidget_C.LoginCharacterMoveComplete
struct UUserHallWidget_C_LoginCharacterMoveComplete_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BackGroundAlpha
struct UUserHallWidget_C_BackGroundAlpha_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_0_SendRemind__DelegateSignature
struct UUserHallWidget_C_BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_0_SendRemind__DelegateSignature_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_1_EquipItemChange__DelegateSignature
struct UUserHallWidget_C_BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_1_EquipItemChange__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_0_OldSkinChange__DelegateSignature
struct UUserHallWidget_C_BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_0_OldSkinChange__DelegateSignature_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkinId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_19_NewSkinChange__DelegateSignature
struct UUserHallWidget_C_BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_19_NewSkinChange__DelegateSignature_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkinId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__SendEquip_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature
struct UUserHallWidget_C_BndEvt__SendEquip_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__BP_Store_K2Node_ComponentBoundEvent_4_BuySelectKey__DelegateSignature
struct UUserHallWidget_C_BndEvt__BP_Store_K2Node_ComponentBoundEvent_4_BuySelectKey__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     descript;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UTexture2D*                                  icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__BP_Store_K2Node_ComponentBoundEvent_0_JiHuoMaDuiHuan__DelegateSignature
struct UUserHallWidget_C_BndEvt__BP_Store_K2Node_ComponentBoundEvent_0_JiHuoMaDuiHuan__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__BuyKeyBox_K2Node_ComponentBoundEvent_0_HasBuyKey__DelegateSignature
struct UUserHallWidget_C_BndEvt__BuyKeyBox_K2Node_ComponentBoundEvent_0_HasBuyKey__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_1_PreviewIndexChange__DelegateSignature
struct UUserHallWidget_C_BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_1_PreviewIndexChange__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__RemindSaveEquip_K2Node_ComponentBoundEvent_2_PlayerSaveEquip__DelegateSignature
struct UUserHallWidget_C_BndEvt__RemindSaveEquip_K2Node_ComponentBoundEvent_2_PlayerSaveEquip__DelegateSignature_Params
{
	bool                                               IsSave;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.TurnToNextPanelState
struct UUserHallWidget_C_TurnToNextPanelState_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__Button_PlayerConfigBg_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature
struct UUserHallWidget_C_BndEvt__Button_PlayerConfigBg_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.LabelAppend
struct UUserHallWidget_C_LabelAppend_Params
{
	int                                                Append;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__Friend_K2Node_ComponentBoundEvent_1_ResetFocus__DelegateSignature
struct UUserHallWidget_C_BndEvt__Friend_K2Node_ComponentBoundEvent_1_ResetFocus__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.OpenUrl
struct UUserHallWidget_C_OpenUrl_Params
{
	struct FString                                     URL;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__BuyKeyBox_K2Node_ComponentBoundEvent_732_BuyResponse__DelegateSignature
struct UUserHallWidget_C_BndEvt__BuyKeyBox_K2Node_ComponentBoundEvent_732_BuyResponse__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__CloseWeb_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UUserHallWidget_C_BndEvt__CloseWeb_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__RefreshButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UUserHallWidget_C_BndEvt__RefreshButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__XinShouYinDao_K2Node_ComponentBoundEvent_360_OnButtonClickedEvent__DelegateSignature
struct UUserHallWidget_C_BndEvt__XinShouYinDao_K2Node_ComponentBoundEvent_360_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__Video_K2Node_ComponentBoundEvent_252_PlayBGSound__DelegateSignature
struct UUserHallWidget_C_BndEvt__Video_K2Node_ComponentBoundEvent_252_PlayBGSound__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__XinShouYinDao_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
struct UUserHallWidget_C_BndEvt__XinShouYinDao_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__XinShouYinDao_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
struct UUserHallWidget_C_BndEvt__XinShouYinDao_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__XinShouYinDao_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UUserHallWidget_C_BndEvt__XinShouYinDao_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__XinShouYinDao_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UUserHallWidget_C_BndEvt__XinShouYinDao_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__CharacterConfig_K2Node_ComponentBoundEvent_3_UpdateSex__DelegateSignature
struct UUserHallWidget_C_BndEvt__CharacterConfig_K2Node_ComponentBoundEvent_3_UpdateSex__DelegateSignature_Params
{
	ESexType                                           sex;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__CharacterConfig_K2Node_ComponentBoundEvent_4_UpdateHead__DelegateSignature
struct UUserHallWidget_C_BndEvt__CharacterConfig_K2Node_ComponentBoundEvent_4_UpdateHead__DelegateSignature_Params
{
	int                                                FaceId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__CharacterConfig_K2Node_ComponentBoundEvent_5_UpdateHair__DelegateSignature
struct UUserHallWidget_C_BndEvt__CharacterConfig_K2Node_ComponentBoundEvent_5_UpdateHair__DelegateSignature_Params
{
	int                                                HairId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__CharacterConfig_K2Node_ComponentBoundEvent_6_UpdateSkinColor__DelegateSignature
struct UUserHallWidget_C_BndEvt__CharacterConfig_K2Node_ComponentBoundEvent_6_UpdateSkinColor__DelegateSignature_Params
{
	int                                                ColorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__CharacterConfig_K2Node_ComponentBoundEvent_7_UpdateHairColor__DelegateSignature
struct UUserHallWidget_C_BndEvt__CharacterConfig_K2Node_ComponentBoundEvent_7_UpdateHairColor__DelegateSignature_Params
{
	int                                                ColorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__Friend_K2Node_ComponentBoundEvent_1_RemindPlayerIsInTeamDispatcher__DelegateSignature
struct UUserHallWidget_C_BndEvt__Friend_K2Node_ComponentBoundEvent_1_RemindPlayerIsInTeamDispatcher__DelegateSignature_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__Friend_K2Node_ComponentBoundEvent_2_SearchFriend__DelegateSignature
struct UUserHallWidget_C_BndEvt__Friend_K2Node_ComponentBoundEvent_2_SearchFriend__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__AddFriendWindow_K2Node_ComponentBoundEvent_3_RequestAddFriend__DelegateSignature
struct UUserHallWidget_C_BndEvt__AddFriendWindow_K2Node_ComponentBoundEvent_3_RequestAddFriend__DelegateSignature_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__UserInputName_K2Node_ComponentBoundEvent_4_CreateCharacterName__DelegateSignature
struct UUserHallWidget_C_BndEvt__UserInputName_K2Node_ComponentBoundEvent_4_CreateCharacterName__DelegateSignature_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_697_SetPlayerCapturePreview__DelegateSignature
struct UUserHallWidget_C_BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_697_SetPlayerCapturePreview__DelegateSignature_Params
{
	EPreviewType                                       Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkinId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_9_SetReConstructCharState__DelegateSignature
struct UUserHallWidget_C_BndEvt__PlayerConfigItemWidget_K2Node_ComponentBoundEvent_9_SetReConstructCharState__DelegateSignature_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_1_UpdateSex__DelegateSignature
struct UUserHallWidget_C_BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_1_UpdateSex__DelegateSignature_Params
{
	ESexType                                           sex;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_2_UpdateHead__DelegateSignature
struct UUserHallWidget_C_BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_2_UpdateHead__DelegateSignature_Params
{
	int                                                FaceId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_3_UpdateHair__DelegateSignature
struct UUserHallWidget_C_BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_3_UpdateHair__DelegateSignature_Params
{
	int                                                HairId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_4_UpdateSkinColor__DelegateSignature
struct UUserHallWidget_C_BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_4_UpdateSkinColor__DelegateSignature_Params
{
	int                                                ColorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_5_UpdateHairColor__DelegateSignature
struct UUserHallWidget_C_BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_5_UpdateHairColor__DelegateSignature_Params
{
	int                                                ColorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.ClearAllEquip
struct UUserHallWidget_C_ClearAllEquip_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_1_SendRemind__DelegateSignature
struct UUserHallWidget_C_BndEvt__ReconstructChar_K2Node_ComponentBoundEvent_1_SendRemind__DelegateSignature_Params
{
	struct FText                                       Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__PlayerConfigItem_K2Node_ComponentBoundEvent_1_EventSellItem__DelegateSignature
struct UUserHallWidget_C_BndEvt__PlayerConfigItem_K2Node_ComponentBoundEvent_1_EventSellItem__DelegateSignature_Params
{
	bool                                               IsItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__Friend_K2Node_ComponentBoundEvent_171_DeleteFriendDispatcher__DelegateSignature
struct UUserHallWidget_C_BndEvt__Friend_K2Node_ComponentBoundEvent_171_DeleteFriendDispatcher__DelegateSignature_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__BP_UserSetting_K2Node_ComponentBoundEvent_25_OnClose__DelegateSignature
struct UUserHallWidget_C_BndEvt__BP_UserSetting_K2Node_ComponentBoundEvent_25_OnClose__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__Douyu_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature
struct UUserHallWidget_C_BndEvt__Douyu_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__Douyu_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature
struct UUserHallWidget_C_BndEvt__Douyu_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__Douyu_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
struct UUserHallWidget_C_BndEvt__Douyu_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__CustomGame_K2Node_ComponentBoundEvent_29_HallRemind__DelegateSignature
struct UUserHallWidget_C_BndEvt__CustomGame_K2Node_ComponentBoundEvent_29_HallRemind__DelegateSignature_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__CustomGame_K2Node_ComponentBoundEvent_30_JoinRoom__DelegateSignature
struct UUserHallWidget_C_BndEvt__CustomGame_K2Node_ComponentBoundEvent_30_JoinRoom__DelegateSignature_Params
{
	struct FUIRoomInfo                                 room;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__BP_RoomInfo_K2Node_ComponentBoundEvent_33_DeleteRoomDispatch__DelegateSignature
struct UUserHallWidget_C_BndEvt__BP_RoomInfo_K2Node_ComponentBoundEvent_33_DeleteRoomDispatch__DelegateSignature_Params
{
	struct FUIRoomInfo                                 room;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__DeleteRoomPop_K2Node_ComponentBoundEvent_36_Delete__DelegateSignature
struct UUserHallWidget_C_BndEvt__DeleteRoomPop_K2Node_ComponentBoundEvent_36_Delete__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__BP_RoomInfo_K2Node_ComponentBoundEvent_37_HallRemind__DelegateSignature
struct UUserHallWidget_C_BndEvt__BP_RoomInfo_K2Node_ComponentBoundEvent_37_HallRemind__DelegateSignature_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__RoomTime_K2Node_ComponentBoundEvent_39_TimeEnd__DelegateSignature
struct UUserHallWidget_C_BndEvt__RoomTime_K2Node_ComponentBoundEvent_39_TimeEnd__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.StartRoomTick
struct UUserHallWidget_C_StartRoomTick_Params
{
};

// Function UserHallWidget.UserHallWidget_C.EndRoomTick
struct UUserHallWidget_C_EndRoomTick_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__RoomTime_K2Node_ComponentBoundEvent_40_MasterQuitTick__DelegateSignature
struct UUserHallWidget_C_BndEvt__RoomTime_K2Node_ComponentBoundEvent_40_MasterQuitTick__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__HomePage_K2Node_ComponentBoundEvent_38_OnClick__DelegateSignature
struct UUserHallWidget_C_BndEvt__HomePage_K2Node_ComponentBoundEvent_38_OnClick__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__StaticsPage_K2Node_ComponentBoundEvent_41_OnClick__DelegateSignature
struct UUserHallWidget_C_BndEvt__StaticsPage_K2Node_ComponentBoundEvent_41_OnClick__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__CharacterPage_K2Node_ComponentBoundEvent_42_OnClick__DelegateSignature
struct UUserHallWidget_C_BndEvt__CharacterPage_K2Node_ComponentBoundEvent_42_OnClick__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__FeatsPage_K2Node_ComponentBoundEvent_43_OnClick__DelegateSignature
struct UUserHallWidget_C_BndEvt__FeatsPage_K2Node_ComponentBoundEvent_43_OnClick__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__CustomGamePage_K2Node_ComponentBoundEvent_44_OnClick__DelegateSignature
struct UUserHallWidget_C_BndEvt__CustomGamePage_K2Node_ComponentBoundEvent_44_OnClick__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__HomePageWidget_K2Node_ComponentBoundEvent_45_HallRemind__DelegateSignature
struct UUserHallWidget_C_BndEvt__HomePageWidget_K2Node_ComponentBoundEvent_45_HallRemind__DelegateSignature_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__HomePageWidget_K2Node_ComponentBoundEvent_46_PopServerMode__DelegateSignature
struct UUserHallWidget_C_BndEvt__HomePageWidget_K2Node_ComponentBoundEvent_46_PopServerMode__DelegateSignature_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__PopServerModeSelect_K2Node_ComponentBoundEvent_47_SelectServerComplete__DelegateSignature
struct UUserHallWidget_C_BndEvt__PopServerModeSelect_K2Node_ComponentBoundEvent_47_SelectServerComplete__DelegateSignature_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__HomePageWidget_K2Node_ComponentBoundEvent_48_PopSortMode__DelegateSignature
struct UUserHallWidget_C_BndEvt__HomePageWidget_K2Node_ComponentBoundEvent_48_PopSortMode__DelegateSignature_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__PopSortModeSelect_K2Node_ComponentBoundEvent_49_SelectTypeComplete__DelegateSignature
struct UUserHallWidget_C_BndEvt__PopSortModeSelect_K2Node_ComponentBoundEvent_49_SelectTypeComplete__DelegateSignature_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__HomePageWidget_K2Node_ComponentBoundEvent_50_CreateRoom__DelegateSignature
struct UUserHallWidget_C_BndEvt__HomePageWidget_K2Node_ComponentBoundEvent_50_CreateRoom__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.BndEvt__HomePageWidget_K2Node_ComponentBoundEvent_51_PreviewRoom__DelegateSignature
struct UUserHallWidget_C_BndEvt__HomePageWidget_K2Node_ComponentBoundEvent_51_PreviewRoom__DelegateSignature_Params
{
};

// Function UserHallWidget.UserHallWidget_C.ExecuteUbergraph_UserHallWidget
struct UUserHallWidget_C_ExecuteUbergraph_UserHallWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserHallWidget.UserHallWidget_C.PlayBGSound__DelegateSignature
struct UUserHallWidget_C_PlayBGSound__DelegateSignature_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
