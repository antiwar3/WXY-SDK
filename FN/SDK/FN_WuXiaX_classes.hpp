#pragma once

// Fortnite (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class WuXiaX.AINetMessageHandle
// 0x0048 (0x0370 - 0x0328)
class AAINetMessageHandle : public AActor
{
public:
	class AActor*                                      Horse_class;                                              // 0x0328(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ai_ip_;                                                   // 0x0330(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	int                                                ai_port_;                                                 // 0x0340(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0344(0x0004) MISSED OFFSET
	struct FString                                     server_ip_;                                               // 0x0348(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	int                                                server_port_;                                             // 0x0358(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	class AWuXiaXCharacter*                            player_obj_;                                              // 0x0360(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0368(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.AINetMessageHandle");
		return ptr;
	}


	void SendPickItemReponse();
	void SendPickItem();
	void SendAllPickItem();
	void SendActorInfo();
	void OnItemGetResult(int Type, bool result);
	bool ConnectServer();
	bool ConnectAIServer(class AWuXiaXCharacter* Obj);
};


// Class WuXiaX.AreaBox
// 0x0018 (0x0340 - 0x0328)
class AAreaBox : public AActor
{
public:
	int                                                area_index_;                                              // 0x0328(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              area_min_chance_;                                         // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              area_max_chance_;                                         // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0334(0x0004) MISSED OFFSET
	class UBoxComponent*                               box_collision_;                                           // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.AreaBox");
		return ptr;
	}

};


// Class WuXiaX.BagUI
// 0x0000 (0x0208 - 0x0208)
class UBagUI : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.BagUI");
		return ptr;
	}


	void Vertical(bool State, bool IsDown);
	void UseHoverItem();
	void ShowItemDetail(const struct FUIItemInfo& UIItemInfo);
	void ShowBagUI();
	void SetWeight(const struct FString& maxweight, const struct FString& Weight);
	void SetSplitItemButton(bool isbottondown);
	void SetPlayerName(const struct FString& Name);
	void SetItemHotKey(int index, class UTexture2D* icon, int Number);
	void SetItem(EBagType bagtype, int index, int Level, const struct FString& Name, int Number, int itemtype, class UTexture2D* icon, class UTexture2D* dragicon);
	void SetDurableValue(EBagType bag_type, int index, int armor);
	void SetDragItemInfo(int itemnumber, int pickid);
	void SelectHoverItem();
	void RemoveItem(EBagType bagtype, int index);
	void ReLoadConfigShow();
	void NextLabel();
	void MarkHoverItem(EGamepadMarkType MarkType);
	void LastLabel();
	void Init();
	void Horizontal(bool State, bool IsRight);
	void HideBagUI();
	int GetTypeByBagIndex(EBagType bag, int index);
	class AWuXiaXCharacter* GetLocalCharacter();
	bool GetCharacterShowState();
	void GamepadIntoWidget();
	void EndKeepAction();
	void DropHoverItem();
	void ClearItemHotKey(int index);
	void ClearInventory();
};


// Class WuXiaX.BuffEffectLibrary
// 0x0000 (0x0028 - 0x0028)
class UBuffEffectLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.BuffEffectLibrary");
		return ptr;
	}

};


// Class WuXiaX.BuffPoint
// 0x0070 (0x0398 - 0x0328)
class ABuffPoint : public AActor
{
public:
	TArray<int>                                        buff_ids_;                                                // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<EBuffPointType>                             buff_types_;                                              // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        buff_chance_;                                             // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                spawn_min_time_;                                          // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                spawn_max_time_;                                          // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0360(0x0008) MISSED OFFSET
	int                                                client_show_index_;                                       // 0x0368(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	class UBoxComponent*                               collision_component_;                                     // 0x0370(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                buff_index_;                                              // 0x0378(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1C];                                      // 0x037C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.BuffPoint");
		return ptr;
	}


	void OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnBuffIdUpdate();
	void Client_OnBuffIdUpdate(int showid);
};


// Class WuXiaX.CharacterConfigUI
// 0x0000 (0x0208 - 0x0208)
class UCharacterConfigUI : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.CharacterConfigUI");
		return ptr;
	}


	void InitData();
	void CreateModel(int ID, ESexType sex_type, EModelType model_type, class UTexture2D* normal_texture);
	void CreateColor(int ID, EModelType Type, const struct FLinearColor& Color);
};


// Class WuXiaX.CheckSoundActor
// 0x0008 (0x0330 - 0x0328)
class ACheckSoundActor : public AActor
{
public:
	int                                                player_id_;                                               // 0x0328(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                index_;                                                   // 0x032C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.CheckSoundActor");
		return ptr;
	}


	void UpdateLocation(const struct FVector& new_location);
	void Init(int player_id, int index);
};


// Class WuXiaX.CircleSliderUI
// 0x0000 (0x0208 - 0x0208)
class UCircleSliderUI : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.CircleSliderUI");
		return ptr;
	}


	struct FVector GetCrossPoint(const struct FVector& circle_pos, const struct FVector& line_start, const struct FVector& line_end, float Radius);
};


// Class WuXiaX.ClientAchievementComponent
// 0x00B8 (0x01A8 - 0x00F0)
class UClientAchievementComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x00F0(0x00A8) MISSED OFFSET
	class AWuXiaXCharacter*                            m_Player;                                                 // 0x0198(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWuXiaXGameInstance*                         m_GameInstance;                                           // 0x01A0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.ClientAchievementComponent");
		return ptr;
	}

};


// Class WuXiaX.WuXiaXHUDBase
// 0x0008 (0x0420 - 0x0418)
class AWuXiaXHUDBase : public AHUD
{
public:
	EWidgetInteractiveType                             current_interactive_type_;                                // 0x0418(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0419(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuXiaXHUDBase");
		return ptr;
	}


	void SetInteractiveType(EWidgetInteractiveType Type);
	void ReUMGEffect();
	void CheckResetFocus();
	void CheckFullScreenToWindowFullScreen();
	bool CanUseInteractive(EWidgetInteractiveType Type);
};


// Class WuXiaX.ClientLoginHUD
// 0x0008 (0x0428 - 0x0420)
class AClientLoginHUD : public AWuXiaXHUDBase
{
public:
	class UMainLoginUI*                                MianLoginUI;                                              // 0x0420(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.ClientLoginHUD");
		return ptr;
	}


	void ShowSorting();
	void ShowReconnect();
	void ShowLogoUI();
	void ShowLoginUI();
	void ShowHallWidget(const struct FString& player_name);
	void ReadyGame();
	void LoginResponse(ELoginResponseType login_state, const struct FString& player_name);
	void HideSorting();
	void HideReconnect();
	void HideLogoUI();
	void HideLoginUI();
	void CreateMainLoginUI();
	void CreateHallSkin(int skin_id, int Num);
	void CreateHallItem(int item_id, int Num);
	void AutoLogin();
};


// Class WuXiaX.ClientLoginPawn
// 0x00E8 (0x0470 - 0x0388)
class AClientLoginPawn : public APawn
{
public:
	bool                                               is_always_talk_;                                          // 0x0388(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               is_in_voice_channel_;                                     // 0x0389(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x96];                                      // 0x038A(0x0096) MISSED OFFSET
	struct FString                                     voice_channel_name_;                                      // 0x0420(0x0010) (ZeroConstructor)
	int                                                voice_channel_mode_;                                      // 0x0430(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0434(0x0004) MISSED OFFSET
	TArray<int>                                        voice_players_;                                           // 0x0438(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0448(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.ClientLoginPawn");
		return ptr;
	}


	void SetVoiceMode(int Mode);
	void SetAlwaysTalk(bool isalways);
	void MuteLocalAudio(bool bMuted);
};


// Class WuXiaX.ClientNetMessageHandle
// 0x0370 (0x0698 - 0x0328)
class AClientNetMessageHandle : public AActor
{
public:
	bool                                               is_sorting_;                                              // 0x0328(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               is_ping_net_callback_;                                    // 0x0329(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_connected_;                                            // 0x032A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x032B(0x0001) MISSED OFFSET
	int                                                connect_counter_;                                         // 0x032C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     connect_str_;                                             // 0x0330(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0340(0x0028) MISSED OFFSET
	struct FString                                     ip_;                                                      // 0x0368(0x0010) (ZeroConstructor)
	int                                                port_;                                                    // 0x0378(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x037C(0x0004) MISSED OFFSET
	struct FString                                     user_name_;                                               // 0x0380(0x0010) (ZeroConstructor)
	int                                                money_;                                                   // 0x0390(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0394(0x0004) MISSED OFFSET
	int64_t                                            login_gateway_session_id_;                                // 0x0398(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     login_gateway_passwd_;                                    // 0x03A0(0x0010) (ZeroConstructor)
	ESexType                                           user_sex_;                                                // 0x03B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03B1(0x0003) MISSED OFFSET
	int                                                face_id_;                                                 // 0x03B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                hair_id_;                                                 // 0x03B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                skin_color_id_;                                           // 0x03BC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                hair_color_id_;                                           // 0x03C0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                buy_key_id_;                                              // 0x03C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                friend_id_;                                               // 0x03C8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_team_;                                                 // 0x03CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x03CD(0x0003) MISSED OFFSET
	int                                                play_mode_;                                               // 0x03D0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                server_id_;                                               // 0x03D4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0xE0];                                      // 0x03D8(0x00E0) MISSED OFFSET
	TMap<int, bool>                                    team_player_room_state_;                                  // 0x04B8(0x0050) (ZeroConstructor)
	TMap<int, int>                                     item_map_;                                                // 0x0508(0x0050) (ZeroConstructor)
	TMap<int, int>                                     skin_map_;                                                // 0x0558(0x0050) (ZeroConstructor)
	TMap<int, int>                                     item_equip_map_;                                          // 0x05A8(0x0050) (ZeroConstructor)
	TMap<int, int>                                     skin_equip_map_;                                          // 0x05F8(0x0050) (ZeroConstructor)
	TMap<int, bool>                                    skin_preview_map_;                                        // 0x0648(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.ClientNetMessageHandle");
		return ptr;
	}


	void StartTick(const struct FUIRoomInfo& room);
	void StartGame(const struct FUIRoomInfo& room);
	void SetOnlineState(int State);
	void SendTeamInviteResponse(int send_id, int result);
	void SendTeamInvite(const struct FString& Name);
	void SendTeamDataRequest();
	void SendReconstructCharacterCreateInfo(const struct FString& user_name, int user_hair, int user_face, ESexType user_sex, int user_skin, int user_hairco);
	void SendReconnect();
	void SendQuitTeamRequest();
	void SendPlayerName(const struct FString& Name);
	void SendMoneyRequest();
	void SendLoginMsg(const struct FString& user_name, const struct FString& PassWord, int Type);
	void SendLineUp(int line_mode, int server_mode, int play_mode);
	void SendItemRequest();
	void SendGoodsItemRequest();
	void SendFriendRequest();
	void SendFriendInviteResponse(int send_id, int result);
	void SendFriendInvite(const struct FString& Name);
	void SendEquipChange(int origin_item_id, int new_item_id);
	void SendCoinRequest();
	void SendCharacterCreateInfo(const struct FString& user_name, int user_hair, int user_face, ESexType user_sex, int user_skin, int user_hairco);
	void SendCancelLineUp();
	void SellItem(int item_id);
	void RequestRankInfo(int sort_type, int rank_type, int server_type);
	void RequestPlayerRankInfo(int player_id, int sort_type, int server_type);
	void RefreshPlatformGoodsItem();
	void QuitTick(const struct FUIRoomInfo& room);
	void Port(int Val);
	void PlayerReconnectOB(bool ok);
	void PlayerLeaveRoom(ELeaveRoomType Type, int player_id, const struct FUIRoomInfo& room);
	void PingCallBack();
	void OpenBox(int item_id);
	void JoinRoom(const struct FUIRoomInfo& room, const struct FString& PassWord);
	void JiHuoMa(const struct FString& ma);
	void Ip(const struct FString& Val);
	void GetRooms(int room_type, const struct FString& Tile, int play_mode, int server_id, int min_player_num, int max_player_num);
	void GetPage(int page);
	void DeleteRoom(const struct FUIRoomInfo& room);
	void DeleteFriend(int player_id);
	void CurrentServerChange();
	void CreateRoom(int play_mode, int map_id, const struct FString& room_tile, const struct FString& PassWord, int max_player_num, int team_player_num, int max_watch_num, int preset_mode, int server_id, bool add_flag);
	void CreateNewConnect();
	void ClientCheckMsg(float DeltaTime);
	void ChangeShowSkinIndex(TArray<int> Types);
	void ChangePlayerRole(int player_id, ERoleType new_type, int team_index, const struct FUIRoomInfo& room);
	void ChangeEquipSkin(int skin_id, int Type);
	bool CanLineUp();
	void CancelLogin();
	void BuyKey(int item_id);
	void BuyItem(int item_id);
};


// Class WuXiaX.ComponentMiddle
// 0x0030 (0x0120 - 0x00F0)
class UComponentMiddle : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00F0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.ComponentMiddle");
		return ptr;
	}


	EPlayerMotionState State_GetPlayerMotionState();
	EPlayerGameState State_GetPlayerMainState();
	bool State_ChangePlayerState(EPlayerGameState Val);
	bool State_ChangePlayerMotionState(EPlayerMotionState Val);
	bool State_ChangePlayerChildState(EPlayerFightState Val);
	bool Property_ReSetDyingHp();
	bool Property_ChangeSaveChangeValue(bool isadd, EPropertyChangeReason reason);
	bool Move_SwitchMovementModeEvent(TEnumAsByte<EMovementMode> Mode);
};


// Class WuXiaX.ConfigEnvironmentActor
// 0x0008 (0x0330 - 0x0328)
class AConfigEnvironmentActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0328(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.ConfigEnvironmentActor");
		return ptr;
	}


	float GetSoundVolume(const struct FString& float_value_name, const struct FString& bool_value_name);
	void EffectSoundVolume();
};


// Class WuXiaX.CreateMapUI
// 0x0000 (0x0208 - 0x0208)
class UCreateMapUI : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.CreateMapUI");
		return ptr;
	}


	TArray<int> GetMapsByPlayMode(int play_mode);
	class UTexture2D* GetMapInfo(int map_id, struct FString* Name);
};


// Class WuXiaX.CustomGameUI
// 0x0020 (0x0228 - 0x0208)
class UCustomGameUI : public UUserWidget
{
public:
	int                                                current_state_sort_;                                      // 0x0208(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                current_player_num_sort_;                                 // 0x020C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                taosha_min_player_num_;                                   // 0x0210(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	int                                                luandou_player_num_;                                      // 0x0214(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	int                                                taosha_max_team_player_num_;                              // 0x0218(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	int                                                luandou_team_player_num_;                                 // 0x021C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               taosha_viewer_state_;                                     // 0x0220(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               luandou_viewer_state_;                                    // 0x0221(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0222(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.CustomGameUI");
		return ptr;
	}


	TArray<class URoomChildUI*> SortRoomChild(TArray<class URoomChildUI*> roominfos);
	struct FString GetValidPassword(const struct FString& old_pwd);
	void CreateRoomInfos(TArray<struct FUIRoomInfo> roominfos);
};


// Class WuXiaX.DamageCircleActor
// 0x00A8 (0x03D0 - 0x0328)
class ADamageCircleActor : public AActor
{
public:
	TArray<struct FVector2D>                           map_range_;                                               // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              height_;                                                  // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              location_z;                                               // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      damages_;                                                 // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      wait_times_;                                              // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      shrink_times_;                                            // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              damage_rate_;                                             // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	TArray<float>                                      shrink_speeds_;                                           // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              win_location_check_angle_;                                // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              win_actor_radius_;                                        // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0390(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.DamageCircleActor");
		return ptr;
	}


	void Start();
	void Client_StartLastCircle();
	bool CheckActorIsLandscape(class AActor* Actor);
};


// Class WuXiaX.FakeCharacter
// 0x0068 (0x0390 - 0x0328)
class AFakeCharacter : public AActor
{
public:
	class USkeletalMeshComponent*                      mesh_body_;                                               // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FVector                                     move_location;                                            // 0x0330(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     old_move_location;                                        // 0x033C(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    move_rotation;                                            // 0x0348(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               move_flag;                                                // 0x0354(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               horse_flag;                                               // 0x0355(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0356(0x0002) MISSED OFFSET
	class USkeletalMesh*                               load_skeletal_obj;                                        // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0360(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.FakeCharacter");
		return ptr;
	}


	void UpdateMesh();
	void LoadComplete();
};


// Class WuXiaX.GameEventInterface
// 0x0000 (0x0028 - 0x0028)
class UGameEventInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.GameEventInterface");
		return ptr;
	}

};


// Class WuXiaX.GameRebirthActor
// 0x0018 (0x0340 - 0x0328)
class AGameRebirthActor : public AActor
{
public:
	struct FVector                                     point_offest_;                                            // 0x0328(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ELivePointType                                     Type;                                                     // 0x0334(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0335(0x0003) MISSED OFFSET
	int                                                index;                                                    // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x033C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.GameRebirthActor");
		return ptr;
	}

};


// Class WuXiaX.HorseRideComponent
// 0x0070 (0x0160 - 0x00F0)
class UHorseRideComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00F0(0x0030) MISSED OFFSET
	EPlayerRideStateType                               ride_state_net_;                                          // 0x0120(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	class AWuXiaXHorse*                                ride_horse_net_;                                          // 0x0128(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	EPlayerRideStateType                               ride_state_net_other_;                                    // 0x0130(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	class AWuXiaXHorse*                                ride_horse_net_other_;                                    // 0x0138(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x14];                                      // 0x0140(0x0014) MISSED OFFSET
	float                                              server_tick_;                                             // 0x0154(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              client_tick_;                                             // 0x0158(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              owner_tick_;                                              // 0x015C(0x0004) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.HorseRideComponent");
		return ptr;
	}


	void Server_SetLastRotation(const struct FRotator& lastrotation);
	void Server_Ride(int horse_net_id);
	void Server_InputRight(float Value);
	EPlayerRideStateType Ride_state_net();
	class AWuXiaXHorse* Ride_horse_net();
	void OnRedRideStateOther();
	void OnRedRideState();
	void OnRedHorseOther();
	void OnRedHorse();
	float GetRotationSpeed();
	void Client_Ride_Rotation(const struct FRotator& Rotation);
};


// Class WuXiaX.InteractiveInterface
// 0x0000 (0x0028 - 0x0028)
class UInteractiveInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.InteractiveInterface");
		return ptr;
	}


	bool InteractiveUITips(class AWuXiaXCharacter* Player, struct FText* Text);
	EInteractiveType GetInteractiveType(class AWuXiaXCharacter* Player);
	bool CanInteractive(class AWuXiaXCharacter* Player, ETriggerInteractiveType Trigger);
};


// Class WuXiaX.ItemEffectFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UItemEffectFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.ItemEffectFunctionLibrary");
		return ptr;
	}

};


// Class WuXiaX.ItemParticlesEffect
// 0x0040 (0x0368 - 0x0328)
class AItemParticlesEffect : public AActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0328(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.ItemParticlesEffect");
		return ptr;
	}

};


// Class WuXiaX.KeepActionUI
// 0x0000 (0x0208 - 0x0208)
class UKeepActionUI : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.KeepActionUI");
		return ptr;
	}


	void SetKeepAction(float CurrentTime);
	void Init();
	void EndKeepAction();
	void BeginKeepAction(float actiontime);
};


// Class WuXiaX.LoadAssetManager
// 0x00D8 (0x0100 - 0x0028)
class ULoadAssetManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0028(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.LoadAssetManager");
		return ptr;
	}


	bool LoadAsset(const struct FSoftObjectPath& AssetName, class UObject* Actor, class UObject* Component);
	bool AsyncLoadAsset(const struct FSoftObjectPath& AssetName, class UObject* Actor, class UObject* Component);
};


// Class WuXiaX.LoadingUI
// 0x0000 (0x0208 - 0x0208)
class ULoadingUI : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.LoadingUI");
		return ptr;
	}


	void SetPercent(float percent);
};


// Class WuXiaX.LoadInterface
// 0x0000 (0x0028 - 0x0028)
class ULoadInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.LoadInterface");
		return ptr;
	}


	bool LoadComplete(class UObject* Component, const struct FSoftObjectPath& asset_ref);
};


