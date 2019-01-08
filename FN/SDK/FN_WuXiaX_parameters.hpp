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

// Function WuXiaX.AINetMessageHandle.SendPickItemReponse
struct AAINetMessageHandle_SendPickItemReponse_Params
{
};

// Function WuXiaX.AINetMessageHandle.SendPickItem
struct AAINetMessageHandle_SendPickItem_Params
{
};

// Function WuXiaX.AINetMessageHandle.SendAllPickItem
struct AAINetMessageHandle_SendAllPickItem_Params
{
};

// Function WuXiaX.AINetMessageHandle.SendActorInfo
struct AAINetMessageHandle_SendActorInfo_Params
{
};

// Function WuXiaX.AINetMessageHandle.OnItemGetResult
struct AAINetMessageHandle_OnItemGetResult_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.AINetMessageHandle.ConnectServer
struct AAINetMessageHandle_ConnectServer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.AINetMessageHandle.ConnectAIServer
struct AAINetMessageHandle_ConnectAIServer_Params
{
	class AWuXiaXCharacter*                            Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.BagUI.Vertical
struct UBagUI_Vertical_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsDown;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.BagUI.UseHoverItem
struct UBagUI_UseHoverItem_Params
{
};

// Function WuXiaX.BagUI.ShowItemDetail
struct UBagUI_ShowItemDetail_Params
{
	struct FUIItemInfo                                 UIItemInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.BagUI.ShowBagUI
struct UBagUI_ShowBagUI_Params
{
};

// Function WuXiaX.BagUI.SetWeight
struct UBagUI_SetWeight_Params
{
	struct FString                                     maxweight;                                                // (Parm, ZeroConstructor)
	struct FString                                     Weight;                                                   // (Parm, ZeroConstructor)
};

// Function WuXiaX.BagUI.SetSplitItemButton
struct UBagUI_SetSplitItemButton_Params
{
	bool                                               isbottondown;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.BagUI.SetPlayerName
struct UBagUI_SetPlayerName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function WuXiaX.BagUI.SetItemHotKey
struct UBagUI_SetItemHotKey_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.BagUI.SetItem
struct UBagUI_SetItem_Params
{
	EBagType                                           bagtype;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                itemtype;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  dragicon;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.BagUI.SetDurableValue
struct UBagUI_SetDurableValue_Params
{
	EBagType                                           bag_type;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                armor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.BagUI.SetDragItemInfo
struct UBagUI_SetDragItemInfo_Params
{
	int                                                itemnumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                pickid;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.BagUI.SelectHoverItem
struct UBagUI_SelectHoverItem_Params
{
};

// Function WuXiaX.BagUI.RemoveItem
struct UBagUI_RemoveItem_Params
{
	EBagType                                           bagtype;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.BagUI.ReLoadConfigShow
struct UBagUI_ReLoadConfigShow_Params
{
};

// Function WuXiaX.BagUI.NextLabel
struct UBagUI_NextLabel_Params
{
};

// Function WuXiaX.BagUI.MarkHoverItem
struct UBagUI_MarkHoverItem_Params
{
	EGamepadMarkType                                   MarkType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.BagUI.LastLabel
struct UBagUI_LastLabel_Params
{
};

// Function WuXiaX.BagUI.Init
struct UBagUI_Init_Params
{
};

// Function WuXiaX.BagUI.Horizontal
struct UBagUI_Horizontal_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsRight;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.BagUI.HideBagUI
struct UBagUI_HideBagUI_Params
{
};

// Function WuXiaX.BagUI.GetTypeByBagIndex
struct UBagUI_GetTypeByBagIndex_Params
{
	EBagType                                           bag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.BagUI.GetLocalCharacter
struct UBagUI_GetLocalCharacter_Params
{
	class AWuXiaXCharacter*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.BagUI.GetCharacterShowState
struct UBagUI_GetCharacterShowState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.BagUI.GamepadIntoWidget
struct UBagUI_GamepadIntoWidget_Params
{
};

// Function WuXiaX.BagUI.EndKeepAction
struct UBagUI_EndKeepAction_Params
{
};

// Function WuXiaX.BagUI.DropHoverItem
struct UBagUI_DropHoverItem_Params
{
};

// Function WuXiaX.BagUI.ClearItemHotKey
struct UBagUI_ClearItemHotKey_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.BagUI.ClearInventory
struct UBagUI_ClearInventory_Params
{
};

// Function WuXiaX.BuffPoint.OnOverlapEnd
struct ABuffPoint_OnOverlapEnd_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.BuffPoint.OnOverlapBegin
struct ABuffPoint_OnOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WuXiaX.BuffPoint.OnBuffIdUpdate
struct ABuffPoint_OnBuffIdUpdate_Params
{
};

// Function WuXiaX.BuffPoint.Client_OnBuffIdUpdate
struct ABuffPoint_Client_OnBuffIdUpdate_Params
{
	int                                                showid;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.CharacterConfigUI.InitData
struct UCharacterConfigUI_InitData_Params
{
};

// Function WuXiaX.CharacterConfigUI.CreateModel
struct UCharacterConfigUI_CreateModel_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	ESexType                                           sex_type;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	EModelType                                         model_type;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTexture2D*                                  normal_texture;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.CharacterConfigUI.CreateColor
struct UCharacterConfigUI_CreateColor_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EModelType                                         Type;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WuXiaX.CheckSoundActor.UpdateLocation
struct ACheckSoundActor_UpdateLocation_Params
{
	struct FVector                                     new_location;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.CheckSoundActor.Init
struct ACheckSoundActor_Init_Params
{
	int                                                player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.CircleSliderUI.GetCrossPoint
struct UCircleSliderUI_GetCrossPoint_Params
{
	struct FVector                                     circle_pos;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     line_start;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     line_end;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUDBase.SetInteractiveType
struct AWuXiaXHUDBase_SetInteractiveType_Params
{
	EWidgetInteractiveType                             Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUDBase.ReUMGEffect
struct AWuXiaXHUDBase_ReUMGEffect_Params
{
};

// Function WuXiaX.WuXiaXHUDBase.CheckResetFocus
struct AWuXiaXHUDBase_CheckResetFocus_Params
{
};

// Function WuXiaX.WuXiaXHUDBase.CheckFullScreenToWindowFullScreen
struct AWuXiaXHUDBase_CheckFullScreenToWindowFullScreen_Params
{
};

// Function WuXiaX.WuXiaXHUDBase.CanUseInteractive
struct AWuXiaXHUDBase_CanUseInteractive_Params
{
	EWidgetInteractiveType                             Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.ClientLoginHUD.ShowSorting
struct AClientLoginHUD_ShowSorting_Params
{
};

// Function WuXiaX.ClientLoginHUD.ShowReconnect
struct AClientLoginHUD_ShowReconnect_Params
{
};

// Function WuXiaX.ClientLoginHUD.ShowLogoUI
struct AClientLoginHUD_ShowLogoUI_Params
{
};

// Function WuXiaX.ClientLoginHUD.ShowLoginUI
struct AClientLoginHUD_ShowLoginUI_Params
{
};

// Function WuXiaX.ClientLoginHUD.ShowHallWidget
struct AClientLoginHUD_ShowHallWidget_Params
{
	struct FString                                     player_name;                                              // (Parm, ZeroConstructor)
};

// Function WuXiaX.ClientLoginHUD.ReadyGame
struct AClientLoginHUD_ReadyGame_Params
{
};

// Function WuXiaX.ClientLoginHUD.LoginResponse
struct AClientLoginHUD_LoginResponse_Params
{
	ELoginResponseType                                 login_state;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     player_name;                                              // (Parm, ZeroConstructor)
};

// Function WuXiaX.ClientLoginHUD.HideSorting
struct AClientLoginHUD_HideSorting_Params
{
};

// Function WuXiaX.ClientLoginHUD.HideReconnect
struct AClientLoginHUD_HideReconnect_Params
{
};

// Function WuXiaX.ClientLoginHUD.HideLogoUI
struct AClientLoginHUD_HideLogoUI_Params
{
};

// Function WuXiaX.ClientLoginHUD.HideLoginUI
struct AClientLoginHUD_HideLoginUI_Params
{
};

// Function WuXiaX.ClientLoginHUD.CreateMainLoginUI
struct AClientLoginHUD_CreateMainLoginUI_Params
{
};

// Function WuXiaX.ClientLoginHUD.CreateHallSkin
struct AClientLoginHUD_CreateHallSkin_Params
{
	int                                                skin_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.ClientLoginHUD.CreateHallItem
struct AClientLoginHUD_CreateHallItem_Params
{
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.ClientLoginHUD.AutoLogin
struct AClientLoginHUD_AutoLogin_Params
{
};

// Function WuXiaX.ClientLoginPawn.SetVoiceMode
struct AClientLoginPawn_SetVoiceMode_Params
{
	int                                                Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.ClientLoginPawn.SetAlwaysTalk
struct AClientLoginPawn_SetAlwaysTalk_Params
{
	bool                                               isalways;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.ClientLoginPawn.MuteLocalAudio
struct AClientLoginPawn_MuteLocalAudio_Params
{
	bool                                               bMuted;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.ClientNetMessageHandle.StartTick
struct AClientNetMessageHandle_StartTick_Params
{
	struct FUIRoomInfo                                 room;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.ClientNetMessageHandle.StartGame
struct AClientNetMessageHandle_StartGame_Params
{
	struct FUIRoomInfo                                 room;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.ClientNetMessageHandle.SetOnlineState
struct AClientNetMessageHandle_SetOnlineState_Params
{
	int                                                State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.ClientNetMessageHandle.SendTeamInviteResponse
struct AClientNetMessageHandle_SendTeamInviteResponse_Params
{
	int                                                send_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.ClientNetMessageHandle.SendTeamInvite
struct AClientNetMessageHandle_SendTeamInvite_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function WuXiaX.ClientNetMessageHandle.SendTeamDataRequest
struct AClientNetMessageHandle_SendTeamDataRequest_Params
{
};

// Function WuXiaX.ClientNetMessageHandle.SendReconstructCharacterCreateInfo
struct AClientNetMessageHandle_SendReconstructCharacterCreateInfo_Params
{
	struct FString                                     user_name;                                                // (Parm, ZeroConstructor)
	int                                                user_hair;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                user_face;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESexType                                           user_sex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                user_skin;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                user_hairco;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.ClientNetMessageHandle.SendReconnect
struct AClientNetMessageHandle_SendReconnect_Params
{
};

// Function WuXiaX.ClientNetMessageHandle.SendQuitTeamRequest
struct AClientNetMessageHandle_SendQuitTeamRequest_Params
{
};

// Function WuXiaX.ClientNetMessageHandle.SendPlayerName
struct AClientNetMessageHandle_SendPlayerName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function WuXiaX.ClientNetMessageHandle.SendMoneyRequest
struct AClientNetMessageHandle_SendMoneyRequest_Params
{
};

// Function WuXiaX.ClientNetMessageHandle.SendLoginMsg
struct AClientNetMessageHandle_SendLoginMsg_Params
{
	struct FString                                     user_name;                                                // (Parm, ZeroConstructor)
	struct FString                                     PassWord;                                                 // (Parm, ZeroConstructor)
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.ClientNetMessageHandle.SendLineUp
struct AClientNetMessageHandle_SendLineUp_Params
{
	int                                                line_mode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                server_mode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                play_mode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.ClientNetMessageHandle.SendItemRequest
struct AClientNetMessageHandle_SendItemRequest_Params
{
};

// Function WuXiaX.ClientNetMessageHandle.SendGoodsItemRequest
struct AClientNetMessageHandle_SendGoodsItemRequest_Params
{
};

// Function WuXiaX.ClientNetMessageHandle.SendFriendRequest
struct AClientNetMessageHandle_SendFriendRequest_Params
{
};

// Function WuXiaX.ClientNetMessageHandle.SendFriendInviteResponse
struct AClientNetMessageHandle_SendFriendInviteResponse_Params
{
	int                                                send_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.ClientNetMessageHandle.SendFriendInvite
struct AClientNetMessageHandle_SendFriendInvite_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function WuXiaX.ClientNetMessageHandle.SendEquipChange
struct AClientNetMessageHandle_SendEquipChange_Params
{
	int                                                origin_item_id;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                new_item_id;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.ClientNetMessageHandle.SendCoinRequest
struct AClientNetMessageHandle_SendCoinRequest_Params
{
};

// Function WuXiaX.ClientNetMessageHandle.SendCharacterCreateInfo
struct AClientNetMessageHandle_SendCharacterCreateInfo_Params
{
	struct FString                                     user_name;                                                // (Parm, ZeroConstructor)
	int                                                user_hair;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                user_face;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESexType                                           user_sex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                user_skin;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                user_hairco;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.ClientNetMessageHandle.SendCancelLineUp
struct AClientNetMessageHandle_SendCancelLineUp_Params
{
};

// Function WuXiaX.ClientNetMessageHandle.SellItem
struct AClientNetMessageHandle_SellItem_Params
{
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.ClientNetMessageHandle.RequestRankInfo
struct AClientNetMessageHandle_RequestRankInfo_Params
{
	int                                                sort_type;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                rank_type;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                server_type;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.ClientNetMessageHandle.RequestPlayerRankInfo
struct AClientNetMessageHandle_RequestPlayerRankInfo_Params
{
	int                                                player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                sort_type;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                server_type;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.ClientNetMessageHandle.RefreshPlatformGoodsItem
struct AClientNetMessageHandle_RefreshPlatformGoodsItem_Params
{
};

// Function WuXiaX.ClientNetMessageHandle.QuitTick
struct AClientNetMessageHandle_QuitTick_Params
{
	struct FUIRoomInfo                                 room;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.ClientNetMessageHandle.Port
struct AClientNetMessageHandle_Port_Params
{
	int                                                Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.ClientNetMessageHandle.PlayerReconnectOB
struct AClientNetMessageHandle_PlayerReconnectOB_Params
{
	bool                                               ok;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.ClientNetMessageHandle.PlayerLeaveRoom
struct AClientNetMessageHandle_PlayerLeaveRoom_Params
{
	ELeaveRoomType                                     Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUIRoomInfo                                 room;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.ClientNetMessageHandle.PingCallBack
struct AClientNetMessageHandle_PingCallBack_Params
{
};

// Function WuXiaX.ClientNetMessageHandle.OpenBox
struct AClientNetMessageHandle_OpenBox_Params
{
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.ClientNetMessageHandle.JoinRoom
struct AClientNetMessageHandle_JoinRoom_Params
{
	struct FUIRoomInfo                                 room;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     PassWord;                                                 // (Parm, ZeroConstructor)
};

// Function WuXiaX.ClientNetMessageHandle.JiHuoMa
struct AClientNetMessageHandle_JiHuoMa_Params
{
	struct FString                                     ma;                                                       // (Parm, ZeroConstructor)
};

// Function WuXiaX.ClientNetMessageHandle.Ip
struct AClientNetMessageHandle_Ip_Params
{
	struct FString                                     Val;                                                      // (Parm, ZeroConstructor)
};

// Function WuXiaX.ClientNetMessageHandle.GetRooms
struct AClientNetMessageHandle_GetRooms_Params
{
	int                                                room_type;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Tile;                                                     // (Parm, ZeroConstructor)
	int                                                play_mode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                server_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                min_player_num;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                max_player_num;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.ClientNetMessageHandle.GetPage
struct AClientNetMessageHandle_GetPage_Params
{
	int                                                page;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.ClientNetMessageHandle.DeleteRoom
struct AClientNetMessageHandle_DeleteRoom_Params
{
	struct FUIRoomInfo                                 room;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.ClientNetMessageHandle.DeleteFriend
struct AClientNetMessageHandle_DeleteFriend_Params
{
	int                                                player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.ClientNetMessageHandle.CurrentServerChange
struct AClientNetMessageHandle_CurrentServerChange_Params
{
};

// Function WuXiaX.ClientNetMessageHandle.CreateRoom
struct AClientNetMessageHandle_CreateRoom_Params
{
	int                                                play_mode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                map_id;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     room_tile;                                                // (Parm, ZeroConstructor)
	struct FString                                     PassWord;                                                 // (Parm, ZeroConstructor)
	int                                                max_player_num;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                team_player_num;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                max_watch_num;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                preset_mode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                server_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               add_flag;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.ClientNetMessageHandle.CreateNewConnect
struct AClientNetMessageHandle_CreateNewConnect_Params
{
};

// Function WuXiaX.ClientNetMessageHandle.ClientCheckMsg
struct AClientNetMessageHandle_ClientCheckMsg_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.ClientNetMessageHandle.ChangeShowSkinIndex
struct AClientNetMessageHandle_ChangeShowSkinIndex_Params
{
	TArray<int>                                        Types;                                                    // (Parm, ZeroConstructor)
};

// Function WuXiaX.ClientNetMessageHandle.ChangePlayerRole
struct AClientNetMessageHandle_ChangePlayerRole_Params
{
	int                                                player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ERoleType                                          new_type;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                team_index;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUIRoomInfo                                 room;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.ClientNetMessageHandle.ChangeEquipSkin
struct AClientNetMessageHandle_ChangeEquipSkin_Params
{
	int                                                skin_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.ClientNetMessageHandle.CanLineUp
struct AClientNetMessageHandle_CanLineUp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.ClientNetMessageHandle.CancelLogin
struct AClientNetMessageHandle_CancelLogin_Params
{
};

// Function WuXiaX.ClientNetMessageHandle.BuyKey
struct AClientNetMessageHandle_BuyKey_Params
{
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.ClientNetMessageHandle.BuyItem
struct AClientNetMessageHandle_BuyItem_Params
{
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.ComponentMiddle.State_GetPlayerMotionState
struct UComponentMiddle_State_GetPlayerMotionState_Params
{
	EPlayerMotionState                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.ComponentMiddle.State_GetPlayerMainState
struct UComponentMiddle_State_GetPlayerMainState_Params
{
	EPlayerGameState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.ComponentMiddle.State_ChangePlayerState
struct UComponentMiddle_State_ChangePlayerState_Params
{
	EPlayerGameState                                   Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.ComponentMiddle.State_ChangePlayerMotionState
struct UComponentMiddle_State_ChangePlayerMotionState_Params
{
	EPlayerMotionState                                 Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.ComponentMiddle.State_ChangePlayerChildState
struct UComponentMiddle_State_ChangePlayerChildState_Params
{
	EPlayerFightState                                  Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.ComponentMiddle.Property_ReSetDyingHp
struct UComponentMiddle_Property_ReSetDyingHp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.ComponentMiddle.Property_ChangeSaveChangeValue
struct UComponentMiddle_Property_ChangeSaveChangeValue_Params
{
	bool                                               isadd;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EPropertyChangeReason                              reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.ComponentMiddle.Move_SwitchMovementModeEvent
struct UComponentMiddle_Move_SwitchMovementModeEvent_Params
{
	TEnumAsByte<EMovementMode>                         Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.ConfigEnvironmentActor.GetSoundVolume
struct AConfigEnvironmentActor_GetSoundVolume_Params
{
	struct FString                                     float_value_name;                                         // (ConstParm, Parm, ZeroConstructor)
	struct FString                                     bool_value_name;                                          // (ConstParm, Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.ConfigEnvironmentActor.EffectSoundVolume
struct AConfigEnvironmentActor_EffectSoundVolume_Params
{
};

// Function WuXiaX.CreateMapUI.GetMapsByPlayMode
struct UCreateMapUI_GetMapsByPlayMode_Params
{
	int                                                play_mode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.CreateMapUI.GetMapInfo
struct UCreateMapUI_GetMapInfo_Params
{
	int                                                map_id;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, OutParm, ZeroConstructor)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.CustomGameUI.SortRoomChild
struct UCustomGameUI_SortRoomChild_Params
{
	TArray<class URoomChildUI*>                        roominfos;                                                // (Parm, ZeroConstructor)
	TArray<class URoomChildUI*>                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.CustomGameUI.GetValidPassword
struct UCustomGameUI_GetValidPassword_Params
{
	struct FString                                     old_pwd;                                                  // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.CustomGameUI.CreateRoomInfos
struct UCustomGameUI_CreateRoomInfos_Params
{
	TArray<struct FUIRoomInfo>                         roominfos;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.DamageCircleActor.Start
struct ADamageCircleActor_Start_Params
{
};

// Function WuXiaX.DamageCircleActor.Client_StartLastCircle
struct ADamageCircleActor_Client_StartLastCircle_Params
{
};

// Function WuXiaX.DamageCircleActor.CheckActorIsLandscape
struct ADamageCircleActor_CheckActorIsLandscape_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.FakeCharacter.UpdateMesh
struct AFakeCharacter_UpdateMesh_Params
{
};

// Function WuXiaX.FakeCharacter.LoadComplete
struct AFakeCharacter_LoadComplete_Params
{
};

// Function WuXiaX.HorseRideComponent.Server_SetLastRotation
struct UHorseRideComponent_Server_SetLastRotation_Params
{
	struct FRotator                                    lastrotation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.HorseRideComponent.Server_Ride
struct UHorseRideComponent_Server_Ride_Params
{
	int                                                horse_net_id;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.HorseRideComponent.Server_InputRight
struct UHorseRideComponent_Server_InputRight_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.HorseRideComponent.Ride_state_net
struct UHorseRideComponent_Ride_state_net_Params
{
	EPlayerRideStateType                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.HorseRideComponent.Ride_horse_net
struct UHorseRideComponent_Ride_horse_net_Params
{
	class AWuXiaXHorse*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.HorseRideComponent.OnRedRideStateOther
struct UHorseRideComponent_OnRedRideStateOther_Params
{
};

// Function WuXiaX.HorseRideComponent.OnRedRideState
struct UHorseRideComponent_OnRedRideState_Params
{
};

// Function WuXiaX.HorseRideComponent.OnRedHorseOther
struct UHorseRideComponent_OnRedHorseOther_Params
{
};

// Function WuXiaX.HorseRideComponent.OnRedHorse
struct UHorseRideComponent_OnRedHorse_Params
{
};

// Function WuXiaX.HorseRideComponent.GetRotationSpeed
struct UHorseRideComponent_GetRotationSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.HorseRideComponent.Client_Ride_Rotation
struct UHorseRideComponent_Client_Ride_Rotation_Params
{
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.InteractiveInterface.InteractiveUITips
struct UInteractiveInterface_InteractiveUITips_Params
{
	class AWuXiaXCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.InteractiveInterface.GetInteractiveType
struct UInteractiveInterface_GetInteractiveType_Params
{
	class AWuXiaXCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EInteractiveType                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.InteractiveInterface.CanInteractive
struct UInteractiveInterface_CanInteractive_Params
{
	class AWuXiaXCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	ETriggerInteractiveType                            Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.KeepActionUI.SetKeepAction
struct UKeepActionUI_SetKeepAction_Params
{
	float                                              CurrentTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.KeepActionUI.Init
struct UKeepActionUI_Init_Params
{
};

// Function WuXiaX.KeepActionUI.EndKeepAction
struct UKeepActionUI_EndKeepAction_Params
{
};

// Function WuXiaX.KeepActionUI.BeginKeepAction
struct UKeepActionUI_BeginKeepAction_Params
{
	float                                              actiontime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.LoadAssetManager.LoadAsset
struct ULoadAssetManager_LoadAsset_Params
{
	struct FSoftObjectPath                             AssetName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Component;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.LoadAssetManager.AsyncLoadAsset
struct ULoadAssetManager_AsyncLoadAsset_Params
{
	struct FSoftObjectPath                             AssetName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Component;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.LoadingUI.SetPercent
struct ULoadingUI_SetPercent_Params
{
	float                                              percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.LoadInterface.LoadComplete
struct ULoadInterface_LoadComplete_Params
{
	class UObject*                                     Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSoftObjectPath                             asset_ref;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.LoadProgressManager.LoadLevelComplete
struct ALoadProgressManager_LoadLevelComplete_Params
{
};

// Function WuXiaX.LoadProgressManager.GamingLoadLevelComplete
struct ALoadProgressManager_GamingLoadLevelComplete_Params
{
};

// Function WuXiaX.MainGameUI.ZeroTextState
struct UMainGameUI_ZeroTextState_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.UpdateWeaponStateEffect
struct UMainGameUI_UpdateWeaponStateEffect_Params
{
	int                                                weaponindex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  effecticon;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.UpdateTeamPlayerState
struct UMainGameUI_UpdateTeamPlayerState_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	ETeamPlayerState                                   new_state;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.UpdateTeamPlayerHPPercent
struct UMainGameUI_UpdateTeamPlayerHPPercent_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.UpdateTeamPlayerDyingHPPercent
struct UMainGameUI_UpdateTeamPlayerDyingHPPercent_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.UpdateSoundLocation
struct UMainGameUI_UpdateSoundLocation_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.UpdateSatiety
struct UMainGameUI_UpdateSatiety_Params
{
	float                                              satietyvalue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.UpdatePlayerState
struct UMainGameUI_UpdatePlayerState_Params
{
	EPlayerGameState                                   new_state;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.UpdatePlayerRotator
struct UMainGameUI_UpdatePlayerRotator_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.UpdatePlayerMark3DLocation
struct UMainGameUI_UpdatePlayerMark3DLocation_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.UpdatePlayerLocation
struct UMainGameUI_UpdatePlayerLocation_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.UpdateOxygen
struct UMainGameUI_UpdateOxygen_Params
{
	float                                              oxygen;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.UpdateMp
struct UMainGameUI_UpdateMp_Params
{
	float                                              currentMP;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              currentmaxMP;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              maxMP;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.UpdateMoisture
struct UMainGameUI_UpdateMoisture_Params
{
	float                                              moisture;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.UpdateLiveData
struct UMainGameUI_UpdateLiveData_Params
{
	int                                                LIVE;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.UpdateKiteSpeed
struct UMainGameUI_UpdateKiteSpeed_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.UpdateKillData
struct UMainGameUI_UpdateKillData_Params
{
	int                                                kill;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.UpdateItemNumber
struct UMainGameUI_UpdateItemNumber_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.UpdateInjury
struct UMainGameUI_UpdateInjury_Params
{
	float                                              injury;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.UpdateHorseSpeed
struct UMainGameUI_UpdateHorseSpeed_Params
{
	float                                              current_speed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              max_speed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.UpdateHorsePower
struct UMainGameUI_UpdateHorsePower_Params
{
	float                                              current_power;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              max_power;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.UpdateFightHp
struct UMainGameUI_UpdateFightHp_Params
{
	float                                              currentHP;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              maxHP;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.UpdateDyingHp
struct UMainGameUI_UpdateDyingHp_Params
{
	float                                              currentHP;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              maxHP;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.UpdateDrugValue
struct UMainGameUI_UpdateDrugValue_Params
{
	float                                              drugvalue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.UpdateCompass
struct UMainGameUI_UpdateCompass_Params
{
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.UpdateCheckSoundCD
struct UMainGameUI_UpdateCheckSoundCD_Params
{
	float                                              current_cd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              max_cd;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.ShowWarning
struct UMainGameUI_ShowWarning_Params
{
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
};

// Function WuXiaX.MainGameUI.ShowOxygen
struct UMainGameUI_ShowOxygen_Params
{
};

// Function WuXiaX.MainGameUI.ShowMainInterfaceUI
struct UMainGameUI_ShowMainInterfaceUI_Params
{
};

// Function WuXiaX.MainGameUI.ShowInteractive
struct UMainGameUI_ShowInteractive_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.MainGameUI.ShowDamageCircle
struct UMainGameUI_ShowDamageCircle_Params
{
};

// Function WuXiaX.MainGameUI.ShowCrossHair
struct UMainGameUI_ShowCrossHair_Params
{
};

// Function WuXiaX.MainGameUI.ShowCheckSoundLocation
struct UMainGameUI_ShowCheckSoundLocation_Params
{
	int                                                Ids;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.SetZeroTimer
struct UMainGameUI_SetZeroTimer_Params
{
	int                                                Timer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.SetWeaponState
struct UMainGameUI_SetWeaponState_Params
{
	int                                                weaponindex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  effecticon;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  weaponicon;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.SetTeamPlayerShowMode
struct UMainGameUI_SetTeamPlayerShowMode_Params
{
	int                                                teammode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.SetSplitItemButton
struct UMainGameUI_SetSplitItemButton_Params
{
	bool                                               isbottondown;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.SetSkillHotKey
struct UMainGameUI_SetSkillHotKey_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                skill_id;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              skillcd;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canuse;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.SetSkillCurrentCD
struct UMainGameUI_SetSkillCurrentCD_Params
{
	int                                                skill_id;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              skillcd;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.SetMainInterfaceState
struct UMainGameUI_SetMainInterfaceState_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.SetLifeInfoState
struct UMainGameUI_SetLifeInfoState_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.SetKiteState
struct UMainGameUI_SetKiteState_Params
{
	bool                                               new_state;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.SetKeepActionTime
struct UMainGameUI_SetKeepActionTime_Params
{
	float                                              current_time;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.SetItemHotKey
struct UMainGameUI_SetItemHotKey_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.SetHorseState
struct UMainGameUI_SetHorseState_Params
{
	bool                                               new_state;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.SetGeneralState
struct UMainGameUI_SetGeneralState_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.SetGeneralInfo
struct UMainGameUI_SetGeneralInfo_Params
{
	class UTexture2D*                                  icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              max_cd;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.SetDamageCircleWaitingTime
struct UMainGameUI_SetDamageCircleWaitingTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.SetDamageCircleState
struct UMainGameUI_SetDamageCircleState_Params
{
	EDamageCircleState                                 State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.SetDamageCircleShringkingTime
struct UMainGameUI_SetDamageCircleShringkingTime_Params
{
	float                                              CurrentTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              alltime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.SetCheckSoundSkillState
struct UMainGameUI_SetCheckSoundSkillState_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.SetBuff
struct UMainGameUI_SetBuff_Params
{
	int                                                buffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                numberoflayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.ResetLanguage
struct UMainGameUI_ResetLanguage_Params
{
};

// Function WuXiaX.MainGameUI.RemoveWeaponState
struct UMainGameUI_RemoveWeaponState_Params
{
	int                                                weaponindex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.RemoveSound
struct UMainGameUI_RemoveSound_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.RemoveBuff
struct UMainGameUI_RemoveBuff_Params
{
	int                                                buffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.ReLoadConfigShow
struct UMainGameUI_ReLoadConfigShow_Params
{
};

// Function WuXiaX.MainGameUI.PlayerUnLockToOther
struct UMainGameUI_PlayerUnLockToOther_Params
{
};

// Function WuXiaX.MainGameUI.PlayerTalk
struct UMainGameUI_PlayerTalk_Params
{
	int                                                player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.PlayerLockToOther
struct UMainGameUI_PlayerLockToOther_Params
{
};

// Function WuXiaX.MainGameUI.PickUpOverWeight
struct UMainGameUI_PickUpOverWeight_Params
{
};

// Function WuXiaX.MainGameUI.PickGetItem
struct UMainGameUI_PickGetItem_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               learned;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.MissileHitTarget
struct UMainGameUI_MissileHitTarget_Params
{
};

// Function WuXiaX.MainGameUI.IsInitTeamPlayer
struct UMainGameUI_IsInitTeamPlayer_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.InitTeamPlayer
struct UMainGameUI_InitTeamPlayer_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                teammode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.InitCheckSoundSkill
struct UMainGameUI_InitCheckSoundSkill_Params
{
	int                                                skill_id;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              max_cd;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.InitCheckSound
struct UMainGameUI_InitCheckSound_Params
{
};

// Function WuXiaX.MainGameUI.Init
struct UMainGameUI_Init_Params
{
};

// Function WuXiaX.MainGameUI.HideOxygen
struct UMainGameUI_HideOxygen_Params
{
};

// Function WuXiaX.MainGameUI.HideMainInterfaceUI
struct UMainGameUI_HideMainInterfaceUI_Params
{
};

// Function WuXiaX.MainGameUI.HideInteractive
struct UMainGameUI_HideInteractive_Params
{
};

// Function WuXiaX.MainGameUI.HideDamageCircle
struct UMainGameUI_HideDamageCircle_Params
{
};

// Function WuXiaX.MainGameUI.HideCrossHair
struct UMainGameUI_HideCrossHair_Params
{
};

// Function WuXiaX.MainGameUI.GetWeaponShowState
struct UMainGameUI_GetWeaponShowState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.GetSlotItemInfo
struct UMainGameUI_GetSlotItemInfo_Params
{
	EBagType                                           bagtype;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUIItemInfo                                 slotiteminfo;                                             // (Parm, OutParm)
};

// Function WuXiaX.MainGameUI.GetPostColorType
struct UMainGameUI_GetPostColorType_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.GetLocalCharacter
struct UMainGameUI_GetLocalCharacter_Params
{
	class AWuXiaXCharacter*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.GetDressShowState
struct UMainGameUI_GetDressShowState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.EndKeepAction
struct UMainGameUI_EndKeepAction_Params
{
};

// Function WuXiaX.MainGameUI.DeleteTeamPlayerMarkState
struct UMainGameUI_DeleteTeamPlayerMarkState_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.ClearTeamPlayerName
struct UMainGameUI_ClearTeamPlayerName_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.ClearSkillHotKey
struct UMainGameUI_ClearSkillHotKey_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.ClearItemHotKey
struct UMainGameUI_ClearItemHotKey_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.ClearBuffs
struct UMainGameUI_ClearBuffs_Params
{
};

// Function WuXiaX.MainGameUI.ChangeCurrentWeapon
struct UMainGameUI_ChangeCurrentWeapon_Params
{
	int                                                weaponindex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.CanNotShooter
struct UMainGameUI_CanNotShooter_Params
{
};

// Function WuXiaX.MainGameUI.CanNotEquipItem
struct UMainGameUI_CanNotEquipItem_Params
{
};

// Function WuXiaX.MainGameUI.BeginKeepAction
struct UMainGameUI_BeginKeepAction_Params
{
	float                                              actiontime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.AppendKillInfo
struct UMainGameUI_AppendKillInfo_Params
{
	struct FString                                     attack_player_name;                                       // (Parm, ZeroConstructor)
	struct FString                                     dead_player_name;                                         // (Parm, ZeroConstructor)
	int                                                cause_id;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	ECauseDyingType                                    reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainGameUI.AppendGongGao
struct UMainGameUI_AppendGongGao_Params
{
	EGongGaoType                                       Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.MainGameUI.ActiveComplain
struct UMainGameUI_ActiveComplain_Params
{
};

// Function WuXiaX.MainLoginUI.UpdateVersion
struct UMainLoginUI_UpdateVersion_Params
{
};

// Function WuXiaX.MainLoginUI.UpdateUserMoney
struct UMainLoginUI_UpdateUserMoney_Params
{
	int                                                money;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.UpdateRoomPlayer
struct UMainLoginUI_UpdateRoomPlayer_Params
{
	struct FRoomUser                                   user;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.MainLoginUI.TeamPlayerTalk
struct UMainLoginUI_TeamPlayerTalk_Params
{
	int                                                player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.TeamPlayerRoomStateChange
struct UMainLoginUI_TeamPlayerRoomStateChange_Params
{
	int                                                player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.TeamPlayerEquipChange
struct UMainLoginUI_TeamPlayerEquipChange_Params
{
	int                                                old_item_id;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                new_item_id;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                user_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.TeamChangeLook
struct UMainLoginUI_TeamChangeLook_Params
{
	int                                                player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESexType                                           sex;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                user_face;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                skin_color;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                user_hair;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                user_haircolor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.StartRoomTick
struct UMainLoginUI_StartRoomTick_Params
{
};

// Function WuXiaX.MainLoginUI.SoldItemComplete
struct UMainLoginUI_SoldItemComplete_Params
{
};

// Function WuXiaX.MainLoginUI.ShowLoginWidget
struct UMainLoginUI_ShowLoginWidget_Params
{
};

// Function WuXiaX.MainLoginUI.ShowInputName
struct UMainLoginUI_ShowInputName_Params
{
};

// Function WuXiaX.MainLoginUI.ShowCreateCharacter
struct UMainLoginUI_ShowCreateCharacter_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function WuXiaX.MainLoginUI.SetUserRank
struct UMainLoginUI_SetUserRank_Params
{
	struct FWuXiaX_FUserRank                           rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.SetTeamMode
struct UMainLoginUI_SetTeamMode_Params
{
	int                                                Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.SetSkinSelectId
struct UMainLoginUI_SetSkinSelectId_Params
{
	int                                                skin_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon_texture;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.SetServerMode
struct UMainLoginUI_SetServerMode_Params
{
	int                                                server_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.SetPreviewSkin
struct UMainLoginUI_SetPreviewSkin_Params
{
	int                                                player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EPreviewType                                       Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                skin_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.SetPlayModeState
struct UMainLoginUI_SetPlayModeState_Params
{
	int                                                Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.SetPlayModeEndTime
struct UMainLoginUI_SetPlayModeEndTime_Params
{
	int                                                Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                days;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Hours;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Minutes;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               is_start;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.SetPlayMode
struct UMainLoginUI_SetPlayMode_Params
{
	int                                                Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.SetPLayerLoginState
struct UMainLoginUI_SetPLayerLoginState_Params
{
	int                                                user_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                login_state;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.SetPingTaiLogin
struct UMainLoginUI_SetPingTaiLogin_Params
{
	struct FString                                     user_name;                                                // (Parm, ZeroConstructor)
	struct FString                                     PassWord;                                                 // (Parm, ZeroConstructor)
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   showCancle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.SetPageNum
struct UMainLoginUI_SetPageNum_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.SetOnlineType
struct UMainLoginUI_SetOnlineType_Params
{
	int                                                online_type;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.SetMaxPage
struct UMainLoginUI_SetMaxPage_Params
{
	int                                                page;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.SetLeaveTeamButtonValid
struct UMainLoginUI_SetLeaveTeamButtonValid_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.SetIsMasterMode
struct UMainLoginUI_SetIsMasterMode_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.SetFriendYSState
struct UMainLoginUI_SetFriendYSState_Params
{
	int                                                user_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                login_state;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.SetFriendInfo
struct UMainLoginUI_SetFriendInfo_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                login_state;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ys_state;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.SaveUserName
struct UMainLoginUI_SaveUserName_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function WuXiaX.MainLoginUI.SavePassWord
struct UMainLoginUI_SavePassWord_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function WuXiaX.MainLoginUI.ResetVicRank
struct UMainLoginUI_ResetVicRank_Params
{
	TArray<struct FVictoryRank>                        vic_rank;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.MainLoginUI.ResetTotalRank
struct UMainLoginUI_ResetTotalRank_Params
{
	TArray<struct FTotalRank>                          total_rank;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.MainLoginUI.ResetServerListLanguageInfo
struct UMainLoginUI_ResetServerListLanguageInfo_Params
{
};

// Function WuXiaX.MainLoginUI.ResetHallItemLanguageInfo
struct UMainLoginUI_ResetHallItemLanguageInfo_Params
{
};

// Function WuXiaX.MainLoginUI.ResetGoodsLanguage
struct UMainLoginUI_ResetGoodsLanguage_Params
{
};

// Function WuXiaX.MainLoginUI.ResetFightRank
struct UMainLoginUI_ResetFightRank_Params
{
	TArray<struct FFightRank>                          fight_rank;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.MainLoginUI.RemoveHallSkin
struct UMainLoginUI_RemoveHallSkin_Params
{
	int                                                skin_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.RemoveHallItem
struct UMainLoginUI_RemoveHallItem_Params
{
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.ReCalculateBoxPrice
struct UMainLoginUI_ReCalculateBoxPrice_Params
{
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Times;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.QuitRoomTick
struct UMainLoginUI_QuitRoomTick_Params
{
};

// Function WuXiaX.MainLoginUI.QuitFromRoom
struct UMainLoginUI_QuitFromRoom_Params
{
};

// Function WuXiaX.MainLoginUI.PopOBReconnect
struct UMainLoginUI_PopOBReconnect_Params
{
};

// Function WuXiaX.MainLoginUI.PlayerQuitTeam
struct UMainLoginUI_PlayerQuitTeam_Params
{
};

// Function WuXiaX.MainLoginUI.PlayerNameRepeat
struct UMainLoginUI_PlayerNameRepeat_Params
{
};

// Function WuXiaX.MainLoginUI.PlayerLeaveRoom
struct UMainLoginUI_PlayerLeaveRoom_Params
{
	int                                                player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.PlayerJoinedRoom
struct UMainLoginUI_PlayerJoinedRoom_Params
{
	struct FUIRoomInfo                                 room;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                master_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FRoomUser>                           users;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.MainLoginUI.PlayerInviteResponse
struct UMainLoginUI_PlayerInviteResponse_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.PlayerInviteFriendResponse
struct UMainLoginUI_PlayerInviteFriendResponse_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.PlayerEquip
struct UMainLoginUI_PlayerEquip_Params
{
	TArray<int>                                        equips;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.MainLoginUI.PlayerBeInvite
struct UMainLoginUI_PlayerBeInvite_Params
{
	int                                                invite_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function WuXiaX.MainLoginUI.PlayerBeFriendInvite
struct UMainLoginUI_PlayerBeFriendInvite_Params
{
	int                                                invite_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function WuXiaX.MainLoginUI.OpenBoxRemind
struct UMainLoginUI_OpenBoxRemind_Params
{
	struct FText                                       remind;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.MainLoginUI.ObtainNewItems
struct UMainLoginUI_ObtainNewItems_Params
{
	TArray<struct FBoxRewardItem>                      items;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.MainLoginUI.ObtainNewItem
struct UMainLoginUI_ObtainNewItem_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	class UTexture2D*                                  icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.ObtainNewBox
struct UMainLoginUI_ObtainNewBox_Params
{
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	class UTexture2D*                                  icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               is_need_key;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.LoadUrl
struct UMainLoginUI_LoadUrl_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
};

// Function WuXiaX.MainLoginUI.JiHuoMaRemind
struct UMainLoginUI_JiHuoMaRemind_Params
{
	struct FText                                       remind;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.MainLoginUI.JiHuoMaItemAppend
struct UMainLoginUI_JiHuoMaItemAppend_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.InitTeamInfo
struct UMainLoginUI_InitTeamInfo_Params
{
	ESexType                                           sex_type;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                user_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                face_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                skin_color_id;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                hair_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                hair_color_id;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ready;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               in_room;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        equip_items;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UTexture2D*                                  icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.InitSkinSelectId
struct UMainLoginUI_InitSkinSelectId_Params
{
	int                                                skin_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon_texture;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               is_show;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.InitServerList
struct UMainLoginUI_InitServerList_Params
{
	TArray<int>                                        server_list;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.MainLoginUI.InitCharacterInfo
struct UMainLoginUI_InitCharacterInfo_Params
{
	ESexType                                           sex_type;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                face_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                skin_color_id;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                hair_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                hair_color_id;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                money;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.Init
struct UMainLoginUI_Init_Params
{
	class AClientNetMessageHandle*                     Net_actor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.HideUrl
struct UMainLoginUI_HideUrl_Params
{
};

// Function WuXiaX.MainLoginUI.HallRemind
struct UMainLoginUI_HallRemind_Params
{
	struct FText                                       remind;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.MainLoginUI.GetSaveUserName
struct UMainLoginUI_GetSaveUserName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.MainLoginUI.GetSavePassWord
struct UMainLoginUI_GetSavePassWord_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.MainLoginUI.GetNewSkin
struct UMainLoginUI_GetNewSkin_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.DeleteRoomComplete
struct UMainLoginUI_DeleteRoomComplete_Params
{
};

// Function WuXiaX.MainLoginUI.DeleteFriendComplete
struct UMainLoginUI_DeleteFriendComplete_Params
{
	int                                                player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.CreateSkin
struct UMainLoginUI_CreateSkin_Params
{
	int                                                skin_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	ESexType                                           sex;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  item_texture;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.CreateRooms
struct UMainLoginUI_CreateRooms_Params
{
	TArray<struct FUIRoomInfo>                         rooms;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.MainLoginUI.CreateRoomComplete
struct UMainLoginUI_CreateRoomComplete_Params
{
};

// Function WuXiaX.MainLoginUI.CreateOwnerKey
struct UMainLoginUI_CreateOwnerKey_Params
{
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.CreateOwnerItemComplete
struct UMainLoginUI_CreateOwnerItemComplete_Params
{
};

// Function WuXiaX.MainLoginUI.CreateOwnerBox
struct UMainLoginUI_CreateOwnerBox_Params
{
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               is_need_key;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.CreateItem
struct UMainLoginUI_CreateItem_Params
{
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	ESexType                                           sex;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  item_texture;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                item_level;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     item_name;                                                // (Parm, ZeroConstructor)
};

// Function WuXiaX.MainLoginUI.CreateBuyBox
struct UMainLoginUI_CreateBuyBox_Params
{
	int                                                random_box;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                fixed_box;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.ComfirmMaster
struct UMainLoginUI_ComfirmMaster_Params
{
	int                                                master_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.ClearTeam
struct UMainLoginUI_ClearTeam_Params
{
	TArray<int>                                        new_team_ids;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.MainLoginUI.ClearHallItem
struct UMainLoginUI_ClearHallItem_Params
{
};

// Function WuXiaX.MainLoginUI.ClearGoods
struct UMainLoginUI_ClearGoods_Params
{
};

// Function WuXiaX.MainLoginUI.ClearFriends
struct UMainLoginUI_ClearFriends_Params
{
};

// Function WuXiaX.MainLoginUI.ClearAllEquip
struct UMainLoginUI_ClearAllEquip_Params
{
};

// Function WuXiaX.MainLoginUI.CheckResetSortState
struct UMainLoginUI_CheckResetSortState_Params
{
};

// Function WuXiaX.MainLoginUI.BuyKeyResponse
struct UMainLoginUI_BuyKeyResponse_Params
{
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.BuyKeyRemind
struct UMainLoginUI_BuyKeyRemind_Params
{
	struct FText                                       remind;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.MainLoginUI.BuyBoxRemind
struct UMainLoginUI_BuyBoxRemind_Params
{
	struct FText                                       remind;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.MainLoginUI.AppendHallSkin
struct UMainLoginUI_AppendHallSkin_Params
{
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.AppendHallItem
struct UMainLoginUI_AppendHallItem_Params
{
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MainLoginUI.AppendGongGao
struct UMainLoginUI_AppendGongGao_Params
{
	EGongGaoType                                       Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.MiniMapCtrlUI.Vertical
struct UMiniMapCtrlUI_Vertical_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsDown;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MiniMapCtrlUI.MarkLocation
struct UMiniMapCtrlUI_MarkLocation_Params
{
};

// Function WuXiaX.MiniMapCtrlUI.MarkHoverItem
struct UMiniMapCtrlUI_MarkHoverItem_Params
{
	EGamepadMarkType                                   MarkType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MiniMapCtrlUI.MapScale
struct UMiniMapCtrlUI_MapScale_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MiniMapCtrlUI.Init
struct UMiniMapCtrlUI_Init_Params
{
};

// Function WuXiaX.MiniMapCtrlUI.Horizontal
struct UMiniMapCtrlUI_Horizontal_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsRight;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MiniMapCtrlUI.GamepadIntoWidget
struct UMiniMapCtrlUI_GamepadIntoWidget_Params
{
};

// Function WuXiaX.Missile.OnOverlapBegin
struct AMissile_OnOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WuXiaX.Missile.CallWhenDestroy
struct AMissile_CallWhenDestroy_Params
{
};

// Function WuXiaX.MissileController.SpawnEmitter
struct AMissileController_SpawnEmitter_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MissileController.GetTargetPlayerID
struct AMissileController_GetTargetPlayerID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.MissileController.DestroyMissile
struct AMissileController_DestroyMissile_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MissileController.Client_Init
struct AMissileController_Client_Init_Params
{
	int64_t                                            missileid;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            begintime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     spawnlocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    spawnrotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                launchplayerid;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            missilecontrollerid;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                weapon_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                skin_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.MissileController.CallWhenDestroy
struct AMissileController_CallWhenDestroy_Params
{
};

// Function WuXiaX.OBBlueprintHelper.GetWeaponStateIconTexture
struct UOBBlueprintHelper_GetWeaponStateIconTexture_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBBlueprintHelper.GetSkillIconTexture
struct UOBBlueprintHelper_GetSkillIconTexture_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBBlueprintHelper.GetOBClientUIHelper
struct UOBBlueprintHelper_GetOBClientUIHelper_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UOBClientUIHelper*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBBlueprintHelper.GetOBClientInfo
struct UOBBlueprintHelper_GetOBClientInfo_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AOBClientInfo*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBBlueprintHelper.GetItemQuality
struct UOBBlueprintHelper_GetItemQuality_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                itemID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBBlueprintHelper.GetItemIconTexture
struct UOBBlueprintHelper_GetItemIconTexture_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBBlueprintHelper.GetItemIcon
struct UOBBlueprintHelper_GetItemIcon_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.OBBlueprintHelper.GetEquipStateIconTexture
struct UOBBlueprintHelper_GetEquipStateIconTexture_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBBlueprintHelper.GetBuffIconTexture
struct UOBBlueprintHelper_GetBuffIconTexture_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                buffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.UpdateTargetViewDir
struct AOBClientInfo_UpdateTargetViewDir_Params
{
	int                                                netID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    rot;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.UpdatePlayersPosition
struct AOBClientInfo_UpdatePlayersPosition_Params
{
	TArray<struct FOBPlayerPosInfo>                    posInfos;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.OBClientInfo.UpdatePlayersKillInfo
struct AOBClientInfo_UpdatePlayersKillInfo_Params
{
	TArray<struct FOBPlayerKillInfo>                   killInfos;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.OBClientInfo.UpdateHorseRideInfo
struct AOBClientInfo_UpdateHorseRideInfo_Params
{
	int                                                horseID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                curDriverID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                curPassagerID;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.SetViewRotTarget
struct AOBClientInfo_SetViewRotTarget_Params
{
	int                                                netID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.SetPlaneStartInfo
struct AOBClientInfo_SetPlaneStartInfo_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.SetLivePlayerNum
struct AOBClientInfo_SetLivePlayerNum_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.SetGameStartTime
struct AOBClientInfo_SetGameStartTime_Params
{
	int64_t                                            Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.SetFlyEnd
struct AOBClientInfo_SetFlyEnd_Params
{
};

// Function WuXiaX.OBClientInfo.Server_UpdateOBLocation
struct AOBClientInfo_Server_UpdateOBLocation_Params
{
	struct FVector                                     pos;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.Server_RequestControlRotation
struct AOBClientInfo_Server_RequestControlRotation_Params
{
	int                                                charNetId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.Server_ClientInitReady
struct AOBClientInfo_Server_ClientInitReady_Params
{
};

// Function WuXiaX.OBClientInfo.OnXingfaLearningFinish
struct AOBClientInfo_OnXingfaLearningFinish_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.OnXingfaLearningFailed
struct AOBClientInfo_OnXingfaLearningFailed_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.OnXingfaLearning
struct AOBClientInfo_OnXingfaLearning_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.OnXingfaEmerged
struct AOBClientInfo_OnXingfaEmerged_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     pos;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInteractiveInfo                            Info;                                                     // (Parm)
};

// Function WuXiaX.OBClientInfo.OnTreasureBoxSapwned
struct AOBClientInfo_OnTreasureBoxSapwned_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     pos;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInteractiveInfo                            Info;                                                     // (Parm)
};

// Function WuXiaX.OBClientInfo.OnTreasureBoxOpened
struct AOBClientInfo_OnTreasureBoxOpened_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                openedPlayerID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.OnTreasureBoxDestroyed
struct AOBClientInfo_OnTreasureBoxDestroyed_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.OnServerInitDone
struct AOBClientInfo_OnServerInitDone_Params
{
	int                                                netID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.OnPlayerTargetDetailInfoUpdate
struct AOBClientInfo_OnPlayerTargetDetailInfoUpdate_Params
{
	struct FOBPlayerTargetDetailInfo                   Info;                                                     // (Parm)
};

// Function WuXiaX.OBClientInfo.OnPlayerGameOver
struct AOBClientInfo_OnPlayerGameOver_Params
{
	int                                                netID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.OnPlayerConnectChange
struct AOBClientInfo_OnPlayerConnectChange_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsConnected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.OnParadropSpawned
struct AOBClientInfo_OnParadropSpawned_Params
{
	struct FOBParadropPosInfo                          paradropPosInfo;                                          // (Parm)
};

// Function WuXiaX.OBClientInfo.OnParadropItemPickedup
struct AOBClientInfo_OnParadropItemPickedup_Params
{
	int                                                worldID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                itemID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.OnParadropFinished
struct AOBClientInfo_OnParadropFinished_Params
{
	struct FOBParadropItemInfo                         paraDetailInfo;                                           // (Parm)
};

// Function WuXiaX.OBClientInfo.OnMijingmenSpawned
struct AOBClientInfo_OnMijingmenSpawned_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     pos;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInteractiveInfo                            Info;                                                     // (Parm)
};

// Function WuXiaX.OBClientInfo.OnMijingmenOpened
struct AOBClientInfo_OnMijingmenOpened_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.OnGameOver
struct AOBClientInfo_OnGameOver_Params
{
	TArray<struct FOBStasticsInfo>                     result;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.OBClientInfo.OnFightStateExpired
struct AOBClientInfo_OnFightStateExpired_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.OnFightStateCreate
struct AOBClientInfo_OnFightStateCreate_Params
{
	struct FOBFightState                               Info;                                                     // (Parm)
};

// Function WuXiaX.OBClientInfo.OnCharacterRespawned
struct AOBClientInfo_OnCharacterRespawned_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     pos;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.OnCharacterDyingRecover
struct AOBClientInfo_OnCharacterDyingRecover_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     pos;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.OnCharacterDying
struct AOBClientInfo_OnCharacterDying_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     pos;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.OnCharacterDied
struct AOBClientInfo_OnCharacterDied_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     pos;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.IsViewingTargetPlayer
struct AOBClientInfo_IsViewingTargetPlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.IsShowTeamColor
struct AOBClientInfo_IsShowTeamColor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.InitNewHorses
struct AOBClientInfo_InitNewHorses_Params
{
	TArray<struct FOBHorseInfo>                        c_horseInfos;                                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.OBClientInfo.InitNewCharacters
struct AOBClientInfo_InitNewCharacters_Params
{
	TArray<struct FOBPlayerInfo>                       c_playerInfos;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.OBClientInfo.InitAll
struct AOBClientInfo_InitAll_Params
{
	struct FOBGameInitInfo                             initAllInfo;                                              // (Parm)
};

// Function WuXiaX.OBClientInfo.GetXinfaInfo
struct AOBClientInfo_GetXinfaInfo_Params
{
	int                                                worldID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FOBXinfaInfo                                Info;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.GetViewTargetPlayerID
struct AOBClientInfo_GetViewTargetPlayerID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.GetTreasureboxInfo
struct AOBClientInfo_GetTreasureboxInfo_Params
{
	int                                                worldID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FOBTreasureBoxInfo                          Info;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.GetTimeToGameStart
struct AOBClientInfo_GetTimeToGameStart_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.GetTeamNum
struct AOBClientInfo_GetTeamNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.GetTeamMemInfo
struct AOBClientInfo_GetTeamMemInfo_Params
{
	struct FString                                     teamName;                                                 // (Parm, ZeroConstructor)
	TArray<struct FOBPlayerInfo>                       infos;                                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.GetTeamInfoStr
struct AOBClientInfo_GetTeamInfoStr_Params
{
	struct FString                                     TeamID;                                                   // (Parm, ZeroConstructor)
	struct FOBTeamInfo                                 Info;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.GetTeamInfo
struct AOBClientInfo_GetTeamInfo_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FOBTeamInfo                                 Info;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.getTeamColor
struct AOBClientInfo_getTeamColor_Params
{
	struct FString                                     TeamID;                                                   // (Parm, ZeroConstructor)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.GetTargetPlayerBuffInfo
struct AOBClientInfo_GetTargetPlayerBuffInfo_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FOBBuffSimpleInfo>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.OBClientInfo.GetStartTime
struct AOBClientInfo_GetStartTime_Params
{
	float                                              timeInMS;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.GetPlayerTargetDetailInfo
struct AOBClientInfo_GetPlayerTargetDetailInfo_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FOBPlayerTargetDetailInfo                   Info;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.GetPlayersSortedByTeamIndex
struct AOBClientInfo_GetPlayersSortedByTeamIndex_Params
{
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.OBClientInfo.GetPlayersSortedByKillMajor
struct AOBClientInfo_GetPlayersSortedByKillMajor_Params
{
	bool                                               is_forward;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.OBClientInfo.GetPlayersSortedByDamageMajor
struct AOBClientInfo_GetPlayersSortedByDamageMajor_Params
{
	bool                                               is_forward;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.OBClientInfo.GetPlayerInfo_MaxInjury
struct AOBClientInfo_GetPlayerInfo_MaxInjury_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.GetPlayerInfo_MaxDyingHealth
struct AOBClientInfo_GetPlayerInfo_MaxDyingHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.GetPlayerInfo
struct AOBClientInfo_GetPlayerInfo_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FOBPlayerInfo                               Info;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.GetParaPosInfos
struct AOBClientInfo_GetParaPosInfos_Params
{
	TMap<int, struct FOBParadropPosInfo>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.OBClientInfo.GetParadropPosInfo
struct AOBClientInfo_GetParadropPosInfo_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FOBParadropPosInfo                          Info;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.GetParadropDetailInfos
struct AOBClientInfo_GetParadropDetailInfos_Params
{
	TMap<int, struct FOBParadropItemInfo>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.OBClientInfo.GetParadropDetailInfo
struct AOBClientInfo_GetParadropDetailInfo_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FOBParadropItemInfo                         Info;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.GetMijingenInfo
struct AOBClientInfo_GetMijingenInfo_Params
{
	int                                                worldID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FOBMijingmenInfo                            Info;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.GetMaxPlayerPerTeam
struct AOBClientInfo_GetMaxPlayerPerTeam_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.GetHorseInfo
struct AOBClientInfo_GetHorseInfo_Params
{
	int                                                horseID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FOBHorseInfo                                Info;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.GetHorseBaseInfo
struct AOBClientInfo_GetHorseBaseInfo_Params
{
	int                                                horseBaseID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FOBHorseBasicInfoToShow                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.GetGameResultInfo
struct AOBClientInfo_GetGameResultInfo_Params
{
	TArray<struct FOBStasticsInfo>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.OBClientInfo.GetFlyStartInfo
struct AOBClientInfo_GetFlyStartInfo_Params
{
	struct FVector                                     pos;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     dir;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.GetFightStateInfo
struct AOBClientInfo_GetFightStateInfo_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FOBFightState                               Info;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.GetCurCameraType
struct AOBClientInfo_GetCurCameraType_Params
{
	EObserveCameraType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.GetAllXinfaInfos
struct AOBClientInfo_GetAllXinfaInfos_Params
{
	TMap<int, struct FOBXinfaInfo>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.OBClientInfo.GetAllTreasureboxInfos
struct AOBClientInfo_GetAllTreasureboxInfos_Params
{
	TMap<int, struct FOBTreasureBoxInfo>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.OBClientInfo.GetAllTeamInfo
struct AOBClientInfo_GetAllTeamInfo_Params
{
	TArray<struct FOBTeamInfo>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.OBClientInfo.GetAllPlayerInfo
struct AOBClientInfo_GetAllPlayerInfo_Params
{
	TMap<int, struct FOBPlayerInfo>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.OBClientInfo.GetAllMijingmenInfos
struct AOBClientInfo_GetAllMijingmenInfos_Params
{
	TMap<int, struct FOBMijingmenInfo>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.OBClientInfo.GetAllFightStates
struct AOBClientInfo_GetAllFightStates_Params
{
	TMap<int, struct FOBFightState>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.OBClientInfo.GetAliveTeamNum
struct AOBClientInfo_GetAliveTeamNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBClientInfo.GetAlivePlayerNum
struct AOBClientInfo_GetAlivePlayerNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBMapUI.OnInit
struct UOBMapUI_OnInit_Params
{
	struct FVector2D                                   original_level_size;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   original_map_size;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   show_map_size;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  chinese_map;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  english_map;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               can_mark;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.OBMapUI.Init
struct UOBMapUI_Init_Params
{
	struct FVector2D                                   original_level_size;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   original_map_size;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   show_map_size;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  chinese_map;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  english_map;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               can_mark;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.OBMapUI.GetPositionByVector3
struct UOBMapUI_GetPositionByVector3_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBMapUI.GetPercentByVector3
struct UOBMapUI_GetPercentByVector3_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.OBStatisticsWidget.InitPlayerInfos
struct UOBStatisticsWidget_InitPlayerInfos_Params
{
	TArray<struct FOBStasticsInfo>                     playerinfos;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.OBTargetViewUI.ShowDamageCircle
struct UOBTargetViewUI_ShowDamageCircle_Params
{
};

// Function WuXiaX.OBTargetViewUI.SetDamageCircleWaitingTime
struct UOBTargetViewUI_SetDamageCircleWaitingTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.OBTargetViewUI.SetDamageCircleState
struct UOBTargetViewUI_SetDamageCircleState_Params
{
	EDamageCircleState                                 State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.OBTargetViewUI.SetDamageCircleShringkingTime
struct UOBTargetViewUI_SetDamageCircleShringkingTime_Params
{
	float                                              CurrentTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              alltime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.OBTargetViewUI.HideDamageCircle
struct UOBTargetViewUI_HideDamageCircle_Params
{
};

// Function WuXiaX.OBTargetViewUI.AppendKillInfo
struct UOBTargetViewUI_AppendKillInfo_Params
{
	struct FString                                     attack_player_name;                                       // (Parm, ZeroConstructor)
	struct FString                                     dead_player_name;                                         // (Parm, ZeroConstructor)
	int                                                cause_id;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	ECauseDyingType                                    reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.OBTargetViewUI.AppendGongGao
struct UOBTargetViewUI_AppendGongGao_Params
{
	EGongGaoType                                       Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.OpeningUI.SetDonshowIntroduce
struct UOpeningUI_SetDonshowIntroduce_Params
{
};

// Function WuXiaX.OpeningUI.GetIsShowIntroduce
struct UOpeningUI_GetIsShowIntroduce_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PickBox.InteractiveUITips
struct APickBox_InteractiveUITips_Params
{
	class AWuXiaXCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PickBox.GetInteractiveType
struct APickBox_GetInteractiveType_Params
{
	class AWuXiaXCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EInteractiveType                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PickBox.CanInteractive
struct APickBox_CanInteractive_Params
{
	class AWuXiaXCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	ETriggerInteractiveType                            Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PickItem.OnRepScale
struct APickItem_OnRepScale_Params
{
};

// Function WuXiaX.PickItem.OnRepPickType
struct APickItem_OnRepPickType_Params
{
};

// Function WuXiaX.PickItem.OnRepIteminfo
struct APickItem_OnRepIteminfo_Params
{
};

// Function WuXiaX.PickItem.OnOverlapEnd
struct APickItem_OnOverlapEnd_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PickItem.OnOverlapBegin
struct APickItem_OnOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WuXiaX.PickItem.InteractiveUITips
struct APickItem_InteractiveUITips_Params
{
	class AWuXiaXCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PickItem.GetInteractiveType
struct APickItem_GetInteractiveType_Params
{
	class AWuXiaXCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EInteractiveType                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PickItem.CanInteractive
struct APickItem_CanInteractive_Params
{
	class AWuXiaXCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	ETriggerInteractiveType                            Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PickItem.CallWhenDestroy
struct APickItem_CallWhenDestroy_Params
{
};

// Function WuXiaX.PickTextUI.WUXUEUseState
struct UPickTextUI_WUXUEUseState_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PickTextUI.SetItemName
struct UPickTextUI_SetItemName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function WuXiaX.PlayerAssassinationComponent.Server_AssassinationTarget
struct UPlayerAssassinationComponent_Server_AssassinationTarget_Params
{
};

// Function WuXiaX.PlayerAssassinationComponent.GetIsKillSuccess
struct UPlayerAssassinationComponent_GetIsKillSuccess_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerAssassinationComponent.GetIsFallKill
struct UPlayerAssassinationComponent_GetIsFallKill_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerAssassinationComponent.GetFullActionTime
struct UPlayerAssassinationComponent_GetFullActionTime_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerAssassinationComponent.GetCurrentActionTime
struct UPlayerAssassinationComponent_GetCurrentActionTime_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_WallJump_Client
struct UPlayerBroadcastComponent_Broad_WallJump_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewVelocity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_WallJump
struct UPlayerBroadcastComponent_Broad_WallJump_Params
{
	struct FVector                                     NewVelocity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_TakeWeapon_Client
struct UPlayerBroadcastComponent_Broad_TakeWeapon_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               take_change;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_StartFallingAttack_Client
struct UPlayerBroadcastComponent_Broad_StartFallingAttack_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_SkillPlay_Client
struct UPlayerBroadcastComponent_Broad_SkillPlay_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            play_time;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                skill_id;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       section_name;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int16_t                                            rotation_r;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int16_t                                            rotation_p;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int16_t                                            rotation_y;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EPlayerFightState                                  child_state;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EActionCheckType                                   check_action;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_SetStiffState_Client
struct UPlayerBroadcastComponent_Broad_SetStiffState_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               foo;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_SetStiffState
struct UPlayerBroadcastComponent_Broad_SetStiffState_Params
{
	bool                                               foo;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_SetPickItemNumber_Client
struct UPlayerBroadcastComponent_Broad_SetPickItemNumber_Client_Params
{
	int                                                world_id;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_SaveSquad_Client
struct UPlayerBroadcastComponent_Broad_SaveSquad_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                actionindex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_RideHorse_Client
struct UPlayerBroadcastComponent_Broad_RideHorse_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isride;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isleft;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_PlaySkillEffect_Client
struct UPlayerBroadcastComponent_Broad_PlaySkillEffect_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EPlayerFightState                                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            skill_time;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              be_attack_angle;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     dir;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Len;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_PlayerResurrection_Client
struct UPlayerBroadcastComponent_Broad_PlayerResurrection_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_PlayBlockBeAttack_Client
struct UPlayerBroadcastComponent_Broad_PlayBlockBeAttack_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_PlayBeAttack_Client
struct UPlayerBroadcastComponent_Broad_PlayBeAttack_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            play_time;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               beattack;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                be_attack_type;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              be_attack_angle;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     dir;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	EPlayerActionState                                 action_type;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_PlayAim_Client
struct UPlayerBroadcastComponent_Broad_PlayAim_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_OnRep_Block_Client
struct UPlayerBroadcastComponent_Broad_OnRep_Block_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            block_counter_attack_play_time;                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EPlayerFightState                                  false_flag;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_LianTiao_Client
struct UPlayerBroadcastComponent_Broad_LianTiao_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               is_in_lian_tiao;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                lian_tiao_index;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_LaunchMissile_Client
struct UPlayerBroadcastComponent_Broad_LaunchMissile_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            begintime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               hasnextmissile;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_KillTarget_Client
struct UPlayerBroadcastComponent_Broad_KillTarget_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                actionindex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_FinishSaveSquad_Client
struct UPlayerBroadcastComponent_Broad_FinishSaveSquad_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_FinishKillTarget_Client
struct UPlayerBroadcastComponent_Broad_FinishKillTarget_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_FinishKeepInteractive_Client
struct UPlayerBroadcastComponent_Broad_FinishKeepInteractive_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_FinishInteractiveMove_Client
struct UPlayerBroadcastComponent_Broad_FinishInteractiveMove_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_FinishFallingAttack_Client
struct UPlayerBroadcastComponent_Broad_FinishFallingAttack_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            skillid;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_FakeCharacter_Client
struct UPlayerBroadcastComponent_Broad_FakeCharacter_Client_Params
{
	TArray<int64_t>                                    player_id;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector_NetQuantize>                 pos;                                                      // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<int64_t>                                    net_player_cloth_id;                                      // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_EndAnimEffect_Client
struct UPlayerBroadcastComponent_Broad_EndAnimEffect_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                effecttype;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_CollisionEnabled_Client
struct UPlayerBroadcastComponent_Broad_CollisionEnabled_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_ChangeQingGongState_Client
struct UPlayerBroadcastComponent_Broad_ChangeQingGongState_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EPlayerMotionState                                 State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_ChangePlayerChildState_Client
struct UPlayerBroadcastComponent_Broad_ChangePlayerChildState_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EPlayerFightState                                  State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_BreakKeepInteractive_Client
struct UPlayerBroadcastComponent_Broad_BreakKeepInteractive_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_BreakBeKill_Client
struct UPlayerBroadcastComponent_Broad_BreakBeKill_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_BreakAction_Client
struct UPlayerBroadcastComponent_Broad_BreakAction_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EBreakActionType                                   breaktype;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_BeginUseItem_Client
struct UPlayerBroadcastComponent_Broad_BeginUseItem_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EBagType                                           bag_type;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	EUseItemState                                      useitemstate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                actionindex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_BeginKeepInteractive_Client
struct UPlayerBroadcastComponent_Broad_BeginKeepInteractive_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            begintime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              keeptime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EKeeyInteractiveType                               Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                interactiveid;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     playerlocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LookAtLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                actionindex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_BeginInteractiveMove_Client
struct UPlayerBroadcastComponent_Broad_BeginInteractiveMove_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            begintime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              keeptime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EKeeyInteractiveType                               Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     beginlocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AWuXiaInteractiveActor*                      interactiveactor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_BeginBeKill_Client
struct UPlayerBroadcastComponent_Broad_BeginBeKill_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_BeginBeAssassination_Client
struct UPlayerBroadcastComponent_Broad_BeginBeAssassination_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isfall;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               issucces;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            begintime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            actiontime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_BeginAssassinationTarget_Client
struct UPlayerBroadcastComponent_Broad_BeginAssassinationTarget_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isfall;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               issucces;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            begintime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            actiontime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            targetid;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBroadcastComponent.Broad_BeginAnimEffect_Client
struct UPlayerBroadcastComponent_Broad_BeginAnimEffect_Client_Params
{
	int64_t                                            player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                effecttype;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBuffComponent.UI_SetBuff
struct UPlayerBuffComponent_UI_SetBuff_Params
{
	int64_t                                            buffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                numberoflayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBuffComponent.UI_RemoveBuff
struct UPlayerBuffComponent_UI_RemoveBuff_Params
{
	int64_t                                            buffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerBuffComponent.UI_ClearBuffs
struct UPlayerBuffComponent_UI_ClearBuffs_Params
{
};

// Function WuXiaX.PlayerCaptureActor.ShowHair
struct APlayerCaptureActor_ShowHair_Params
{
};

// Function WuXiaX.PlayerCaptureActor.ShowFace
struct APlayerCaptureActor_ShowFace_Params
{
};

// Function WuXiaX.PlayerCaptureActor.SetWeapon
struct APlayerCaptureActor_SetWeapon_Params
{
	int                                                skin_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerCaptureActor.SetHat
struct APlayerCaptureActor_SetHat_Params
{
	int                                                skin_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerCaptureActor.SetEquip
struct APlayerCaptureActor_SetEquip_Params
{
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerCaptureActor.ResetSkinColor
struct APlayerCaptureActor_ResetSkinColor_Params
{
};

// Function WuXiaX.PlayerCaptureActor.ResetHairColor
struct APlayerCaptureActor_ResetHairColor_Params
{
};

// Function WuXiaX.PlayerCaptureActor.LoadComplete
struct APlayerCaptureActor_LoadComplete_Params
{
};

// Function WuXiaX.PlayerEnumFunctionLibrary.IsContainsSpecialStr
struct UPlayerEnumFunctionLibrary_IsContainsSpecialStr_Params
{
	struct FString                                     originstr;                                                // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerEnumFunctionLibrary.GetWeaponEquipTypeById
struct UPlayerEnumFunctionLibrary_GetWeaponEquipTypeById_Params
{
	class UWuXiaXGameInstance*                         game_instance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EWeaponEquipType                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerEnumFunctionLibrary.GetStrArrayByPath
struct UPlayerEnumFunctionLibrary_GetStrArrayByPath_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.PlayerEnumFunctionLibrary.GetStateString
struct UPlayerEnumFunctionLibrary_GetStateString_Params
{
	EPlayerGameState                                   Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.PlayerEnumFunctionLibrary.GetSkinType
struct UPlayerEnumFunctionLibrary_GetSkinType_Params
{
	int                                                skin_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UWuXiaXGameInstance*                         game_instance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerEnumFunctionLibrary.GetSkinIcon
struct UPlayerEnumFunctionLibrary_GetSkinIcon_Params
{
	int                                                skin_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UWuXiaXGameInstance*                         game_instance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerEnumFunctionLibrary.GetSkinDetailById
struct UPlayerEnumFunctionLibrary_GetSkinDetailById_Params
{
	class UWuXiaXGameInstance*                         game_instance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                skin_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, OutParm, ZeroConstructor)
	struct FString                                     detail;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function WuXiaX.PlayerEnumFunctionLibrary.GetSkillNameById
struct UPlayerEnumFunctionLibrary_GetSkillNameById_Params
{
	class UWuXiaXGameInstance*                         game_instance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                skill_id;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.PlayerEnumFunctionLibrary.GetModelById
struct UPlayerEnumFunctionLibrary_GetModelById_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UWuXiaXGameInstance*                         game_instance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerEnumFunctionLibrary.GetItemTypeById
struct UPlayerEnumFunctionLibrary_GetItemTypeById_Params
{
	class UWuXiaXGameInstance*                         game_instance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EBagType                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerEnumFunctionLibrary.GetItemMeshById
struct UPlayerEnumFunctionLibrary_GetItemMeshById_Params
{
	class UWuXiaXGameInstance*                         game_instance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	ESexType                                           sex_type;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerEnumFunctionLibrary.GetItemEquipTypeById
struct UPlayerEnumFunctionLibrary_GetItemEquipTypeById_Params
{
	class UWuXiaXGameInstance*                         game_instance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EItemEquipType                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerEnumFunctionLibrary.GetItemDetailById
struct UPlayerEnumFunctionLibrary_GetItemDetailById_Params
{
	class UWuXiaXGameInstance*                         game_instance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, OutParm, ZeroConstructor)
	struct FString                                     detail;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function WuXiaX.PlayerEnumFunctionLibrary.GetItemChildTypeById
struct UPlayerEnumFunctionLibrary_GetItemChildTypeById_Params
{
	class UWuXiaXGameInstance*                         game_instance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EItemType                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerEnumFunctionLibrary.GetHallItemDetailById
struct UPlayerEnumFunctionLibrary_GetHallItemDetailById_Params
{
	class UWuXiaXGameInstance*                         game_instance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, OutParm, ZeroConstructor)
	struct FString                                     detail;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function WuXiaX.PlayerEnumFunctionLibrary.GetHairMeshByHatId
struct UPlayerEnumFunctionLibrary_GetHairMeshByHatId_Params
{
	class UWuXiaXGameInstance*                         game_instance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	ESexType                                           sex_type;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerEnumFunctionLibrary.GetColorById
struct UPlayerEnumFunctionLibrary_GetColorById_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UWuXiaXGameInstance*                         game_instance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerEnumFunctionLibrary.GetChineseString
struct UPlayerEnumFunctionLibrary_GetChineseString_Params
{
	struct FString                                     originstr;                                                // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.PlayerEnumFunctionLibrary.GetBuffNameById
struct UPlayerEnumFunctionLibrary_GetBuffNameById_Params
{
	class UWuXiaXGameInstance*                         game_instance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.PlayerEnumFunctionLibrary.CloseSession
struct UPlayerEnumFunctionLibrary_CloseSession_Params
{
	class APlayerController*                           player_ctrl;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerFightComponent.UnTakeWeapon
struct UPlayerFightComponent_UnTakeWeapon_Params
{
};

// Function WuXiaX.PlayerFightComponent.TakeWeapon
struct UPlayerFightComponent_TakeWeapon_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               take_change;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               send_server;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               is_design;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerFightComponent.SwitchWeaponAmongFarAndNear
struct UPlayerFightComponent_SwitchWeaponAmongFarAndNear_Params
{
};

// Function WuXiaX.PlayerFightComponent.SwitchWeapon
struct UPlayerFightComponent_SwitchWeapon_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerFightComponent.SwitchThrowWeapon
struct UPlayerFightComponent_SwitchThrowWeapon_Params
{
};

// Function WuXiaX.PlayerFightComponent.SwitchNearWeapon
struct UPlayerFightComponent_SwitchNearWeapon_Params
{
};

// Function WuXiaX.PlayerFightComponent.Server_TakeWeapon
struct UPlayerFightComponent_Server_TakeWeapon_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               take_change;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerFightComponent.Server_StartFallingAttack
struct UPlayerFightComponent_Server_StartFallingAttack_Params
{
};

// Function WuXiaX.PlayerFightComponent.Server_SpawnMissileInfo
struct UPlayerFightComponent_Server_SpawnMissileInfo_Params
{
	int64_t                                            missileid;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            createtime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                kill_item_id;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerFightComponent.Server_SkillPlay
struct UPlayerFightComponent_Server_SkillPlay_Params
{
	int64_t                                            play_time;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                skill_id;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       section_name;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int16_t                                            rotation_r;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int16_t                                            rotation_p;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int16_t                                            rotation_y;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EPlayerFightState                                  child_state;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                attack_target_id;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	EActionCheckType                                   check_action;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerFightComponent.Server_PlayAim
struct UPlayerFightComponent_Server_PlayAim_Params
{
	bool                                               flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerFightComponent.Server_LaunchMissile
struct UPlayerFightComponent_Server_LaunchMissile_Params
{
	int64_t                                            begintime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerFightComponent.Server_ChangeTarget
struct UPlayerFightComponent_Server_ChangeTarget_Params
{
	int64_t                                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               is_auto_target_id;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerFightComponent.Server_BlockPlay
struct UPlayerFightComponent_Server_BlockPlay_Params
{
	int64_t                                            block_counter_attack_play_time;                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerFightComponent.PlayWuDi
struct UPlayerFightComponent_PlayWuDi_Params
{
};

// Function WuXiaX.PlayerFightComponent.PlayShanBi
struct UPlayerFightComponent_PlayShanBi_Params
{
	EShanBiDirection                                   index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerFightComponent.PlayQiShen
struct UPlayerFightComponent_PlayQiShen_Params
{
};

// Function WuXiaX.PlayerFightComponent.OnRep_WeakState
struct UPlayerFightComponent_OnRep_WeakState_Params
{
};

// Function WuXiaX.PlayerFightComponent.OnRep_SkillBarIndex
struct UPlayerFightComponent_OnRep_SkillBarIndex_Params
{
};

// Function WuXiaX.PlayerFightComponent.OnRep_OwnerSkillBarIndex
struct UPlayerFightComponent_OnRep_OwnerSkillBarIndex_Params
{
};

// Function WuXiaX.PlayerFightComponent.OnPlayerOverlapEnd
struct UPlayerFightComponent_OnPlayerOverlapEnd_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerFightComponent.OnPlayerOverlapBegin
struct UPlayerFightComponent_OnPlayerOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WuXiaX.PlayerFightComponent.NormalAttacRelease
struct UPlayerFightComponent_NormalAttacRelease_Params
{
};

// Function WuXiaX.PlayerFightComponent.NormalAttack
struct UPlayerFightComponent_NormalAttack_Params
{
};

// Function WuXiaX.PlayerFightComponent.LaunchMissile
struct UPlayerFightComponent_LaunchMissile_Params
{
};

// Function WuXiaX.PlayerFightComponent.HeavyAttack
struct UPlayerFightComponent_HeavyAttack_Params
{
};

// Function WuXiaX.PlayerFightComponent.GetCurrentWeapon
struct UPlayerFightComponent_GetCurrentWeapon_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerFightComponent.GetCurrentAttackTargetId
struct UPlayerFightComponent_GetCurrentAttackTargetId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerFightComponent.Client_ReconnectUpdate
struct UPlayerFightComponent_Client_ReconnectUpdate_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerFightComponent.Client_CheckSoundResult
struct UPlayerFightComponent_Client_CheckSoundResult_Params
{
	TArray<int>                                        Ids;                                                      // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             Locations;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.PlayerFightComponent.Client_CancleSkillPlay
struct UPlayerFightComponent_Client_CancleSkillPlay_Params
{
	int                                                skill_id;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerFightComponent.CheckSound
struct UPlayerFightComponent_CheckSound_Params
{
};

// Function WuXiaX.PlayerFightComponent.CheckIsInSkill
struct UPlayerFightComponent_CheckIsInSkill_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerFightComponent.CheckIsInRangeWeaponState
struct UPlayerFightComponent_CheckIsInRangeWeaponState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerFightComponent.CheckIsInAim
struct UPlayerFightComponent_CheckIsInAim_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerFightComponent.BlockPlay
struct UPlayerFightComponent_BlockPlay_Params
{
	bool                                               flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerFightComponent.AttackInBlock
struct UPlayerFightComponent_AttackInBlock_Params
{
};

// Function WuXiaX.PlayerFightComponent.AttackByIndexRelease
struct UPlayerFightComponent_AttackByIndexRelease_Params
{
	EInputAttackType                                   index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerFightComponent.AttackByIndex
struct UPlayerFightComponent_AttackByIndex_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerInteractiveComponent.Server_InteractiveToActor
struct UPlayerInteractiveComponent_Server_InteractiveToActor_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	ETriggerInteractiveType                            Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerInteractiveComponent.OnRepInteractiveType
struct UPlayerInteractiveComponent_OnRepInteractiveType_Params
{
};

// Function WuXiaX.PlayerInteractiveComponent.Mult_StopInteractive
struct UPlayerInteractiveComponent_Mult_StopInteractive_Params
{
	int                                                interactiveactorid;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerInteractiveComponent.Mult_Interactive
struct UPlayerInteractiveComponent_Mult_Interactive_Params
{
	int                                                interactiveactorid;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerInteractiveComponent.Mult_BeginInteractive
struct UPlayerInteractiveComponent_Mult_BeginInteractive_Params
{
	int                                                interactiveactorid;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerInteractiveComponent.GetKeeyInteractiveType
struct UPlayerInteractiveComponent_GetKeeyInteractiveType_Params
{
	EKeeyInteractiveType                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerInteractiveComponent.GetKeepingFullTime
struct UPlayerInteractiveComponent_GetKeepingFullTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerInteractiveComponent.GetKeepingCurrentTime
struct UPlayerInteractiveComponent_GetKeepingCurrentTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerItemCtrlComponent.UI_UseSkillBook
struct UPlayerItemCtrlComponent_UI_UseSkillBook_Params
{
	EBagType                                           bag_type;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerItemCtrlComponent.UI_UseItem
struct UPlayerItemCtrlComponent_UI_UseItem_Params
{
	EBagType                                           bag_type;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerItemCtrlComponent.UI_SwapItemToSlot
struct UPlayerItemCtrlComponent_UI_SwapItemToSlot_Params
{
	EBagType                                           source_bag_type;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                source_index;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	EBagType                                           target_bag_type;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                target_index;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerItemCtrlComponent.UI_SwapItemToBag
struct UPlayerItemCtrlComponent_UI_SwapItemToBag_Params
{
	EBagType                                           source_bag_type;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                source_index;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	EBagType                                           target_bag_type;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerItemCtrlComponent.UI_SwapItemHotKey
struct UPlayerItemCtrlComponent_UI_SwapItemHotKey_Params
{
	int                                                SourceIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                targetindex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerItemCtrlComponent.UI_SetItemHotKey
struct UPlayerItemCtrlComponent_UI_SetItemHotKey_Params
{
	EBagType                                           bag_type;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                hotkeyindex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerItemCtrlComponent.UI_RemoveItemHotKey
struct UPlayerItemCtrlComponent_UI_RemoveItemHotKey_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerItemCtrlComponent.UI_DropItem
struct UPlayerItemCtrlComponent_UI_DropItem_Params
{
	EBagType                                           bag_type;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerItemCtrlComponent.UI_AddItemByIndex
struct UPlayerItemCtrlComponent_UI_AddItemByIndex_Params
{
	int                                                world_id;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerItemCtrlComponent.TryPickUp
struct UPlayerItemCtrlComponent_TryPickUp_Params
{
	int                                                world_id;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETriggerType                                       Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                get_num;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EBagType                                           target_bag_type;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                target_index;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerItemCtrlComponent.ShowItemDetial
struct UPlayerItemCtrlComponent_ShowItemDetial_Params
{
	EBagType                                           bagtype;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerItemCtrlComponent.Server_UseItem
struct UPlayerItemCtrlComponent_Server_UseItem_Params
{
	EBagType                                           bag_type;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerItemCtrlComponent.Server_SwapItem
struct UPlayerItemCtrlComponent_Server_SwapItem_Params
{
	EBagType                                           source_bag_type;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                source_index;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	EBagType                                           target_bag_type;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                target_index;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerItemCtrlComponent.Server_DropItem
struct UPlayerItemCtrlComponent_Server_DropItem_Params
{
	EBagType                                           bag_type;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerItemCtrlComponent.Server_BeginUseItem
struct UPlayerItemCtrlComponent_Server_BeginUseItem_Params
{
	EBagType                                           bag_type;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerItemCtrlComponent.ReSortItems
struct UPlayerItemCtrlComponent_ReSortItems_Params
{
};

// Function WuXiaX.PlayerItemCtrlComponent.QuickUseItem
struct UPlayerItemCtrlComponent_QuickUseItem_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerItemCtrlComponent.OnRep_Equip_Change_Other
struct UPlayerItemCtrlComponent_OnRep_Equip_Change_Other_Params
{
};

// Function WuXiaX.PlayerItemCtrlComponent.OnRep_Equip_Change
struct UPlayerItemCtrlComponent_OnRep_Equip_Change_Params
{
};

// Function WuXiaX.PlayerItemCtrlComponent.OnDragItem
struct UPlayerItemCtrlComponent_OnDragItem_Params
{
	EBagType                                           bagtype;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerItemCtrlComponent.GetWeaponId
struct UPlayerItemCtrlComponent_GetWeaponId_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerItemCtrlComponent.GetUsing_item_index
struct UPlayerItemCtrlComponent_GetUsing_item_index_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerItemCtrlComponent.GetUseItemState
struct UPlayerItemCtrlComponent_GetUseItemState_Params
{
	EUseItemState                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerItemCtrlComponent.GetUseItemFullTime
struct UPlayerItemCtrlComponent_GetUseItemFullTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerItemCtrlComponent.GetPickIdByIndex
struct UPlayerItemCtrlComponent_GetPickIdByIndex_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerItemCtrlComponent.GetItemInfo
struct UPlayerItemCtrlComponent_GetItemInfo_Params
{
	EBagType                                           bag_type;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameItemInfo                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WuXiaX.PlayerItemCtrlComponent.GetIndexByPickId
struct UPlayerItemCtrlComponent_GetIndexByPickId_Params
{
	int                                                world_id;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerItemCtrlComponent.Client_UseItem_NotItem
struct UPlayerItemCtrlComponent_Client_UseItem_NotItem_Params
{
	bool                                               result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerItemCtrlComponent.Client_UseItem
struct UPlayerItemCtrlComponent_Client_UseItem_Params
{
	bool                                               result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameItemInfo                               out_item;                                                 // (ConstParm, Parm, ReferenceParm)
};

// Function WuXiaX.PlayerItemCtrlComponent.Client_UpdateItem
struct UPlayerItemCtrlComponent_Client_UpdateItem_Params
{
	TArray<struct FGameItemInfo>                       item_array;                                               // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.PlayerItemCtrlComponent.Client_SwapItem_NotItem
struct UPlayerItemCtrlComponent_Client_SwapItem_NotItem_Params
{
	EItemOperateType                                   operate_type;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerItemCtrlComponent.Client_SwapItem
struct UPlayerItemCtrlComponent_Client_SwapItem_Params
{
	EItemOperateType                                   operate_type;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGameItemInfo>                       item_array;                                               // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.PlayerItemCtrlComponent.Client_SetItemsHotKey
struct UPlayerItemCtrlComponent_Client_SetItemsHotKey_Params
{
	int64_t                                            item1;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            item2;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            item3;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerItemCtrlComponent.Client_DropItem_NotItem
struct UPlayerItemCtrlComponent_Client_DropItem_NotItem_Params
{
	bool                                               result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerItemCtrlComponent.Client_DropItem
struct UPlayerItemCtrlComponent_Client_DropItem_Params
{
	bool                                               result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameItemInfo                               out_item;                                                 // (ConstParm, Parm, ReferenceParm)
};

// Function WuXiaX.PlayerItemCtrlComponent.Client_ClearAllItem
struct UPlayerItemCtrlComponent_Client_ClearAllItem_Params
{
	bool                                               isclearappearance;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerItemCtrlComponent.Client_CancelOperating
struct UPlayerItemCtrlComponent_Client_CancelOperating_Params
{
};

// Function WuXiaX.PlayerItemCtrlComponent.Client_AddItem_NoItem
struct UPlayerItemCtrlComponent_Client_AddItem_NoItem_Params
{
	EItemOperateType                                   operate_type;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerItemCtrlComponent.Client_AddItem
struct UPlayerItemCtrlComponent_Client_AddItem_Params
{
	EItemOperateType                                   operate_type;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGameItemInfo>                       item_array;                                               // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.PlayerItemCtrlComponent.AddItem
struct UPlayerItemCtrlComponent_AddItem_Params
{
	TArray<int>                                        Ids;                                                      // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.PlayerKeepActionComponent.Server_BreakAction
struct UPlayerKeepActionComponent_Server_BreakAction_Params
{
	EBreakActionType                                   breaktype;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerKeepActionComponent.GetCurrentKeepActionState
struct UPlayerKeepActionComponent_GetCurrentKeepActionState_Params
{
	EKeepingActionType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerKeepActionComponent.Client_BreakAction
struct UPlayerKeepActionComponent_Client_BreakAction_Params
{
	EBreakActionType                                   breaktype;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                actionindex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerKeepActionComponent.BreakAction
struct UPlayerKeepActionComponent_BreakAction_Params
{
	EBreakActionType                                   breaktype;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.UpdateMaxMp
struct UPlayerPropertyComponent_UpdateMaxMp_Params
{
};

// Function WuXiaX.PlayerPropertyComponent.ServerInitProperty
struct UPlayerPropertyComponent_ServerInitProperty_Params
{
};

// Function WuXiaX.PlayerPropertyComponent.ReSetDyingHp
struct UPlayerPropertyComponent_ReSetDyingHp_Params
{
};

// Function WuXiaX.PlayerPropertyComponent.OnSaveChangeValueChange
struct UPlayerPropertyComponent_OnSaveChangeValueChange_Params
{
};

// Function WuXiaX.PlayerPropertyComponent.OnSatietyChange
struct UPlayerPropertyComponent_OnSatietyChange_Params
{
};

// Function WuXiaX.PlayerPropertyComponent.OnOxygenChange
struct UPlayerPropertyComponent_OnOxygenChange_Params
{
};

// Function WuXiaX.PlayerPropertyComponent.OnMPChange
struct UPlayerPropertyComponent_OnMPChange_Params
{
};

// Function WuXiaX.PlayerPropertyComponent.OnMoistureChange
struct UPlayerPropertyComponent_OnMoistureChange_Params
{
};

// Function WuXiaX.PlayerPropertyComponent.OnInjuryChange
struct UPlayerPropertyComponent_OnInjuryChange_Params
{
};

// Function WuXiaX.PlayerPropertyComponent.OnHPChange
struct UPlayerPropertyComponent_OnHPChange_Params
{
};

// Function WuXiaX.PlayerPropertyComponent.OnDyingHPChange
struct UPlayerPropertyComponent_OnDyingHPChange_Params
{
};

// Function WuXiaX.PlayerPropertyComponent.InitInjurysValue
struct UPlayerPropertyComponent_InitInjurysValue_Params
{
};

// Function WuXiaX.PlayerPropertyComponent.GetWaiArmorRate
struct UPlayerPropertyComponent_GetWaiArmorRate_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.GetWaiArmor
struct UPlayerPropertyComponent_GetWaiArmor_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.GetSimpleWaiArmorRate
struct UPlayerPropertyComponent_GetSimpleWaiArmorRate_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.GetPlayerGameTimeData
struct UPlayerPropertyComponent_GetPlayerGameTimeData_Params
{
	struct FPlayerGameTimeData                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WuXiaX.PlayerPropertyComponent.GetOxygen
struct UPlayerPropertyComponent_GetOxygen_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.GetOutPower
struct UPlayerPropertyComponent_GetOutPower_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.GetNeiArmor
struct UPlayerPropertyComponent_GetNeiArmor_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.GetInterruptAddSkill
struct UPlayerPropertyComponent_GetInterruptAddSkill_Params
{
	int                                                skil;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.GetInnerPower
struct UPlayerPropertyComponent_GetInnerPower_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.GetHpChangeInfo
struct UPlayerPropertyComponent_GetHpChangeInfo_Params
{
	struct FHPChangeInfo                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WuXiaX.PlayerPropertyComponent.GetDefCritRate
struct UPlayerPropertyComponent_GetDefCritRate_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.GetDefCritModulus
struct UPlayerPropertyComponent_GetDefCritModulus_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.GetCurrentPlayerMP
struct UPlayerPropertyComponent_GetCurrentPlayerMP_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.GetCurrentPlayerHP
struct UPlayerPropertyComponent_GetCurrentPlayerHP_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.GetCurrentPlayerDyingHP
struct UPlayerPropertyComponent_GetCurrentPlayerDyingHP_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.GetCritRate
struct UPlayerPropertyComponent_GetCritRate_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.GetCritModulus
struct UPlayerPropertyComponent_GetCritModulus_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.GetBeInterruptAddSkill
struct UPlayerPropertyComponent_GetBeInterruptAddSkill_Params
{
	int                                                skill;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.GetAttack
struct UPlayerPropertyComponent_GetAttack_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.ChangeWaiArmor
struct UPlayerPropertyComponent_ChangeWaiArmor_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EPropertyChangeReason                              reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.ChangeSaveValue
struct UPlayerPropertyComponent_ChangeSaveValue_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EPropertyChangeReason                              reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.ChangeSaveChangeValueBeKill
struct UPlayerPropertyComponent_ChangeSaveChangeValueBeKill_Params
{
	EPropertyChangeReason                              reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.ChangeSaveChangeValue
struct UPlayerPropertyComponent_ChangeSaveChangeValue_Params
{
	bool                                               isadd;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EPropertyChangeReason                              reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.ChangeRecoverRate
struct UPlayerPropertyComponent_ChangeRecoverRate_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EPropertyChangeReason                              reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.ChangeOxygenchange
struct UPlayerPropertyComponent_ChangeOxygenchange_Params
{
	int                                                oxygenchange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EPropertyChangeReason                              reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.ChangeOxygen
struct UPlayerPropertyComponent_ChangeOxygen_Params
{
	int                                                oxygen;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EPropertyChangeReason                              reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.ChangeOutPower
struct UPlayerPropertyComponent_ChangeOutPower_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EPropertyChangeReason                              reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.ChangeNeiArmor
struct UPlayerPropertyComponent_ChangeNeiArmor_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EPropertyChangeReason                              reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.ChangeMp
struct UPlayerPropertyComponent_ChangeMp_Params
{
	int                                                mp;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EMPChangeType                                      mp_change_type;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	EPropertyChangeReason                              reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.ChangeMaxHpAddRate
struct UPlayerPropertyComponent_ChangeMaxHpAddRate_Params
{
	int                                                maxhpadd;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EPropertyChangeReason                              reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.ChangeInterrupt
struct UPlayerPropertyComponent_ChangeInterrupt_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EPropertyChangeReason                              reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.ChangeInnerPower
struct UPlayerPropertyComponent_ChangeInnerPower_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EPropertyChangeReason                              reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.ChangeInjury
struct UPlayerPropertyComponent_ChangeInjury_Params
{
	float                                              injury;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EPropertyChangeReason                              reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.ChangeHp
struct UPlayerPropertyComponent_ChangeHp_Params
{
	int                                                hp;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EPropertyChangeReason                              reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.ChangeDyingHP
struct UPlayerPropertyComponent_ChangeDyingHP_Params
{
	int                                                dying_hp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EPropertyChangeReason                              reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.ChangeDefCritRate
struct UPlayerPropertyComponent_ChangeDefCritRate_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EPropertyChangeReason                              reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.ChangeDefCritModulus
struct UPlayerPropertyComponent_ChangeDefCritModulus_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EPropertyChangeReason                              reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.ChangeCritRate
struct UPlayerPropertyComponent_ChangeCritRate_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EPropertyChangeReason                              reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.ChangeCritModulus
struct UPlayerPropertyComponent_ChangeCritModulus_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EPropertyChangeReason                              reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.ChangeBeInterrupt
struct UPlayerPropertyComponent_ChangeBeInterrupt_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EPropertyChangeReason                              reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerPropertyComponent.ChangeAttack
struct UPlayerPropertyComponent_ChangeAttack_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EPropertyChangeReason                              reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerSkillsComponent.UI_SwapSkill
struct UPlayerSkillsComponent_UI_SwapSkill_Params
{
	ESkillEquipType                                    sourceslottype;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SourceIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                sourceskillid;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	ESkillEquipType                                    targetslottype;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                targetslotindex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                targetskillid;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerSkillsComponent.UI_ShowSkillDetail
struct UPlayerSkillsComponent_UI_ShowSkillDetail_Params
{
	ESkillEquipType                                    slottype;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                slotindex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                skillid;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerSkillsComponent.UI_RemoveSkill
struct UPlayerSkillsComponent_UI_RemoveSkill_Params
{
	ESkillEquipType                                    slottype;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                slotindex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerSkillsComponent.UI_DropSkillToPanel
struct UPlayerSkillsComponent_UI_DropSkillToPanel_Params
{
	ESkillEquipType                                    sourceslottype;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SourceIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                sourceskillid;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	ESkillEquipType                                    targetslottype;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerSkillsComponent.Server_SwapSkill
struct UPlayerSkillsComponent_Server_SwapSkill_Params
{
	ESkillEquipType                                    sourceslottype;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SourceIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                sourceskillid;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	ESkillEquipType                                    targetslottype;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                targetslotindex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                targetskillid;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerSkillsComponent.Server_RemoveSkill
struct UPlayerSkillsComponent_Server_RemoveSkill_Params
{
	ESkillEquipType                                    slottype;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                slotindex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerSkillsComponent.Server_ChangeEquipWeapon
struct UPlayerSkillsComponent_Server_ChangeEquipWeapon_Params
{
	ESkillEquipType                                    sourceslottype;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            weaponid;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerSkillsComponent.Client_SetSkills
struct UPlayerSkillsComponent_Client_SetSkills_Params
{
	TArray<struct FSetSkillInfo>                       skillchangeinfo;                                          // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.PlayerSkillsComponent.Client_RemoveSkill
struct UPlayerSkillsComponent_Client_RemoveSkill_Params
{
	ESkillEquipType                                    slottype;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                slotindex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerSkillsComponent.Client_ReconnectUpdate
struct UPlayerSkillsComponent_Client_ReconnectUpdate_Params
{
	TArray<int64_t>                                    skills;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<int64_t>                                    equipskills;                                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	int64_t                                            generalskillid;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            lastgeneralskillendtime;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerSkillsComponent.Client_EquipSkill
struct UPlayerSkillsComponent_Client_EquipSkill_Params
{
	ESkillEquipType                                    slottype;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                slotindex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            skillid;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerSkillsComponent.Client_ClearAllSkill
struct UPlayerSkillsComponent_Client_ClearAllSkill_Params
{
};

// Function WuXiaX.PlayerSkillsComponent.Client_ChangeEquipWeapon
struct UPlayerSkillsComponent_Client_ChangeEquipWeapon_Params
{
	ESkillEquipType                                    sourceslottype;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            weaponid;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                currentweapontype1;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                currentweapontype2;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerSkillsComponent.Client_AddSkill
struct UPlayerSkillsComponent_Client_AddSkill_Params
{
	int64_t                                            skillid;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerSkillsComponent.CanUseSkillBook
struct UPlayerSkillsComponent_CanUseSkillBook_Params
{
	int                                                itemID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerSquadComponent.UpdateAllDataToUI
struct UPlayerSquadComponent_UpdateAllDataToUI_Params
{
};

// Function WuXiaX.PlayerSquadComponent.SetMark
struct UPlayerSquadComponent_SetMark_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasMark;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerSquadComponent.Server_UpdateSquadID
struct UPlayerSquadComponent_Server_UpdateSquadID_Params
{
};

// Function WuXiaX.PlayerSquadComponent.Server_UpdateDataByPlayerID
struct UPlayerSquadComponent_Server_UpdateDataByPlayerID_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerSquadComponent.Server_UpdateAllData
struct UPlayerSquadComponent_Server_UpdateAllData_Params
{
};

// Function WuXiaX.PlayerSquadComponent.Server_SetSquadUpdateType
struct UPlayerSquadComponent_Server_SetSquadUpdateType_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isserverupdate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerSquadComponent.Server_SetMark
struct UPlayerSquadComponent_Server_SetMark_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasMark;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerSquadComponent.Server_SaveSquad
struct UPlayerSquadComponent_Server_SaveSquad_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerSquadComponent.Server_KillTarget
struct UPlayerSquadComponent_Server_KillTarget_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerSquadComponent.Server_ChangeVisionPlayerID
struct UPlayerSquadComponent_Server_ChangeVisionPlayerID_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerSquadComponent.Client_UpdateMemberTransfrom
struct UPlayerSquadComponent_Client_UpdateMemberTransfrom_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerSquadComponent.Client_UpdateMemberState
struct UPlayerSquadComponent_Client_UpdateMemberState_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETeamPlayerState                                   PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerSquadComponent.Client_UpdateMemberSaveValue
struct UPlayerSquadComponent_Client_UpdateMemberSaveValue_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              savevalue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerSquadComponent.Client_UpdateMemberMaxHP
struct UPlayerSquadComponent_Client_UpdateMemberMaxHP_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                maxHP;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerSquadComponent.Client_UpdateMemberMarkData
struct UPlayerSquadComponent_Client_UpdateMemberMarkData_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     mark3dlocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ismark;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerSquadComponent.Client_UpdateMemberHp
struct UPlayerSquadComponent_Client_UpdateMemberHp_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                hp;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerSquadComponent.Client_UpdateMemberDyingHP
struct UPlayerSquadComponent_Client_UpdateMemberDyingHP_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              dyingHp;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerSquadComponent.Client_UpdateMemberData
struct UPlayerSquadComponent_Client_UpdateMemberData_Params
{
	struct FSquadMemberData                            Data;                                                     // (ConstParm, Parm, ReferenceParm)
};

// Function WuXiaX.PlayerSquadComponent.Client_RemoveSquadData
struct UPlayerSquadComponent_Client_RemoveSquadData_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerSquadComponent.Client_InitSquad
struct UPlayerSquadComponent_Client_InitSquad_Params
{
	struct FString                                     squadid;                                                  // (Parm, ZeroConstructor)
};

// Function WuXiaX.PlayerSquadComponent.ChangeVision
struct UPlayerSquadComponent_ChangeVision_Params
{
	bool                                               isnext;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerStateComponent.ServerInitProperty
struct UPlayerStateComponent_ServerInitProperty_Params
{
};

// Function WuXiaX.PlayerStateComponent.Server_SetPlayerState
struct UPlayerStateComponent_Server_SetPlayerState_Params
{
	EPlayerGameState                                   State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerStateComponent.Server_EffectPlayerState
struct UPlayerStateComponent_Server_EffectPlayerState_Params
{
	EPlayerGameState                                   Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerStateComponent.Server_ChangePlayerChildState
struct UPlayerStateComponent_Server_ChangePlayerChildState_Params
{
	EPlayerFightState                                  State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              during;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerStateComponent.recover_child_state_time_FUNC
struct UPlayerStateComponent_recover_child_state_time_FUNC_Params
{
};

// Function WuXiaX.PlayerStateComponent.Player_state_net
struct UPlayerStateComponent_Player_state_net_Params
{
	EPlayerGameState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerStateComponent.OnRep_State_Other
struct UPlayerStateComponent_OnRep_State_Other_Params
{
};

// Function WuXiaX.PlayerStateComponent.OnRep_State
struct UPlayerStateComponent_OnRep_State_Params
{
};

// Function WuXiaX.PlayerStateComponent.GetPlayerMoveState
struct UPlayerStateComponent_GetPlayerMoveState_Params
{
	EPlayerMoveStateType                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerStateComponent.GetPlayerMotionState
struct UPlayerStateComponent_GetPlayerMotionState_Params
{
	EPlayerMotionState                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerStateComponent.GetPlayerChildState
struct UPlayerStateComponent_GetPlayerChildState_Params
{
	EPlayerFightState                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.PlayerStateComponent.ExitFight
struct UPlayerStateComponent_ExitFight_Params
{
};

// Function WuXiaX.PlayerStateComponent.Client_EffectPlayerState
struct UPlayerStateComponent_Client_EffectPlayerState_Params
{
	EPlayerGameState                                   Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerStateComponent.ChangePlayerState
struct UPlayerStateComponent_ChangePlayerState_Params
{
	EPlayerGameState                                   Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerStateComponent.ChangePlayerMoveState
struct UPlayerStateComponent_ChangePlayerMoveState_Params
{
	EPlayerMoveStateType                               Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerStateComponent.ChangePlayerMotionState
struct UPlayerStateComponent_ChangePlayerMotionState_Params
{
	EPlayerMotionState                                 Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PlayerStateComponent.ChangePlayerChildState
struct UPlayerStateComponent_ChangePlayerChildState_Params
{
	EPlayerFightState                                  Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PVPSelectUI.SetWeapon
struct UPVPSelectUI_SetWeapon_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                weaponid;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PVPSelectUI.SetUIWeapon
struct UPVPSelectUI_SetUIWeapon_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        skillids;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             skillnames;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UTexture2D*>                          skillicons;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.PVPSelectUI.SetUISkill
struct UPVPSelectUI_SetUISkill_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PVPSelectUI.SetUIRangeWeapon
struct UPVPSelectUI_SetUIRangeWeapon_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  consumablesicon;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PVPSelectUI.SetUIMissile
struct UPVPSelectUI_SetUIMissile_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PVPSelectUI.SetUIItem
struct UPVPSelectUI_SetUIItem_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PVPSelectUI.SetSkillHotKey
struct UPVPSelectUI_SetSkillHotKey_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       hotkeyname;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.PVPSelectUI.SetSkill
struct UPVPSelectUI_SetSkill_Params
{
	int                                                typeindex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                skillid;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PVPSelectUI.SetResurrectionInfo
struct UPVPSelectUI_SetResurrectionInfo_Params
{
	struct FResurrectionInfo                           Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.PVPSelectUI.SetItemHotKey
struct UPVPSelectUI_SetItemHotKey_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       hotkeyname;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.PVPSelectUI.SetItem
struct UPVPSelectUI_SetItem_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                itemID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.PVPSelectUI.SetHandSkills
struct UPVPSelectUI_SetHandSkills_Params
{
	TArray<int>                                        skillids;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             skillnames;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UTexture2D*>                          icons;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.PVPSelectUI.SaveChange
struct UPVPSelectUI_SaveChange_Params
{
};

// Function WuXiaX.PVPSelectUI.RandomSelect
struct UPVPSelectUI_RandomSelect_Params
{
};

// Function WuXiaX.PVPSelectUI.InitIcons
struct UPVPSelectUI_InitIcons_Params
{
	TArray<int>                                        skinids;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.PVPSelectUI.InitHotKeys
struct UPVPSelectUI_InitHotKeys_Params
{
};

// Function WuXiaX.PVPSelectUI.InitByInfo
struct UPVPSelectUI_InitByInfo_Params
{
	struct FResurrectionInfo                           Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.PVPSelectUI.InitAllEvents
struct UPVPSelectUI_InitAllEvents_Params
{
};

// Function WuXiaX.PVPSelectUI.CancelChange
struct UPVPSelectUI_CancelChange_Params
{
};

// Function WuXiaX.RoomChildUI.Init
struct URoomChildUI_Init_Params
{
	struct FUIRoomInfo                                 Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.RoomInfoWidget.WidgetGetRoomInfos
struct URoomInfoWidget_WidgetGetRoomInfos_Params
{
};

// Function WuXiaX.RoomInfoWidget.UpdatePlayer
struct URoomInfoWidget_UpdatePlayer_Params
{
	struct FRoomUser                                   Player;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.RoomInfoWidget.SetSelectPlayer
struct URoomInfoWidget_SetSelectPlayer_Params
{
	struct FRoomUser                                   Player;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.RoomInfoWidget.SetRoomInfo
struct URoomInfoWidget_SetRoomInfo_Params
{
	struct FUIRoomInfo                                 room_info;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                master_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FRoomUser>                           userinfos;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.RoomInfoWidget.RemovePlayer
struct URoomInfoWidget_RemovePlayer_Params
{
	struct FRoomUser                                   Player;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.RoomInfoWidget.PlayerBeenRemove
struct URoomInfoWidget_PlayerBeenRemove_Params
{
	struct FRoomUser                                   Player;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.RoomInfoWidget.PlayerBeenCreate
struct URoomInfoWidget_PlayerBeenCreate_Params
{
	struct FRoomUser                                   Player;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.RoomInfoWidget.GetMapName
struct URoomInfoWidget_GetMapName_Params
{
	int                                                map_id;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.RoomInfoWidget.DeletePlayer
struct URoomInfoWidget_DeletePlayer_Params
{
	int                                                player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.RoomInfoWidget.CreateTeamWidget
struct URoomInfoWidget_CreateTeamWidget_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               is_team;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.RoomInfoWidget.CreatePlayerComplete
struct URoomInfoWidget_CreatePlayerComplete_Params
{
};

// Function WuXiaX.RoomInfoWidget.CreatePlayer
struct URoomInfoWidget_CreatePlayer_Params
{
	struct FRoomUser                                   Player;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.RoomInfoWidget.ClearAll
struct URoomInfoWidget_ClearAll_Params
{
};

// Function WuXiaX.RoomTeamPlayerUI.UpdatePlayerInfo
struct URoomTeamPlayerUI_UpdatePlayerInfo_Params
{
	struct FRoomUser                                   Player;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                master_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               is_master;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.RoomTeamPlayerUI.SetSelectState
struct URoomTeamPlayerUI_SetSelectState_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.RoomTeamPlayerUI.ResetUserInfo
struct URoomTeamPlayerUI_ResetUserInfo_Params
{
};

// Function WuXiaX.RoomTeamPlayerUI.Remove
struct URoomTeamPlayerUI_Remove_Params
{
};

// Function WuXiaX.RoomTeamPlayerUI.Init
struct URoomTeamPlayerUI_Init_Params
{
	int                                                team_index;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	ERoleType                                          Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.RoomTeamUI.SortPlayer
struct URoomTeamUI_SortPlayer_Params
{
};

// Function WuXiaX.RoomTeamUI.SetSelectPlayer
struct URoomTeamUI_SetSelectPlayer_Params
{
	struct FRoomUser                                   Player;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class URoomTeamPlayerUI*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WuXiaX.RoomTeamUI.Init
struct URoomTeamUI_Init_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               is_team;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.RoomUI.SetInfo
struct URoomUI_SetInfo_Params
{
	struct FUIRoomInfo                                 Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.RoomUI.GetRoomStartTime
struct URoomUI_GetRoomStartTime_Params
{
	struct FString                                     room_id;                                                  // (Parm, ZeroConstructor)
	TArray<int>                                        Times;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function WuXiaX.RoomUI.GetMapInfo
struct URoomUI_GetMapInfo_Params
{
	int                                                map_id;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, OutParm, ZeroConstructor)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.ShowDebugComponent.UpdateVariables
struct UShowDebugComponent_UpdateVariables_Params
{
	TArray<struct FDebugVariable>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.ShowDebugWidget.OnVariablesUpdated
struct UShowDebugWidget_OnVariablesUpdated_Params
{
	TArray<struct FDebugVariable>                      VariablesList;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.SkillUI.Vertical
struct USkillUI_Vertical_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsDown;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.SkillUI.UseSkillWidget
struct USkillUI_UseSkillWidget_Params
{
};

// Function WuXiaX.SkillUI.UseSkill
struct USkillUI_UseSkill_Params
{
	int                                                skill_id;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                skill_type;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.SkillUI.UnEquipSkill
struct USkillUI_UnEquipSkill_Params
{
	ESkillEquipType                                    slottype;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                slotindex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.SkillUI.ShowUISkillDetail
struct USkillUI_ShowUISkillDetail_Params
{
	struct FUISkillInfo                                skillinfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.SkillUI.ShowSkillUI
struct USkillUI_ShowSkillUI_Params
{
};

// Function WuXiaX.SkillUI.SetSkillWeapon
struct USkillUI_SetSkillWeapon_Params
{
	ESkillEquipType                                    slottype;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                weapontype;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.SkillUI.SetSkillEquipState
struct USkillUI_SetSkillEquipState_Params
{
	TArray<int>                                        skillids;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.SkillUI.SetSkillBook
struct USkillUI_SetSkillBook_Params
{
	int                                                itemindex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                skillid;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                weapontype;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Description;                                              // (Parm, ZeroConstructor)
	class UTexture2D*                                  icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isenable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.SkillUI.SetPassiveSkill
struct USkillUI_SetPassiveSkill_Params
{
	TArray<struct FUISkillInfo>                        Info;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.SkillUI.SetActiveSkill
struct USkillUI_SetActiveSkill_Params
{
	TArray<struct FUISkillInfo>                        Info;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.SkillUI.SelectHoverSkill
struct USkillUI_SelectHoverSkill_Params
{
};

// Function WuXiaX.SkillUI.RemoveSkillBook
struct USkillUI_RemoveSkillBook_Params
{
	int                                                skillitemid;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.SkillUI.RemovePassiveSkill
struct USkillUI_RemovePassiveSkill_Params
{
	int                                                skillid;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.SkillUI.RemoveActiveSkill
struct USkillUI_RemoveActiveSkill_Params
{
	int                                                skillid;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.SkillUI.ReLoadConfigShow
struct USkillUI_ReLoadConfigShow_Params
{
};

// Function WuXiaX.SkillUI.NextLabel
struct USkillUI_NextLabel_Params
{
};

// Function WuXiaX.SkillUI.MarkHoverItem
struct USkillUI_MarkHoverItem_Params
{
	EGamepadMarkType                                   MarkType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.SkillUI.LastLabel
struct USkillUI_LastLabel_Params
{
};

// Function WuXiaX.SkillUI.InitPassiveSkill
struct USkillUI_InitPassiveSkill_Params
{
	TArray<struct FUISkillInfo>                        skillsinfo;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.SkillUI.InitAllEvent
struct USkillUI_InitAllEvent_Params
{
};

// Function WuXiaX.SkillUI.InitActiveSkill
struct USkillUI_InitActiveSkill_Params
{
	TArray<struct FUISkillInfo>                        skillsinfo;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.SkillUI.Init
struct USkillUI_Init_Params
{
};

// Function WuXiaX.SkillUI.Horizontal
struct USkillUI_Horizontal_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsRight;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.SkillUI.HideUISkillDetail
struct USkillUI_HideUISkillDetail_Params
{
};

// Function WuXiaX.SkillUI.HideSkillUI
struct USkillUI_HideSkillUI_Params
{
};

// Function WuXiaX.SkillUI.GamepadIntoWidget
struct USkillUI_GamepadIntoWidget_Params
{
};

// Function WuXiaX.SkillUI.EquipSkill
struct USkillUI_EquipSkill_Params
{
	ESkillEquipType                                    slottype;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                slotindex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isenable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.SkillUI.DropSkill
struct USkillUI_DropSkill_Params
{
};

// Function WuXiaX.SkillUI.ClearAllSkill
struct USkillUI_ClearAllSkill_Params
{
};

// Function WuXiaX.SkillUI.ChangeSkillCurrentWeapon
struct USkillUI_ChangeSkillCurrentWeapon_Params
{
	ESkillEquipType                                    equiptype;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.SkillUI.AutoShowSkillByWeapons
struct USkillUI_AutoShowSkillByWeapons_Params
{
	TArray<int>                                        weapons;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.SkillUI.AddPassiveSkill
struct USkillUI_AddPassiveSkill_Params
{
	int                                                skillid;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.SkillUI.AddActiveSkill
struct USkillUI_AddActiveSkill_Params
{
	int                                                skillid;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.SoldItemUI.ShowItemInfo
struct USoldItemUI_ShowItemInfo_Params
{
	int                                                money;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function WuXiaX.SoldItemUI.SetItemInfo
struct USoldItemUI_SetItemInfo_Params
{
	bool                                               is_item;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.StatisticsWidget.StartAnimation
struct UStatisticsWidget_StartAnimation_Params
{
};

// Function WuXiaX.StatisticsWidget.SortInfo
struct UStatisticsWidget_SortInfo_Params
{
	int                                                rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                kill;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                reward;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                rank_point;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                kill_point;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                damage_point;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                all_team_number;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.StatisticsWidget.SendComplainVideo
struct UStatisticsWidget_SendComplainVideo_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.StatisticsWidget.SendComplain
struct UStatisticsWidget_SendComplain_Params
{
	struct FString                                     player_name;                                              // (Parm, ZeroConstructor)
	TArray<int>                                        select;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     player_text;                                              // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.StatisticsWidget.RecordVideo
struct UStatisticsWidget_RecordVideo_Params
{
};

// Function WuXiaX.StatisticsWidget.ReConnect
struct UStatisticsWidget_ReConnect_Params
{
};

// Function WuXiaX.StatisticsWidget.OpenSummary
struct UStatisticsWidget_OpenSummary_Params
{
};

// Function WuXiaX.StatisticsWidget.GetSwordItem
struct UStatisticsWidget_GetSwordItem_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     item_name;                                                // (Parm, ZeroConstructor)
};

// Function WuXiaX.StatisticsWidget.GetSendedCount
struct UStatisticsWidget_GetSendedCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.StatisticsWidget.ActiveComplain
struct UStatisticsWidget_ActiveComplain_Params
{
};

// Function WuXiaX.StoreWidget.InitRandomBoxData
struct UStoreWidget_InitRandomBoxData_Params
{
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.StoreWidget.InitPreviewBoxData
struct UStoreWidget_InitPreviewBoxData_Params
{
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.StoreWidget.InitBuyKeys
struct UStoreWidget_InitBuyKeys_Params
{
};

// Function WuXiaX.StoreWidget.GetOpenBoxIcon
struct UStoreWidget_GetOpenBoxIcon_Params
{
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.StoreWidget.GetKeyPrice
struct UStoreWidget_GetKeyPrice_Params
{
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              price;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.StoreWidget.GetHallItemDetail
struct UStoreWidget_GetHallItemDetail_Params
{
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, OutParm, ZeroConstructor)
	struct FString                                     descript;                                                 // (Parm, OutParm, ZeroConstructor)
	struct FString                                     detail;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function WuXiaX.StoreWidget.GetConsumeInfo
struct UStoreWidget_GetConsumeInfo_Params
{
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               valid_item;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                consume_id;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               need_consume;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.StoreWidget.GetBoxNameAndCost
struct UStoreWidget_GetBoxNameAndCost_Params
{
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, OutParm, ZeroConstructor)
	int                                                cost;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.StoreWidget.GetBoxIcon
struct UStoreWidget_GetBoxIcon_Params
{
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.StoreWidget.GetBoxByTimeAWeek
struct UStoreWidget_GetBoxByTimeAWeek_Params
{
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.StoreWidget.CreateRandomBoxItem
struct UStoreWidget_CreateRandomBoxItem_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                parent_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.StoreWidget.CreateRandomBox
struct UStoreWidget_CreateRandomBox_Params
{
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.StoreWidget.CreatePreviewBoxItem
struct UStoreWidget_CreatePreviewBoxItem_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.StoreWidget.CreateBuyKey
struct UStoreWidget_CreateBuyKey_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                price_type;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              price;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.SystemMenuUI.Vertical
struct USystemMenuUI_Vertical_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsDown;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.SystemMenuUI.UseButtonRelease
struct USystemMenuUI_UseButtonRelease_Params
{
};

// Function WuXiaX.SystemMenuUI.SelectButtonRelease
struct USystemMenuUI_SelectButtonRelease_Params
{
};

// Function WuXiaX.SystemMenuUI.Open
struct USystemMenuUI_Open_Params
{
};

// Function WuXiaX.SystemMenuUI.NextLabel
struct USystemMenuUI_NextLabel_Params
{
};

// Function WuXiaX.SystemMenuUI.MarkHoverItem
struct USystemMenuUI_MarkHoverItem_Params
{
	EGamepadMarkType                                   MarkType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.SystemMenuUI.LastLabel
struct USystemMenuUI_LastLabel_Params
{
};

// Function WuXiaX.SystemMenuUI.Init
struct USystemMenuUI_Init_Params
{
};

// Function WuXiaX.SystemMenuUI.Horizontal
struct USystemMenuUI_Horizontal_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsRight;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.SystemMenuUI.GamepadIntoWidget
struct USystemMenuUI_GamepadIntoWidget_Params
{
};

// Function WuXiaX.SystemMenuUI.Drop
struct USystemMenuUI_Drop_Params
{
};

// Function WuXiaX.SystemMenuUI.CloseWidget
struct USystemMenuUI_CloseWidget_Params
{
};

// Function WuXiaX.Trap.OnRepTrapID
struct ATrap_OnRepTrapID_Params
{
};

// Function WuXiaX.Trap.OnOverlapBegin
struct ATrap_OnOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WuXiaX.Trap.Client_TriggerTrap
struct ATrap_Client_TriggerTrap_Params
{
};

// Function WuXiaX.Trap.Client_Init
struct ATrap_Client_Init_Params
{
	int64_t                                            trapid;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                launchplayerid;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.Trap.CallWhenDestroy
struct ATrap_CallWhenDestroy_Params
{
};

// Function WuXiaX.UserSettingWidget.SetVoiceMode
struct UUserSettingWidget_SetVoiceMode_Params
{
	int                                                Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SetVoiceMicVolume
struct UUserSettingWidget_SetVoiceMicVolume_Params
{
	int                                                Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SetMicMode
struct UUserSettingWidget_SetMicMode_Params
{
	int                                                micmode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SetGamma
struct UUserSettingWidget_SetGamma_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SaveWeaponShow
struct UUserSettingWidget_SaveWeaponShow_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SaveWalkSlowHabit
struct UUserSettingWidget_SaveWalkSlowHabit_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SaveWalkQuickHabit
struct UUserSettingWidget_SaveWalkQuickHabit_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SaveTotalQuality
struct UUserSettingWidget_SaveTotalQuality_Params
{
	int                                                Quality;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SaveTalkMode
struct UUserSettingWidget_SaveTalkMode_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SaveSquatHabit
struct UUserSettingWidget_SaveSquatHabit_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SaveSoundEffectVolumn
struct UUserSettingWidget_SaveSoundEffectVolumn_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SaveSoundEffectValid
struct UUserSettingWidget_SaveSoundEffectValid_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SaveScreenScale
struct UUserSettingWidget_SaveScreenScale_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SaveResolutionMode
struct UUserSettingWidget_SaveResolutionMode_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SavePostColorType
struct UUserSettingWidget_SavePostColorType_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SaveOutputVolumn
struct UUserSettingWidget_SaveOutputVolumn_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SaveOutputValid
struct UUserSettingWidget_SaveOutputValid_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SaveMotionBlurMode
struct UUserSettingWidget_SaveMotionBlurMode_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SaveMapHabit
struct UUserSettingWidget_SaveMapHabit_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SaveMainSoundVolumn
struct UUserSettingWidget_SaveMainSoundVolumn_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SaveMainSoundValid
struct UUserSettingWidget_SaveMainSoundValid_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SaveLookAroundHabit
struct UUserSettingWidget_SaveLookAroundHabit_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SaveLanguage
struct UUserSettingWidget_SaveLanguage_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SaveKeyStr
struct UUserSettingWidget_SaveKeyStr_Params
{
	struct FString                                     key_name;                                                 // (Parm, ZeroConstructor)
	struct FInputChord                                 Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.UserSettingWidget.SaveInterfaceVolumn
struct UUserSettingWidget_SaveInterfaceVolumn_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SaveInterfaceValid
struct UUserSettingWidget_SaveInterfaceValid_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SaveInputVolumn
struct UUserSettingWidget_SaveInputVolumn_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SaveInputValid
struct UUserSettingWidget_SaveInputValid_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SaveGamma
struct UUserSettingWidget_SaveGamma_Params
{
	int                                                Gamma;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SaveFoliageQuality
struct UUserSettingWidget_SaveFoliageQuality_Params
{
	int                                                Quality;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SaveDressShow
struct UUserSettingWidget_SaveDressShow_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SaveCharacterRender
struct UUserSettingWidget_SaveCharacterRender_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SaveCameraChangeMode
struct UUserSettingWidget_SaveCameraChangeMode_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SaveBgSoundVolumn
struct UUserSettingWidget_SaveBgSoundVolumn_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SaveBgSoundValid
struct UUserSettingWidget_SaveBgSoundValid_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SaveAudioChannel
struct UUserSettingWidget_SaveAudioChannel_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.SaveAchromatopsiaMode
struct UUserSettingWidget_SaveAchromatopsiaMode_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.ResetWindowPosition
struct UUserSettingWidget_ResetWindowPosition_Params
{
};

// Function WuXiaX.UserSettingWidget.GetWeaponShow
struct UUserSettingWidget_GetWeaponShow_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetWalkSlowHabit
struct UUserSettingWidget_GetWalkSlowHabit_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetWalkQuickHabit
struct UUserSettingWidget_GetWalkQuickHabit_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetTotalQuality
struct UUserSettingWidget_GetTotalQuality_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetTalkMode
struct UUserSettingWidget_GetTalkMode_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetSquatHabit
struct UUserSettingWidget_GetSquatHabit_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetSoundEffectVolumn
struct UUserSettingWidget_GetSoundEffectVolumn_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetSoundEffectValid
struct UUserSettingWidget_GetSoundEffectValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetScreenScale
struct UUserSettingWidget_GetScreenScale_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetSaveKeyStr
struct UUserSettingWidget_GetSaveKeyStr_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.UserSettingWidget.GetResolutionMode
struct UUserSettingWidget_GetResolutionMode_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetPostColorType
struct UUserSettingWidget_GetPostColorType_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetOutputVolumn
struct UUserSettingWidget_GetOutputVolumn_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetOutputValid
struct UUserSettingWidget_GetOutputValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetMotionBlurMode
struct UUserSettingWidget_GetMotionBlurMode_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetMapHabit
struct UUserSettingWidget_GetMapHabit_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetMainSoundVolumn
struct UUserSettingWidget_GetMainSoundVolumn_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetMainSoundValid
struct UUserSettingWidget_GetMainSoundValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetMainMonitorResolution
struct UUserSettingWidget_GetMainMonitorResolution_Params
{
	struct FIntPoint                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetLookAroundHabit
struct UUserSettingWidget_GetLookAroundHabit_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetLanguage
struct UUserSettingWidget_GetLanguage_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetKeyString
struct UUserSettingWidget_GetKeyString_Params
{
	struct FInputChord                                 Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.UserSettingWidget.GetInterfaceVolumn
struct UUserSettingWidget_GetInterfaceVolumn_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetInterfaceValid
struct UUserSettingWidget_GetInterfaceValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetInputVolumn
struct UUserSettingWidget_GetInputVolumn_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetInputValid
struct UUserSettingWidget_GetInputValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetGamma
struct UUserSettingWidget_GetGamma_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetFoliageQuality
struct UUserSettingWidget_GetFoliageQuality_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetEasyKeyStr
struct UUserSettingWidget_GetEasyKeyStr_Params
{
	struct FInputChord                                 Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.UserSettingWidget.GetDressShow
struct UUserSettingWidget_GetDressShow_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetCharacterRender
struct UUserSettingWidget_GetCharacterRender_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetCameraChangeMode
struct UUserSettingWidget_GetCameraChangeMode_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetBgSoundVolumn
struct UUserSettingWidget_GetBgSoundVolumn_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetBgSoundValid
struct UUserSettingWidget_GetBgSoundValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetAudioChannel
struct UUserSettingWidget_GetAudioChannel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.GetAchromatopsiaMode
struct UUserSettingWidget_GetAchromatopsiaMode_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.EffectLanguage
struct UUserSettingWidget_EffectLanguage_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.CallWeaponShow
struct UUserSettingWidget_CallWeaponShow_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.CallTalkMode
struct UUserSettingWidget_CallTalkMode_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.CallPostColor
struct UUserSettingWidget_CallPostColor_Params
{
	struct FColor                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.CallOutputVolumn
struct UUserSettingWidget_CallOutputVolumn_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.CallInputVolumn
struct UUserSettingWidget_CallInputVolumn_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.CallDressShow
struct UUserSettingWidget_CallDressShow_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.CallCharacterRender
struct UUserSettingWidget_CallCharacterRender_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.UserSettingWidget.CallAudioChannel
struct UUserSettingWidget_CallAudioChannel_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXia_AnimInstance.WuXia_Montage_Play
struct UWuXia_AnimInstance_WuXia_Montage_Play_Params
{
	class UAnimMontage*                                MontageToPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              delay_time;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       section_name;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXia_AnimInstance.CurrentMontageSlotPlay
struct UWuXia_AnimInstance_CurrentMontageSlotPlay_Params
{
	struct FString                                     slot_node_name;                                           // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXia_AnimInstance.CurrentGroupMontageSlotPlay
struct UWuXia_AnimInstance_CurrentGroupMontageSlotPlay_Params
{
	struct FString                                     group_name;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXia_Movement_Component.UpdateMovementSpeed_v2
struct UWuXia_Movement_Component_UpdateMovementSpeed_v2_Params
{
	bool                                               walk_flag;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               spring_flag;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               block_flag;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               aim_flag;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               update_server_or_client;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXia_Movement_Component.UpdateMovementSettingsEvent
struct UWuXia_Movement_Component_UpdateMovementSettingsEvent_Params
{
	float                                              max_acceleration;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              braking_deceleration_walking;                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ground_friction;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              jump_z_velocity;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXia_Movement_Component.UpdateInput
struct UWuXia_Movement_Component_UpdateInput_Params
{
	EPlayerMoveInputState                              Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXia_Movement_Component.SwitchMovementModeEvent
struct UWuXia_Movement_Component_SwitchMovementModeEvent_Params
{
	TEnumAsByte<EMovementMode>                         movement_mode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXia_Movement_Component.SetReferences
struct UWuXia_Movement_Component_SetReferences_Params
{
};

// Function WuXiaX.WuXia_Movement_Component.SetPlayerMovementsSwimAxisValues
struct UWuXia_Movement_Component_SetPlayerMovementsSwimAxisValues_Params
{
	float                                              up_axis;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXia_Movement_Component.SetPlayerMovementAxisValues
struct UWuXia_Movement_Component_SetPlayerMovementAxisValues_Params
{
	float                                              forward_axis;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              right_axis;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXia_Movement_Component.SetMovementInputVectorOnServer
struct UWuXia_Movement_Component_SetMovementInputVectorOnServer_Params
{
	struct FVector                                     movment_input_vector;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXia_Movement_Component.SetMovementInputVectorEvent
struct UWuXia_Movement_Component_SetMovementInputVectorEvent_Params
{
	struct FVector                                     movment_input_vector;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXia_Movement_Component.SetDefaultSettings
struct UWuXia_Movement_Component_SetDefaultSettings_Params
{
};

// Function WuXiaX.WuXia_Movement_Component.Server_WallJump
struct UWuXia_Movement_Component_Server_WallJump_Params
{
};

// Function WuXiaX.WuXia_Movement_Component.Server_UpdateParachuteInput
struct UWuXia_Movement_Component_Server_UpdateParachuteInput_Params
{
	float                                              Right;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Forward;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXia_Movement_Component.Server_UpdateMovementSpeed_True
struct UWuXia_Movement_Component_Server_UpdateMovementSpeed_True_Params
{
	bool                                               walk_flag;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               spring_flag;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               block_flag;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               aim_flag;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               update_server_or_client;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXia_Movement_Component.Server_UpdateFreeview
struct UWuXia_Movement_Component_Server_UpdateFreeview_Params
{
	bool                                               free_view;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXia_Movement_Component.Server_SetMoveState
struct UWuXia_Movement_Component_Server_SetMoveState_Params
{
	struct FPlayerMoveState                            Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               update_speed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               update_client_speed;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXia_Movement_Component.Server_ChangeQingGongState
struct UWuXia_Movement_Component_Server_ChangeQingGongState_Params
{
	EPlayerMotionState                                 State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXia_Movement_Component.PlayerSwimInputEvent
struct UWuXia_Movement_Component_PlayerSwimInputEvent_Params
{
	float                                              up_axis;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXia_Movement_Component.PlayerMovementInputEvent
struct UWuXia_Movement_Component_PlayerMovementInputEvent_Params
{
	float                                              forward_axis;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              right_axis;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotate;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXia_Movement_Component.Movement_input_vector_net
struct UWuXia_Movement_Component_Movement_input_vector_net_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXia_Movement_Component.LandTimeEnd
struct UWuXia_Movement_Component_LandTimeEnd_Params
{
};

// Function WuXiaX.WuXia_Movement_Component.LandEvent
struct UWuXia_Movement_Component_LandEvent_Params
{
};

// Function WuXiaX.WuXia_Movement_Component.Clinet_ChangeJumpPlaneState
struct UWuXia_Movement_Component_Clinet_ChangeJumpPlaneState_Params
{
	bool                                               CanJump;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXia_Movement_Component.Client_UpdateSpeed
struct UWuXia_Movement_Component_Client_UpdateSpeed_Params
{
	int                                                change;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXia_Movement_Component.Client_UpdateMovementSpeed_v2
struct UWuXia_Movement_Component_Client_UpdateMovementSpeed_v2_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaInteractiveActor.OnStateUpdate
struct AWuXiaInteractiveActor_OnStateUpdate_Params
{
};

// Function WuXiaX.WuXiaInteractiveActor.InteractiveUITips
struct AWuXiaInteractiveActor_InteractiveUITips_Params
{
	class AWuXiaXCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaInteractiveActor.Interactive
struct AWuXiaInteractiveActor_Interactive_Params
{
};

// Function WuXiaX.WuXiaInteractiveActor.GetStandAndLookLocation
struct AWuXiaInteractiveActor_GetStandAndLookLocation_Params
{
	struct FVector                                     playerlocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     standlocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LookAtLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaInteractiveActor.GetSpawnTargetTransform
struct AWuXiaInteractiveActor_GetSpawnTargetTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaInteractiveActor.GetMovePassInfo
struct AWuXiaInteractiveActor_GetMovePassInfo_Params
{
	struct FVector                                     playerlocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     playervelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     beginlocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaInteractiveActor.GetInteractiveType
struct AWuXiaInteractiveActor_GetInteractiveType_Params
{
	class AWuXiaXCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EInteractiveType                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaInteractiveActor.CanInteractive
struct AWuXiaInteractiveActor_CanInteractive_Params
{
	class AWuXiaXCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	ETriggerInteractiveType                            Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaInteractiveActor.BreakKeepInteractive
struct AWuXiaInteractiveActor_BreakKeepInteractive_Params
{
};

// Function WuXiaX.WuXiaInteractiveActor.BeginKeepInteractive
struct AWuXiaInteractiveActor_BeginKeepInteractive_Params
{
};

// Function WuXiaX.WuXiaMiniMapWidget.UpdatePlayerRotator
struct UWuXiaMiniMapWidget_UpdatePlayerRotator_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaMiniMapWidget.UpdatePlayerMark3DLocation
struct UWuXiaMiniMapWidget_UpdatePlayerMark3DLocation_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaMiniMapWidget.UpdatePlayerLocation
struct UWuXiaMiniMapWidget_UpdatePlayerLocation_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaMiniMapWidget.StartFly
struct UWuXiaMiniMapWidget_StartFly_Params
{
	struct FVector                                     Start;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaMiniMapWidget.SetBasebackGround
struct UWuXiaMiniMapWidget_SetBasebackGround_Params
{
};

// Function WuXiaX.WuXiaMiniMapWidget.ResourceMapElement
struct UWuXiaMiniMapWidget_ResourceMapElement_Params
{
	int                                                Key;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaMiniMapWidget.RemoveActorLocation
struct UWuXiaMiniMapWidget_RemoveActorLocation_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaMiniMapWidget.PrepareForDrawing
struct UWuXiaMiniMapWidget_PrepareForDrawing_Params
{
};

// Function WuXiaX.WuXiaMiniMapWidget.InitTeamPlayer
struct UWuXiaMiniMapWidget_InitTeamPlayer_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                teammode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaMiniMapWidget.Init
struct UWuXiaMiniMapWidget_Init_Params
{
	struct FVector2D                                   original_level_size;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   original_map_size;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   show_map_size;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  chinese_map;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  english_map;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               can_mark;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaMiniMapWidget.GetPositionByVector3
struct UWuXiaMiniMapWidget_GetPositionByVector3_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaMiniMapWidget.GetPosition3D
struct UWuXiaMiniMapWidget_GetPosition3D_Params
{
	struct FVector2D                                   Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaMiniMapWidget.GetPlayerPositionInMiniMap
struct UWuXiaMiniMapWidget_GetPlayerPositionInMiniMap_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaMiniMapWidget.GetPlayerPosition
struct UWuXiaMiniMapWidget_GetPlayerPosition_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaMiniMapWidget.GetPlaneRotatorYaw
struct UWuXiaMiniMapWidget_GetPlaneRotatorYaw_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaMiniMapWidget.GetPlanePosition
struct UWuXiaMiniMapWidget_GetPlanePosition_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaMiniMapWidget.ForeachResourceMap
struct UWuXiaMiniMapWidget_ForeachResourceMap_Params
{
	TMap<int, struct FVector>                          resources;                                                // (ConstParm, Parm, ZeroConstructor)
};

// Function WuXiaX.WuXiaMiniMapWidget.ForeachBuffInfoMap
struct UWuXiaMiniMapWidget_ForeachBuffInfoMap_Params
{
	TMap<int, struct FBuffPointInfo>                   buffinfos;                                                // (ConstParm, Parm, ZeroConstructor)
};

// Function WuXiaX.WuXiaMiniMapWidget.EndFly
struct UWuXiaMiniMapWidget_EndFly_Params
{
};

// Function WuXiaX.WuXiaMiniMapWidget.DeleteTeamPlayerMarkState
struct UWuXiaMiniMapWidget_DeleteTeamPlayerMarkState_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaMiniMapWidget.ClearTeamPlayer
struct UWuXiaMiniMapWidget_ClearTeamPlayer_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaMiniMapWidget.CheckActorLocation
struct UWuXiaMiniMapWidget_CheckActorLocation_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaMiniMapWidget.CallDrawCricle
struct UWuXiaMiniMapWidget_CallDrawCricle_Params
{
};

// Function WuXiaX.WuXiaMiniMapWidget.BuffInfoMapElement
struct UWuXiaMiniMapWidget_BuffInfoMapElement_Params
{
	int                                                Key;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FBuffPointInfo                              Value;                                                    // (ConstParm, Parm)
};

// Function WuXiaX.WuXiaParadrop.StopSound
struct AWuXiaParadrop_StopSound_Params
{
};

// Function WuXiaX.WuXiaParadrop.PlaySound
struct AWuXiaParadrop_PlaySound_Params
{
};

// Function WuXiaX.WuXiaParadrop.InteractiveUITips
struct AWuXiaParadrop_InteractiveUITips_Params
{
	class AWuXiaXCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaParadrop.GetInteractiveType
struct AWuXiaParadrop_GetInteractiveType_Params
{
	class AWuXiaXCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EInteractiveType                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaParadrop.CanInteractive
struct AWuXiaParadrop_CanInteractive_Params
{
	class AWuXiaXCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	ETriggerInteractiveType                            Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaPVPResourcesActor.OnTeamIDUpdate
struct AWuXiaPVPResourcesActor_OnTeamIDUpdate_Params
{
};

// Function WuXiaX.WuXiaPVPResourcesActor.OnInteractive
struct AWuXiaPVPResourcesActor_OnInteractive_Params
{
};

// Function WuXiaX.WuXiaWinActor.ShowWinNumber
struct AWuXiaWinActor_ShowWinNumber_Params
{
};

// Function WuXiaX.WuXiaWinActor.OnWinNumberUpdate
struct AWuXiaWinActor_OnWinNumberUpdate_Params
{
};

// Function WuXiaX.WuXiaWinActor.OnInteractive
struct AWuXiaWinActor_OnInteractive_Params
{
};

// Function WuXiaX.WuXiaXBaseCharacter.SetPlayerUniqueId
struct AWuXiaXBaseCharacter_SetPlayerUniqueId_Params
{
	int                                                Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXBaseCharacter.SetPlayerType
struct AWuXiaXBaseCharacter_SetPlayerType_Params
{
	EGameCharactType                                   Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXBaseCharacter.OnPlayUNIDNotice
struct AWuXiaXBaseCharacter_OnPlayUNIDNotice_Params
{
};

// Function WuXiaX.WuXiaXBaseCharacter.OnPlayTypeNotice
struct AWuXiaXBaseCharacter_OnPlayTypeNotice_Params
{
};

// Function WuXiaX.WuXiaXBaseCharacter.GetPlayerUniqueId
struct AWuXiaXBaseCharacter_GetPlayerUniqueId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXBaseCharacter.GetPlayerType
struct AWuXiaXBaseCharacter_GetPlayerType_Params
{
	EGameCharactType                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXBaseCharacter.GetMiddleComponent
struct AWuXiaXBaseCharacter_GetMiddleComponent_Params
{
	class UComponentMiddle*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WuXiaX.WuXiaXBaseCharacter.GetGameComponent
struct AWuXiaXBaseCharacter_GetGameComponent_Params
{
	EGameComponentType                                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.TreasureOpenSuccess
struct AWuXiaXCharacter_TreasureOpenSuccess_Params
{
};

// Function WuXiaX.WuXiaXCharacter.SwitchStealth
struct AWuXiaXCharacter_SwitchStealth_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.SwitchSprinting
struct AWuXiaXCharacter_SwitchSprinting_Params
{
};

// Function WuXiaX.WuXiaXCharacter.SwitchSex
struct AWuXiaXCharacter_SwitchSex_Params
{
};

// Function WuXiaX.WuXiaXCharacter.SpawnAIPlayerOnServer
struct AWuXiaXCharacter_SpawnAIPlayerOnServer_Params
{
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.SkeletalMeshComponentCreate
struct AWuXiaXCharacter_SkeletalMeshComponentCreate_Params
{
	EPlayerLoadType                                    Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.ShowSwordEffect
struct AWuXiaXCharacter_ShowSwordEffect_Params
{
};

// Function WuXiaX.WuXiaXCharacter.ShowLockTargetUI
struct AWuXiaXCharacter_ShowLockTargetUI_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.ShowAssassinationTipUI
struct AWuXiaXCharacter_ShowAssassinationTipUI_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.ShowAnimus
struct AWuXiaXCharacter_ShowAnimus_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.SetVoiceMode
struct AWuXiaXCharacter_SetVoiceMode_Params
{
	int                                                Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.SetKiller
struct AWuXiaXCharacter_SetKiller_Params
{
	struct FDeadlyInfo                                 Target;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.WuXiaXCharacter.SetInteractive
struct AWuXiaXCharacter_SetInteractive_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.SetCollisonMoveEnable
struct AWuXiaXCharacter_SetCollisonMoveEnable_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.SetCameraLocation
struct AWuXiaXCharacter_SetCameraLocation_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.SetBlockState
struct AWuXiaXCharacter_SetBlockState_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.SetBlackScreenState
struct AWuXiaXCharacter_SetBlackScreenState_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.SetAlwaysTalk
struct AWuXiaXCharacter_SetAlwaysTalk_Params
{
	bool                                               isalways;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.SetAimState
struct AWuXiaXCharacter_SetAimState_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.Server_UpdateDamageCircle
struct AWuXiaXCharacter_Server_UpdateDamageCircle_Params
{
};

// Function WuXiaX.WuXiaXCharacter.Server_SwitchSex
struct AWuXiaXCharacter_Server_SwitchSex_Params
{
};

// Function WuXiaX.WuXiaXCharacter.Server_SetResurrectionInfo
struct AWuXiaXCharacter_Server_SetResurrectionInfo_Params
{
	struct FResurrectionInfo                           Info;                                                     // (ConstParm, Parm, ReferenceParm)
};

// Function WuXiaX.WuXiaXCharacter.Server_OpenParachute
struct AWuXiaXCharacter_Server_OpenParachute_Params
{
};

// Function WuXiaX.WuXiaXCharacter.Server_LianTiao
struct AWuXiaXCharacter_Server_LianTiao_Params
{
	bool                                               is_in_lian_tiao;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                lian_tiao_index;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.Server_JumPlane
struct AWuXiaXCharacter_Server_JumPlane_Params
{
};

// Function WuXiaX.WuXiaXCharacter.Server_ChangeVoiceIgnoreState
struct AWuXiaXCharacter_Server_ChangeVoiceIgnoreState_Params
{
	bool                                               isbeignore;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.SendBuffPointToHUD
struct AWuXiaXCharacter_SendBuffPointToHUD_Params
{
};

// Function WuXiaX.WuXiaXCharacter.RunServerAI
struct AWuXiaXCharacter_RunServerAI_Params
{
};

// Function WuXiaX.WuXiaXCharacter.ReconnectUpdate
struct AWuXiaXCharacter_ReconnectUpdate_Params
{
};

// Function WuXiaX.WuXiaXCharacter.PlayWeakChangeEffect
struct AWuXiaXCharacter_PlayWeakChangeEffect_Params
{
	bool                                               isweak;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.PlayerInitLocation
struct AWuXiaXCharacter_PlayerInitLocation_Params
{
};

// Function WuXiaX.WuXiaXCharacter.Player_net_id
struct AWuXiaXCharacter_Player_net_id_Params
{
	int                                                Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.PlayClientAttackEffect
struct AWuXiaXCharacter_PlayClientAttackEffect_Params
{
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.PlayBlockEffect
struct AWuXiaXCharacter_PlayBlockEffect_Params
{
};

// Function WuXiaX.WuXiaXCharacter.PlayBeAttackEffect
struct AWuXiaXCharacter_PlayBeAttackEffect_Params
{
};

// Function WuXiaX.WuXiaXCharacter.PlayAttackEffect
struct AWuXiaXCharacter_PlayAttackEffect_Params
{
};

// Function WuXiaX.WuXiaXCharacter.OnRepSkinColorIdSelf
struct AWuXiaXCharacter_OnRepSkinColorIdSelf_Params
{
};

// Function WuXiaX.WuXiaXCharacter.OnRepSkinColorId
struct AWuXiaXCharacter_OnRepSkinColorId_Params
{
};

// Function WuXiaX.WuXiaXCharacter.OnRepSexTypeSelf
struct AWuXiaXCharacter_OnRepSexTypeSelf_Params
{
};

// Function WuXiaX.WuXiaXCharacter.OnRepSexType
struct AWuXiaXCharacter_OnRepSexType_Params
{
};

// Function WuXiaX.WuXiaXCharacter.OnRepPlayerName
struct AWuXiaXCharacter_OnRepPlayerName_Params
{
};

// Function WuXiaX.WuXiaXCharacter.OnRepHairIdSelf
struct AWuXiaXCharacter_OnRepHairIdSelf_Params
{
};

// Function WuXiaX.WuXiaXCharacter.OnRepHairId
struct AWuXiaXCharacter_OnRepHairId_Params
{
};

// Function WuXiaX.WuXiaXCharacter.OnRepHairColorIdSelf
struct AWuXiaXCharacter_OnRepHairColorIdSelf_Params
{
};

// Function WuXiaX.WuXiaXCharacter.OnRepHairColorId
struct AWuXiaXCharacter_OnRepHairColorId_Params
{
};

// Function WuXiaX.WuXiaXCharacter.OnRepFaceIdSelf
struct AWuXiaXCharacter_OnRepFaceIdSelf_Params
{
};

// Function WuXiaX.WuXiaXCharacter.OnRepFaceId
struct AWuXiaXCharacter_OnRepFaceId_Params
{
};

// Function WuXiaX.WuXiaXCharacter.OnRepEquipSkinIdSelf
struct AWuXiaXCharacter_OnRepEquipSkinIdSelf_Params
{
};

// Function WuXiaX.WuXiaXCharacter.OnRepEquipSkinId
struct AWuXiaXCharacter_OnRepEquipSkinId_Params
{
};

// Function WuXiaX.WuXiaXCharacter.OnRepEffect
struct AWuXiaXCharacter_OnRepEffect_Params
{
};

// Function WuXiaX.WuXiaXCharacter.OnRepAnimusIndexSelf
struct AWuXiaXCharacter_OnRepAnimusIndexSelf_Params
{
};

// Function WuXiaX.WuXiaXCharacter.OnRepAnimusIndex
struct AWuXiaXCharacter_OnRepAnimusIndex_Params
{
};

// Function WuXiaX.WuXiaXCharacter.OnPlayNetNotice
struct AWuXiaXCharacter_OnPlayNetNotice_Params
{
};

// Function WuXiaX.WuXiaXCharacter.OnPlayerTargetSwitchOverlapEnd
struct AWuXiaXCharacter_OnPlayerTargetSwitchOverlapEnd_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.OnPlayerTargetSwitchOverlapBegin
struct AWuXiaXCharacter_OnPlayerTargetSwitchOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.OnPlayerStateChange
struct AWuXiaXCharacter_OnPlayerStateChange_Params
{
	EPlayerGameState                                   NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.OnPlayerAroundOverlapEnd
struct AWuXiaXCharacter_OnPlayerAroundOverlapEnd_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.OnPlayerAroundOverlapBegin
struct AWuXiaXCharacter_OnPlayerAroundOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.MoveRight
struct AWuXiaXCharacter_MoveRight_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.MoveForward
struct AWuXiaXCharacter_MoveForward_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.MissileHitTarget
struct AWuXiaXCharacter_MissileHitTarget_Params
{
};

// Function WuXiaX.WuXiaXCharacter.LoadComplete
struct AWuXiaXCharacter_LoadComplete_Params
{
};

// Function WuXiaX.WuXiaXCharacter.LeaveCahnnel
struct AWuXiaXCharacter_LeaveCahnnel_Params
{
};

// Function WuXiaX.WuXiaXCharacter.JoinChannel
struct AWuXiaXCharacter_JoinChannel_Params
{
	struct FString                                     lpChannelName;                                            // (Parm, ZeroConstructor)
	TArray<int>                                        teams;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.WuXiaXCharacter.IsPressKeyAction
struct AWuXiaXCharacter_IsPressKeyAction_Params
{
	struct FName                                       key_name;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               can_input;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.IsLaunchingWithAIFlag
struct AWuXiaXCharacter_IsLaunchingWithAIFlag_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.IsDeath
struct AWuXiaXCharacter_IsDeath_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.Is_free_view_net
struct AWuXiaXCharacter_Is_free_view_net_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.InteractiveUITips
struct AWuXiaXCharacter_InteractiveUITips_Params
{
	class AWuXiaXCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.InteractiveButtonDown
struct AWuXiaXCharacter_InteractiveButtonDown_Params
{
};

// Function WuXiaX.WuXiaXCharacter.InitBuffPoint
struct AWuXiaXCharacter_InitBuffPoint_Params
{
	TArray<int>                                        indexs;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<struct FBuffPointInfo>                      Info;                                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.WuXiaXCharacter.HideSwordEffect
struct AWuXiaXCharacter_HideSwordEffect_Params
{
};

// Function WuXiaX.WuXiaXCharacter.HideLockTargetUI
struct AWuXiaXCharacter_HideLockTargetUI_Params
{
};

// Function WuXiaX.WuXiaXCharacter.HideAssassinationTipUI
struct AWuXiaXCharacter_HideAssassinationTipUI_Params
{
};

// Function WuXiaX.WuXiaXCharacter.HasTarget
struct AWuXiaXCharacter_HasTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.GetWeaponMeshCompoent
struct AWuXiaXCharacter_GetWeaponMeshCompoent_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.GetWeaponComponent
struct AWuXiaXCharacter_GetWeaponComponent_Params
{
	int                                                Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.GetTargetRotator
struct AWuXiaXCharacter_GetTargetRotator_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.GetSkillsComponent
struct AWuXiaXCharacter_GetSkillsComponent_Params
{
	class UPlayerSkillsComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.GetNeedPressHabit
struct AWuXiaXCharacter_GetNeedPressHabit_Params
{
	struct FString                                     Name;                                                     // (ConstParm, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.GetKiller
struct AWuXiaXCharacter_GetKiller_Params
{
	struct FDeadlyInfo                                 ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function WuXiaX.WuXiaXCharacter.GetItemCtrlComp
struct AWuXiaXCharacter_GetItemCtrlComp_Params
{
	class UPlayerItemCtrlComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.GetInteractiveType
struct AWuXiaXCharacter_GetInteractiveType_Params
{
	class AWuXiaXCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EInteractiveType                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.GetHostIP
struct AWuXiaXCharacter_GetHostIP_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.WuXiaXCharacter.GetBodyMeshCompByType
struct AWuXiaXCharacter_GetBodyMeshCompByType_Params
{
	EPlayerLoadType                                    Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.GetBagMeshComp
struct AWuXiaXCharacter_GetBagMeshComp_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.FreeViewTurnBack
struct AWuXiaXCharacter_FreeViewTurnBack_Params
{
};

// Function WuXiaX.WuXiaXCharacter.FreeViewStopTurnBack
struct AWuXiaXCharacter_FreeViewStopTurnBack_Params
{
};

// Function WuXiaX.WuXiaXCharacter.DestroyPlane
struct AWuXiaXCharacter_DestroyPlane_Params
{
};

// Function WuXiaX.WuXiaXCharacter.CreatePlane
struct AWuXiaXCharacter_CreatePlane_Params
{
	struct FVector                                     beginlocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            begintime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.Control_Jump
struct AWuXiaXCharacter_Control_Jump_Params
{
};

// Function WuXiaX.WuXiaXCharacter.Control_Interactive
struct AWuXiaXCharacter_Control_Interactive_Params
{
};

// Function WuXiaX.WuXiaXCharacter.Control_ClearTarget
struct AWuXiaXCharacter_Control_ClearTarget_Params
{
};

// Function WuXiaX.WuXiaXCharacter.Control_AutoSprinting
struct AWuXiaXCharacter_Control_AutoSprinting_Params
{
};

// Function WuXiaX.WuXiaXCharacter.Clinet_RemoveVoiceIgnorePlayer
struct AWuXiaXCharacter_Clinet_RemoveVoiceIgnorePlayer_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.Clinet_OffThePlane
struct AWuXiaXCharacter_Clinet_OffThePlane_Params
{
};

// Function WuXiaX.WuXiaXCharacter.Clinet_AddVoiceIgnorePlayer
struct AWuXiaXCharacter_Clinet_AddVoiceIgnorePlayer_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.Client_UpdateDyingState
struct AWuXiaXCharacter_Client_UpdateDyingState_Params
{
};

// Function WuXiaX.WuXiaXCharacter.Client_UpdateDamageCircle
struct AWuXiaXCharacter_Client_UpdateDamageCircle_Params
{
	int64_t                                            begintime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EDamageCircleState                                 CurrentState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            waittingtime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            shringkingtime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            currentradius;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            nextradius;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            clocationX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            clocationY;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            clocationZ;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            nlocationX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            nlocationY;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            nlocationZ;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.Client_SortInfo
struct AWuXiaXCharacter_Client_SortInfo_Params
{
	int                                                rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                kill;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                reward;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                rank_point;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                kill_point;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                damage_point;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                deadly_item_id;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	ECauseDyingType                                    deadly_reason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                all_team_number;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	EGameSquadMode                                     GameMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.Client_SetResurrectionInfo
struct AWuXiaXCharacter_Client_SetResurrectionInfo_Params
{
	struct FResurrectionInfo                           Info;                                                     // (ConstParm, Parm, ReferenceParm)
};

// Function WuXiaX.WuXiaXCharacter.Client_Record
struct AWuXiaXCharacter_Client_Record_Params
{
	int64_t                                            kill_time;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.Client_ReconnectSpawnParadrop
struct AWuXiaXCharacter_Client_ReconnectSpawnParadrop_Params
{
	TArray<struct FVector>                             Locations;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Ids;                                                      // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.WuXiaXCharacter.Client_ClearTarget
struct AWuXiaXCharacter_Client_ClearTarget_Params
{
};

// Function WuXiaX.WuXiaXCharacter.Client_AddLoadMap
struct AWuXiaXCharacter_Client_AddLoadMap_Params
{
	bool                                               isloadmap;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Maps;                                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.WuXiaXCharacter.CheckLockPointDeath
struct AWuXiaXCharacter_CheckLockPointDeath_Params
{
	class AActor*                                      Enemy;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.CharDestroy
struct AWuXiaXCharacter_CharDestroy_Params
{
};

// Function WuXiaX.WuXiaXCharacter.ChangeEquip
struct AWuXiaXCharacter_ChangeEquip_Params
{
	EBagType                                           bag_type;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.ChangeBuffState
struct AWuXiaXCharacter_ChangeBuffState_Params
{
	int                                                buff_index;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBuffPointInfo                              buff_state;                                               // (Parm)
};

// Function WuXiaX.WuXiaXCharacter.CanInteractive
struct AWuXiaXCharacter_CanInteractive_Params
{
	class AWuXiaXCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	ETriggerInteractiveType                            Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.CanInput
struct AWuXiaXCharacter_CanInput_Params
{
	EPlayerInputType                                   input_type;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.Bom_Montage_Play
struct AWuXiaXCharacter_Bom_Montage_Play_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimMontage*                                MontageToPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              delay_time;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       section_name;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.Anim_EndParachuteGliding
struct AWuXiaXCharacter_Anim_EndParachuteGliding_Params
{
};

// Function WuXiaX.WuXiaXCharacter.Anim_EndEffect
struct AWuXiaXCharacter_Anim_EndEffect_Params
{
	int                                                effecttype;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.Anim_BeginParachuteGliding
struct AWuXiaXCharacter_Anim_BeginParachuteGliding_Params
{
};

// Function WuXiaX.WuXiaXCharacter.Anim_BeginParachueJump
struct AWuXiaXCharacter_Anim_BeginParachueJump_Params
{
};

// Function WuXiaX.WuXiaXCharacter.Anim_BeginEffect
struct AWuXiaXCharacter_Anim_BeginEffect_Params
{
	int                                                effecttype;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.AI_MoveTargetCharacter
struct AWuXiaXCharacter_AI_MoveTargetCharacter_Params
{
	int                                                Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              nearby;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.AI_MoveCharacter
struct AWuXiaXCharacter_AI_MoveCharacter_Params
{
	struct FVector                                     posc;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              nearby;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.AI_LookAt
struct AWuXiaXCharacter_AI_LookAt_Params
{
	struct FVector                                     posc;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXCharacter.AI_GetAllHorse
struct AWuXiaXCharacter_AI_GetAllHorse_Params
{
	TArray<struct FVector>                             posc;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function WuXiaX.WuXiaXCharacter.AI_CancelMove
struct AWuXiaXCharacter_AI_CancelMove_Params
{
};

// Function WuXiaX.WuXiaXCharacter.AddSkin
struct AWuXiaXCharacter_AddSkin_Params
{
	int                                                skin_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuxiaXCharBaseInterface.PlayerInteractiveComponent
struct UWuxiaXCharBaseInterface_PlayerInteractiveComponent_Params
{
	class UPlayerInteractiveComponent*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WuXiaX.WuxiaXCharBaseInterface.Player_broadcast
struct UWuxiaXCharBaseInterface_Player_broadcast_Params
{
	class UPlayerBroadcastComponent*                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.ZeroTextState
struct AWuXiaXHUD_ZeroTextState_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.Vertical
struct AWuXiaXHUD_Vertical_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsDown;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.UseWidget
struct AWuXiaXHUD_UseWidget_Params
{
};

// Function WuXiaX.WuXiaXHUD.UseItemHotKey
struct AWuXiaXHUD_UseItemHotKey_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.UpdateWeaponStateEffect
struct AWuXiaXHUD_UpdateWeaponStateEffect_Params
{
	int                                                weaponindex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  effecticon;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.UpdateTeamPointInfo
struct AWuXiaXHUD_UpdateTeamPointInfo_Params
{
	int                                                red;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                blue;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                green;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.UpdateTeamPlayerState
struct AWuXiaXHUD_UpdateTeamPlayerState_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ETeamPlayerState                                   new_state;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.UpdateTeamPlayerHPPercent
struct AWuXiaXHUD_UpdateTeamPlayerHPPercent_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.UpdateTeamPlayerDyingHPPercent
struct AWuXiaXHUD_UpdateTeamPlayerDyingHPPercent_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.UpdateSortInfo
struct AWuXiaXHUD_UpdateSortInfo_Params
{
	int                                                rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                kill;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                reward;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                rank_point;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                kill_point;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                damage_point;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                all_team_number;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.UpdateSkillsGCD
struct AWuXiaXHUD_UpdateSkillsGCD_Params
{
	float                                              cdtime;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.UpdateSkillHotKeyMaxCD
struct AWuXiaXHUD_UpdateSkillHotKeyMaxCD_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              skillcd;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.UpdateSkillHotKeyCurrentCD
struct AWuXiaXHUD_UpdateSkillHotKeyCurrentCD_Params
{
	int                                                skill_id;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.UpdateSatiety
struct AWuXiaXHUD_UpdateSatiety_Params
{
	float                                              satietyvalue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.UpdatePlayerState
struct AWuXiaXHUD_UpdatePlayerState_Params
{
	EPlayerGameState                                   new_state;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.UpdatePlayerRotator
struct AWuXiaXHUD_UpdatePlayerRotator_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.UpdatePlayerMark3DLocation
struct AWuXiaXHUD_UpdatePlayerMark3DLocation_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.UpdatePlayerLocation
struct AWuXiaXHUD_UpdatePlayerLocation_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.UpdateOxygen
struct AWuXiaXHUD_UpdateOxygen_Params
{
	float                                              oxygen;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.UpdateMp
struct AWuXiaXHUD_UpdateMp_Params
{
	float                                              currentMP;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              currentmaxMP;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              maxMP;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.UpdateMoisture
struct AWuXiaXHUD_UpdateMoisture_Params
{
	float                                              moisture;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.UpdateLiveData
struct AWuXiaXHUD_UpdateLiveData_Params
{
	int                                                LIVE;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.UpdateKillData
struct AWuXiaXHUD_UpdateKillData_Params
{
	int                                                allkill;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.UpdateItemNumber
struct AWuXiaXHUD_UpdateItemNumber_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.UpdateItemHotKeyNumbers
struct AWuXiaXHUD_UpdateItemHotKeyNumbers_Params
{
};

// Function WuXiaX.WuXiaXHUD.UpdateInjury
struct AWuXiaXHUD_UpdateInjury_Params
{
	float                                              injury;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.UpdateHorseSpeed
struct AWuXiaXHUD_UpdateHorseSpeed_Params
{
	float                                              current_speed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.UpdateHorsePower
struct AWuXiaXHUD_UpdateHorsePower_Params
{
	float                                              current_power;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              max_power;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.UpdateFightHp
struct AWuXiaXHUD_UpdateFightHp_Params
{
	float                                              currentHP;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              maxHP;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.UpdateDyingHp
struct AWuXiaXHUD_UpdateDyingHp_Params
{
	float                                              currentHP;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              maxHP;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.UpdateDrugValue
struct AWuXiaXHUD_UpdateDrugValue_Params
{
	float                                              drugvalue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.UpdateDrug
struct AWuXiaXHUD_UpdateDrug_Params
{
	float                                              drugvalue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.UpdateCompass
struct AWuXiaXHUD_UpdateCompass_Params
{
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.UnBindItemUIEvent
struct AWuXiaXHUD_UnBindItemUIEvent_Params
{
};

// Function WuXiaX.WuXiaXHUD.TryShowInvntoryWidget
struct AWuXiaXHUD_TryShowInvntoryWidget_Params
{
};

// Function WuXiaX.WuXiaXHUD.SwitchUserSettingOB
struct AWuXiaXHUD_SwitchUserSettingOB_Params
{
};

// Function WuXiaX.WuXiaXHUD.SwitchUserSetting
struct AWuXiaXHUD_SwitchUserSetting_Params
{
};

// Function WuXiaX.WuXiaXHUD.SwitchUOBStatisticsWidgetUI
struct AWuXiaXHUD_SwitchUOBStatisticsWidgetUI_Params
{
	TArray<struct FOBStasticsInfo>                     result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function WuXiaX.WuXiaXHUD.SwitchToNextWidget
struct AWuXiaXHUD_SwitchToNextWidget_Params
{
};

// Function WuXiaX.WuXiaXHUD.SwitchStastics
struct AWuXiaXHUD_SwitchStastics_Params
{
};

// Function WuXiaX.WuXiaXHUD.SwitchSkill
struct AWuXiaXHUD_SwitchSkill_Params
{
};

// Function WuXiaX.WuXiaXHUD.SwitchOBTargetViewUI
struct AWuXiaXHUD_SwitchOBTargetViewUI_Params
{
};

// Function WuXiaX.WuXiaXHUD.SwitchOBOverviewUI
struct AWuXiaXHUD_SwitchOBOverviewUI_Params
{
};

// Function WuXiaX.WuXiaXHUD.SwitchOBMap
struct AWuXiaXHUD_SwitchOBMap_Params
{
};

// Function WuXiaX.WuXiaXHUD.SwitchMap
struct AWuXiaXHUD_SwitchMap_Params
{
};

// Function WuXiaX.WuXiaXHUD.SwitchItemBag
struct AWuXiaXHUD_SwitchItemBag_Params
{
};

// Function WuXiaX.WuXiaXHUD.SortSoundActor
struct AWuXiaXHUD_SortSoundActor_Params
{
	TArray<class ACheckSoundActor*>                    Actors;                                                   // (Parm, ZeroConstructor)
};

// Function WuXiaX.WuXiaXHUD.ShowWarning
struct AWuXiaXHUD_ShowWarning_Params
{
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
};

// Function WuXiaX.WuXiaXHUD.ShowWaitResurrection
struct AWuXiaXHUD_ShowWaitResurrection_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.ShowSkillDetail
struct AWuXiaXHUD_ShowSkillDetail_Params
{
	int                                                skillid;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.ShowParachuteUI
struct AWuXiaXHUD_ShowParachuteUI_Params
{
};

// Function WuXiaX.WuXiaXHUD.ShowOxygen
struct AWuXiaXHUD_ShowOxygen_Params
{
};

// Function WuXiaX.WuXiaXHUD.ShowOpenParachuteTips
struct AWuXiaXHUD_ShowOpenParachuteTips_Params
{
};

// Function WuXiaX.WuXiaXHUD.ShowMainInterfaceUI
struct AWuXiaXHUD_ShowMainInterfaceUI_Params
{
};

// Function WuXiaX.WuXiaXHUD.ShowLowHPEffect
struct AWuXiaXHUD_ShowLowHPEffect_Params
{
};

// Function WuXiaX.WuXiaXHUD.ShowJumpPlanTips
struct AWuXiaXHUD_ShowJumpPlanTips_Params
{
};

// Function WuXiaX.WuXiaXHUD.ShowJueKongUI
struct AWuXiaXHUD_ShowJueKongUI_Params
{
	int                                                maxnumber;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.ShowJueKongInMap
struct AWuXiaXHUD_ShowJueKongInMap_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.ShowItemDetail
struct AWuXiaXHUD_ShowItemDetail_Params
{
	struct FUIItemInfo                                 UIItemInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.WuXiaXHUD.ShowInteractive
struct AWuXiaXHUD_ShowInteractive_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.WuXiaXHUD.ShowHallWidget
struct AWuXiaXHUD_ShowHallWidget_Params
{
	struct FString                                     player_name;                                              // (Parm, ZeroConstructor)
};

// Function WuXiaX.WuXiaXHUD.ShowCrossHair
struct AWuXiaXHUD_ShowCrossHair_Params
{
};

// Function WuXiaX.WuXiaXHUD.ShowCheckSoundLocation
struct AWuXiaXHUD_ShowCheckSoundLocation_Params
{
	TArray<int>                                        Ids;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             Locations;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.WuXiaXHUD.SetZeroTimer
struct AWuXiaXHUD_SetZeroTimer_Params
{
	int                                                Timer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.SetWeight
struct AWuXiaXHUD_SetWeight_Params
{
	int                                                maxweight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Weight;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.SetWeaponState
struct AWuXiaXHUD_SetWeaponState_Params
{
	int                                                weaponindex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  effecticon;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  weaponicon;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.SetTeamPlayerShowMode
struct AWuXiaXHUD_SetTeamPlayerShowMode_Params
{
	int                                                teammode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.SetStatisticsItem
struct AWuXiaXHUD_SetStatisticsItem_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     item_name;                                                // (Parm, ZeroConstructor)
};

// Function WuXiaX.WuXiaXHUD.SetSplitItemButton
struct AWuXiaXHUD_SetSplitItemButton_Params
{
	bool                                               isbottondown;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.SetSkillHotKey
struct AWuXiaXHUD_SetSkillHotKey_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                skill_id;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              skillcd;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canuse;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.SetSkillEquipState
struct AWuXiaXHUD_SetSkillEquipState_Params
{
	TArray<int>                                        skills;                                                   // (Parm, ZeroConstructor)
};

// Function WuXiaX.WuXiaXHUD.SetSkillBookEnable
struct AWuXiaXHUD_SetSkillBookEnable_Params
{
	int                                                itemindex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.SetSkillBook
struct AWuXiaXHUD_SetSkillBook_Params
{
	int                                                itemindex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                skillid;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                weapontype;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Description;                                              // (Parm, ZeroConstructor)
	class UTexture2D*                                  icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isenable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.SetSkill
struct AWuXiaXHUD_SetSkill_Params
{
	ESkillEquipType                                    slottype;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                slotindex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            skillid;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               iscurrentweapon;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.SetSelfContinuousKillNumber
struct AWuXiaXHUD_SetSelfContinuousKillNumber_Params
{
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.SetResurrectionInfo
struct AWuXiaXHUD_SetResurrectionInfo_Params
{
	struct FResurrectionInfo                           Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.WuXiaXHUD.SetResourceInfo
struct AWuXiaXHUD_SetResourceInfo_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.SetPVPGameTime
struct AWuXiaXHUD_SetPVPGameTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.SetPlayerStasticsTeamInfo
struct AWuXiaXHUD_SetPlayerStasticsTeamInfo_Params
{
	TArray<struct FStasticsInfo>                       reds;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FStasticsInfo>                       greens;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FStasticsInfo>                       blues;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.WuXiaXHUD.SetPlayerName
struct AWuXiaXHUD_SetPlayerName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function WuXiaX.WuXiaXHUD.SetPlayerAssist
struct AWuXiaXHUD_SetPlayerAssist_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.SetOxygenWidgetState
struct AWuXiaXHUD_SetOxygenWidgetState_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.SetMainInterfaceState
struct AWuXiaXHUD_SetMainInterfaceState_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.SetMainGameWidgetState
struct AWuXiaXHUD_SetMainGameWidgetState_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.SetLoadingUIState
struct AWuXiaXHUD_SetLoadingUIState_Params
{
	float                                              percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.SetKeepActionTime
struct AWuXiaXHUD_SetKeepActionTime_Params
{
	float                                              current_time;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.SetJueKongWaitTime
struct AWuXiaXHUD_SetJueKongWaitTime_Params
{
	int                                                waittime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.SetJueKongCanWinNumber
struct AWuXiaXHUD_SetJueKongCanWinNumber_Params
{
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.SetItemHotKey
struct AWuXiaXHUD_SetItemHotKey_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.SetItem
struct AWuXiaXHUD_SetItem_Params
{
	EBagType                                           bagtype;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                itemtype;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  dragicon;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.SetHorseState
struct AWuXiaXHUD_SetHorseState_Params
{
	bool                                               NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.SetDurableValue
struct AWuXiaXHUD_SetDurableValue_Params
{
	EBagType                                           bag_type;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                armor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.SetDragItemInfo
struct AWuXiaXHUD_SetDragItemInfo_Params
{
	int                                                itemnumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                pickid;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.SetBuffInfo
struct AWuXiaXHUD_SetBuffInfo_Params
{
	TMap<int, struct FBuffPointInfo>                   buff_info;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.WuXiaXHUD.SetBuff
struct AWuXiaXHUD_SetBuff_Params
{
	int64_t                                            buffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                numberoflayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.ResourcesPointTeamChange
struct AWuXiaXHUD_ResourcesPointTeamChange_Params
{
	int                                                resourcesindex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.RemoveWeaponState
struct AWuXiaXHUD_RemoveWeaponState_Params
{
	int                                                weaponindex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.RemoveSound
struct AWuXiaXHUD_RemoveSound_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.RemoveSkillBook
struct AWuXiaXHUD_RemoveSkillBook_Params
{
	int                                                itemindex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.RemoveItem
struct AWuXiaXHUD_RemoveItem_Params
{
	EBagType                                           bagtype;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.RemoveBuff
struct AWuXiaXHUD_RemoveBuff_Params
{
	int                                                buffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.ReleaseSwitchMap
struct AWuXiaXHUD_ReleaseSwitchMap_Params
{
};

// Function WuXiaX.WuXiaXHUD.PlayWeapon
struct AWuXiaXHUD_PlayWeapon_Params
{
};

// Function WuXiaX.WuXiaXHUD.PlayProp
struct AWuXiaXHUD_PlayProp_Params
{
};

// Function WuXiaX.WuXiaXHUD.PlayItemSound
struct AWuXiaXHUD_PlayItemSound_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.PlayerLockToOther
struct AWuXiaXHUD_PlayerLockToOther_Params
{
};

// Function WuXiaX.WuXiaXHUD.PlayerDeath
struct AWuXiaXHUD_PlayerDeath_Params
{
};

// Function WuXiaX.WuXiaXHUD.PlayEquip
struct AWuXiaXHUD_PlayEquip_Params
{
};

// Function WuXiaX.WuXiaXHUD.PlayBook
struct AWuXiaXHUD_PlayBook_Params
{
};

// Function WuXiaX.WuXiaXHUD.PickUpSuccess
struct AWuXiaXHUD_PickUpSuccess_Params
{
};

// Function WuXiaX.WuXiaXHUD.PickUpOverWeight
struct AWuXiaXHUD_PickUpOverWeight_Params
{
};

// Function WuXiaX.WuXiaXHUD.PickGetItem
struct AWuXiaXHUD_PickGetItem_Params
{
	int                                                item_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               learned;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.OnSkinsUpdate
struct AWuXiaXHUD_OnSkinsUpdate_Params
{
};

// Function WuXiaX.WuXiaXHUD.NextLabel
struct AWuXiaXHUD_NextLabel_Params
{
};

// Function WuXiaX.WuXiaXHUD.MissileHitTarget
struct AWuXiaXHUD_MissileHitTarget_Params
{
};

// Function WuXiaX.WuXiaXHUD.MarkWidget
struct AWuXiaXHUD_MarkWidget_Params
{
	EGamepadMarkType                                   MarkType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.MapShowActorLocation
struct AWuXiaXHUD_MapShowActorLocation_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.MapScale
struct AWuXiaXHUD_MapScale_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.MapHideActorLocation
struct AWuXiaXHUD_MapHideActorLocation_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.LeftMouseButtonRelease
struct AWuXiaXHUD_LeftMouseButtonRelease_Params
{
};

// Function WuXiaX.WuXiaXHUD.LastLabel
struct AWuXiaXHUD_LastLabel_Params
{
};

// Function WuXiaX.WuXiaXHUD.IsInitTeamPlayer
struct AWuXiaXHUD_IsInitTeamPlayer_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.InitTeamPlayer
struct AWuXiaXHUD_InitTeamPlayer_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                teammode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.InitSystemMenuUIEvents
struct AWuXiaXHUD_InitSystemMenuUIEvents_Params
{
};

// Function WuXiaX.WuXiaXHUD.InitStatisticsUIEvents
struct AWuXiaXHUD_InitStatisticsUIEvents_Params
{
};

// Function WuXiaX.WuXiaXHUD.InitSkillUIEvents
struct AWuXiaXHUD_InitSkillUIEvents_Params
{
};

// Function WuXiaX.WuXiaXHUD.InitMapUIEvents
struct AWuXiaXHUD_InitMapUIEvents_Params
{
};

// Function WuXiaX.WuXiaXHUD.InitMainGameUIEvents
struct AWuXiaXHUD_InitMainGameUIEvents_Params
{
};

// Function WuXiaX.WuXiaXHUD.InitBagUIEvents
struct AWuXiaXHUD_InitBagUIEvents_Params
{
};

// Function WuXiaX.WuXiaXHUD.Horizontal
struct AWuXiaXHUD_Horizontal_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsRight;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.HideWaitResurrection
struct AWuXiaXHUD_HideWaitResurrection_Params
{
};

// Function WuXiaX.WuXiaXHUD.HideParachuteUI
struct AWuXiaXHUD_HideParachuteUI_Params
{
};

// Function WuXiaX.WuXiaXHUD.HideOxygen
struct AWuXiaXHUD_HideOxygen_Params
{
};

// Function WuXiaX.WuXiaXHUD.HideOpenParachuteTips
struct AWuXiaXHUD_HideOpenParachuteTips_Params
{
};

// Function WuXiaX.WuXiaXHUD.HideMainInterfaceUI
struct AWuXiaXHUD_HideMainInterfaceUI_Params
{
};

// Function WuXiaX.WuXiaXHUD.HideLowHPEffect
struct AWuXiaXHUD_HideLowHPEffect_Params
{
};

// Function WuXiaX.WuXiaXHUD.HideJumpPlanTips
struct AWuXiaXHUD_HideJumpPlanTips_Params
{
};

// Function WuXiaX.WuXiaXHUD.HideJueKongUI
struct AWuXiaXHUD_HideJueKongUI_Params
{
};

// Function WuXiaX.WuXiaXHUD.HideInteractive
struct AWuXiaXHUD_HideInteractive_Params
{
};

// Function WuXiaX.WuXiaXHUD.HideCrossHair
struct AWuXiaXHUD_HideCrossHair_Params
{
};

// Function WuXiaX.WuXiaXHUD.GetWeaponSocketName
struct AWuXiaXHUD_GetWeaponSocketName_Params
{
	int                                                weaponindex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       name1;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       name2;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.GetUOBStatisticsWidgetUI
struct AWuXiaXHUD_GetUOBStatisticsWidgetUI_Params
{
	class UOBStatisticsWidget*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.GetSystemMenuWidget
struct AWuXiaXHUD_GetSystemMenuWidget_Params
{
	class USystemMenuUI*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.GetStatisticsWidget
struct AWuXiaXHUD_GetStatisticsWidget_Params
{
	class UStatisticsWidget*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.GetSkillWidget
struct AWuXiaXHUD_GetSkillWidget_Params
{
	class USkillUI*                                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.GetPlayerSkinIds
struct AWuXiaXHUD_GetPlayerSkinIds_Params
{
	TArray<int>                                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.WuXiaXHUD.GetPickIdByIndex
struct AWuXiaXHUD_GetPickIdByIndex_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.GetOBTargetViewUI
struct AWuXiaXHUD_GetOBTargetViewUI_Params
{
	class UOBTargetViewUI*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.GetOBOverviewUI
struct AWuXiaXHUD_GetOBOverviewUI_Params
{
	class UOBOverviewUI*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.GetOBMapUI
struct AWuXiaXHUD_GetOBMapUI_Params
{
	class UOBMapUI*                                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.GetMapWidget
struct AWuXiaXHUD_GetMapWidget_Params
{
	class UWuXiaMiniMapWidget*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.GetMainGameWidget
struct AWuXiaXHUD_GetMainGameWidget_Params
{
	class UMainGameUI*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.GetLocalCharacter
struct AWuXiaXHUD_GetLocalCharacter_Params
{
	class AWuXiaXCharacter*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.GetLoadingWidget
struct AWuXiaXHUD_GetLoadingWidget_Params
{
	class ULoadingUI*                                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.GetKeepActionWidget
struct AWuXiaXHUD_GetKeepActionWidget_Params
{
	class UKeepActionUI*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.GetIndexByPickId
struct AWuXiaXHUD_GetIndexByPickId_Params
{
	int                                                pickid;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.GetCurUIState
struct AWuXiaXHUD_GetCurUIState_Params
{
	EPlayerGameUIState                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.GetCurrentUIState
struct AWuXiaXHUD_GetCurrentUIState_Params
{
	EPlayerGameUIState                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.GetCurrentCD
struct AWuXiaXHUD_GetCurrentCD_Params
{
	int                                                skill_id;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.GetBagWidget
struct AWuXiaXHUD_GetBagWidget_Params
{
	class UBagUI*                                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.GetAllHotKey
struct AWuXiaXHUD_GetAllHotKey_Params
{
	TArray<struct FString>                             hotkeys;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function WuXiaX.WuXiaXHUD.GamePlayerTalk
struct AWuXiaXHUD_GamePlayerTalk_Params
{
	int                                                player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.GamepadIntoWidget
struct AWuXiaXHUD_GamepadIntoWidget_Params
{
};

// Function WuXiaX.WuXiaXHUD.EndKeepAction
struct AWuXiaXHUD_EndKeepAction_Params
{
};

// Function WuXiaX.WuXiaXHUD.EndFly
struct AWuXiaXHUD_EndFly_Params
{
};

// Function WuXiaX.WuXiaXHUD.Drop
struct AWuXiaXHUD_Drop_Params
{
};

// Function WuXiaX.WuXiaXHUD.DeleteTeamPlayerMarkState
struct AWuXiaXHUD_DeleteTeamPlayerMarkState_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.CreateStatisticsUI
struct AWuXiaXHUD_CreateStatisticsUI_Params
{
};

// Function WuXiaX.WuXiaXHUD.CloseWidget
struct AWuXiaXHUD_CloseWidget_Params
{
	bool                                               is_set;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.ClearTeamPlayerName
struct AWuXiaXHUD_ClearTeamPlayerName_Params
{
	int                                                PlayerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.ClearSkillHotKey
struct AWuXiaXHUD_ClearSkillHotKey_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.ClearItemHotKey
struct AWuXiaXHUD_ClearItemHotKey_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.ClearInventory
struct AWuXiaXHUD_ClearInventory_Params
{
};

// Function WuXiaX.WuXiaXHUD.ClearBuffs
struct AWuXiaXHUD_ClearBuffs_Params
{
};

// Function WuXiaX.WuXiaXHUD.ClearBlood
struct AWuXiaXHUD_ClearBlood_Params
{
};

// Function WuXiaX.WuXiaXHUD.ClearAllSkill
struct AWuXiaXHUD_ClearAllSkill_Params
{
};

// Function WuXiaX.WuXiaXHUD.ChangeSkillCurrentWeapon
struct AWuXiaXHUD_ChangeSkillCurrentWeapon_Params
{
	ESkillEquipType                                    equiptype;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.ChangePlayerGameUIState
struct AWuXiaXHUD_ChangePlayerGameUIState_Params
{
	EPlayerGameUIState                                 NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.ChangeGameUIState
struct AWuXiaXHUD_ChangeGameUIState_Params
{
	EPlayerGameUIState                                 NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.ChangeEquipWeapon
struct AWuXiaXHUD_ChangeEquipWeapon_Params
{
	ESkillEquipType                                    slottype;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            weaponid;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                currentweapontype1;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                currentweapontype2;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.ChangeCurrentWeapon
struct AWuXiaXHUD_ChangeCurrentWeapon_Params
{
	int                                                weaponindex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.CanPlayerInput
struct AWuXiaXHUD_CanPlayerInput_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.CanNotShooter
struct AWuXiaXHUD_CanNotShooter_Params
{
};

// Function WuXiaX.WuXiaXHUD.CanNotEquipItem
struct AWuXiaXHUD_CanNotEquipItem_Params
{
};

// Function WuXiaX.WuXiaXHUD.BP_ShowDamageCircle
struct AWuXiaXHUD_BP_ShowDamageCircle_Params
{
};

// Function WuXiaX.WuXiaXHUD.BP_SetShakingCircle
struct AWuXiaXHUD_BP_SetShakingCircle_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.BP_SetNextCircle
struct AWuXiaXHUD_BP_SetNextCircle_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.BP_SetCurrentCircle
struct AWuXiaXHUD_BP_SetCurrentCircle_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.BP_HideDamageCircle
struct AWuXiaXHUD_BP_HideDamageCircle_Params
{
};

// Function WuXiaX.WuXiaXHUD.BindItemUIEvent
struct AWuXiaXHUD_BindItemUIEvent_Params
{
	class UPlayerItemCtrlComponent*                    itemctrl;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.BeginKeepAction
struct AWuXiaXHUD_BeginKeepAction_Params
{
	float                                              actiontime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.BeginFly
struct AWuXiaXHUD_BeginFly_Params
{
	struct FVector                                     Start;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.AppendShutDown
struct AWuXiaXHUD_AppendShutDown_Params
{
	struct FString                                     killname;                                                 // (Parm, ZeroConstructor)
	struct FString                                     deadname;                                                 // (Parm, ZeroConstructor)
	int                                                kill_num;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.AppendFirstBlood
struct AWuXiaXHUD_AppendFirstBlood_Params
{
	struct FString                                     playername;                                               // (Parm, ZeroConstructor)
	struct FString                                     deadname;                                                 // (Parm, ZeroConstructor)
};

// Function WuXiaX.WuXiaXHUD.AppendContinuousKillInfo
struct AWuXiaXHUD_AppendContinuousKillInfo_Params
{
	struct FString                                     playername;                                               // (Parm, ZeroConstructor)
	int                                                killnumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.AddSkill
struct AWuXiaXHUD_AddSkill_Params
{
	int                                                skillid;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHUD.AddBloodByDamage
struct AWuXiaXHUD_AddBloodByDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXDLDHUD.SetContinuousKillNumber
struct AWuXiaXDLDHUD_SetContinuousKillNumber_Params
{
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXDLDHUD.GetPVPSelectWidget
struct AWuXiaXDLDHUD_GetPVPSelectWidget_Params
{
	class UPVPSelectUI*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WuXiaX.WuXiaXDLDHUD.DLD_UpdateKillData
struct AWuXiaXDLDHUD_DLD_UpdateKillData_Params
{
	int                                                allkill;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXDLDHUD.DLD_PlayerSortInfo
struct AWuXiaXDLDHUD_DLD_PlayerSortInfo_Params
{
	int                                                rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                kill;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                reward;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                rank_point;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                kill_point;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                damage_point;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                all_team_number;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXGameInstance.ShowReconnectFailed
struct UWuXiaXGameInstance_ShowReconnectFailed_Params
{
};

// Function WuXiaX.WuXiaXGameInstance.SendComplainVideo
struct UWuXiaXGameInstance_SendComplainVideo_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXGameInstance.SendComplainInfo
struct UWuXiaXGameInstance_SendComplainInfo_Params
{
	struct FString                                     player_name;                                              // (Parm, ZeroConstructor)
	TArray<int>                                        select;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     player_text;                                              // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXGameInstance.ReconnectFailed
struct UWuXiaXGameInstance_ReconnectFailed_Params
{
};

// Function WuXiaX.WuXiaXGameInstance.ReConnect
struct UWuXiaXGameInstance_ReConnect_Params
{
};

// Function WuXiaX.WuXiaXGameInstance.OutPutPlayerAnimus
struct UWuXiaXGameInstance_OutPutPlayerAnimus_Params
{
};

// Function WuXiaX.WuXiaXGameInstance.OpenGame
struct UWuXiaXGameInstance_OpenGame_Params
{
};

// Function WuXiaX.WuXiaXGameInstance.NetDebugPing
struct UWuXiaXGameInstance_NetDebugPing_Params
{
};

// Function WuXiaX.WuXiaXGameInstance.NetDebugLoginUser
struct UWuXiaXGameInstance_NetDebugLoginUser_Params
{
	struct FString                                     user;                                                     // (Parm, ZeroConstructor)
	struct FString                                     PassWord;                                                 // (Parm, ZeroConstructor)
};

// Function WuXiaX.WuXiaXGameInstance.NetDebugConnectIp
struct UWuXiaXGameInstance_NetDebugConnectIp_Params
{
	struct FString                                     Ip;                                                       // (Parm, ZeroConstructor)
	int                                                Port;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXGameInstance.Net_actor
struct UWuXiaXGameInstance_Net_actor_Params
{
	class AActor*                                      Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXGameInstance.LostConnect
struct UWuXiaXGameInstance_LostConnect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXGameInstance.HandleNetworkFailure
struct UWuXiaXGameInstance_HandleNetworkFailure_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UNetDriver*                                  NetDriver;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetworkFailure>                       FailureType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ErrorString;                                              // (Parm, ZeroConstructor)
};

// Function WuXiaX.WuXiaXGameInstance.GetVideoSendCount
struct UWuXiaXGameInstance_GetVideoSendCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXGameInstance.GetVerNum
struct UWuXiaXGameInstance_GetVerNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXGameInstance.GetServerLocalName
struct UWuXiaXGameInstance_GetServerLocalName_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WuXiaX.WuXiaXGameInstance.GetNetActor
struct UWuXiaXGameInstance_GetNetActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXGameInstance.CreateAIPlayer
struct UWuXiaXGameInstance_CreateAIPlayer_Params
{
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXGameInstance.CompalinReconnect
struct UWuXiaXGameInstance_CompalinReconnect_Params
{
};

// Function WuXiaX.WuXiaXGameInstance.CanReconnect
struct UWuXiaXGameInstance_CanReconnect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXGameModeBase.RegisterPlayer
struct AWuXiaXGameModeBase_RegisterPlayer_Params
{
	class AWuXiaXCharacter*                            avatar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXGameModeBase.RefreshPick
struct AWuXiaXGameModeBase_RefreshPick_Params
{
};

// Function WuXiaX.WuXiaXGameModeBase.RefreshHorse
struct AWuXiaXGameModeBase_RefreshHorse_Params
{
};

// Function WuXiaX.WuXiaXGameModeBase.KickPlayer
struct AWuXiaXGameModeBase_KickPlayer_Params
{
	int                                                player_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       KickReason;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WuXiaX.WuXiaXGameModeBase.BeginpParadrop
struct AWuXiaXGameModeBase_BeginpParadrop_Params
{
};

// Function WuXiaX.WuXiaXGameStateBase.SetGameLoginId
struct AWuXiaXGameStateBase_SetGameLoginId_Params
{
};

// Function WuXiaX.WuXiaXGameStateBase.OnRepLiveNum
struct AWuXiaXGameStateBase_OnRepLiveNum_Params
{
};

// Function WuXiaX.WuXiaXGameStateBase.Mul_WinActorLeave
struct AWuXiaXGameStateBase_Mul_WinActorLeave_Params
{
};

// Function WuXiaX.WuXiaXGameStateBase.Mul_UpdateCanWinNumber
struct AWuXiaXGameStateBase_Mul_UpdateCanWinNumber_Params
{
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXGameStateBase.Mul_TeamPointInfo
struct AWuXiaXGameStateBase_Mul_TeamPointInfo_Params
{
	int                                                red;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                blue;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                green;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXGameStateBase.Mul_SpawnParadrop
struct AWuXiaXGameStateBase_Mul_SpawnParadrop_Params
{
	int64_t                                            begintime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     beginlocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                globalID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXGameStateBase.Mul_SetPVPGameTime
struct AWuXiaXGameStateBase_Mul_SetPVPGameTime_Params
{
	int64_t                                            start_time;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXGameStateBase.Mul_ResourcesPointTeamChange
struct AWuXiaXGameStateBase_Mul_ResourcesPointTeamChange_Params
{
	int                                                resourcesindex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXGameStateBase.Mul_RemovePlayerAnimus
struct AWuXiaXGameStateBase_Mul_RemovePlayerAnimus_Params
{
	int64_t                                            player_list;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXGameStateBase.Mul_PlayerAnimus
struct AWuXiaXGameStateBase_Mul_PlayerAnimus_Params
{
	TArray<int64_t>                                    player_list_id;                                           // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<int64_t>                                    player_list_pos;                                          // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.WuXiaXGameStateBase.Mul_DC_StartWaitNextCircle
struct AWuXiaXGameStateBase_Mul_DC_StartWaitNextCircle_Params
{
	int64_t                                            begintime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            waittingtime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            currentradius;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            nextradius;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            clocationX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            clocationY;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            clocationZ;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            nlocationX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            nlocationY;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            nlocationZ;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXGameStateBase.Mul_DC_StartShringk
struct AWuXiaXGameStateBase_Mul_DC_StartShringk_Params
{
	int64_t                                            begintime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            waittingtime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            shringkingtime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXGameStateBase.Mul_DC_StartLastCircle
struct AWuXiaXGameStateBase_Mul_DC_StartLastCircle_Params
{
	int64_t                                            StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            waittime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXGameStateBase.Mul_DC_StartDamageAll
struct AWuXiaXGameStateBase_Mul_DC_StartDamageAll_Params
{
};

// Function WuXiaX.WuXiaXGameStateBase.Mul_DC_Start
struct AWuXiaXGameStateBase_Mul_DC_Start_Params
{
	int64_t                                            locationX;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            locationY;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            locationZ;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            ScaleX;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            ScaleY;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            ScaleZ;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXGameStateBase.Mul_DC_Close
struct AWuXiaXGameStateBase_Mul_DC_Close_Params
{
};

// Function WuXiaX.WuXiaXGameStateBase.Mul_AppendTongZhi
struct AWuXiaXGameStateBase_Mul_AppendTongZhi_Params
{
	struct FText                                       Info;                                                     // (ConstParm, Parm, ReferenceParm)
};

// Function WuXiaX.WuXiaXGameStateBase.Mul_AppendShutDown
struct AWuXiaXGameStateBase_Mul_AppendShutDown_Params
{
	struct FString                                     killname;                                                 // (Parm, ZeroConstructor)
	struct FString                                     deadname;                                                 // (Parm, ZeroConstructor)
	int                                                kill_num;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXGameStateBase.Mul_AppendKillInfo
struct AWuXiaXGameStateBase_Mul_AppendKillInfo_Params
{
	struct FString                                     attack_player_name;                                       // (Parm, ZeroConstructor)
	struct FString                                     dead_player_name;                                         // (Parm, ZeroConstructor)
	int                                                attack_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ECauseDyingType                                    reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXGameStateBase.Mul_AppendFirstBlood
struct AWuXiaXGameStateBase_Mul_AppendFirstBlood_Params
{
	struct FString                                     playername;                                               // (Parm, ZeroConstructor)
	struct FString                                     deadname;                                                 // (Parm, ZeroConstructor)
};

// Function WuXiaX.WuXiaXGameStateBase.Mul_AppendContinuousKillInfo
struct AWuXiaXGameStateBase_Mul_AppendContinuousKillInfo_Params
{
	struct FString                                     playername;                                               // (Parm, ZeroConstructor)
	int                                                killnumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXGameStateBase.GetViewPlayerById
struct AWuXiaXGameStateBase_GetViewPlayerById_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AWuXiaXCharacter*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXGameStateBase.GetTimeToNxtStage
struct AWuXiaXGameStateBase_GetTimeToNxtStage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXGameStateBase.GetNxtStageWaitTime
struct AWuXiaXGameStateBase_GetNxtStageWaitTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXGameStateBase.GetNxtStageShrinkTime
struct AWuXiaXGameStateBase_GetNxtStageShrinkTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXGameStateBase.GetNetTimeMS32
struct AWuXiaXGameStateBase_GetNetTimeMS32_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXGameStateBase.GetNetTimeInSec
struct AWuXiaXGameStateBase_GetNetTimeInSec_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXGameStateBase.ChangeStateToLogin
struct AWuXiaXGameStateBase_ChangeStateToLogin_Params
{
};

// Function WuXiaX.WuXiaXGameStateBase.ChangeGameState
struct AWuXiaXGameStateBase_ChangeGameState_Params
{
	EGameState                                         game_state;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHorse.Ride
struct AWuXiaXHorse_Ride_Params
{
	class AWuXiaXCharacter*                            Driver;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EPlayerRideStateType                               ridestate;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHorse.OnRepRotate
struct AWuXiaXHorse_OnRepRotate_Params
{
};

// Function WuXiaX.WuXiaXHorse.OnRepPlayers
struct AWuXiaXHorse_OnRepPlayers_Params
{
};

// Function WuXiaX.WuXiaXHorse.OnRepHorseNetID
struct AWuXiaXHorse_OnRepHorseNetID_Params
{
};

// Function WuXiaX.WuXiaXHorse.OnRepHorseID
struct AWuXiaXHorse_OnRepHorseID_Params
{
};

// Function WuXiaX.WuXiaXHorse.OnRepEndurance
struct AWuXiaXHorse_OnRepEndurance_Params
{
};

// Function WuXiaX.WuXiaXHorse.Mul_PlayFallMontage
struct AWuXiaXHorse_Mul_PlayFallMontage_Params
{
};

// Function WuXiaX.WuXiaXHorse.InteractiveUITips
struct AWuXiaXHorse_InteractiveUITips_Params
{
	class AWuXiaXCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHorse.GetRotationSpeed
struct AWuXiaXHorse_GetRotationSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHorse.GetRider
struct AWuXiaXHorse_GetRider_Params
{
	class AWuXiaXCharacter*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHorse.GetInteractiveType
struct AWuXiaXHorse_GetInteractiveType_Params
{
	class AWuXiaXCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EInteractiveType                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHorse.GetCurrentFSpeed
struct AWuXiaXHorse_GetCurrentFSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXHorse.CanInteractive
struct AWuXiaXHorse_CanInteractive_Params
{
	class AWuXiaXCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	ETriggerInteractiveType                            Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuXiaXOBController.TimeSyncStart
struct AWuXiaXOBController_TimeSyncStart_Params
{
};

// Function WuXiaX.WuXiaXOBController.Server_StartPing
struct AWuXiaXOBController_Server_StartPing_Params
{
	int64_t                                            index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXOBController.OnRep_SrvNoticedOB
struct AWuXiaXOBController_OnRep_SrvNoticedOB_Params
{
};

// Function WuXiaX.WuXiaXOBController.ClientReportServerTime
struct AWuXiaXOBController_ClientReportServerTime_Params
{
	int64_t                                            index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            cTime;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            sTime;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuxiaXOBPawn.SetZeroCounter
struct AWuxiaXOBPawn_SetZeroCounter_Params
{
	int64_t                                            start_time;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuxiaXOBPawn.Server_UpdateOBLocation
struct AWuxiaXOBPawn_Server_UpdateOBLocation_Params
{
	struct FVector                                     pos;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuxiaXOBPawn.PlayerInitLocation
struct AWuxiaXOBPawn_PlayerInitLocation_Params
{
};

// Function WuXiaX.WuxiaXOBPawn.OnViewTargetDead
struct AWuxiaXOBPawn_OnViewTargetDead_Params
{
};

// Function WuXiaX.WuxiaXOBPawn.OnTargetViewRotUpdated
struct AWuxiaXOBPawn_OnTargetViewRotUpdated_Params
{
	int                                                netID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    rot;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuxiaXOBPawn.OnSwitchToPrevPlayer
struct AWuxiaXOBPawn_OnSwitchToPrevPlayer_Params
{
};

// Function WuXiaX.WuxiaXOBPawn.OnSwitchToNextPlayer
struct AWuxiaXOBPawn_OnSwitchToNextPlayer_Params
{
};

// Function WuXiaX.WuxiaXOBPawn.OnMoveUpDown
struct AWuxiaXOBPawn_OnMoveUpDown_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuxiaXOBPawn.OnMoveRight
struct AWuxiaXOBPawn_OnMoveRight_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuxiaXOBPawn.OnMoveForward
struct AWuxiaXOBPawn_OnMoveForward_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuxiaXOBPawn.OnMouseTurn
struct AWuxiaXOBPawn_OnMouseTurn_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuxiaXOBPawn.OnMouseScroll
struct AWuxiaXOBPawn_OnMouseScroll_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuxiaXOBPawn.OnMouseRKeyUp
struct AWuxiaXOBPawn_OnMouseRKeyUp_Params
{
};

// Function WuXiaX.WuxiaXOBPawn.OnMouseRKeyDown
struct AWuxiaXOBPawn_OnMouseRKeyDown_Params
{
};

// Function WuXiaX.WuxiaXOBPawn.OnMouseLookUp
struct AWuxiaXOBPawn_OnMouseLookUp_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuxiaXOBPawn.OnMouseLKeyUp
struct AWuxiaXOBPawn_OnMouseLKeyUp_Params
{
};

// Function WuXiaX.WuxiaXOBPawn.OnKey_PrevTeam_Released
struct AWuxiaXOBPawn_OnKey_PrevTeam_Released_Params
{
};

// Function WuXiaX.WuxiaXOBPawn.OnKey_NextTeam_Released
struct AWuxiaXOBPawn_OnKey_NextTeam_Released_Params
{
};

// Function WuXiaX.WuxiaXOBPawn.OnKey_C_Released
struct AWuxiaXOBPawn_OnKey_C_Released_Params
{
};

// Function WuXiaX.WuxiaXOBPawn.OnClientInfoGet
struct AWuxiaXOBPawn_OnClientInfoGet_Params
{
	class AOBClientInfo*                               oldClient;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuxiaXOBPawn.OnCameraViewUpdated
struct AWuxiaXOBPawn_OnCameraViewUpdated_Params
{
	EObserveCameraType                                 oldType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuxiaXOBPawn.GetOBClientInfo
struct AWuxiaXOBPawn_GetOBClientInfo_Params
{
	class AOBClientInfo*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WuXiaX.WuxiaXOBPawn.EnterTargteView_Target
struct AWuxiaXOBPawn_EnterTargteView_Target_Params
{
	class AWuXiaXCharacter*                            ViewTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuxiaXOBPawn.EnterTargetVeiw
struct AWuxiaXOBPawn_EnterTargetVeiw_Params
{
	EObserveCameraType                                 cam_type;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                targetid;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuxiaXOBPawn.EnterNoneView
struct AWuxiaXOBPawn_EnterNoneView_Params
{
};

// Function WuXiaX.WuxiaXOBPawn.EnterItemView
struct AWuxiaXOBPawn_EnterItemView_Params
{
	int                                                itemWorldID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuxiaXOBPawn.EnterFreeView
struct AWuxiaXOBPawn_EnterFreeView_Params
{
};

// Function WuXiaX.WuxiaXOBPawn.EnterDownView_Target
struct AWuxiaXOBPawn_EnterDownView_Target_Params
{
	class AWuXiaXCharacter*                            vierTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXPlayerController.TimeSyncStart
struct AWuXiaXPlayerController_TimeSyncStart_Params
{
};

// Function WuXiaX.WuXiaXPlayerController.SetZeroCounter
struct AWuXiaXPlayerController_SetZeroCounter_Params
{
	int64_t                                            StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXPlayerController.SetPVPGameTime
struct AWuXiaXPlayerController_SetPVPGameTime_Params
{
	int64_t                                            StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXPlayerController.SetPlayerTeamStastics
struct AWuXiaXPlayerController_SetPlayerTeamStastics_Params
{
	TArray<struct FStasticsInfo>                       reds;                                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<struct FStasticsInfo>                       greens;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<struct FStasticsInfo>                       blues;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function WuXiaX.WuXiaXPlayerController.Server_StartPing
struct AWuXiaXPlayerController_Server_StartPing_Params
{
	int64_t                                            index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXPlayerController.InputAnyKey
struct AWuXiaXPlayerController_InputAnyKey_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function WuXiaX.WuXiaXPlayerController.GetKeyText
struct AWuXiaXPlayerController_GetKeyText_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WuXiaX.WuXiaXPlayerController.DeleteMark
struct AWuXiaXPlayerController_DeleteMark_Params
{
};

// Function WuXiaX.WuXiaXPlayerController.DebugPrintTimeMS
struct AWuXiaXPlayerController_DebugPrintTimeMS_Params
{
	int                                                sencond;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXPlayerController.ClientReportServerTime
struct AWuXiaXPlayerController_ClientReportServerTime_Params
{
	int64_t                                            index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            cTime;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            sTime;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXPlayerController.Client_UpdateKillLive
struct AWuXiaXPlayerController_Client_UpdateKillLive_Params
{
	int                                                killnumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                livenumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXPlayerController.Client_UpdateKill
struct AWuXiaXPlayerController_Client_UpdateKill_Params
{
	int                                                killnumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                itemID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXPlayerController.Client_TeamPointInfo
struct AWuXiaXPlayerController_Client_TeamPointInfo_Params
{
	int                                                red;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                blue;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                green;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXPlayerController.Client_SetResurrectionTime
struct AWuXiaXPlayerController_Client_SetResurrectionTime_Params
{
	int64_t                                            Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXPlayerController.Client_ResourcesPointTeamChange
struct AWuXiaXPlayerController_Client_ResourcesPointTeamChange_Params
{
	int                                                resourcesindex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXPlayerState.Mul_RemovePlayerAnimus
struct AWuXiaXPlayerState_Mul_RemovePlayerAnimus_Params
{
	int64_t                                            player_list;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WuXiaX.WuXiaXPlayerState.Mul_PlayerAnimus
struct AWuXiaXPlayerState_Mul_PlayerAnimus_Params
{
	TMap<int64_t, int64_t>                             player_list;                                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