// Class WuXiaX.LoadProgressManager
// 0x0090 (0x03B8 - 0x0328)
class ALoadProgressManager : public AActor
{
public:
	int                                                mapindex;                                                 // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              virtual_progress_value_;                                  // 0x032C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              actually_progress_value_;                                 // 0x0330(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                current_level_num_;                                       // 0x0334(0x0004) (ZeroConstructor, IsPlainOldData)
	class AWuXiaXHUD*                                  hud_;                                                     // 0x0338(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0340(0x0008) MISSED OFFSET
	int                                                anti;                                                     // 0x0348(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                postprocess;                                              // 0x034C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                shadow;                                                   // 0x0350(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Texture;                                                  // 0x0354(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                particle;                                                 // 0x0358(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Foliage;                                                  // 0x035C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                view_distance;                                            // 0x0360(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               vsync;                                                    // 0x0364(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x53];                                      // 0x0365(0x0053) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.LoadProgressManager");
		return ptr;
	}


	void LoadLevelComplete();
	void GamingLoadLevelComplete();
};


// Class WuXiaX.MainGameUI
// 0x0020 (0x0228 - 0x0208)
class UMainGameUI : public UUserWidget
{
public:
	class UUserSettingWidget*                          usersetting_UI_;                                          // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStatisticsWidget*                           userstatistics_UI_;                                       // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	EPlayerGameUIState                                 current_ui_state_;                                        // 0x0218(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0219(0x0007) MISSED OFFSET
	class UWuXiaMiniMapWidget*                         mini_map_;                                                // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.MainGameUI");
		return ptr;
	}


	void ZeroTextState(bool State);
	void UpdateWeaponStateEffect(int weaponindex, class UTexture2D* effecticon, int Value);
	void UpdateTeamPlayerState(int Num, ETeamPlayerState new_state);
	void UpdateTeamPlayerHPPercent(int Num, float Value);
	void UpdateTeamPlayerDyingHPPercent(int Num, float Value);
	void UpdateSoundLocation(int ID, const struct FVector& NewLocation);
	void UpdateSatiety(float satietyvalue);
	void UpdatePlayerState(EPlayerGameState new_state);
	void UpdatePlayerRotator(int Num, float Yaw);
	void UpdatePlayerMark3DLocation(int Num, const struct FVector& Location);
	void UpdatePlayerLocation(int Num, const struct FVector& Location);
	void UpdateOxygen(float oxygen);
	void UpdateMp(float currentMP, float currentmaxMP, float maxMP);
	void UpdateMoisture(float moisture);
	void UpdateLiveData(int LIVE);
	void UpdateKiteSpeed(float Speed);
	void UpdateKillData(int kill);
	void UpdateItemNumber(int index, int Number);
	void UpdateInjury(float injury);
	void UpdateHorseSpeed(float current_speed, float max_speed);
	void UpdateHorsePower(float current_power, float max_power);
	void UpdateFightHp(float currentHP, float maxHP);
	void UpdateDyingHp(float currentHP, float maxHP);
	void UpdateDrugValue(float drugvalue);
	void UpdateCompass(float Angle);
	void UpdateCheckSoundCD(float current_cd, float max_cd);
	void ShowWarning(const struct FString& Text);
	void ShowOxygen();
	void ShowMainInterfaceUI();
	void ShowInteractive(const struct FText& Text);
	void ShowDamageCircle();
	void ShowCrossHair();
	void ShowCheckSoundLocation(int Ids, const struct FVector& Location);
	void SetZeroTimer(int Timer);
	void SetWeaponState(int weaponindex, int Value, class UTexture2D* effecticon, class UTexture2D* weaponicon);
	void SetTeamPlayerShowMode(int teammode);
	void SetSplitItemButton(bool isbottondown);
	void SetSkillHotKey(int index, int skill_id, class UTexture2D* icon, float skillcd, bool canuse);
	void SetSkillCurrentCD(int skill_id, float skillcd);
	void SetMainInterfaceState(bool State);
	void SetLifeInfoState(bool State);
	void SetKiteState(bool new_state);
	void SetKeepActionTime(float current_time);
	void SetItemHotKey(int index, class UTexture2D* icon, int Number);
	void SetHorseState(bool new_state);
	void SetGeneralState(bool State);
	void SetGeneralInfo(class UTexture2D* icon, int ID, float max_cd);
	void SetDamageCircleWaitingTime(float Time);
	void SetDamageCircleState(EDamageCircleState State);
	void SetDamageCircleShringkingTime(float CurrentTime, float alltime);
	void SetCheckSoundSkillState(bool State);
	void SetBuff(int buffID, int numberoflayer, float Time, class UTexture2D* icon);
	void ResetLanguage();
	void RemoveWeaponState(int weaponindex);
	void RemoveSound(int ID);
	void RemoveBuff(int buffID);
	void ReLoadConfigShow();
	void PlayerUnLockToOther();
	void PlayerTalk(int player_id);
	void PlayerLockToOther();
	void PickUpOverWeight();
	void PickGetItem(bool State, class UTexture2D* Texture, int Level, bool learned);
	void MissileHitTarget();
	bool IsInitTeamPlayer(int PlayerID);
	void InitTeamPlayer(int PlayerID, const struct FString& Name, int index, int teammode);
	void InitCheckSoundSkill(int skill_id, class UTexture2D* icon, float max_cd);
	void InitCheckSound();
	void Init();
	void HideOxygen();
	void HideMainInterfaceUI();
	void HideInteractive();
	void HideDamageCircle();
	void HideCrossHair();
	bool GetWeaponShowState();
	void GetSlotItemInfo(EBagType bagtype, int Number, struct FUIItemInfo* slotiteminfo);
	int GetPostColorType();
	class AWuXiaXCharacter* GetLocalCharacter();
	bool GetDressShowState();
	void EndKeepAction();
	void DeleteTeamPlayerMarkState(int Num);
	void ClearTeamPlayerName(int index);
	void ClearSkillHotKey(int index);
	void ClearItemHotKey(int index);
	void ClearBuffs();
	void ChangeCurrentWeapon(int weaponindex);
	void CanNotShooter();
	void CanNotEquipItem();
	void BeginKeepAction(float actiontime);
	void AppendKillInfo(const struct FString& attack_player_name, const struct FString& dead_player_name, int cause_id, ECauseDyingType reason);
	void AppendGongGao(EGongGaoType Type, const struct FText& Info);
	void ActiveComplain();
};


// Class WuXiaX.MainLoginUI
// 0x0028 (0x0230 - 0x0208)
class UMainLoginUI : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    on_item_change_;                                          // 0x0208(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               is_debug_;                                                // 0x0218(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0219(0x0007) MISSED OFFSET
	struct FString                                     connect_str_;                                             // 0x0220(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.MainLoginUI");
		return ptr;
	}


	void UpdateVersion();
	void UpdateUserMoney(int money);
	void UpdateRoomPlayer(const struct FRoomUser& user);
	void TeamPlayerTalk(int player_id);
	void TeamPlayerRoomStateChange(int player_id, bool State);
	void TeamPlayerEquipChange(int old_item_id, int new_item_id, int user_id);
	void TeamChangeLook(int player_id, ESexType sex, const struct FString& Name, int user_face, int skin_color, int user_hair, int user_haircolor, class UTexture2D* icon);
	void StartRoomTick();
	void SoldItemComplete();
	void ShowLoginWidget();
	void ShowInputName();
	void ShowCreateCharacter(const struct FString& Name);
	void SetUserRank(const struct FWuXiaX_FUserRank& rank, int player_id);
	void SetTeamMode(int Mode);
	void SetSkinSelectId(int skin_id, int Type, class UTexture2D* icon_texture);
	void SetServerMode(int server_id);
	void SetPreviewSkin(int player_id, EPreviewType Type, int skin_id);
	void SetPlayModeState(int Mode, int State);
	void SetPlayModeEndTime(int Mode, int days, int Hours, int Minutes, bool is_start);
	void SetPlayMode(int Mode);
	void SetPLayerLoginState(int user_id, int login_state);
	void SetPingTaiLogin(const struct FString& user_name, const struct FString& PassWord, int Type, ESlateVisibility showCancle);
	void SetPageNum(int Num);
	void SetOnlineType(int online_type);
	void SetMaxPage(int page);
	void SetLeaveTeamButtonValid(bool State);
	void SetIsMasterMode(bool State);
	void SetFriendYSState(int user_id, int login_state);
	void SetFriendInfo(int ID, const struct FString& Name, int login_state, int ys_state, class UTexture2D* icon);
	void SaveUserName(const struct FString& Value);
	void SavePassWord(const struct FString& Value);
	void ResetVicRank(TArray<struct FVictoryRank> vic_rank);
	void ResetTotalRank(TArray<struct FTotalRank> total_rank);
	void ResetServerListLanguageInfo();
	void ResetHallItemLanguageInfo();
	void ResetGoodsLanguage();
	void ResetFightRank(TArray<struct FFightRank> fight_rank);
	void RemoveHallSkin(int skin_id);
	void RemoveHallItem(int item_id);
	void ReCalculateBoxPrice(int item_id, int Times);
	void QuitRoomTick();
	void QuitFromRoom();
	void PopOBReconnect();
	void PlayerQuitTeam();
	void PlayerNameRepeat();
	void PlayerLeaveRoom(int player_id);
	void PlayerJoinedRoom(const struct FUIRoomInfo& room, int master_id, TArray<struct FRoomUser> users);
	void PlayerInviteResponse(const struct FString& Name, int result);
	void PlayerInviteFriendResponse(const struct FString& Name, int result);
	void PlayerEquip(TArray<int> equips);
	void PlayerBeInvite(int invite_id, const struct FString& Name);
	void PlayerBeFriendInvite(int invite_id, const struct FString& Name);
	void OpenBoxRemind(const struct FText& remind);
	void ObtainNewItems(TArray<struct FBoxRewardItem> items);
	void ObtainNewItem(const struct FString& Name, class UTexture2D* icon);
	void ObtainNewBox(int item_id, const struct FString& Name, class UTexture2D* icon, bool is_need_key);
	void LoadUrl(const struct FString& URL);
	void JiHuoMaRemind(const struct FText& remind);
	void JiHuoMaItemAppend(const struct FString& Name, class UTexture2D* Texture);
	void InitTeamInfo(ESexType sex_type, int user_id, const struct FString& Name, int face_id, int skin_color_id, int hair_id, int hair_color_id, int State, int ready, bool in_room, TArray<int> equip_items, class UTexture2D* icon);
	void InitSkinSelectId(int skin_id, int Type, class UTexture2D* icon_texture, bool is_show);
	void InitServerList(TArray<int> server_list);
	void InitCharacterInfo(ESexType sex_type, const struct FString& Name, int face_id, int skin_color_id, int hair_id, int hair_color_id, int money);
	void Init(class AClientNetMessageHandle* Net_actor);
	void HideUrl();
	void HallRemind(const struct FText& remind);
	struct FString GetSaveUserName();
	struct FString GetSavePassWord();
	void GetNewSkin(int Type);
	void DeleteRoomComplete();
	void DeleteFriendComplete(int player_id);
	void CreateSkin(int skin_id, int Num, ESexType sex, int Type, class UTexture2D* item_texture);
	void CreateRooms(TArray<struct FUIRoomInfo> rooms);
	void CreateRoomComplete();
	void CreateOwnerKey(int item_id, const struct FString& Name, int Num);
	void CreateOwnerItemComplete();
	void CreateOwnerBox(int item_id, const struct FString& Name, int Num, class UTexture2D* icon, bool is_need_key);
	void CreateItem(int item_id, int Num, ESexType sex, class UTexture2D* item_texture, int item_level, const struct FString& item_name);
	void CreateBuyBox(int random_box, int fixed_box);
	void ComfirmMaster(int master_id);
	void ClearTeam(TArray<int> new_team_ids);
	void ClearHallItem();
	void ClearGoods();
	void ClearFriends();
	void ClearAllEquip();
	void CheckResetSortState();
	void BuyKeyResponse(int item_id, class UTexture2D* Texture);
	void BuyKeyRemind(const struct FText& remind);
	void BuyBoxRemind(const struct FText& remind);
	void AppendHallSkin(int item_id, int Num);
	void AppendHallItem(int item_id, int Num);
	void AppendGongGao(EGongGaoType Type, const struct FText& Info);
};


// Class WuXiaX.MiniMapCtrlUI
// 0x0008 (0x0210 - 0x0208)
class UMiniMapCtrlUI : public UUserWidget
{
public:
	class UWuXiaMiniMapWidget*                         mini_map_;                                                // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.MiniMapCtrlUI");
		return ptr;
	}


	void Vertical(bool State, bool IsDown);
	void MarkLocation();
	void MarkHoverItem(EGamepadMarkType MarkType);
	void MapScale(float Value);
	void Init();
	void Horizontal(bool State, bool IsRight);
	void GamepadIntoWidget();
};


// Class WuXiaX.Missile
// 0x0068 (0x0390 - 0x0328)
class AMissile : public AActor
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0328(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.Missile");
		return ptr;
	}


	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void CallWhenDestroy();
};


// Class WuXiaX.MissileController
// 0x0078 (0x03A0 - 0x0328)
class AMissileController : public AActor
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0328(0x0070) MISSED OFFSET
	int                                                targetPlayerNetID;                                        // 0x0398(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x039C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.MissileController");
		return ptr;
	}


	void SpawnEmitter(const struct FVector& Location, int index);
	int GetTargetPlayerID();
	void DestroyMissile(int index);
	void Client_Init(int64_t missileid, int64_t begintime, const struct FVector& spawnlocation, const struct FRotator& spawnrotation, const struct FVector& Direction, int launchplayerid, int64_t missilecontrollerid, int weapon_id, int skin_id);
	void CallWhenDestroy();
};


// Class WuXiaX.NetComponent
// 0x0000 (0x00F0 - 0x00F0)
class UNetComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.NetComponent");
		return ptr;
	}

};


// Class WuXiaX.NetManager
// 0x0050 (0x0378 - 0x0328)
class ANetManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0328(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.NetManager");
		return ptr;
	}

};


// Class WuXiaX.NetMessageHandle
// 0x0040 (0x0368 - 0x0328)
class ANetMessageHandle : public AActor
{
public:
	struct FString                                     ip_addr_;                                                 // 0x0328(0x0010) (ZeroConstructor, Config)
	bool                                               reconnect_flag_;                                          // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0339(0x0003) MISSED OFFSET
	uint32_t                                           dedicated_port_;                                          // 0x033C(0x0004) (ZeroConstructor, IsPlainOldData)
	class AWuXiaXGameModeBase*                         game_mode_;                                               // 0x0340(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0348(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.NetMessageHandle");
		return ptr;
	}

};


// Class WuXiaX.NpcCharacter
// 0x0000 (0x0740 - 0x0740)
class ANpcCharacter : public ACharacter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.NpcCharacter");
		return ptr;
	}

};


// Class WuXiaX.OBAssistComponent
// 0x0000 (0x00F0 - 0x00F0)
class UOBAssistComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.OBAssistComponent");
		return ptr;
	}

};


// Class WuXiaX.OBBlueprintHelper
// 0x0000 (0x0028 - 0x0028)
class UOBBlueprintHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.OBBlueprintHelper");
		return ptr;
	}


	class UTexture2D* STATIC_GetWeaponStateIconTexture(class UObject* WorldContext, int ID);
	class UTexture2D* STATIC_GetSkillIconTexture(class UObject* WorldContext, int ID);
	class UOBClientUIHelper* STATIC_GetOBClientUIHelper(class UObject* WorldContext);
	class AOBClientInfo* STATIC_GetOBClientInfo(class UObject* WorldContext);
	int STATIC_GetItemQuality(class UObject* WorldContext, int itemID);
	class UTexture2D* STATIC_GetItemIconTexture(class UObject* WorldContext, int ID);
	struct FString STATIC_GetItemIcon(class UObject* WorldContext, int ID);
	class UTexture2D* STATIC_GetEquipStateIconTexture(class UObject* WorldContext, int ID);
	class UTexture2D* STATIC_GetBuffIconTexture(class UObject* WorldContext, int buffID);
};


// Class WuXiaX.OBClientInfo
// 0x03E0 (0x0708 - 0x0328)
class AOBClientInfo : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0328(0x0018) MISSED OFFSET
	struct FRotator                                    target_view_rotator_;                                     // 0x0340(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               need_camdir_rep_;                                         // 0x034C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x034D(0x0003) MISSED OFFSET
	int                                                view_target_netid_;                                       // 0x0350(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0354(0x0004) MISSED OFFSET
	class UOBClientUIHelper*                           UIHelper;                                                 // 0x0358(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0360(0x0010) MISSED OFFSET
	int                                                _my_net_id;                                               // 0x0370(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x394];                                     // 0x0374(0x0394) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.OBClientInfo");
		return ptr;
	}


	void UpdateTargetViewDir(int netID, const struct FRotator& rot);
	void UpdatePlayersPosition(TArray<struct FOBPlayerPosInfo> posInfos);
	void UpdatePlayersKillInfo(TArray<struct FOBPlayerKillInfo> killInfos);
	void UpdateHorseRideInfo(int horseID, int curDriverID, int curPassagerID);
	void SetViewRotTarget(int netID);
	void SetPlaneStartInfo(const struct FVector& Start, const struct FVector& End, int64_t StartTime);
	void SetLivePlayerNum(int Num);
	void SetGameStartTime(int64_t Time);
	void SetFlyEnd();
	void Server_UpdateOBLocation(const struct FVector& pos);
	void Server_RequestControlRotation(int charNetId);
	void Server_ClientInitReady();
	void OnXingfaLearningFinish(int ID, int PlayerID);
	void OnXingfaLearningFailed(int ID, int PlayerID);
	void OnXingfaLearning(int ID, int PlayerID);
	void OnXingfaEmerged(int ID, const struct FVector& pos, const struct FInteractiveInfo& Info);
	void OnTreasureBoxSapwned(int ID, const struct FVector& pos, const struct FInteractiveInfo& Info);
	void OnTreasureBoxOpened(int ID, int openedPlayerID);
	void OnTreasureBoxDestroyed(int ID);
	void OnServerInitDone(int netID);
	void OnPlayerTargetDetailInfoUpdate(const struct FOBPlayerTargetDetailInfo& Info);
	void OnPlayerGameOver(int netID);
	void OnPlayerConnectChange(int PlayerID, bool IsConnected);
	void OnParadropSpawned(const struct FOBParadropPosInfo& paradropPosInfo);
	void OnParadropItemPickedup(int worldID, int itemID);
	void OnParadropFinished(const struct FOBParadropItemInfo& paraDetailInfo);
	void OnMijingmenSpawned(int ID, const struct FVector& pos, const struct FInteractiveInfo& Info);
	void OnMijingmenOpened(int ID, int PlayerID);
	void OnGameOver(TArray<struct FOBStasticsInfo> result);
	void OnFightStateExpired(int ID);
	void OnFightStateCreate(const struct FOBFightState& Info);
	void OnCharacterRespawned(int PlayerID, const struct FVector& pos);
	void OnCharacterDyingRecover(int PlayerID, const struct FVector& pos);
	void OnCharacterDying(int PlayerID, const struct FVector& pos);
	void OnCharacterDied(int PlayerID, const struct FVector& pos);
	bool IsViewingTargetPlayer();
	bool IsShowTeamColor();
	void InitNewHorses(TArray<struct FOBHorseInfo> c_horseInfos);
	void InitNewCharacters(TArray<struct FOBPlayerInfo> c_playerInfos);
	void InitAll(const struct FOBGameInitInfo& initAllInfo);
	bool GetXinfaInfo(int worldID, struct FOBXinfaInfo* Info);
	int GetViewTargetPlayerID();
	bool GetTreasureboxInfo(int worldID, struct FOBTreasureBoxInfo* Info);
	float GetTimeToGameStart();
	int GetTeamNum();
	bool GetTeamMemInfo(const struct FString& teamName, TArray<struct FOBPlayerInfo>* infos);
	bool GetTeamInfoStr(const struct FString& TeamID, struct FOBTeamInfo* Info);
	bool GetTeamInfo(int TeamID, struct FOBTeamInfo* Info);
	struct FColor getTeamColor(const struct FString& TeamID);
	TArray<struct FOBBuffSimpleInfo> GetTargetPlayerBuffInfo(int PlayerID);
	bool GetStartTime(float* timeInMS);
	bool GetPlayerTargetDetailInfo(int PlayerID, struct FOBPlayerTargetDetailInfo* Info);
	TArray<int> GetPlayersSortedByTeamIndex();
	TArray<int> GetPlayersSortedByKillMajor(bool is_forward);
	TArray<int> GetPlayersSortedByDamageMajor(bool is_forward);
	float GetPlayerInfo_MaxInjury();
	float GetPlayerInfo_MaxDyingHealth();
	bool GetPlayerInfo(int PlayerID, struct FOBPlayerInfo* Info);
	TMap<int, struct FOBParadropPosInfo> GetParaPosInfos();
	bool GetParadropPosInfo(int ID, struct FOBParadropPosInfo* Info);
	TMap<int, struct FOBParadropItemInfo> GetParadropDetailInfos();
	bool GetParadropDetailInfo(int ID, struct FOBParadropItemInfo* Info);
	bool GetMijingenInfo(int worldID, struct FOBMijingmenInfo* Info);
	int GetMaxPlayerPerTeam();
	bool GetHorseInfo(int horseID, struct FOBHorseInfo* Info);
	struct FOBHorseBasicInfoToShow GetHorseBaseInfo(int horseBaseID);
	TArray<struct FOBStasticsInfo> GetGameResultInfo();
	bool GetFlyStartInfo(struct FVector* pos, struct FVector* dir, float* Time);
	bool GetFightStateInfo(int ID, struct FOBFightState* Info);
	EObserveCameraType GetCurCameraType();
	TMap<int, struct FOBXinfaInfo> GetAllXinfaInfos();
	TMap<int, struct FOBTreasureBoxInfo> GetAllTreasureboxInfos();
	TArray<struct FOBTeamInfo> GetAllTeamInfo();
	TMap<int, struct FOBPlayerInfo> GetAllPlayerInfo();
	TMap<int, struct FOBMijingmenInfo> GetAllMijingmenInfos();
	TMap<int, struct FOBFightState> GetAllFightStates();
	int GetAliveTeamNum();
	int GetAlivePlayerNum();
};


// Class WuXiaX.OBClientUIHelper
// 0x0210 (0x0238 - 0x0028)
class UOBClientUIHelper : public UObject
{
public:
	struct FScriptMulticastDelegate                    delCharInited;                                            // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    delCharAdded;                                             // 0x0038(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    allCharPosUpdated;                                        // 0x0048(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    delCharDied;                                              // 0x0058(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    delCharRespawned;                                         // 0x0068(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    delCharDying;                                             // 0x0078(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    delCharDyingRecover;                                      // 0x0088(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    delCharDeleted;                                           // 0x0098(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    delCharKillRefreshed;                                     // 0x00A8(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    delParadropSpawned;                                       // 0x00B8(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    delParadropInfoed;                                        // 0x00C8(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    delTreasureboxCreated;                                    // 0x00D8(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    delTreasureboxOpened;                                     // 0x00E8(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    delTreasureboxDestroyed;                                  // 0x00F8(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    delMijingmenCreated;                                      // 0x0108(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    delMijingmenExplored;                                     // 0x0118(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    delXinfaCreated;                                          // 0x0128(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    delXinfaLearning;                                         // 0x0138(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    delXinfaLearningFailed;                                   // 0x0148(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    delXinfaLearningFinished;                                 // 0x0158(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    delFightStateCreate;                                      // 0x0168(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    delFightStateExpire;                                      // 0x0178(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    delHorseRideChange;                                       // 0x0188(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    delInputMapViewName;                                      // 0x0198(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    delInputMapScroll;                                        // 0x01A8(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    delParadropItemPickedup;                                  // 0x01B8(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    delPlayerTargetDetailUpdated;                             // 0x01C8(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    delViewTargetChange;                                      // 0x01D8(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    delOBViewMethodChange;                                    // 0x01E8(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    delStartTimeInit;                                         // 0x01F8(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    delFlyStart;                                              // 0x0208(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    delOBGameOver;                                            // 0x0218(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    delLivePlayerNumChange;                                   // 0x0228(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.OBClientUIHelper");
		return ptr;
	}

};


// Class WuXiaX.GameEvent
// 0x0050 (0x0078 - 0x0028)
class UGameEvent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.GameEvent");
		return ptr;
	}

};


// Class WuXiaX.OBMapUI
// 0x0090 (0x0298 - 0x0208)
class UOBMapUI : public UUserWidget
{
public:
	class UWuXiaMiniMapWidget*                         Map;                                                      // 0x0208(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D                                   original_level_size_;                                     // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   original_map_size_;                                       // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   show_map_size_;                                           // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     vector_pos_2;                                             // 0x0228(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color_2;                                                  // 0x0234(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	TArray<struct FVector2D>                           cricle_point_1_;                                          // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector                                     vector_pos_3;                                             // 0x0258(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color_3;                                                  // 0x0264(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0274(0x0004) MISSED OFFSET
	TArray<struct FVector2D>                           cricle_point_2_;                                          // 0x0278(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FVector                                     center_;                                                  // 0x0288(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0294(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.OBMapUI");
		return ptr;
	}


	void OnInit(const struct FVector2D& original_level_size, const struct FVector2D& original_map_size, const struct FVector2D& show_map_size, const struct FVector& Center, class UTexture2D* chinese_map, class UTexture2D* english_map, bool can_mark);
	void Init(const struct FVector2D& original_level_size, const struct FVector2D& original_map_size, const struct FVector2D& show_map_size, const struct FVector& Center, class UTexture2D* chinese_map, class UTexture2D* english_map, bool can_mark);
	struct FVector2D GetPositionByVector3(const struct FVector& Location);
	struct FVector2D GetPercentByVector3(const struct FVector& Location);
};


// Class WuXiaX.OBOverviewUI
// 0x0000 (0x0208 - 0x0208)
class UOBOverviewUI : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.OBOverviewUI");
		return ptr;
	}

};


// Class WuXiaX.OBServerInfo
// 0x0328 (0x0650 - 0x0328)
class AOBServerInfo : public AInfo
{
public:
	float                                              Sec_PosNotifyDeltaTime;                                   // 0x0328(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sec_PosNotifyTargetDeltaTime;                             // 0x032C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0330(0x00B0) MISSED OFFSET
	TArray<struct FOBPlayerBasicInfo>                  allPlayerBaseInfo;                                        // 0x03E0(0x0010) (ZeroConstructor)
	TArray<int>                                        _clientsToInit;                                           // 0x03F0(0x0010) (ZeroConstructor)
	TArray<int>                                        _clientsInited;                                           // 0x0400(0x0010) (ZeroConstructor)
	TArray<class AWuXiaXCharacter*>                    _charDynamicToInit;                                       // 0x0410(0x0010) (ZeroConstructor)
	TArray<class AWuXiaXCharacter*>                    _charInited;                                              // 0x0420(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0430(0x0008) MISSED OFFSET
	TMap<int, int>                                     playerKillInfo;                                           // 0x0438(0x0050) (ZeroConstructor)
	TMap<int, int>                                     playerHurtInfo;                                           // 0x0488(0x0050) (ZeroConstructor)
	TArray<class AOBClientInfo*>                       cached_obclients_;                                        // 0x04D8(0x0010) (ZeroConstructor)
	TArray<class AWuXiaXHorse*>                        _horseToInit;                                             // 0x04E8(0x0010) (ZeroConstructor)
	TArray<class AWuXiaXHorse*>                        _horseInited;                                             // 0x04F8(0x0010) (ZeroConstructor)
	TArray<struct FOBPlayerInfo>                       _gameOveredChars;                                         // 0x0508(0x0010) (ZeroConstructor)
	TMap<struct FString, struct FOBTeamInfo>           _allTeamInfos;                                            // 0x0518(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData02[0xE8];                                      // 0x0568(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.OBServerInfo");
		return ptr;
	}

};


// Class WuXiaX.OBStatisticsWidget
// 0x0000 (0x0208 - 0x0208)
class UOBStatisticsWidget : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.OBStatisticsWidget");
		return ptr;
	}


	void InitPlayerInfos(TArray<struct FOBStasticsInfo> playerinfos);
};


// Class WuXiaX.OBTargetViewUI
// 0x0000 (0x0208 - 0x0208)
class UOBTargetViewUI : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.OBTargetViewUI");
		return ptr;
	}


	void ShowDamageCircle();
	void SetDamageCircleWaitingTime(float Time);
	void SetDamageCircleState(EDamageCircleState State);
	void SetDamageCircleShringkingTime(float CurrentTime, float alltime);
	void HideDamageCircle();
	void AppendKillInfo(const struct FString& attack_player_name, const struct FString& dead_player_name, int cause_id, ECauseDyingType reason);
	void AppendGongGao(EGongGaoType Type, const struct FText& Info);
};


// Class WuXiaX.OpeningUI
// 0x0000 (0x0208 - 0x0208)
class UOpeningUI : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.OpeningUI");
		return ptr;
	}


	void SetDonshowIntroduce();
	bool GetIsShowIntroduce();
};


// Class WuXiaX.PickBox
// 0x0028 (0x0350 - 0x0328)
class APickBox : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0328(0x0008) MISSED OFFSET
	class UMeshComponent*                              meshcomp_;                                                // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               collision_component_;                                     // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0340(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.PickBox");
		return ptr;
	}


	bool InteractiveUITips(class AWuXiaXCharacter* Player, struct FText* Text);
	EInteractiveType GetInteractiveType(class AWuXiaXCharacter* Player);
	bool CanInteractive(class AWuXiaXCharacter* Player, ETriggerInteractiveType Trigger);
};


// Class WuXiaX.PickItem
// 0x00A0 (0x03C8 - 0x0328)
class APickItem : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0328(0x0008) MISSED OFFSET
	class UBoxComponent*                               collision_component_;                                     // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                world_id_;                                                // 0x0338(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
	class UMeshComponent*                              meshcomp_;                                                // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	EPickItemType                                      pick_type_;                                               // 0x0348(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0349(0x0003) MISSED OFFSET
	struct FGameItemInfo                               item_info_;                                               // 0x034C(0x0038) (Net)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0384(0x0004) MISSED OFFSET
	class AWuXiaXCharacter*                            player_;                                                  // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     collision_scale_;                                         // 0x0390(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2C];                                      // 0x039C(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.PickItem");
		return ptr;
	}


	void OnRepScale();
	void OnRepPickType();
	void OnRepIteminfo();
	void OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	bool InteractiveUITips(class AWuXiaXCharacter* Player, struct FText* Text);
	EInteractiveType GetInteractiveType(class AWuXiaXCharacter* Player);
	bool CanInteractive(class AWuXiaXCharacter* Player, ETriggerInteractiveType Trigger);
	void CallWhenDestroy();
};


// Class WuXiaX.PickItemManager
// 0x0078 (0x03A0 - 0x0328)
class APickItemManager : public AActor
{
public:
	int                                                area_counter_;                                            // 0x0328(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x032C(0x0004) MISSED OFFSET
	TMap<int, class APickItem*>                        pick_item_map_;                                           // 0x0330(0x0050) (ZeroConstructor)
	int                                                pick_id_counter_;                                         // 0x0380(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x0384(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.PickItemManager");
		return ptr;
	}

};


// Class WuXiaX.PickList
// 0x0018 (0x0340 - 0x0328)
class APickList : public AActor
{
public:
	int                                                pick_list_id_;                                            // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                build_index_;                                             // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              build_min_chance_;                                        // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              build_max_chance_;                                        // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0338(0x0004) MISSED OFFSET
	float                                              spawn_radius_;                                            // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.PickList");
		return ptr;
	}

};


// Class WuXiaX.PickSpawnPoint
// 0x0018 (0x0340 - 0x0328)
class APickSpawnPoint : public AActor
{
public:
	int                                                pick_list_id_;                                            // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x032C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.PickSpawnPoint");
		return ptr;
	}

};


// Class WuXiaX.PickTextUI
// 0x0000 (0x0208 - 0x0208)
class UPickTextUI : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.PickTextUI");
		return ptr;
	}


	void WUXUEUseState(bool State);
	void SetItemName(const struct FString& Name);
};


// Class WuXiaX.PingTaiInterface
// 0x0040 (0x0068 - 0x0028)
class UPingTaiInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.PingTaiInterface");
		return ptr;
	}

};


// Class WuXiaX.PlayerAssassinationComponent
// 0x0060 (0x0150 - 0x00F0)
class UPlayerAssassinationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x00F0(0x0050) MISSED OFFSET
	float                                              server_tick_;                                             // 0x0140(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              client_tick_;                                             // 0x0144(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              owner_tick_;                                              // 0x0148(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x014C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.PlayerAssassinationComponent");
		return ptr;
	}


	void Server_AssassinationTarget();
	bool GetIsKillSuccess();
	bool GetIsFallKill();
	int GetFullActionTime();
	int GetCurrentActionTime();
};


// Class WuXiaX.PlayerBroadcastComponent
// 0x0088 (0x0178 - 0x00F0)
class UPlayerBroadcastComponent : public UActorComponent
{
public:
	class UClass*                                      FakePlayerBlueprint;                                      // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x00F8(0x0030) MISSED OFFSET
	TMap<int64_t, class AFakeCharacter*>               fake_player_pos;                                          // 0x0128(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.PlayerBroadcastComponent");
		return ptr;
	}


	void Broad_WallJump_Client(int64_t player_id, const struct FVector& NewVelocity);
	void Broad_WallJump(const struct FVector& NewVelocity);
	void Broad_TakeWeapon_Client(int64_t player_id, int index, bool take_change);
	void Broad_StartFallingAttack_Client(int64_t player_id);
	void Broad_SkillPlay_Client(int64_t player_id, int64_t play_time, int skill_id, const struct FName& section_name, int16_t rotation_r, int16_t rotation_p, int16_t rotation_y, EPlayerFightState child_state, EActionCheckType check_action);
	void Broad_SetStiffState_Client(int64_t player_id, bool foo);
	void Broad_SetStiffState(bool foo);
	void Broad_SetPickItemNumber_Client(int world_id, int Number);
	void Broad_SaveSquad_Client(int64_t player_id, int PlayerID, int actionindex);
	void Broad_RideHorse_Client(int64_t player_id, bool isride, bool isleft);
	void Broad_PlaySkillEffect_Client(int64_t player_id, EPlayerFightState Type, const struct FRotator& Rotation, int64_t skill_time, float be_attack_angle, const struct FVector& dir, float Len);
	void Broad_PlayerResurrection_Client(int64_t player_id);
	void Broad_PlayBlockBeAttack_Client(int64_t player_id);
	void Broad_PlayBeAttack_Client(int64_t player_id, int64_t play_time, bool beattack, int be_attack_type, float be_attack_angle, const struct FVector& dir, EPlayerActionState action_type);
	void Broad_PlayAim_Client(int64_t player_id, bool flag);
	void Broad_OnRep_Block_Client(int64_t player_id, int64_t block_counter_attack_play_time, bool flag, EPlayerFightState false_flag);
	void Broad_LianTiao_Client(int64_t player_id, bool is_in_lian_tiao, int lian_tiao_index);
	void Broad_LaunchMissile_Client(int64_t player_id, int64_t begintime, bool hasnextmissile);
	void Broad_KillTarget_Client(int64_t player_id, int PlayerID, int actionindex);
	void Broad_FinishSaveSquad_Client(int64_t player_id);
	void Broad_FinishKillTarget_Client(int64_t player_id);
	void Broad_FinishKeepInteractive_Client(int64_t player_id);
	void Broad_FinishInteractiveMove_Client(int64_t player_id);
	void Broad_FinishFallingAttack_Client(int64_t player_id, int64_t skillid);
	void Broad_FakeCharacter_Client(TArray<int64_t> player_id, TArray<struct FVector_NetQuantize> pos, TArray<int64_t> net_player_cloth_id);
	void Broad_EndAnimEffect_Client(int64_t player_id, int effecttype);
	void Broad_CollisionEnabled_Client(int64_t player_id, bool Enabled);
	void Broad_ChangeQingGongState_Client(int64_t player_id, EPlayerMotionState State);
	void Broad_ChangePlayerChildState_Client(int64_t player_id, EPlayerFightState State);
	void Broad_BreakKeepInteractive_Client(int64_t player_id);
	void Broad_BreakBeKill_Client(int64_t player_id);
	void Broad_BreakAction_Client(int64_t player_id, EBreakActionType breaktype);
	void Broad_BeginUseItem_Client(int64_t player_id, EBagType bag_type, int index, int Num, EUseItemState useitemstate, float Time, int actionindex);
	void Broad_BeginKeepInteractive_Client(int64_t player_id, int64_t begintime, float keeptime, EKeeyInteractiveType Type, int interactiveid, const struct FVector& playerlocation, const struct FVector& LookAtLocation, int actionindex);
	void Broad_BeginInteractiveMove_Client(int64_t player_id, int64_t begintime, float keeptime, EKeeyInteractiveType Type, const struct FVector& beginlocation, const struct FVector& EndLocation, class AWuXiaInteractiveActor* interactiveactor);
	void Broad_BeginBeKill_Client(int64_t player_id);
	void Broad_BeginBeAssassination_Client(int64_t player_id, bool isfall, bool issucces, float Damage, int64_t begintime, int64_t actiontime, int64_t ID);
	void Broad_BeginAssassinationTarget_Client(int64_t player_id, bool isfall, bool issucces, float Damage, int64_t begintime, int64_t actiontime, int64_t targetid);
	void Broad_BeginAnimEffect_Client(int64_t player_id, int effecttype);
};


// Class WuXiaX.PlayerBuffComponent
// 0x0040 (0x0130 - 0x00F0)
class UPlayerBuffComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00F0(0x0030) MISSED OFFSET
	float                                              server_tick_;                                             // 0x0120(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              client_tick_;                                             // 0x0124(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              owner_tick_;                                              // 0x0128(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x012C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.PlayerBuffComponent");
		return ptr;
	}


	void UI_SetBuff(int64_t buffID, int numberoflayer, float Time);
	void UI_RemoveBuff(int64_t buffID);
	void UI_ClearBuffs();
};


// Class WuXiaX.PlayerCaptureActor
// 0x0100 (0x0428 - 0x0328)
class APlayerCaptureActor : public AActor
{
public:
	class USkeletalMeshComponent*                      mesh_;                                                    // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      hair_;                                                    // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      hat_;                                                     // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      veil_;                                                    // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      shawl_;                                                   // 0x0348(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      leg_;                                                     // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      body_;                                                    // 0x0358(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      foot_;                                                    // 0x0360(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      plaything_;                                               // 0x0368(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	TArray<class USkeletalMeshComponent*>              weapon_show_component_;                                   // 0x0370(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	class USkeletalMeshComponent*                      range_weapon_component_2;                                 // 0x0380(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      range_weapon_component_3;                                 // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      range_weapon_component_4;                                 // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      range_weapon_component_5;                                 // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                skin_color_id_;                                           // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                hair_color_id_;                                           // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                face_id_;                                                 // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                hair_id_;                                                 // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	ESexType                                           sex_type_;                                                // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03B1(0x0003) MISSED OFFSET
	int                                                veil_id_;                                                 // 0x03B4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x70];                                      // 0x03B8(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.PlayerCaptureActor");
		return ptr;
	}


	void ShowHair();
	void ShowFace();
	void SetWeapon(int skin_id, int index);
	void SetHat(int skin_id);
	void SetEquip(int item_id, int index);
	void ResetSkinColor();
	void ResetHairColor();
	void LoadComplete();
};


// Class WuXiaX.PlayerEnumFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UPlayerEnumFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.PlayerEnumFunctionLibrary");
		return ptr;
	}


	bool STATIC_IsContainsSpecialStr(const struct FString& originstr);
	EWeaponEquipType STATIC_GetWeaponEquipTypeById(class UWuXiaXGameInstance* game_instance, int item_id);
	TArray<struct FString> STATIC_GetStrArrayByPath(const struct FString& Path);
	struct FString STATIC_GetStateString(EPlayerGameState Value);
	int STATIC_GetSkinType(int skin_id, class UWuXiaXGameInstance* game_instance);
	class UTexture2D* STATIC_GetSkinIcon(int skin_id, class UWuXiaXGameInstance* game_instance);
	void STATIC_GetSkinDetailById(class UWuXiaXGameInstance* game_instance, int skin_id, struct FString* Name, struct FString* detail);
	struct FString STATIC_GetSkillNameById(class UWuXiaXGameInstance* game_instance, int skill_id);
	class USkeletalMesh* STATIC_GetModelById(int ID, class UWuXiaXGameInstance* game_instance);
	EBagType STATIC_GetItemTypeById(class UWuXiaXGameInstance* game_instance, int item_id);
	class UObject* STATIC_GetItemMeshById(class UWuXiaXGameInstance* game_instance, int item_id, ESexType sex_type);
	EItemEquipType STATIC_GetItemEquipTypeById(class UWuXiaXGameInstance* game_instance, int item_id);
	void STATIC_GetItemDetailById(class UWuXiaXGameInstance* game_instance, int item_id, struct FString* Name, struct FString* detail);
	EItemType STATIC_GetItemChildTypeById(class UWuXiaXGameInstance* game_instance, int item_id);
	void STATIC_GetHallItemDetailById(class UWuXiaXGameInstance* game_instance, int item_id, struct FString* Name, struct FString* detail);
	class USkeletalMesh* STATIC_GetHairMeshByHatId(class UWuXiaXGameInstance* game_instance, int item_id, ESexType sex_type);
	struct FLinearColor STATIC_GetColorById(int ID, class UWuXiaXGameInstance* game_instance);
	struct FString STATIC_GetChineseString(const struct FString& originstr);
	struct FString STATIC_GetBuffNameById(class UWuXiaXGameInstance* game_instance, int ID);
	void STATIC_CloseSession(class APlayerController* player_ctrl);
};


// Class WuXiaX.PlayerFightComponent
// 0x03A0 (0x0490 - 0x00F0)
class UPlayerFightComponent : public UActorComponent
{
public:
	bool                                               is_in_block_;                                             // 0x00F0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPlayerTakeWeaponState                             take_weapon_state_;                                       // 0x00F1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x26];                                      // 0x00F2(0x0026) MISSED OFFSET
	int                                                current_use_skill_bar_index_;                             // 0x0118(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                owenr_current_use_skill_bar_index_;                       // 0x011C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0120(0x0004) MISSED OFFSET
	int                                                near_weapon_index_;                                       // 0x0124(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0128(0x0008) MISSED OFFSET
	int64_t                                            current_target_id_;                                       // 0x0130(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x50];                                      // 0x0138(0x0050) MISSED OFFSET
	int                                                current_weapon_type;                                      // 0x0188(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData04[0x94];                                      // 0x018C(0x0094) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              skill_overlap_type_;                                      // 0x0220(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<TEnumAsByte<EObjectTypeQuery>>              attack_static_type_;                                      // 0x0230(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UClass*                                      skill_overlap_actor_class_filter;                         // 0x0240(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      skill_overlap_actor2_class_filter;                        // 0x0248(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // 0x0250(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x94];                                      // 0x0260(0x0094) MISSED OFFSET
	float                                              server_tick_;                                             // 0x02F4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              client_tick_;                                             // 0x02F8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              owner_tick_;                                              // 0x02FC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               delay_flag;                                               // 0x0300(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0301(0x0003) MISSED OFFSET
	int                                                delay_cd;                                                 // 0x0304(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                delay_skill;                                              // 0x0308(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x030C(0x0004) MISSED OFFSET
	int64_t                                            weak_close_time_;                                         // 0x0310(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	int64_t                                            weak_close_time_my_;                                      // 0x0318(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               weak_flag_;                                               // 0x0320(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData08[0x16F];                                     // 0x0321(0x016F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.PlayerFightComponent");
		return ptr;
	}


	void UnTakeWeapon();
	void TakeWeapon(int index, bool take_change, bool send_server, bool is_design);
	void SwitchWeaponAmongFarAndNear();
	void SwitchWeapon(int Value);
	void SwitchThrowWeapon();
	void SwitchNearWeapon();
	void Server_TakeWeapon(int index, bool take_change);
	void Server_StartFallingAttack();
	void Server_SpawnMissileInfo(int64_t missileid, int64_t createtime, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Direction, int kill_item_id);
	void Server_SkillPlay(int64_t play_time, int skill_id, const struct FName& section_name, int16_t rotation_r, int16_t rotation_p, int16_t rotation_y, EPlayerFightState child_state, int attack_target_id, EActionCheckType check_action);
	void Server_PlayAim(bool flag);
	void Server_LaunchMissile(int64_t begintime);
	void Server_ChangeTarget(int64_t Target, bool is_auto_target_id);
	void Server_BlockPlay(int64_t block_counter_attack_play_time, bool flag);
	void PlayWuDi();
	void PlayShanBi(EShanBiDirection index);
	void PlayQiShen();
	void OnRep_WeakState();
	void OnRep_SkillBarIndex();
	void OnRep_OwnerSkillBarIndex();
	void OnPlayerOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnPlayerOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void NormalAttacRelease();
	void NormalAttack();
	void LaunchMissile();
	void HeavyAttack();
	int GetCurrentWeapon();
	int GetCurrentAttackTargetId();
	void Client_ReconnectUpdate(int index);
	void Client_CheckSoundResult(TArray<int> Ids, TArray<struct FVector> Locations);
	void Client_CancleSkillPlay(int skill_id);
	void CheckSound();
	bool CheckIsInSkill();
	bool CheckIsInRangeWeaponState();
	bool CheckIsInAim();
	void BlockPlay(bool flag);
	void AttackInBlock();
	void AttackByIndexRelease(EInputAttackType index);
	void AttackByIndex(int index);
};


// Class WuXiaX.PlayerFightEffectLibrary
// 0x0000 (0x0028 - 0x0028)
class UPlayerFightEffectLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.PlayerFightEffectLibrary");
		return ptr;
	}

};


// Class WuXiaX.PlayerInteractiveComponent
// 0x0050 (0x0140 - 0x00F0)
class UPlayerInteractiveComponent : public UActorComponent
{
public:
	EKeeyInteractiveType                               keep_interactive_type_;                                   // 0x00F0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	float                                              keep_interactive_time_;                                   // 0x00F8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              keep_interactive_full_time_;                              // 0x00FC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0100(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.PlayerInteractiveComponent");
		return ptr;
	}


	void Server_InteractiveToActor(int ID, ETriggerInteractiveType Trigger);
	void OnRepInteractiveType();
	void Mult_StopInteractive(int interactiveactorid);
	void Mult_Interactive(int interactiveactorid);
	void Mult_BeginInteractive(int interactiveactorid, int PlayerID);
	EKeeyInteractiveType GetKeeyInteractiveType();
	float GetKeepingFullTime();
	float GetKeepingCurrentTime();
};


// Class WuXiaX.PlayerItemCtrlComponent
// 0x0290 (0x0380 - 0x00F0)
class UPlayerItemCtrlComponent : public UActorComponent
{
public:
	class UClass*                                      widget_class_;                                            // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWidgetComponent*                            name_widget_;                                             // 0x00F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class APickItem*>                           View_Items;                                               // 0x0100(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x168];                                     // 0x0110(0x0168) MISSED OFFSET
	TArray<int>                                        equip_vec_net_;                                           // 0x0278(0x0010) (Net, ZeroConstructor)
	TArray<int>                                        equip_vec_net_other;                                      // 0x0288(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0298(0x0068) MISSED OFFSET
	class APickItemManager*                            pick_manager_;                                            // 0x0300(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class APickItem*>                           pick_items_;                                              // 0x0308(0x0010) (ZeroConstructor)
	class APickItem*                                   current_sight_in_item_;                                   // 0x0318(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        old_equip_vec_;                                           // 0x0320(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0330(0x0008) MISSED OFFSET
	bool                                               is_operating_bag_;                                        // 0x0338(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x37];                                      // 0x0339(0x0037) MISSED OFFSET
	float                                              server_tick_;                                             // 0x0370(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              client_tick_;                                             // 0x0374(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              owner_tick_;                                              // 0x0378(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x037C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.PlayerItemCtrlComponent");
		return ptr;
	}


	void UI_UseSkillBook(EBagType bag_type, int index);
	void UI_UseItem(EBagType bag_type, int index, int Num);
	void UI_SwapItemToSlot(EBagType source_bag_type, int source_index, int Num, EBagType target_bag_type, int target_index);
	void UI_SwapItemToBag(EBagType source_bag_type, int source_index, int Num, EBagType target_bag_type);
	void UI_SwapItemHotKey(int SourceIndex, int targetindex);
	void UI_SetItemHotKey(EBagType bag_type, int index, int hotkeyindex);
	void UI_RemoveItemHotKey(int index);
	void UI_DropItem(EBagType bag_type, int index, int Num);
	void UI_AddItemByIndex(int world_id);
	void TryPickUp(int world_id, ETriggerType Type, int get_num, EBagType target_bag_type, int target_index);
	void ShowItemDetial(EBagType bagtype, int index);
	void Server_UseItem(EBagType bag_type, int index, int Num);
	void Server_SwapItem(EBagType source_bag_type, int source_index, int Num, EBagType target_bag_type, int target_index);
	void Server_DropItem(EBagType bag_type, int index, int Num);
	void Server_BeginUseItem(EBagType bag_type, int index, int Num);
	void ReSortItems();
	void QuickUseItem(int index);
	void OnRep_Equip_Change_Other();
	void OnRep_Equip_Change();
	void OnDragItem(EBagType bagtype, int index);
	int GetWeaponId(int index);
	int GetUsing_item_index();
	EUseItemState GetUseItemState();
	float GetUseItemFullTime();
	int GetPickIdByIndex(int index);
	struct FGameItemInfo GetItemInfo(EBagType bag_type, int index);
	int GetIndexByPickId(int world_id);
	void Client_UseItem_NotItem(bool result);
	void Client_UseItem(bool result, const struct FGameItemInfo& out_item);
	void Client_UpdateItem(TArray<struct FGameItemInfo> item_array);
	void Client_SwapItem_NotItem(EItemOperateType operate_type);
	void Client_SwapItem(EItemOperateType operate_type, TArray<struct FGameItemInfo> item_array);
	void Client_SetItemsHotKey(int64_t item1, int64_t item2, int64_t item3);
	void Client_DropItem_NotItem(bool result);
	void Client_DropItem(bool result, const struct FGameItemInfo& out_item);
	void Client_ClearAllItem(bool isclearappearance);
	void Client_CancelOperating();
	void Client_AddItem_NoItem(EItemOperateType operate_type);
	void Client_AddItem(EItemOperateType operate_type, TArray<struct FGameItemInfo> item_array);
	void AddItem(TArray<int> Ids);
};


// Class WuXiaX.PlayerKeepActionComponent
// 0x0030 (0x0120 - 0x00F0)
class UPlayerKeepActionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x00F0(0x0024) MISSED OFFSET
	float                                              server_tick_;                                             // 0x0114(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              client_tick_;                                             // 0x0118(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              owner_tick_;                                              // 0x011C(0x0004) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.PlayerKeepActionComponent");
		return ptr;
	}


	void Server_BreakAction(EBreakActionType breaktype);
	EKeepingActionType GetCurrentKeepActionState();
	void Client_BreakAction(EBreakActionType breaktype, int actionindex);
	void BreakAction(EBreakActionType breaktype);
};


// Class WuXiaX.PlayerMovementComponent
// 0x0010 (0x0730 - 0x0720)
class UPlayerMovementComponent : public UCharacterMovementComponent
{
public:
	class USphereComponent*                            sphere_component_;                                        // 0x0720(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0728(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.PlayerMovementComponent");
		return ptr;
	}

};


// Class WuXiaX.PlayerPropertyComponent
// 0x0268 (0x0358 - 0x00F0)
class UPlayerPropertyComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x00F0(0x00A8) MISSED OFFSET
	int                                                player_hp_;                                               // 0x0198(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                player_mp_;                                               // 0x019C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                player_max_hp_;                                           // 0x01A0(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                player_max_hp_add_rate_;                                  // 0x01A4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                player_max_hp_add_;                                       // 0x01A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                player_max_mp_;                                           // 0x01AC(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                player_max_mp_add_rate_;                                  // 0x01B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                player_max_mp_add_;                                       // 0x01B4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              player_dying_;                                            // 0x01B8(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              player_injury_;                                           // 0x01BC(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                hp_recover_value_;                                        // 0x01C0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                hp_recover_rate_value_;                                   // 0x01C4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                hp_recover_time_;                                         // 0x01C8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                hp_unrecover_value_;                                      // 0x01CC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                hp_unrecover_rate_value_;                                 // 0x01D0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                hp_unrecover_time_;                                       // 0x01D4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                mp_recover_value_;                                        // 0x01D8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                mp_recover_rate_value_;                                   // 0x01DC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                mp_recover_time_;                                         // 0x01E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                mp_unrecover_value_;                                      // 0x01E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                mp_unrecover_rate_value_;                                 // 0x01E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                mp_unrecover_time_;                                       // 0x01EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                satiety_consume_value_;                                   // 0x01F0(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                satiety_consume_time_;                                    // 0x01F4(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                satiety_recover_rate_;                                    // 0x01F8(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                moisture_consume_value_;                                  // 0x01FC(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                moisture_consume_time_;                                   // 0x0200(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                moisture_recover_rate_;                                   // 0x0204(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              injury_maxmp_percent_;                                    // 0x0208(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                oxygen_;                                                  // 0x020C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                max_oxygen_;                                              // 0x0210(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0214(0x0008) MISSED OFFSET
	int                                                save_change_value_;                                       // 0x021C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                other_save_change_value_;                                 // 0x0220(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               invincible_;                                              // 0x0224(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3B];                                      // 0x0225(0x003B) MISSED OFFSET
	float                                              server_tick_;                                             // 0x0260(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              client_tick_;                                             // 0x0264(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              owner_tick_;                                              // 0x0268(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               skill_mp_weak_;                                           // 0x026C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0xB];                                       // 0x026D(0x000B) MISSED OFFSET
	struct FPlayerGameTimeData                         m_Game_Time_Data;                                         // 0x0278(0x00C8) (BlueprintVisible, BlueprintReadOnly)
	struct FHPChangeInfo                               m_HpChangeInfo;                                           // 0x0340(0x0018) (BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.PlayerPropertyComponent");
		return ptr;
	}


	void UpdateMaxMp();
	void ServerInitProperty();
	void ReSetDyingHp();
	void OnSaveChangeValueChange();
	void OnSatietyChange();
	void OnOxygenChange();
	void OnMPChange();
	void OnMoistureChange();
	void OnInjuryChange();
	void OnHPChange();
	void OnDyingHPChange();
	void InitInjurysValue();
	int GetWaiArmorRate();
	int GetWaiArmor();
	int GetSimpleWaiArmorRate();
	struct FPlayerGameTimeData GetPlayerGameTimeData();
	int GetOxygen();
	int GetOutPower();
	int GetNeiArmor();
	int GetInterruptAddSkill(int skil);
	int GetInnerPower();
	struct FHPChangeInfo GetHpChangeInfo();
	int GetDefCritRate();
	int GetDefCritModulus();
	int GetCurrentPlayerMP();
	int GetCurrentPlayerHP();
	int GetCurrentPlayerDyingHP();
	int GetCritRate();
	int GetCritModulus();
	int GetBeInterruptAddSkill(int skill);
	int GetAttack();
	void ChangeWaiArmor(int Value, EPropertyChangeReason reason);
	void ChangeSaveValue(float Time, EPropertyChangeReason reason);
	void ChangeSaveChangeValueBeKill(EPropertyChangeReason reason);
	void ChangeSaveChangeValue(bool isadd, EPropertyChangeReason reason);
	void ChangeRecoverRate(int Value, EPropertyChangeReason reason);
	void ChangeOxygenchange(int oxygenchange, EPropertyChangeReason reason);
	void ChangeOxygen(int oxygen, float Time, EPropertyChangeReason reason);
	void ChangeOutPower(int Value, EPropertyChangeReason reason);
	void ChangeNeiArmor(int Value, EPropertyChangeReason reason);
	void ChangeMp(int mp, float Time, EMPChangeType mp_change_type, EPropertyChangeReason reason);
	void ChangeMaxHpAddRate(int maxhpadd, EPropertyChangeReason reason);
	void ChangeInterrupt(int Value, EPropertyChangeReason reason);
	void ChangeInnerPower(int Value, EPropertyChangeReason reason);
	void ChangeInjury(float injury, EPropertyChangeReason reason);
	void ChangeHp(int hp, EPropertyChangeReason reason);
	void ChangeDyingHP(int dying_hp, EPropertyChangeReason reason);
	void ChangeDefCritRate(int Value, EPropertyChangeReason reason);
	void ChangeDefCritModulus(int Value, EPropertyChangeReason reason);
	void ChangeCritRate(int Value, EPropertyChangeReason reason);
	void ChangeCritModulus(int Value, EPropertyChangeReason reason);
	void ChangeBeInterrupt(int Value, EPropertyChangeReason reason);
	void ChangeAttack(int Value, EPropertyChangeReason reason);
};


// Class WuXiaX.PlayerSkillsComponent
// 0x0260 (0x0350 - 0x00F0)
class UPlayerSkillsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x00F0(0x0090) MISSED OFFSET
	int64_t                                            general_skill_id_;                                        // 0x0180(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1B8];                                     // 0x0188(0x01B8) MISSED OFFSET
	float                                              server_tick_;                                             // 0x0340(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              client_tick_;                                             // 0x0344(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              owner_tick_;                                              // 0x0348(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x034C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.PlayerSkillsComponent");
		return ptr;
	}


	void UI_SwapSkill(ESkillEquipType sourceslottype, int SourceIndex, int sourceskillid, ESkillEquipType targetslottype, int targetslotindex, int targetskillid);
	void UI_ShowSkillDetail(ESkillEquipType slottype, int slotindex, int skillid);
	void UI_RemoveSkill(ESkillEquipType slottype, int slotindex);
	void UI_DropSkillToPanel(ESkillEquipType sourceslottype, int SourceIndex, int sourceskillid, ESkillEquipType targetslottype);
	void Server_SwapSkill(ESkillEquipType sourceslottype, int SourceIndex, int sourceskillid, ESkillEquipType targetslottype, int targetslotindex, int targetskillid);
	void Server_RemoveSkill(ESkillEquipType slottype, int slotindex);
	void Server_ChangeEquipWeapon(ESkillEquipType sourceslottype, int64_t weaponid);
	void Client_SetSkills(TArray<struct FSetSkillInfo> skillchangeinfo);
	void Client_RemoveSkill(ESkillEquipType slottype, int slotindex);
	void Client_ReconnectUpdate(TArray<int64_t> skills, TArray<int64_t> equipskills, int64_t generalskillid, int64_t lastgeneralskillendtime);
	void Client_EquipSkill(ESkillEquipType slottype, int slotindex, int64_t skillid);
	void Client_ClearAllSkill();
	void Client_ChangeEquipWeapon(ESkillEquipType sourceslottype, int64_t weaponid, int currentweapontype1, int currentweapontype2);
	void Client_AddSkill(int64_t skillid);
	bool CanUseSkillBook(int itemID);
};


// Class WuXiaX.PlayerSquadComponent
// 0x0190 (0x0280 - 0x00F0)
class UPlayerSquadComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x00F0(0x00F0) MISSED OFFSET
	struct FString                                     squad_id_;                                                // 0x01E0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData01[0x90];                                      // 0x01F0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.PlayerSquadComponent");
		return ptr;
	}


	void UpdateAllDataToUI();
	void SetMark(const struct FVector& Location, bool HasMark);
	void Server_UpdateSquadID();
	void Server_UpdateDataByPlayerID(int PlayerID);
	void Server_UpdateAllData();
	void Server_SetSquadUpdateType(int PlayerID, bool isserverupdate);
	void Server_SetMark(const struct FVector& Location, bool HasMark);
	void Server_SaveSquad(int PlayerID);
	void Server_KillTarget(int PlayerID);
	void Server_ChangeVisionPlayerID(int PlayerID);
	void Client_UpdateMemberTransfrom(int PlayerID, const struct FVector& Location, float Yaw);
	void Client_UpdateMemberState(int PlayerID, ETeamPlayerState PlayerState);
	void Client_UpdateMemberSaveValue(int PlayerID, float savevalue);
	void Client_UpdateMemberMaxHP(int PlayerID, int maxHP);
	void Client_UpdateMemberMarkData(int PlayerID, const struct FVector& mark3dlocation, bool ismark);
	void Client_UpdateMemberHp(int PlayerID, int hp);
	void Client_UpdateMemberDyingHP(int PlayerID, float dyingHp);
	void Client_UpdateMemberData(const struct FSquadMemberData& Data);
	void Client_RemoveSquadData(int ID);
	void Client_InitSquad(const struct FString& squadid);
	void ChangeVision(bool isnext);
};


// Class WuXiaX.PlayerStateComponent
// 0x0180 (0x0270 - 0x00F0)
class UPlayerStateComponent : public UActorComponent
{
public:
	struct FTimerHandle                                recover_child_state_;                                     // 0x00F0(0x0008)
	struct FScriptMulticastDelegate                    player_state_changed_event_;                              // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0108(0x0020) MISSED OFFSET
	EPlayerGameState                                   player_state_net_owner_;                                  // 0x0128(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	EPlayerGameState                                   player_state_net_other_;                                  // 0x0129(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	EPlayerFightState                                  player_child_state_;                                      // 0x012A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPlayerMoveStateType                               player_move_state_;                                       // 0x012B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPlayerMotionState                                 player_motion_state_;                                     // 0x012C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               has_send_kill_info_;                                      // 0x012D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x012E(0x0002) MISSED OFFSET
	class UWuXiaXGameInstance*                         game_instace_;                                            // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x12C];                                     // 0x0138(0x012C) MISSED OFFSET
	float                                              server_tick_;                                             // 0x0264(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              client_tick_;                                             // 0x0268(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              owner_tick_;                                              // 0x026C(0x0004) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.PlayerStateComponent");
		return ptr;
	}


	void ServerInitProperty();
	void Server_SetPlayerState(EPlayerGameState State);
	void Server_EffectPlayerState(EPlayerGameState Val);
	void Server_ChangePlayerChildState(EPlayerFightState State, float during);
	void recover_child_state_time_FUNC();
	EPlayerGameState Player_state_net();
	void OnRep_State_Other();
	void OnRep_State();
	EPlayerMoveStateType GetPlayerMoveState();
	EPlayerMotionState GetPlayerMotionState();
	EPlayerFightState GetPlayerChildState();
	void ExitFight();
	void Client_EffectPlayerState(EPlayerGameState Val);
	void ChangePlayerState(EPlayerGameState Val);
	void ChangePlayerMoveState(EPlayerMoveStateType Val);
	void ChangePlayerMotionState(EPlayerMotionState Val);
	void ChangePlayerChildState(EPlayerFightState Val);
};


// Class WuXiaX.PlayerStateEffectLibrary
// 0x0000 (0x0028 - 0x0028)
class UPlayerStateEffectLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.PlayerStateEffectLibrary");
		return ptr;
	}

};


// Class WuXiaX.PVPSelectUI
// 0x0210 (0x0418 - 0x0208)
class UPVPSelectUI : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0208(0x0060) MISSED OFFSET
	TMap<int, class UTexture2D*>                       weapon_slot_icons_;                                       // 0x0268(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UTexture2D*>                          weapons_icons_;                                           // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        weapons_ids_;                                             // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             weapons_names_;                                           // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UTexture2D*>                          range_weapons_icons_;                                     // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        range_weapons_ids_;                                       // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             range_weapons_names_;                                     // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UTexture2D*>                          range_consumables_icons_;                                 // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        range_consumables_number_;                                // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UTexture2D*>                          missile_icons_;                                           // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        missile_ids_;                                             // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             missile_names_;                                           // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        missile_number_;                                          // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UTexture2D*>                          items_icons_;                                             // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        items_ids_;                                               // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             items_names_;                                             // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        items_numbers_;                                           // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UTexture2D*>                          xinfa_icons_;                                             // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        xinfa_ids_;                                               // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             xinfa_names_;                                             // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UTexture2D*>                          tongyong_icons_;                                          // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        tongyong_ids_;                                            // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             tongyong_names_;                                          // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.PVPSelectUI");
		return ptr;
	}


	void SetWeapon(int index, int weaponid);
	void SetUIWeapon(int index, int ID, class UTexture2D* icon, TArray<int> skillids, TArray<struct FString> skillnames, TArray<class UTexture2D*> skillicons);
	void SetUISkill(int Type, int index, int ID);
	void SetUIRangeWeapon(int ID, class UTexture2D* icon, class UTexture2D* consumablesicon, int Number);
	void SetUIMissile(int ID, class UTexture2D* icon, int Number);
	void SetUIItem(int index, int ID, class UTexture2D* icon, int Number);
	void SetSkillHotKey(int index, const struct FText& hotkeyname);
	void SetSkill(int typeindex, int index, int skillid);
	void SetResurrectionInfo(const struct FResurrectionInfo& Info);
	void SetItemHotKey(int index, const struct FText& hotkeyname);
	void SetItem(int index, int itemID);
	void SetHandSkills(TArray<int> skillids, TArray<struct FString> skillnames, TArray<class UTexture2D*> icons);
	void SaveChange();
	void RandomSelect();
	void InitIcons(TArray<int> skinids);
	void InitHotKeys();
	void InitByInfo(const struct FResurrectionInfo& Info);
	void InitAllEvents();
	void CancelChange();
};


// Class WuXiaX.RecordActor
// 0x0008 (0x0330 - 0x0328)
class ARecordActor : public AActor
{
public:
	class UWuXiaXGameInstance*                         game_instance_;                                           // 0x0328(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.RecordActor");
		return ptr;
	}

};


// Class WuXiaX.DataRecorder
// 0x0120 (0x0148 - 0x0028)
class UDataRecorder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0028(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.DataRecorder");
		return ptr;
	}

};


// Class WuXiaX.RoomChildUI
// 0x0080 (0x0288 - 0x0208)
class URoomChildUI : public UUserWidget
{
public:
	struct FUIRoomInfo                                 room_info_;                                               // 0x0208(0x0080) (BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.RoomChildUI");
		return ptr;
	}


	void Init(const struct FUIRoomInfo& Info);
};


// Class WuXiaX.RoomInfoWidget
// 0x00A8 (0x02B0 - 0x0208)
class URoomInfoWidget : public UUserWidget
{
public:
	struct FUIRoomInfo                                 room_info_;                                               // 0x0208(0x0080) (BlueprintVisible)
	int                                                master_id_;                                               // 0x0288(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x028C(0x0004) MISSED OFFSET
	TArray<struct FRoomUser>                           userinfos_;                                               // 0x0290(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               is_master_;                                               // 0x02A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02A1(0x0007) MISSED OFFSET
	class URoomTeamPlayerUI*                           select_player_;                                           // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.RoomInfoWidget");
		return ptr;
	}


	void WidgetGetRoomInfos();
	void UpdatePlayer(const struct FRoomUser& Player);
	void SetSelectPlayer(const struct FRoomUser& Player);
	void SetRoomInfo(const struct FUIRoomInfo& room_info, int master_id, TArray<struct FRoomUser> userinfos);
	void RemovePlayer(const struct FRoomUser& Player);
	void PlayerBeenRemove(const struct FRoomUser& Player);
	void PlayerBeenCreate(const struct FRoomUser& Player);
	struct FString GetMapName(int map_id);
	void DeletePlayer(int player_id);
	void CreateTeamWidget(int index, int Num, bool is_team);
	void CreatePlayerComplete();
	void CreatePlayer(const struct FRoomUser& Player);
	void ClearAll();
};


// Class WuXiaX.RoomTeamPlayerUI
// 0x0030 (0x0238 - 0x0208)
class URoomTeamPlayerUI : public UUserWidget
{
public:
	struct FRoomUser                                   player_;                                                  // 0x0208(0x0020) (BlueprintVisible)
	bool                                               is_select_;                                               // 0x0228(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0229(0x0003) MISSED OFFSET
	int                                                team_index_;                                              // 0x022C(0x0004) (ZeroConstructor, IsPlainOldData)
	ERoleType                                          type_;                                                    // 0x0230(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0231(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.RoomTeamPlayerUI");
		return ptr;
	}


	void UpdatePlayerInfo(const struct FRoomUser& Player, int master_id, bool is_master);
	void SetSelectState(bool State);
	void ResetUserInfo();
	void Remove();
	void Init(int team_index, ERoleType Type);
};


// Class WuXiaX.RoomTeamUI
// 0x0010 (0x0218 - 0x0208)
class URoomTeamUI : public UUserWidget
{
public:
	TArray<class URoomTeamPlayerUI*>                   players_;                                                 // 0x0208(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.RoomTeamUI");
		return ptr;
	}


	void SortPlayer();
	class URoomTeamPlayerUI* SetSelectPlayer(const struct FRoomUser& Player);
	void Init(int index, int Num, bool is_team);
};


// Class WuXiaX.RoomUI
// 0x0080 (0x0288 - 0x0208)
class URoomUI : public UUserWidget
{
public:
	struct FUIRoomInfo                                 room_info_;                                               // 0x0208(0x0080) (BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.RoomUI");
		return ptr;
	}


	void SetInfo(const struct FUIRoomInfo& Info);
	void GetRoomStartTime(const struct FString& room_id, TArray<int>* Times);
	class UTexture2D* GetMapInfo(int map_id, struct FString* Name);
};


// Class WuXiaX.ShowDebugComponent
// 0x0070 (0x0160 - 0x00F0)
class UShowDebugComponent : public UActorComponent
{
public:
	TMap<struct FString, struct FString>               VariablesNamesMaps;                                       // 0x00F0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      ShowDebugWidgetClass;                                     // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               visible_in_game_;                                         // 0x0148(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0149(0x0001) MISSED OFFSET
	bool                                               isUsingCustomTickInterval;                                // 0x014A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x014B(0x0001) MISSED OFFSET
	float                                              CustomTickInterval;                                       // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWidgetComponent*                            WidgetComponentRef;                                       // 0x0150(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UShowDebugWidget*                            ShowDebugWidgetRef;                                       // 0x0158(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.ShowDebugComponent");
		return ptr;
	}


	TArray<struct FDebugVariable> UpdateVariables();
};


// Class WuXiaX.ShowDebugWidget
// 0x0000 (0x0208 - 0x0208)
class UShowDebugWidget : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.ShowDebugWidget");
		return ptr;
	}


	void OnVariablesUpdated(TArray<struct FDebugVariable> VariablesList);
};


// Class WuXiaX.SkillUI
// 0x0000 (0x0208 - 0x0208)
class USkillUI : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.SkillUI");
		return ptr;
	}


	void Vertical(bool State, bool IsDown);
	void UseSkillWidget();
	void UseSkill(int skill_id, int skill_type);
	void UnEquipSkill(ESkillEquipType slottype, int slotindex);
	void ShowUISkillDetail(const struct FUISkillInfo& skillinfo);
	void ShowSkillUI();
	void SetSkillWeapon(ESkillEquipType slottype, int weapontype);
	void SetSkillEquipState(TArray<int> skillids);
	void SetSkillBook(int itemindex, int skillid, int weapontype, int Level, const struct FString& Name, const struct FString& Description, class UTexture2D* icon, bool isenable);
	void SetPassiveSkill(TArray<struct FUISkillInfo> Info);
	void SetActiveSkill(TArray<struct FUISkillInfo> Info);
	void SelectHoverSkill();
	void RemoveSkillBook(int skillitemid);
	void RemovePassiveSkill(int skillid);
	void RemoveActiveSkill(int skillid);
	void ReLoadConfigShow();
	void NextLabel();
	void MarkHoverItem(EGamepadMarkType MarkType);
	void LastLabel();
	void InitPassiveSkill(TArray<struct FUISkillInfo> skillsinfo);
	void InitAllEvent();
	void InitActiveSkill(TArray<struct FUISkillInfo> skillsinfo);
	void Init();
	void Horizontal(bool State, bool IsRight);
	void HideUISkillDetail();
	void HideSkillUI();
	void GamepadIntoWidget();
	void EquipSkill(ESkillEquipType slottype, int slotindex, class UTexture2D* icon, bool isenable);
	void DropSkill();
	void ClearAllSkill();
	void ChangeSkillCurrentWeapon(ESkillEquipType equiptype);
	void AutoShowSkillByWeapons(TArray<int> weapons);
	void AddPassiveSkill(int skillid);
	void AddActiveSkill(int skillid);
};


// Class WuXiaX.SoldItemUI
// 0x0008 (0x0210 - 0x0208)
class USoldItemUI : public UUserWidget
{
public:
	int                                                item_id_;                                                 // 0x0208(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x020C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.SoldItemUI");
		return ptr;
	}


	void ShowItemInfo(int money, class UTexture2D* icon, const struct FString& Name);
	void SetItemInfo(bool is_item, int item_id);
};


// Class WuXiaX.StatisticsWidget
// 0x0000 (0x0208 - 0x0208)
class UStatisticsWidget : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.StatisticsWidget");
		return ptr;
	}


	void StartAnimation();
	void SortInfo(int rank, int kill, int reward, int rank_point, int kill_point, int damage_point, int all_team_number);
	int SendComplainVideo();
	int SendComplain(const struct FString& player_name, TArray<int> select, const struct FString& player_text);
	void RecordVideo();
	void ReConnect();
	void OpenSummary();
	void GetSwordItem(class UTexture2D* Texture, int Level, const struct FString& item_name);
	int GetSendedCount();
	void ActiveComplain();
};


// Class WuXiaX.StoreWidget
// 0x0008 (0x0210 - 0x0208)
class UStoreWidget : public UUserWidget
{
public:
	class UWuXiaXGameInstance*                         game_instance_;                                           // 0x0208(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.StoreWidget");
		return ptr;
	}


	void InitRandomBoxData(int item_id);
	void InitPreviewBoxData(int item_id);
	void InitBuyKeys();
	class UTexture2D* GetOpenBoxIcon(int item_id);
	void GetKeyPrice(int item_id, int* Type, float* price);
	void GetHallItemDetail(int item_id, struct FString* Name, struct FString* descript, struct FString* detail);
	void GetConsumeInfo(int item_id, bool* valid_item, int* consume_id, bool* need_consume);
	void GetBoxNameAndCost(int item_id, struct FString* Name, int* cost);
	class UTexture2D* GetBoxIcon(int item_id);
	int GetBoxByTimeAWeek(int item_id);
	void CreateRandomBoxItem(int ID, int parent_id, int index, int Type, class UTexture2D* icon, int Level);
	void CreateRandomBox(int item_id, int index, class UTexture2D* icon);
	void CreatePreviewBoxItem(int ID, int Type, class UTexture2D* icon, int Level);
	void CreateBuyKey(int ID, class UTexture2D* icon, int price_type, float price);
};


// Class WuXiaX.SystemMenuUI
// 0x0008 (0x0210 - 0x0208)
class USystemMenuUI : public UUserWidget
{
public:
	class UUserSettingWidget*                          setting_ui_;                                              // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.SystemMenuUI");
		return ptr;
	}


	void Vertical(bool State, bool IsDown);
	void UseButtonRelease();
	void SelectButtonRelease();
	void Open();
	void NextLabel();
	void MarkHoverItem(EGamepadMarkType MarkType);
	void LastLabel();
	void Init();
	void Horizontal(bool State, bool IsRight);
	void GamepadIntoWidget();
	void Drop();
	void CloseWidget();
};


// Class WuXiaX.Trap
// 0x0088 (0x03B0 - 0x0328)
class ATrap : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0328(0x0018) MISSED OFFSET
	int64_t                                            trap_id_;                                                 // 0x0340(0x0008) (Edit, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0348(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.Trap");
		return ptr;
	}


	void OnRepTrapID();
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Client_TriggerTrap();
	void Client_Init(int64_t trapid, int launchplayerid, int item_id);
	void CallWhenDestroy();
};


// Class WuXiaX.UserSettingWidget
// 0x0090 (0x0298 - 0x0208)
class UUserSettingWidget : public UUserWidget
{
public:
	class APlayerController*                           player_ctrl_;                                             // 0x0208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               save_talk_need_press_;                                    // 0x0210(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               save_squat_need_press_;                                   // 0x0211(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               save_walk_need_press_;                                    // 0x0212(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               save_sprinting_need_press_;                               // 0x0213(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               save_lookaround_need_press_;                              // 0x0214(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               save_minimap_need_press_;                                 // 0x0215(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0216(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTalkModeChange_;                                        // 0x0218(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAudioChannelChange_;                                    // 0x0228(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOutputVolumnChange_;                                    // 0x0238(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInputVolumnChange_;                                     // 0x0248(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCharacterRenderChange_;                                 // 0x0258(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPostColorChange_;                                       // 0x0268(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDressShowChange_;                                       // 0x0278(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWeaponShowChange_;                                      // 0x0288(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.UserSettingWidget");
		return ptr;
	}


	void SetVoiceMode(int Mode);
	void SetVoiceMicVolume(int Volume);
	void SetMicMode(int micmode);
	void SetGamma(int Value);
	void SaveWeaponShow(int Value);
	void SaveWalkSlowHabit(int Value);
	void SaveWalkQuickHabit(int Value);
	void SaveTotalQuality(int Quality);
	void SaveTalkMode(int Value);
	void SaveSquatHabit(int Value);
	void SaveSoundEffectVolumn(float Value);
	void SaveSoundEffectValid(bool Value);
	void SaveScreenScale(int Value);
	void SaveResolutionMode(int Value);
	void SavePostColorType(int Value);
	void SaveOutputVolumn(float Value);
	void SaveOutputValid(bool Value);
	void SaveMotionBlurMode(int Value);
	void SaveMapHabit(int Value);
	void SaveMainSoundVolumn(float Value);
	void SaveMainSoundValid(bool Value);
	void SaveLookAroundHabit(int Value);
	void SaveLanguage(int Value);
	void SaveKeyStr(const struct FString& key_name, const struct FInputChord& Key);
	void SaveInterfaceVolumn(float Value);
	void SaveInterfaceValid(bool Value);
	void SaveInputVolumn(float Value);
	void SaveInputValid(bool Value);
	void SaveGamma(int Gamma);
	void SaveFoliageQuality(int Quality);
	void SaveDressShow(int Value);
	void SaveCharacterRender(int Value);
	void SaveCameraChangeMode(int Value);
	void SaveBgSoundVolumn(float Value);
	void SaveBgSoundValid(bool Value);
	void SaveAudioChannel(int Value);
	void SaveAchromatopsiaMode(int Value);
	void ResetWindowPosition();
	int GetWeaponShow();
	int GetWalkSlowHabit();
	int GetWalkQuickHabit();
	int GetTotalQuality();
	int GetTalkMode();
	int GetSquatHabit();
	float GetSoundEffectVolumn();
	bool GetSoundEffectValid();
	int GetScreenScale();
	struct FString GetSaveKeyStr(const struct FString& Value);
	int GetResolutionMode();
	int GetPostColorType();
	float GetOutputVolumn();
	bool GetOutputValid();
	int GetMotionBlurMode();
	int GetMapHabit();
	float GetMainSoundVolumn();
	bool GetMainSoundValid();
	struct FIntPoint GetMainMonitorResolution();
	int GetLookAroundHabit();
	int GetLanguage();
	struct FString GetKeyString(const struct FInputChord& Key);
	float GetInterfaceVolumn();
	bool GetInterfaceValid();
	float GetInputVolumn();
	bool GetInputValid();
	int GetGamma();
	int GetFoliageQuality();
	struct FString GetEasyKeyStr(const struct FInputChord& Key);
	int GetDressShow();
	int GetCharacterRender();
	int GetCameraChangeMode();
	float GetBgSoundVolumn();
	bool GetBgSoundValid();
	int GetAudioChannel();
	int GetAchromatopsiaMode();
	void EffectLanguage(int Value);
	void CallWeaponShow(bool Value);
	void CallTalkMode(int Value);
	void CallPostColor(const struct FColor& Value);
	void CallOutputVolumn(float Value);
	void CallInputVolumn(float Value);
	void CallDressShow(bool Value);
	void CallCharacterRender(bool Value);
	void CallAudioChannel(int Value);
};


// Class WuXiaX.WuXia_AnimInstance
// 0x0040 (0x03A0 - 0x0360)
class UWuXia_AnimInstance : public UAnimInstance
{
public:
	class UCurveFloat*                                 hit_2_;                                                   // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 hit_shanbi_;                                              // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                skill_animation_;                                         // 0x0370(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               be_attack_;                                               // 0x0378(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0379(0x0003) MISSED OFFSET
	int                                                be_attack_type_;                                          // 0x037C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              be_attack_angle_;                                         // 0x0380(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               be_attack_animation_;                                     // 0x0384(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               be_attack_animation_play_end_;                            // 0x0385(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               be_block_attack_;                                         // 0x0386(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0387(0x0001) MISSED OFFSET
	float                                              be_block_attack_time_;                                    // 0x0388(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              be_block_attack_const_time_;                              // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                lian_tiao_index_;                                         // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               lian_tiao_flag_;                                          // 0x0394(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               client_first_be_attack_flag_;                             // 0x0395(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               shanbi_flag_;                                             // 0x0396(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x9];                                       // 0x0397(0x0009) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuXia_AnimInstance");
		return ptr;
	}


	float WuXia_Montage_Play(class UAnimMontage* MontageToPlay, float delay_time, const struct FName& section_name);
	bool CurrentMontageSlotPlay(const struct FString& slot_node_name);
	bool CurrentGroupMontageSlotPlay(const struct FString& group_name);
};


// Class WuXiaX.WuXia_Movement_Component
// 0x0108 (0x01F8 - 0x00F0)
class UWuXia_Movement_Component : public UActorComponent
{
public:
	class APawn*                                       pawn_;                                                    // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      mesh_;                                                    // 0x00F8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UCharacterMovementComponent*                 character_movement_;                                      // 0x0100(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAnimInstance*                               anim_instance_;                                           // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ACharacter*                                  character_;                                               // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCapsuleComponent*                           capsule_component_;                                       // 0x0118(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              move_forward_backward_axis_value_;                        // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              move_rightx_left_axis_value_;                             // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              move_swim_up_down_axis_value_;                            // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              movement_input_axis_multiplier_;                          // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                speed_change_value_;                                      // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              max_acceleration_;                                        // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              braking_deceleration_;                                    // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ground_friction_;                                         // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              jump_velocity_;                                           // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ERotateMethodState                                 rotate_method_;                                           // 0x0144(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0145(0x0003) MISSED OFFSET
	struct FVector                                     ragdoll_location_;                                        // 0x0148(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ragdoll_velocity_;                                        // 0x0154(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       pelvis_bone_;                                             // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              z_offset_;                                                // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
	class UAnimMontage*                                getup_from_front_montage_;                                // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                getup_from_back_montage_;                                 // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    mesh_rotation_;                                           // 0x0180(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              parachute_input_right_;                                   // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              parachute_input_forward_;                                 // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0194(0x0004) MISSED OFFSET
	class UCurveFloat*                                 qinggong_move_curve_;                                     // 0x0198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    client_open_parachute_delegate_;                          // 0x01A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    client_jump_plane_delegate_;                              // 0x01B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x8];                                       // 0x01C0(0x0008) MISSED OFFSET
	struct FPlayerMoveState                            player_move_state_;                                       // 0x01C8(0x0006) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1A];                                      // 0x01CE(0x001A) MISSED OFFSET
	float                                              server_tick_;                                             // 0x01E8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              client_tick_;                                             // 0x01EC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              owner_tick_;                                              // 0x01F0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x01F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuXia_Movement_Component");
		return ptr;
	}


	void UpdateMovementSpeed_v2(bool walk_flag, bool spring_flag, bool block_flag, bool aim_flag, float Speed, bool update_server_or_client);
	void UpdateMovementSettingsEvent(float max_acceleration, float braking_deceleration_walking, float ground_friction, float jump_z_velocity);
	void UpdateInput(EPlayerMoveInputState Type, bool Value);
	void SwitchMovementModeEvent(TEnumAsByte<EMovementMode> movement_mode);
	void SetReferences();
	void SetPlayerMovementsSwimAxisValues(float up_axis);
	void SetPlayerMovementAxisValues(float forward_axis, float right_axis);
	void SetMovementInputVectorOnServer(const struct FVector& movment_input_vector);
	void SetMovementInputVectorEvent(const struct FVector& movment_input_vector);
	void SetDefaultSettings();
	void Server_WallJump();
	void Server_UpdateParachuteInput(float Right, float Forward);
	void Server_UpdateMovementSpeed_True(bool walk_flag, bool spring_flag, bool block_flag, bool aim_flag, bool update_server_or_client);
	void Server_UpdateFreeview(bool free_view);
	void Server_SetMoveState(const struct FPlayerMoveState& Value, bool update_speed, bool update_client_speed);
	void Server_ChangeQingGongState(EPlayerMotionState State);
	void PlayerSwimInputEvent(float up_axis);
	void PlayerMovementInputEvent(float forward_axis, float right_axis, const struct FRotator& Rotate);
	struct FVector Movement_input_vector_net();
	void LandTimeEnd();
	void LandEvent();
	void Clinet_ChangeJumpPlaneState(bool CanJump);
	void Client_UpdateSpeed(int change);
	void Client_UpdateMovementSpeed_v2(float Speed);
};


// Class WuXiaX.WuXiaHorseAreaBox
// 0x0018 (0x0340 - 0x0328)
class AWuXiaHorseAreaBox : public AActor
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0328(0x0004) MISSED OFFSET
	float                                              area_min_chance_;                                         // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              area_max_chance_;                                         // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0334(0x0004) MISSED OFFSET
	class UBoxComponent*                               box_collision_;                                           // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuXiaHorseAreaBox");
		return ptr;
	}

};


// Class WuXiaX.WuXiaHorseManager
// 0x0070 (0x0398 - 0x0328)
class AWuXiaHorseManager : public AActor
{
public:
	class UClass*                                      horse_class_;                                             // 0x0328(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<int, class AWuXiaXHorse*>                     server_horse_map_;                                        // 0x0330(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0380(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuXiaHorseManager");
		return ptr;
	}

};


// Class WuXiaX.WuXiaHorseSpawnPoint
// 0x0018 (0x0340 - 0x0328)
class AWuXiaHorseSpawnPoint : public AActor
{
public:
	TArray<int>                                        spawn_horse_ids_;                                         // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               must_spawn_;                                              // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               use_self_spawnid_;                                        // 0x0339(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x033A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuXiaHorseSpawnPoint");
		return ptr;
	}

};


// Class WuXiaX.WuXiaInteractiveActor
// 0x0068 (0x0390 - 0x0328)
class AWuXiaInteractiveActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0328(0x0008) MISSED OFFSET
	struct FInteractiveInfo                            interactive_info_;                                        // 0x0330(0x0050) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0380(0x0004) MISSED OFFSET
	int                                                interactive_actor_id_;                                    // 0x0384(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                interactive_state_;                                       // 0x0388(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x038C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuXiaInteractiveActor");
		return ptr;
	}


	void OnStateUpdate();
	bool InteractiveUITips(class AWuXiaXCharacter* Player, struct FText* Text);
	void Interactive();
	bool GetStandAndLookLocation(const struct FVector& playerlocation, struct FVector* standlocation, struct FVector* LookAtLocation);
	struct FTransform GetSpawnTargetTransform();
	bool GetMovePassInfo(const struct FVector& playerlocation, const struct FVector& playervelocity, struct FVector* beginlocation, struct FVector* EndLocation);
	EInteractiveType GetInteractiveType(class AWuXiaXCharacter* Player);
	bool CanInteractive(class AWuXiaXCharacter* Player, ETriggerInteractiveType Trigger);
	void BreakKeepInteractive();
	void BeginKeepInteractive();
};


// Class WuXiaX.WuXiaMiniMapWidget
// 0x00A8 (0x02B0 - 0x0208)
class UWuXiaMiniMapWidget : public UUserWidget
{
public:
	class UImage*                                      base_background_;                                         // 0x0208(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      base_player_;                                             // 0x0210(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               b_is_player_center_;                                      // 0x0218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0219(0x0003) MISSED OFFSET
	struct FVector2D                                   original_level_size_;                                     // 0x021C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   original_map_size_;                                       // 0x0224(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   show_map_size_;                                           // 0x022C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     vector_pos_2;                                             // 0x0234(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color_2;                                                  // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector2D>                           cricle_point_1_;                                          // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector                                     vector_pos_3;                                             // 0x0260(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color_3;                                                  // 0x026C(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x027C(0x0004) MISSED OFFSET
	TArray<struct FVector2D>                           cricle_point_2_;                                          // 0x0280(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FVector                                     center_;                                                  // 0x0290(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x029C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuXiaMiniMapWidget");
		return ptr;
	}


	void UpdatePlayerRotator(int Num, float Yaw);
	void UpdatePlayerMark3DLocation(int Num, const struct FVector& Location);
	void UpdatePlayerLocation(int Num, const struct FVector& Location);
	void StartFly(const struct FVector& Start, const struct FVector& End);
	void SetBasebackGround();
	void ResourceMapElement(int Key, const struct FVector& Value);
	void RemoveActorLocation(int ID);
	void PrepareForDrawing();
	void InitTeamPlayer(int PlayerID, const struct FString& Name, int index, int teammode);
	void Init(const struct FVector2D& original_level_size, const struct FVector2D& original_map_size, const struct FVector2D& show_map_size, const struct FVector& Center, class UTexture2D* chinese_map, class UTexture2D* english_map, bool can_mark);
	struct FVector2D GetPositionByVector3(const struct FVector& Location);
	struct FVector GetPosition3D(const struct FVector2D& Location);
	struct FVector2D GetPlayerPositionInMiniMap();
	struct FVector2D GetPlayerPosition();
	float GetPlaneRotatorYaw();
	struct FVector2D GetPlanePosition();
	void ForeachResourceMap(TMap<int, struct FVector> resources);
	void ForeachBuffInfoMap(TMap<int, struct FBuffPointInfo> buffinfos);
	void EndFly();
	void DeleteTeamPlayerMarkState(int Num);
	void ClearTeamPlayer(int index);
	void CheckActorLocation(int ID, const struct FVector& Location);
	void CallDrawCricle();
	void BuffInfoMapElement(int Key, const struct FBuffPointInfo& Value);
};


// Class WuXiaX.WuXiaParadrop
// 0x0050 (0x0378 - 0x0328)
class AWuXiaParadrop : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0328(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuXiaParadrop");
		return ptr;
	}


	void StopSound();
	void PlaySound();
	bool InteractiveUITips(class AWuXiaXCharacter* Player, struct FText* Text);
	EInteractiveType GetInteractiveType(class AWuXiaXCharacter* Player);
	bool CanInteractive(class AWuXiaXCharacter* Player, ETriggerInteractiveType Trigger);
};


// Class WuXiaX.WuXiaPVPResourcesActor
// 0x0020 (0x03B0 - 0x0390)
class AWuXiaPVPResourcesActor : public AWuXiaInteractiveActor
{
public:
	int                                                team_id_;                                                 // 0x0390(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              interactive_range_;                                       // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                resources_index_;                                         // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                add_point_;                                               // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              add_time_;                                                // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x03A4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuXiaPVPResourcesActor");
		return ptr;
	}


	void OnTeamIDUpdate();
	void OnInteractive();
};


// Class WuXiaX.WuXiaSquadManager
// 0x0058 (0x0080 - 0x0028)
class UWuXiaSquadManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuXiaSquadManager");
		return ptr;
	}

};


// Class WuXiaX.WuXiaWinActor
// 0x0010 (0x03A0 - 0x0390)
class AWuXiaWinActor : public AWuXiaInteractiveActor
{
public:
	float                                              interactive_range_;                                       // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                can_win_number_;                                          // 0x0394(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0398(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuXiaWinActor");
		return ptr;
	}


	void ShowWinNumber();
	void OnWinNumberUpdate();
	void OnInteractive();
};


// Class WuXiaX.WuXiaXBaseCharacter
// 0x0020 (0x0760 - 0x0740)
class AWuXiaXBaseCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0740(0x0008) MISSED OFFSET
	class UComponentMiddle*                            middle_component_;                                        // 0x0748(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                player_unique_id_;                                        // 0x0750(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	EGameCharactType                                   player_type_;                                             // 0x0754(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0755(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuXiaXBaseCharacter");
		return ptr;
	}


	void SetPlayerUniqueId(int Val);
	void SetPlayerType(EGameCharactType Val);
	void OnPlayUNIDNotice();
	void OnPlayTypeNotice();
	int GetPlayerUniqueId();
	EGameCharactType GetPlayerType();
	class UComponentMiddle* GetMiddleComponent();
	class UActorComponent* GetGameComponent(EGameComponentType Type);
};


// Class WuXiaX.WuXiaXNpcCharacter
// 0x0010 (0x0770 - 0x0760)
class AWuXiaXNpcCharacter : public AWuXiaXBaseCharacter
{
public:
	class UPlayerFightComponent*                       player_fight_;                                            // 0x0760(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0768(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuXiaXNpcCharacter");
		return ptr;
	}

};


// Class WuXiaX.WuXiaXCharacter
// 0x0920 (0x1090 - 0x0770)
class AWuXiaXCharacter : public AWuXiaXNpcCharacter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0770(0x0008) MISSED OFFSET
	float                                              base_turn_rate_;                                          // 0x0778(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              base_lookup_rate_;                                        // 0x077C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PostRenderStencil;                                        // 0x0780(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0784(0x0004) MISSED OFFSET
	class UClass*                                      player_target_;                                           // 0x0788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    character_skill_rotator_;                                 // 0x0790(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x079C(0x0004) MISSED OFFSET
	struct FString                                     password_;                                                // 0x07A0(0x0010) (ZeroConstructor)
	bool                                               has_balance_;                                             // 0x07B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x07B1(0x0007) MISSED OFFSET
	class USphereComponent*                            player_dying_collision;                                   // 0x07B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                animus_index_;                                            // 0x07C0(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                animus_index_self_;                                       // 0x07C4(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x13C];                                     // 0x07C8(0x013C) MISSED OFFSET
	int                                                player_net_id_;                                           // 0x0904(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData)
	ESexType                                           sex_type_;                                                // 0x0908(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	ESexType                                           sex_type_self_;                                           // 0x0909(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x090A(0x0002) MISSED OFFSET
	int                                                face_id_;                                                 // 0x090C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                face_id_self_;                                            // 0x0910(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                hair_id_;                                                 // 0x0914(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                hair_id_self_;                                            // 0x0918(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                skin_color_id_;                                           // 0x091C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                skin_color_id_self_;                                      // 0x0920(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                hair_color_id_;                                           // 0x0924(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                hair_color_id_self_;                                      // 0x0928(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x092C(0x0004) MISSED OFFSET
	struct FString                                     player_name_;                                             // 0x0930(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	bool                                               is_autospriting_;                                         // 0x0940(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0941(0x0007) MISSED OFFSET
	TArray<int>                                        equip_array_;                                             // 0x0948(0x0010) (ZeroConstructor)
	TArray<int>                                        equip_skin_array_rep_;                                    // 0x0958(0x0010) (Net, ZeroConstructor)
	TArray<int>                                        equip_skin_array_rep_self_;                               // 0x0968(0x0010) (Net, ZeroConstructor)
	TArray<int>                                        effect_array_rep_;                                        // 0x0978(0x0010) (Net, ZeroConstructor)
	TArray<int>                                        effect_array_rep_self_;                                   // 0x0988(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData08[0x12];                                      // 0x0998(0x0012) MISSED OFFSET
	bool                                               is_free_view_net_;                                        // 0x09AA(0x0001) (Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x1];                                       // 0x09AB(0x0001) MISSED OFFSET
	int                                                kill_num_;                                                // 0x09AC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_open_talk_;                                            // 0x09B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x10F];                                     // 0x09B1(0x010F) MISSED OFFSET
	class UWuXia_Movement_Component*                   wuxia_movement_component_;                                // 0x0AC0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UPlayerStateComponent*                       player_state_;                                            // 0x0AC8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UPlayerItemCtrlComponent*                    player_item_ctrl_;                                        // 0x0AD0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UPlayerBroadcastComponent*                   player_broadcast_;                                        // 0x0AD8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UPlayerAssassinationComponent*               player_assassination_;                                    // 0x0AE0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UPlayerSkillsComponent*                      player_skills_component_;                                 // 0x0AE8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UPlayerBuffComponent*                        player_buff_component_;                                   // 0x0AF0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UPlayerInteractiveComponent*                 player_interactive_component_;                            // 0x0AF8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UPlayerKeepActionComponent*                  player_keep_action_component_;                            // 0x0B00(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         third_person_camera_boom_;                                // 0x0B08(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            third_person_camera_;                                     // 0x0B10(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData11[0x8];                                       // 0x0B18(0x0008) MISSED OFFSET
	class USphereComponent*                            player_around_collision_;                                 // 0x0B20(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               player_target_switch_collision_;                          // 0x0B28(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           player_item_switch_collosion_;                            // 0x0B30(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USphereComponent*                            player_load_level_collosion_;                             // 0x0B38(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UHorseRideComponent*                         horse_ride_component_;                                    // 0x0B40(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UClientAchievementComponent*                 m_pClientAchievement;                                     // 0x0B48(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData12[0x290];                                     // 0x0B50(0x0290) MISSED OFFSET
	struct FRotator                                    free_view_old_rotator_;                                   // 0x0DE0(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    free_view_back_rotator_;                                  // 0x0DEC(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_in_free_view_;                                         // 0x0DF8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_in_free_view_back_;                                    // 0x0DF9(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x0DFA(0x0002) MISSED OFFSET
	float                                              back_control_time_;                                       // 0x0DFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              target_delay_speed_;                                      // 0x0E00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0xD4];                                      // 0x0E04(0x00D4) MISSED OFFSET
	TMap<int64_t, class UStaticMeshComponent*>         mesh_equip_mesh_arrays_;                                  // 0x0ED8(0x0050) (ExportObject, ZeroConstructor)
	TArray<class UParticleSystemComponent*>            sword_effect_components_;                                 // 0x0F28(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	class UPlayerSquadComponent*                       player_squad_component;                                   // 0x0F38(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               is_in_lian_tiao_;                                         // 0x0F40(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0F41(0x0003) MISSED OFFSET
	int                                                lian_tiao_index_;                                         // 0x0F44(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x0F48(0x0004) MISSED OFFSET
	float                                              move_distance_;                                           // 0x0F4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x68];                                      // 0x0F50(0x0068) MISSED OFFSET
	struct FDeadlyInfo                                 m_FinallyKiller;                                          // 0x0FB8(0x0018)
	unsigned char                                      UnknownData18[0x8];                                       // 0x0FD0(0x0008) MISSED OFFSET
	TMap<int, class USkeletalMeshComponent*>           weapon_show_component_new_;                               // 0x0FD8(0x0050) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<class USkeletalMeshComponent*>              weapon_show_component_empty_new_;                         // 0x1028(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData19[0x8];                                       // 0x1038(0x0008) MISSED OFFSET
	TArray<class USkeletalMeshComponent*>              player_show_mesh_component_;                              // 0x1040(0x0010) (ExportObject, ZeroConstructor)
	TArray<class USkeletalMeshComponent*>              player_show_mesh_component_callback_;                     // 0x1050(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData20[0x10];                                      // 0x1060(0x0010) MISSED OFFSET
	TArray<class UObject*>                             player_show_mesh_load_obj_array_;                         // 0x1070(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData21[0x10];                                      // 0x1080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuXiaXCharacter");
		return ptr;
	}


	void TreasureOpenSuccess();
	void SwitchStealth(bool State);
	void SwitchSprinting();
	void SwitchSex();
	void SpawnAIPlayerOnServer(int Number);
	void SkeletalMeshComponentCreate(EPlayerLoadType Type);
	void ShowSwordEffect();
	void ShowLockTargetUI(class AActor* Target);
	void ShowAssassinationTipUI(class AActor* Target);
	void ShowAnimus(int index);
	void SetVoiceMode(int Mode);
	void SetKiller(const struct FDeadlyInfo& Target);
	void SetInteractive(bool State);
	void SetCollisonMoveEnable(bool Value);
	void SetCameraLocation(const struct FVector& NewLocation);
	void SetBlockState(bool State);
	void SetBlackScreenState(bool State);
	void SetAlwaysTalk(bool isalways);
	void SetAimState(bool State);
	void Server_UpdateDamageCircle();
	void Server_SwitchSex();
	void Server_SetResurrectionInfo(const struct FResurrectionInfo& Info);
	void Server_OpenParachute();
	void Server_LianTiao(bool is_in_lian_tiao, int lian_tiao_index);
	void Server_JumPlane();
	void Server_ChangeVoiceIgnoreState(bool isbeignore);
	void SendBuffPointToHUD();
	void RunServerAI();
	void ReconnectUpdate();
	void PlayWeakChangeEffect(bool isweak);
	void PlayerInitLocation();
	void Player_net_id(int Val);
	void PlayClientAttackEffect(float Angle);
	void PlayBlockEffect();
	void PlayBeAttackEffect();
	void PlayAttackEffect();
	void OnRepSkinColorIdSelf();
	void OnRepSkinColorId();
	void OnRepSexTypeSelf();
	void OnRepSexType();
	void OnRepPlayerName();
	void OnRepHairIdSelf();
	void OnRepHairId();
	void OnRepHairColorIdSelf();
	void OnRepHairColorId();
	void OnRepFaceIdSelf();
	void OnRepFaceId();
	void OnRepEquipSkinIdSelf();
	void OnRepEquipSkinId();
	void OnRepEffect();
	void OnRepAnimusIndexSelf();
	void OnRepAnimusIndex();
	void OnPlayNetNotice();
	void OnPlayerTargetSwitchOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnPlayerTargetSwitchOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnPlayerStateChange(EPlayerGameState NewState);
	void OnPlayerAroundOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnPlayerAroundOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void MoveRight(float Value);
	void MoveForward(float Value);
	void MissileHitTarget();
	void LoadComplete();
	void LeaveCahnnel();
	void JoinChannel(const struct FString& lpChannelName, TArray<int> teams);
	bool IsPressKeyAction(const struct FName& key_name, bool* can_input);
	bool IsLaunchingWithAIFlag();
	bool IsDeath();
	bool Is_free_view_net();
	bool InteractiveUITips(class AWuXiaXCharacter* Player, struct FText* Text);
	void InteractiveButtonDown();
	void InitBuffPoint(TArray<int> indexs, TArray<struct FBuffPointInfo> Info);
	void HideSwordEffect();
	void HideLockTargetUI();
	void HideAssassinationTipUI();
	bool HasTarget();
	class USkeletalMeshComponent* GetWeaponMeshCompoent(int index);
	class USkeletalMeshComponent* GetWeaponComponent(int Key);
	struct FRotator GetTargetRotator();
	class UPlayerSkillsComponent* GetSkillsComponent();
	bool GetNeedPressHabit(const struct FString& Name);
	struct FDeadlyInfo GetKiller();
	class UPlayerItemCtrlComponent* GetItemCtrlComp();
	EInteractiveType GetInteractiveType(class AWuXiaXCharacter* Player);
	struct FString GetHostIP();
	class USkeletalMeshComponent* GetBodyMeshCompByType(EPlayerLoadType Type);
	class UStaticMeshComponent* GetBagMeshComp();
	void FreeViewTurnBack();
	void FreeViewStopTurnBack();
	void DestroyPlane();
	void CreatePlane(const struct FVector& beginlocation, const struct FVector& EndLocation, int64_t begintime);
	void Control_Jump();
	void Control_Interactive();
	void Control_ClearTarget();
	void Control_AutoSprinting();
	void Clinet_RemoveVoiceIgnorePlayer(int PlayerID);
	void Clinet_OffThePlane();
	void Clinet_AddVoiceIgnorePlayer(int PlayerID);
	void Client_UpdateDyingState();
	void Client_UpdateDamageCircle(int64_t begintime, EDamageCircleState CurrentState, int64_t waittingtime, int64_t shringkingtime, int64_t currentradius, int64_t nextradius, int64_t clocationX, int64_t clocationY, int64_t clocationZ, int64_t nlocationX, int64_t nlocationY, int64_t nlocationZ);
	void Client_SortInfo(int rank, int kill, int reward, int rank_point, int kill_point, int damage_point, int deadly_item_id, ECauseDyingType deadly_reason, int all_team_number, EGameSquadMode GameMode);
	void Client_SetResurrectionInfo(const struct FResurrectionInfo& Info);
	void Client_Record(int64_t kill_time);
	void Client_ReconnectSpawnParadrop(TArray<struct FVector> Locations, TArray<int> Ids);
	void Client_ClearTarget();
	void Client_AddLoadMap(bool isloadmap, TArray<struct FName> Maps);
	void CheckLockPointDeath(class AActor* Enemy);
	void CharDestroy();
	void ChangeEquip(EBagType bag_type, int index, int item_id);
	void ChangeBuffState(int buff_index, const struct FBuffPointInfo& buff_state);
	bool CanInteractive(class AWuXiaXCharacter* Player, ETriggerInteractiveType Trigger);
	bool CanInput(EPlayerInputType input_type);
	void Bom_Montage_Play(class USkeletalMeshComponent* SkeletalMesh, class UAnimMontage* MontageToPlay, float delay_time, const struct FName& section_name);
	void Anim_EndParachuteGliding();
	void Anim_EndEffect(int effecttype);
	void Anim_BeginParachuteGliding();
	void Anim_BeginParachueJump();
	void Anim_BeginEffect(int effecttype);
	void AI_MoveTargetCharacter(int Target, float nearby);
	void AI_MoveCharacter(const struct FVector& posc, float nearby);
	void AI_LookAt(const struct FVector& posc);
	void AI_GetAllHorse(TArray<struct FVector>* posc);
	void AI_CancelMove();
	void AddSkin(int skin_id);
};


// Class WuXiaX.WuxiaXCharBaseInterface
// 0x0000 (0x0028 - 0x0028)
class UWuxiaXCharBaseInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuxiaXCharBaseInterface");
		return ptr;
	}


	class UPlayerInteractiveComponent* PlayerInteractiveComponent();
	class UPlayerBroadcastComponent* Player_broadcast();
};


// Class WuXiaX.WuXiaXHUD
// 0x0210 (0x0630 - 0x0420)
class AWuXiaXHUD : public AWuXiaXHUDBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0420(0x0010) MISSED OFFSET
	bool                                               can_operate_input_or_not_;                                // 0x0430(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6F];                                      // 0x0431(0x006F) MISSED OFFSET
	class UClass*                                      main_class_;                                              // 0x04A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      skill_class_;                                             // 0x04A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      bag_class_;                                               // 0x04B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      statistics_class_;                                        // 0x04B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      map_class_;                                               // 0x04C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      menu_class_;                                              // 0x04C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      keepaction_class_;                                        // 0x04D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      loading_class_;                                           // 0x04D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      obmap_class_;                                             // 0x04E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      oboverview_class_;                                        // 0x04E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      obtargetview_class_;                                      // 0x04F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      obstatistics_class;                                       // 0x04F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      check_sound_class_;                                       // 0x0500(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMainGameUI*                                 MainGameUI;                                               // 0x0508(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkillUI*                                    SkillUI;                                                  // 0x0510(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBagUI*                                      BagUI;                                                    // 0x0518(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStatisticsWidget*                           StatisticsUI;                                             // 0x0520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMiniMapCtrlUI*                              MapUI;                                                    // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USystemMenuUI*                               MenuUI;                                                   // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKeepActionUI*                               KeepActionUI;                                             // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ULoadingUI*                                  LoadingUI;                                                // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOBMapUI*                                    OBMapUI;                                                  // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOBOverviewUI*                               OBOverviewUI;                                             // 0x0550(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOBTargetViewUI*                             OBTargetViewUI;                                           // 0x0558(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOBStatisticsWidget*                         OBStatisticsWidgetUI;                                     // 0x0560(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D                                   original_level_size_;                                     // 0x0568(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   original_map_size_;                                       // 0x0570(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   show_map_size_;                                           // 0x0578(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     center_;                                                  // 0x0580(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x058C(0x0004) MISSED OFFSET
	class UTexture2D*                                  chinese_map_;                                             // 0x0590(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  english_map_;                                             // 0x0598(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               can_mark_;                                                // 0x05A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPlayerGameUIState                                 current_ui_state_;                                        // 0x05A1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPlayerGameUIState                                 old_ui_state_;                                            // 0x05A2(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5D];                                      // 0x05A3(0x005D) MISSED OFFSET
	int                                                kill_;                                                    // 0x0600(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2C];                                      // 0x0604(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuXiaXHUD");
		return ptr;
	}


	void ZeroTextState(bool State);
	void Vertical(bool State, bool IsDown);
	void UseWidget();
	void UseItemHotKey(int index);
	void UpdateWeaponStateEffect(int weaponindex, class UTexture2D* effecticon, int Value);
	void UpdateTeamPointInfo(int red, int blue, int green);
	void UpdateTeamPlayerState(int PlayerID, ETeamPlayerState new_state);
	void UpdateTeamPlayerHPPercent(int PlayerID, float Value);
	void UpdateTeamPlayerDyingHPPercent(int PlayerID, float Value);
	void UpdateSortInfo(int rank, int kill, int reward, int rank_point, int kill_point, int damage_point, int all_team_number);
	void UpdateSkillsGCD(float cdtime);
	void UpdateSkillHotKeyMaxCD(int index, float skillcd);
	void UpdateSkillHotKeyCurrentCD(int skill_id);
	void UpdateSatiety(float satietyvalue);
	void UpdatePlayerState(EPlayerGameState new_state);
	void UpdatePlayerRotator(int PlayerID, float Yaw);
	void UpdatePlayerMark3DLocation(int PlayerID, const struct FVector& Location);
	void UpdatePlayerLocation(int PlayerID, const struct FVector& Location);
	void UpdateOxygen(float oxygen);
	void UpdateMp(float currentMP, float currentmaxMP, float maxMP);
	void UpdateMoisture(float moisture);
	void UpdateLiveData(int LIVE);
	void UpdateKillData(int allkill);
	void UpdateItemNumber(int index, int Number);
	void UpdateItemHotKeyNumbers();
	void UpdateInjury(float injury);
	void UpdateHorseSpeed(float current_speed);
	void UpdateHorsePower(float current_power, float max_power);
	void UpdateFightHp(float currentHP, float maxHP);
	void UpdateDyingHp(float currentHP, float maxHP);
	void UpdateDrugValue(float drugvalue);
	void UpdateDrug(float drugvalue);
	void UpdateCompass(float Angle);
	void UnBindItemUIEvent();
	void TryShowInvntoryWidget();
	void SwitchUserSettingOB();
	void SwitchUserSetting();
	void SwitchUOBStatisticsWidgetUI(TArray<struct FOBStasticsInfo>* result);
	void SwitchToNextWidget();
	void SwitchStastics();
	void SwitchSkill();
	void SwitchOBTargetViewUI();
	void SwitchOBOverviewUI();
	void SwitchOBMap();
	void SwitchMap();
	void SwitchItemBag();
	void SortSoundActor(TArray<class ACheckSoundActor*> Actors);
	void ShowWarning(const struct FString& Text);
	void ShowWaitResurrection(float Time);
	void ShowSkillDetail(int skillid);
	void ShowParachuteUI();
	void ShowOxygen();
	void ShowOpenParachuteTips();
	void ShowMainInterfaceUI();
	void ShowLowHPEffect();
	void ShowJumpPlanTips();
	void ShowJueKongUI(int maxnumber);
	void ShowJueKongInMap(const struct FVector& Location);
	void ShowItemDetail(const struct FUIItemInfo& UIItemInfo);
	void ShowInteractive(const struct FText& Text);
	void ShowHallWidget(const struct FString& player_name);
	void ShowCrossHair();
	void ShowCheckSoundLocation(TArray<int> Ids, TArray<struct FVector> Locations);
	void SetZeroTimer(int Timer);
	void SetWeight(int maxweight, int Weight);
	void SetWeaponState(int weaponindex, int Value, class UTexture2D* effecticon, class UTexture2D* weaponicon);
	void SetTeamPlayerShowMode(int teammode);
	void SetStatisticsItem(class UTexture2D* Texture, int Level, const struct FString& item_name);
	void SetSplitItemButton(bool isbottondown);
	void SetSkillHotKey(int index, int skill_id, class UTexture2D* icon, float skillcd, bool canuse);
	void SetSkillEquipState(TArray<int> skills);
	void SetSkillBookEnable(int itemindex);
	void SetSkillBook(int itemindex, int skillid, int weapontype, int Level, const struct FString& Name, const struct FString& Description, class UTexture2D* icon, bool isenable);
	void SetSkill(ESkillEquipType slottype, int slotindex, int64_t skillid, bool IsValid, bool iscurrentweapon);
	void SetSelfContinuousKillNumber(int Number);
	void SetResurrectionInfo(const struct FResurrectionInfo& Info);
	void SetResourceInfo(const struct FVector& Location, int index);
	void SetPVPGameTime(float Time);
	void SetPlayerStasticsTeamInfo(TArray<struct FStasticsInfo> reds, TArray<struct FStasticsInfo> greens, TArray<struct FStasticsInfo> blues);
	void SetPlayerName(const struct FString& Name);
	void SetPlayerAssist(int PlayerID, int Number);
	void SetOxygenWidgetState(bool State);
	void SetMainInterfaceState(bool State);
	void SetMainGameWidgetState(bool State);
	void SetLoadingUIState(float percent);
	void SetKeepActionTime(float current_time);
	void SetJueKongWaitTime(int waittime);
	void SetJueKongCanWinNumber(int Number);
	void SetItemHotKey(int index, class UTexture2D* icon, int Number);
	void SetItem(EBagType bagtype, int index, int Level, const struct FString& Name, int Number, int itemtype, class UTexture2D* icon, class UTexture2D* dragicon);
	void SetHorseState(bool NewState);
	void SetDurableValue(EBagType bag_type, int index, int armor);
	void SetDragItemInfo(int itemnumber, int pickid);
	void SetBuffInfo(TMap<int, struct FBuffPointInfo> buff_info);
	void SetBuff(int64_t buffID, int numberoflayer, float Time, class UTexture2D* icon);
	void ResourcesPointTeamChange(int resourcesindex, int TeamID);
	void RemoveWeaponState(int weaponindex);
	void RemoveSound(int ID);
	void RemoveSkillBook(int itemindex);
	void RemoveItem(EBagType bagtype, int index);
	void RemoveBuff(int buffID);
	void ReleaseSwitchMap();
	void PlayWeapon();
	void PlayProp();
	void PlayItemSound(int Type);
	void PlayerLockToOther();
	void PlayerDeath();
	void PlayEquip();
	void PlayBook();
	void PickUpSuccess();
	void PickUpOverWeight();
	void PickGetItem(int item_id, bool learned);
	void OnSkinsUpdate();
	void NextLabel();
	void MissileHitTarget();
	void MarkWidget(EGamepadMarkType MarkType);
	void MapShowActorLocation(int ID, const struct FVector& Location);
	void MapScale(float Value);
	void MapHideActorLocation(int ID);
	void LeftMouseButtonRelease();
	void LastLabel();
	bool IsInitTeamPlayer(int PlayerID);
	void InitTeamPlayer(int PlayerID, const struct FString& Name, int teammode);
	void InitSystemMenuUIEvents();
	void InitStatisticsUIEvents();
	void InitSkillUIEvents();
	void InitMapUIEvents();
	void InitMainGameUIEvents();
	void InitBagUIEvents();
	void Horizontal(bool State, bool IsRight);
	void HideWaitResurrection();
	void HideParachuteUI();
	void HideOxygen();
	void HideOpenParachuteTips();
	void HideMainInterfaceUI();
	void HideLowHPEffect();
	void HideJumpPlanTips();
	void HideJueKongUI();
	void HideInteractive();
	void HideCrossHair();
	bool GetWeaponSocketName(int weaponindex, struct FName* name1, struct FName* name2, int* Type);
	class UOBStatisticsWidget* GetUOBStatisticsWidgetUI();
	class USystemMenuUI* GetSystemMenuWidget();
	class UStatisticsWidget* GetStatisticsWidget();
	class USkillUI* GetSkillWidget();
	TArray<int> GetPlayerSkinIds();
	int GetPickIdByIndex(int index);
	class UOBTargetViewUI* GetOBTargetViewUI();
	class UOBOverviewUI* GetOBOverviewUI();
	class UOBMapUI* GetOBMapUI();
	class UWuXiaMiniMapWidget* GetMapWidget();
	class UMainGameUI* GetMainGameWidget();
	class AWuXiaXCharacter* GetLocalCharacter();
	class ULoadingUI* GetLoadingWidget();
	class UKeepActionUI* GetKeepActionWidget();
	int GetIndexByPickId(int pickid);
	EPlayerGameUIState GetCurUIState();
	EPlayerGameUIState GetCurrentUIState();
	float GetCurrentCD(int skill_id);
	class UBagUI* GetBagWidget();
	void GetAllHotKey(TArray<struct FString>* hotkeys);
	void GamePlayerTalk(int player_id);
	void GamepadIntoWidget();
	void EndKeepAction();
	void EndFly();
	void Drop();
	void DeleteTeamPlayerMarkState(int PlayerID);
	void CreateStatisticsUI();
	void CloseWidget(bool is_set);
	void ClearTeamPlayerName(int PlayerID);
	void ClearSkillHotKey(int index);
	void ClearItemHotKey(int index);
	void ClearInventory();
	void ClearBuffs();
	void ClearBlood();
	void ClearAllSkill();
	void ChangeSkillCurrentWeapon(ESkillEquipType equiptype);
	void ChangePlayerGameUIState(EPlayerGameUIState NewState);
	void ChangeGameUIState(EPlayerGameUIState NewState);
	void ChangeEquipWeapon(ESkillEquipType slottype, int64_t weaponid, int currentweapontype1, int currentweapontype2);
	void ChangeCurrentWeapon(int weaponindex);
	bool CanPlayerInput();
	void CanNotShooter();
	void CanNotEquipItem();
	void BP_ShowDamageCircle();
	void BP_SetShakingCircle(const struct FVector& Location, float Radius);
	void BP_SetNextCircle(const struct FVector& Location, float Radius);
	void BP_SetCurrentCircle(const struct FVector& Location, float Radius);
	void BP_HideDamageCircle();
	void BindItemUIEvent(class UPlayerItemCtrlComponent* itemctrl);
	void BeginKeepAction(float actiontime);
	void BeginFly(const struct FVector& Start, const struct FVector& End);
	void AppendShutDown(const struct FString& killname, const struct FString& deadname, int kill_num);
	void AppendFirstBlood(const struct FString& playername, const struct FString& deadname);
	void AppendContinuousKillInfo(const struct FString& playername, int killnumber);
	void AddSkill(int skillid);
	void AddBloodByDamage(float Damage);
};


// Class WuXiaX.WuXiaXDLDHUD
// 0x0010 (0x0640 - 0x0630)
class AWuXiaXDLDHUD : public AWuXiaXHUD
{
public:
	class UClass*                                      pvp_select_class_;                                        // 0x0630(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPVPSelectUI*                                PVPSelectUI;                                              // 0x0638(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuXiaXDLDHUD");
		return ptr;
	}


	void SetContinuousKillNumber(int Number);
	class UPVPSelectUI* GetPVPSelectWidget();
	void DLD_UpdateKillData(int allkill);
	void DLD_PlayerSortInfo(int rank, int kill, int reward, int rank_point, int kill_point, int damage_point, int all_team_number);
};


// Class WuXiaX.WuXiaXGameInstance
// 0x1DA0 (0x1E40 - 0x00A0)
class UWuXiaXGameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0xA70];                                     // 0x00A0(0x0A70) MISSED OFFSET
	TMap<int, int>                                     absolute_item_map_;                                       // 0x0B10(0x0050) (ZeroConstructor)
	EGameState                                         current_game_state_;                                      // 0x0B60(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0B61(0x0007) MISSED OFFSET
	TMap<int, struct FPlayModeTime>                    play_mode_end_time_;                                      // 0x0B68(0x0050) (ZeroConstructor)
	TMap<int, struct FPlayModeTime>                    play_mode_start_time_;                                    // 0x0BB8(0x0050) (ZeroConstructor)
	TMap<int, struct FPlayModeState>                   play_mode_state_;                                         // 0x0C08(0x0050) (ZeroConstructor)
	struct FString                                     client_connect_ip_;                                       // 0x0C58(0x0010) (BlueprintVisible, ZeroConstructor, Config)
	struct FString                                     client_steam_connect_ip_;                                 // 0x0C68(0x0010) (BlueprintVisible, ZeroConstructor, Config)
	struct FString                                     server_connect_ip_;                                       // 0x0C78(0x0010) (BlueprintVisible, ZeroConstructor, Config)
	int                                                client_connect_port_;                                     // 0x0C88(0x0004) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0C8C(0x0004) MISSED OFFSET
	struct FString                                     complain_connect_ip_;                                     // 0x0C90(0x0010) (ZeroConstructor, Config)
	int                                                complain_connect_port_;                                   // 0x0CA0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              load_mesh_dt;                                             // 0x0CA4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               load_mesh_flag;                                           // 0x0CA8(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0CA9(0x0003) MISSED OFFSET
	int                                                server_connect_port_;                                     // 0x0CAC(0x0004) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     gateway_connect_ip_;                                      // 0x0CB0(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                gateway_connect_port_;                                    // 0x0CC0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0CC4(0x0004) MISSED OFFSET
	struct FString                                     player_name_;                                             // 0x0CC8(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     user_name_;                                               // 0x0CD8(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     password_;                                                // 0x0CE8(0x0010) (BlueprintVisible, ZeroConstructor)
	int64_t                                            login_gateway_session_id_;                                // 0x0CF8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     login_gateway_passwd_;                                    // 0x0D00(0x0010) (ZeroConstructor)
	bool                                               is_valid_game_;                                           // 0x0D10(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0D11(0x0003) MISSED OFFSET
	int                                                pingtai_type_;                                            // 0x0D14(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     dedicated_server_password_;                               // 0x0D18(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               has_login_;                                               // 0x0D28(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0D29(0x0003) MISSED OFFSET
	int                                                client_player_id_;                                        // 0x0D2C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int64_t                                            client_session_id_;                                       // 0x0D30(0x0008) (ZeroConstructor, IsPlainOldData)
	ESexType                                           current_sex_;                                             // 0x0D38(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0D39(0x0003) MISSED OFFSET
	int                                                game_fight_delay_time_;                                   // 0x0D3C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                game_login_delay_time_;                                   // 0x0D40(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0D44(0x0004) MISSED OFFSET
	struct FString                                     crash_ip_;                                                // 0x0D48(0x0010) (ZeroConstructor, Config)
	int                                                crash_ip_port_;                                           // 0x0D58(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0D5C(0x0004) MISSED OFFSET
	struct FString                                     game_node_;                                               // 0x0D60(0x0010) (ZeroConstructor, Config)
	int                                                game_max_num_;                                            // 0x0D70(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ver_num_;                                                 // 0x0D74(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               ver_cheat_;                                               // 0x0D78(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x0D79(0x0002) MISSED OFFSET
	bool                                               is_need_relogin_;                                         // 0x0D7B(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0D7C(0x0004) MISSED OFFSET
	TArray<int>                                        item_ids_;                                                // 0x0D80(0x0010) (BlueprintVisible, ZeroConstructor)
	ELanguageType                                      language_type_;                                           // 0x0D90(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0D91(0x0003) MISSED OFFSET
	int                                                voice_mode_;                                              // 0x0D94(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        goods_;                                                   // 0x0D98(0x0010) (ZeroConstructor)
	TArray<int>                                        server_list_;                                             // 0x0DA8(0x0010) (ZeroConstructor)
	TArray<int>                                        key_list_;                                                // 0x0DB8(0x0010) (ZeroConstructor)
	TArray<int>                                        new_skins_;                                               // 0x0DC8(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                save_server_id_;                                          // 0x0DD8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                save_sort_;                                               // 0x0DDC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                save_gamemode_;                                           // 0x0DE0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               record_valid_;                                            // 0x0DE4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0DE5(0x0003) MISSED OFFSET
	TArray<int>                                        game_maps_;                                               // 0x0DE8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData14[0xD0];                                      // 0x0DF8(0x00D0) MISSED OFFSET
	class ARecordActor*                                record_poll_actor_;                                       // 0x0EC8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x2F8];                                     // 0x0ED0(0x02F8) MISSED OFFSET
	TArray<int>                                        color_ids_;                                               // 0x11C8(0x0010) (ZeroConstructor)
	TArray<int>                                        model_ids_;                                               // 0x11D8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData16[0x468];                                     // 0x11E8(0x0468) MISSED OFFSET
	bool                                               is_load_montage_complete_;                                // 0x1650(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x1651(0x0007) MISSED OFFSET
	class ALoadProgressManager*                        progress_manager_;                                        // 0x1658(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      net_actor_;                                               // 0x1660(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x7D8];                                     // 0x1668(0x07D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuXiaXGameInstance");
		return ptr;
	}


	void ShowReconnectFailed();
	int SendComplainVideo();
	int SendComplainInfo(const struct FString& player_name, TArray<int> select, const struct FString& player_text);
	void ReconnectFailed();
	void ReConnect();
	void OutPutPlayerAnimus();
	void OpenGame();
	void NetDebugPing();
	void NetDebugLoginUser(const struct FString& user, const struct FString& PassWord);
	void NetDebugConnectIp(const struct FString& Ip, int Port);
	void Net_actor(class AActor* Val);
	bool LostConnect();
	void HandleNetworkFailure(class UWorld* World, class UNetDriver* NetDriver, TEnumAsByte<ENetworkFailure> FailureType, const struct FString& ErrorString);
	int GetVideoSendCount();
	int GetVerNum();
	struct FString GetServerLocalName(int ID);
	class AActor* GetNetActor();
	void CreateAIPlayer(int Number);
	void CompalinReconnect();
	bool CanReconnect();
};


// Class WuXiaX.WuXiaXGameModeBase
// 0x04E8 (0x08B0 - 0x03C8)
class AWuXiaXGameModeBase : public AGameModeBase
{
public:
	bool                                               is_end_game_;                                             // 0x03C8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_debug_;                                                // 0x03C9(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               is_art_;                                                  // 0x03CA(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               is_squad_test;                                            // 0x03CB(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                max_number_players_each_squad;                            // 0x03CC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET
	TArray<float>                                      paradrop_times_;                                          // 0x03D8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0xC];                                       // 0x03E8(0x000C) MISSED OFFSET
	int                                                start_game_team_num_;                                     // 0x03F4(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     voice_channel_name_;                                      // 0x03F8(0x0010) (ZeroConstructor)
	TMap<int, struct FUserLoginData>                   session_keys_;                                            // 0x0408(0x0050) (ZeroConstructor)
	class ANetMessageHandle*                           net_actor_;                                               // 0x0458(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0460(0x0008) MISSED OFFSET
	TMap<int, TWeakObjectPtr<class AWuXiaXCharacter>>  server_player_character_map_;                             // 0x0468(0x0050) (ZeroConstructor)
	TMap<int, TWeakObjectPtr<class AWuXiaXCharacter>>  leave_player_character_map_;                              // 0x04B8(0x0050) (ZeroConstructor)
	TMap<int, TWeakObjectPtr<class AWuxiaXOBPawn>>     server_observer_map_;                                     // 0x0508(0x0050) (ZeroConstructor)
	TMap<int, TWeakObjectPtr<class AWuxiaXOBPawn>>     leave_observer_map_;                                      // 0x0558(0x0050) (ZeroConstructor)
	EGameSquadMode                                     current_game_mode_;                                       // 0x05A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x05A9(0x0007) MISSED OFFSET
	TMap<int, struct FString>                          SquadIDMap;                                               // 0x05B0(0x0050) (ZeroConstructor)
	TMap<int, struct FString>                          SquadNamesMap;                                            // 0x0600(0x0050) (ZeroConstructor)
	TMap<int, class AWuXiaInteractiveActor*>           interactive_actor_map_;                                   // 0x0650(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x8];                                       // 0x06A0(0x0008) MISSED OFFSET
	class UWuXiaSquadManager*                          squad_manager_;                                           // 0x06A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class APickItemManager*                            pick_manager_;                                            // 0x06B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADamageCircleActor*                          damage_circle_;                                           // 0x06B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AWuXiaXPlane*                                plane_;                                                   // 0x06C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AWuXiaHorseManager*                          horse_manager_;                                           // 0x06C8(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class AGameRebirthActor*>                   player_rebirth_actor_array_;                              // 0x06D0(0x0010) (ZeroConstructor)
	int64_t                                            login_timer_;                                             // 0x06E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AWuXiaXGameStateBase*                        game_state_;                                              // 0x06E8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x30];                                      // 0x06F0(0x0030) MISSED OFFSET
	TArray<int>                                        voice_ignore_players_;                                    // 0x0720(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData06[0x20];                                      // 0x0730(0x0020) MISSED OFFSET
	class UClass*                                      paradrop_class_;                                          // 0x0750(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      horse_manager_class_;                                     // 0x0758(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      win_actor_class_;                                         // 0x0760(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWuXiaXGameInstance*                         game_instance_;                                           // 0x0768(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<int, float>                                   award_table_one_;                                         // 0x0770(0x0050) (Edit, ZeroConstructor)
	TMap<int, float>                                   award_table_two_;                                         // 0x07C0(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData07[0x9C];                                      // 0x0810(0x009C) MISSED OFFSET
	int                                                Debug_SpectatorID;                                        // 0x08AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuXiaXGameModeBase");
		return ptr;
	}


	void RegisterPlayer(class AWuXiaXCharacter* avatar);
	void RefreshPick();
	void RefreshHorse();
	void KickPlayer(int player_id, const struct FText& KickReason);
	void BeginpParadrop();
};


// Class WuXiaX.WuXiaXGameModeDLD
// 0x01B0 (0x0A60 - 0x08B0)
class AWuXiaXGameModeDLD : public AWuXiaXGameModeBase
{
public:
	unsigned char                                      UnknownData00[0x1B0];                                     // 0x08B0(0x01B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuXiaXGameModeDLD");
		return ptr;
	}

};


// Class WuXiaX.WuXiaXGameStateBase
// 0x0108 (0x0470 - 0x0368)
class AWuXiaXGameStateBase : public AGameStateBase
{
public:
	int64_t                                            time_net_delay_;                                          // 0x0368(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            time_client_server_delay_;                                // 0x0370(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      paradrop_class_;                                          // 0x0378(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               isDCStarted;                                              // 0x0380(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isNxtStageInfovalid;                                      // 0x0381(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0382(0x0002) MISSED OFFSET
	int                                                DCStage;                                                  // 0x0384(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isNxtFinalShrink;                                         // 0x0388(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isNxtStageShrinking;                                      // 0x0389(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x038A(0x0006) MISSED OFFSET
	int64_t                                            DCNxtStageStartTime;                                      // 0x0390(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            DCNxtStageWaitTime;                                       // 0x0398(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            DCNxtStageShrinkTime;                                     // 0x03A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x03A8(0x0018) MISSED OFFSET
	TMap<int, TWeakObjectPtr<class AWuXiaXCharacter>>  player_character_map_;                                    // 0x03C0(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x50];                                      // 0x0410(0x0050) MISSED OFFSET
	int                                                live_num_;                                                // 0x0460(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x0464(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuXiaXGameStateBase");
		return ptr;
	}


	void SetGameLoginId();
	void OnRepLiveNum();
	void Mul_WinActorLeave();
	void Mul_UpdateCanWinNumber(int Number);
	void Mul_TeamPointInfo(int red, int blue, int green);
	void Mul_SpawnParadrop(int64_t begintime, const struct FVector& beginlocation, const struct FVector& EndLocation, int globalID);
	void Mul_SetPVPGameTime(int64_t start_time);
	void Mul_ResourcesPointTeamChange(int resourcesindex, int TeamID);
	void Mul_RemovePlayerAnimus(int64_t player_list);
	void Mul_PlayerAnimus(TArray<int64_t> player_list_id, TArray<int64_t> player_list_pos);
	void Mul_DC_StartWaitNextCircle(int64_t begintime, int64_t waittingtime, int64_t currentradius, int64_t nextradius, int64_t clocationX, int64_t clocationY, int64_t clocationZ, int64_t nlocationX, int64_t nlocationY, int64_t nlocationZ);
	void Mul_DC_StartShringk(int64_t begintime, int64_t waittingtime, int64_t shringkingtime);
	void Mul_DC_StartLastCircle(int64_t StartTime, int64_t waittime);
	void Mul_DC_StartDamageAll();
	void Mul_DC_Start(int64_t locationX, int64_t locationY, int64_t locationZ, int64_t ScaleX, int64_t ScaleY, int64_t ScaleZ);
	void Mul_DC_Close();
	void Mul_AppendTongZhi(const struct FText& Info);
	void Mul_AppendShutDown(const struct FString& killname, const struct FString& deadname, int kill_num);
	void Mul_AppendKillInfo(const struct FString& attack_player_name, const struct FString& dead_player_name, int attack_id, ECauseDyingType reason);
	void Mul_AppendFirstBlood(const struct FString& playername, const struct FString& deadname);
	void Mul_AppendContinuousKillInfo(const struct FString& playername, int killnumber);
	class AWuXiaXCharacter* GetViewPlayerById(int ID);
	float GetTimeToNxtStage();
	float GetNxtStageWaitTime();
	float GetNxtStageShrinkTime();
	int GetNetTimeMS32();
	float GetNetTimeInSec();
	void ChangeStateToLogin();
	void ChangeGameState(EGameState game_state);
};


// Class WuXiaX.WuXiaXHorse
// 0x00B0 (0x07F0 - 0x0740)
class AWuXiaXHorse : public ACharacter
{
public:
	class USceneComponent*                             horse_offset_component_;                                  // 0x0740(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             horse_center_component_;                                  // 0x0748(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               hit_box_component_;                                       // 0x0750(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               collision_component_;                                     // 0x0758(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int64_t                                            horse_id_;                                                // 0x0760(0x0008) (Edit, Net, ZeroConstructor, IsPlainOldData)
	TArray<class AWuXiaXCharacter*>                    players;                                                  // 0x0768(0x0010) (Edit, Net, ZeroConstructor)
	float                                              endurance_;                                               // 0x0778(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x077C(0x0004) MISSED OFFSET
	int64_t                                            endurance_net_;                                           // 0x0780(0x0008) (Edit, Net, ZeroConstructor, IsPlainOldData)
	float                                              rotate_speed_;                                            // 0x0788(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x078C(0x0004) MISSED OFFSET
	int64_t                                            rotate_speed_net_;                                        // 0x0790(0x0008) (Edit, Net, ZeroConstructor, IsPlainOldData)
	int                                                horse_net_id_;                                            // 0x0798(0x0004) (Edit, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x079C(0x0004) MISSED OFFSET
	class UClass*                                      anim_instance_class_;                                     // 0x07A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x48];                                      // 0x07A8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuXiaXHorse");
		return ptr;
	}


	bool Ride(class AWuXiaXCharacter* Driver, int index, EPlayerRideStateType* ridestate);
	void OnRepRotate();
	void OnRepPlayers();
	void OnRepHorseNetID();
	void OnRepHorseID();
	void OnRepEndurance();
	void Mul_PlayFallMontage();
	bool InteractiveUITips(class AWuXiaXCharacter* Player, struct FText* Text);
	float GetRotationSpeed();
	class AWuXiaXCharacter* GetRider();
	EInteractiveType GetInteractiveType(class AWuXiaXCharacter* Player);
	float GetCurrentFSpeed();
	bool CanInteractive(class AWuXiaXCharacter* Player, ETriggerInteractiveType Trigger);
};


// Class WuXiaX.WuXiaXOBController
// 0x00A0 (0x0718 - 0x0678)
class AWuXiaXOBController : public APlayerController
{
public:
	class AOBClientInfo*                               obInfo;                                                   // 0x0678(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AWuxiaXOBPawn*                               _srvNoticedOB;                                            // 0x0680(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	int64_t                                            time_seconds_;                                            // 0x0688(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            time_net_delay_;                                          // 0x0690(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            time_client_server_add_;                                  // 0x0698(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                timer_handle_;                                            // 0x06A0(0x0008)
	unsigned char                                      UnknownData00[0x50];                                      // 0x06A8(0x0050) MISSED OFFSET
	bool                                               _is_ob;                                                   // 0x06F8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x06F9(0x0007) MISSED OFFSET
	int64_t                                            player_net_id_;                                           // 0x0700(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     player_name_;                                             // 0x0708(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuXiaXOBController");
		return ptr;
	}


	void TimeSyncStart();
	void Server_StartPing(int64_t index, int64_t Time);
	void OnRep_SrvNoticedOB();
	void ClientReportServerTime(int64_t index, int64_t cTime, int64_t sTime);
};


// Class WuXiaX.WuxiaXOBPawn
// 0x00E0 (0x0490 - 0x03B0)
class AWuxiaXOBPawn : public ASpectatorPawn
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B0(0x0008) MISSED OFFSET
	float                                              moveSpeed;                                                // 0x03B8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EObserveCameraType                                 camera_type;                                              // 0x03BC(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	class AWuXiaXCharacter*                            observee_target;                                          // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                observee_user_id;                                         // 0x03C8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	class USpringArmComponent*                         spring;                                                   // 0x03D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x03D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              OBNetRelevantDistSqr;                                     // 0x03E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMouseRightDown;                                          // 0x03E4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03E5(0x0003) MISSED OFFSET
	float                                              baseMoveSpeed;                                            // 0x03E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              planeViewOffsetZ;                                         // 0x03EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              paradropViewOffsetZ;                                      // 0x03F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LockViewCamDist;                                          // 0x03F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DownViewMinDist;                                          // 0x03F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DownViewMaxDist;                                          // 0x03FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DownViewDftDist;                                          // 0x0400(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DefaultMoveSpeed;                                         // 0x0404(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ParadropViewCamDist;                                      // 0x0408(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                player_net_id_;                                           // 0x040C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	class AOBClientInfo*                               _clientInfo;                                              // 0x0410(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UPlayerBroadcastComponent*                   player_broadcast_;                                        // 0x0418(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x70];                                      // 0x0420(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuxiaXOBPawn");
		return ptr;
	}


	void SetZeroCounter(int64_t start_time);
	void Server_UpdateOBLocation(const struct FVector& pos);
	void PlayerInitLocation();
	void OnViewTargetDead();
	void OnTargetViewRotUpdated(int netID, const struct FRotator& rot);
	void OnSwitchToPrevPlayer();
	void OnSwitchToNextPlayer();
	void OnMoveUpDown(float Rate);
	void OnMoveRight(float Rate);
	void OnMoveForward(float Rate);
	void OnMouseTurn(float Rate);
	void OnMouseScroll(float Delta);
	void OnMouseRKeyUp();
	void OnMouseRKeyDown();
	void OnMouseLookUp(float Rate);
	void OnMouseLKeyUp();
	void OnKey_PrevTeam_Released();
	void OnKey_NextTeam_Released();
	void OnKey_C_Released();
	void OnClientInfoGet(class AOBClientInfo* oldClient);
	void OnCameraViewUpdated(EObserveCameraType oldType);
	class AOBClientInfo* GetOBClientInfo();
	void EnterTargteView_Target(class AWuXiaXCharacter* ViewTarget);
	void EnterTargetVeiw(EObserveCameraType cam_type, int targetid);
	void EnterNoneView();
	void EnterItemView(int itemWorldID);
	void EnterFreeView();
	void EnterDownView_Target(class AWuXiaXCharacter* vierTarget);
};


// Class WuXiaX.WuXiaXPlane
// 0x00B8 (0x03E0 - 0x0328)
class AWuXiaXPlane : public AActor
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0328(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuXiaXPlane");
		return ptr;
	}

};


// Class WuXiaX.WuXiaXPlayerController
// 0x00F0 (0x0768 - 0x0678)
class AWuXiaXPlayerController : public APlayerController
{
public:
	int64_t                                            time_seconds_;                                            // 0x0678(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            time_net_delay_;                                          // 0x0680(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            time_client_server_add_;                                  // 0x0688(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               is_camera_change_;                                        // 0x0690(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x57];                                      // 0x0691(0x0057) MISSED OFFSET
	struct FTimerHandle                                timer_handle_;                                            // 0x06E8(0x0008)
	struct FTimerHandle                                check_has_character_timer_handle_;                        // 0x06F0(0x0008)
	struct FTimerHandle                                client_timer_handle_;                                     // 0x06F8(0x0008)
	int64_t                                            player_net_id_;                                           // 0x0700(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     player_name_;                                             // 0x0708(0x0010) (ZeroConstructor)
	TMap<struct FKey, struct FText>                    key_map_;                                                 // 0x0718(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuXiaXPlayerController");
		return ptr;
	}


	void TimeSyncStart();
	void SetZeroCounter(int64_t StartTime);
	void SetPVPGameTime(int64_t StartTime);
	void SetPlayerTeamStastics(TArray<struct FStasticsInfo> reds, TArray<struct FStasticsInfo> greens, TArray<struct FStasticsInfo> blues);
	void Server_StartPing(int64_t index, int64_t Time);
	void InputAnyKey(const struct FKey& Key);
	struct FText GetKeyText(const struct FName& Name);
	void DeleteMark();
	void DebugPrintTimeMS(int sencond);
	void ClientReportServerTime(int64_t index, int64_t cTime, int64_t sTime);
	void Client_UpdateKillLive(int killnumber, int livenumber);
	void Client_UpdateKill(int killnumber, int itemID);
	void Client_TeamPointInfo(int red, int blue, int green);
	void Client_SetResurrectionTime(int64_t Time);
	void Client_ResourcesPointTeamChange(int resourcesindex, int TeamID);
};


// Class WuXiaX.WuXiaXPlayerState
// 0x0000 (0x03F0 - 0x03F0)
class AWuXiaXPlayerState : public APlayerState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuXiaXPlayerState");
		return ptr;
	}


	void Mul_RemovePlayerAnimus(int64_t player_list);
	void Mul_PlayerAnimus(TMap<int64_t, int64_t> player_list);
};


// Class WuXiaX.WuXiaXReplicationGraph
// 0x00E8 (0x03D8 - 0x02F0)
class UWuXiaXReplicationGraph : public UReplicationGraph
{
public:
	TArray<class UClass*>                              SpatializedClasses;                                       // 0x02F0(0x0010) (ZeroConstructor)
	TArray<class UClass*>                              NonSpatializedChildClasses;                               // 0x0300(0x0010) (ZeroConstructor)
	TArray<class UClass*>                              AlwaysRelevantClasses;                                    // 0x0310(0x0010) (ZeroConstructor)
	class UReplicationGraphNode_GridSpatialization2D*  GridNode;                                                 // 0x0320(0x0008) (ZeroConstructor, IsPlainOldData)
	class UReplicationGraphNode_ActorList*             AlwaysRelevantNode;                                       // 0x0328(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWuXiaXReplicationGraphNode_OBNode*          OBRelevantNode;                                           // 0x0330(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0338(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuXiaXReplicationGraph");
		return ptr;
	}

};


// Class WuXiaX.WuXiaXReplicationGraphNode_AlwaysRelevant_ForConnection
// 0x0238 (0x0288 - 0x0050)
class UWuXiaXReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode
{
public:
	unsigned char                                      UnknownData00[0x228];                                     // 0x0050(0x0228) MISSED OFFSET
	class AActor*                                      LastPawn;                                                 // 0x0278(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0280(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuXiaXReplicationGraphNode_AlwaysRelevant_ForConnection");
		return ptr;
	}

};


// Class WuXiaX.WuXiaXReplicationGraphNode_PlayerStateFrequencyLimiter
// 0x0030 (0x0080 - 0x0050)
class UWuXiaXReplicationGraphNode_PlayerStateFrequencyLimiter : public UReplicationGraphNode
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0050(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuXiaXReplicationGraphNode_PlayerStateFrequencyLimiter");
		return ptr;
	}

};


// Class WuXiaX.WuXiaXReplicationGraphNode_OBNode
// 0x00D8 (0x0128 - 0x0050)
class UWuXiaXReplicationGraphNode_OBNode : public UReplicationGraphNode
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0050(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuXiaXReplicationGraphNode_OBNode");
		return ptr;
	}

};


// Class WuXiaX.WuXiaXViewportClient
// 0x0000 (0x02E8 - 0x02E8)
class UWuXiaXViewportClient : public UGameViewportClient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WuXiaX.WuXiaXViewportClient");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
