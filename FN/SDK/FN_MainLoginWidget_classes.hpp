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

// WidgetBlueprintGeneratedClass MainLoginWidget.MainLoginWidget_C
// 0x0058 (0x0288 - 0x0230)
class UMainLoginWidget_C : public UMainLoginUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                             HallSwitcher;                                             // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetSwitcher*                             MainSwitcher;                                             // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOpeningWidget_C*                            OpeningWidget;                                            // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetSwitcher*                             PreLoginSwitcher;                                         // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUserHallWidget_C*                           UserHallWidget;                                           // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUserLoginWidget_C*                          UserLoginWidget;                                          // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWaitingGameWidget_C*                        WaitingGameWidget;                                        // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class AClientNetMessageHandle*                     ClientNetHandle;                                          // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             MainUISound;                                              // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             LoadingUISound;                                           // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MainLoginWidget.MainLoginWidget_C");
		return ptr;
	}


	void LoginComplete();
	void Construct();
	void OpenLoginWidget();
	void LoginResponse(ELoginResponseType LoginResponse, const struct FString& player_name);
	void LoginSuccess();
	void PlayerNameResponse(EPlayerNameResponseType PlayerNameResponse);
	void GetConnectStr(const struct FString& connect_server_str);
	void CreateItem(int* item_id, int* Num, ESexType* sex, class UTexture2D** item_texture, int* item_level, struct FString* item_name);
	void ShowReconnect();
	void HideReconnect();
	void ShowSorting();
	void HideSorting();
	void ReadyGame();
	void Init(class AClientNetMessageHandle** Net_actor);
	void SaveLoginInfo(const struct FString& UserName, const struct FString& PassWord);
	void ShowCreateCharacter(struct FString* Name);
	void InitCharacterInfo(ESexType* sex_type, struct FString* Name, int* face_id, int* skin_color_id, int* hair_id, int* hair_color_id, int* money);
	void SetFriendInfo(int* ID, struct FString* Name, int* login_state, int* ys_state, class UTexture2D** icon);
	void InitTeamInfo(ESexType* sex_type, int* user_id, struct FString* Name, int* face_id, int* skin_color_id, int* hair_id, int* hair_color_id, int* State, int* ready, bool* in_room, TArray<int>* equip_items, class UTexture2D** icon);
	void PlayerQuitTeam();
	void PlayerBeInvite(int* invite_id, struct FString* Name);
	void PlayerInviteResponse(struct FString* Name, int* result);
	void PlayerBeFriendInvite(int* invite_id, struct FString* Name);
	void PlayerInviteFriendResponse(struct FString* Name, int* result);
	void PlayerEquip(TArray<int>* equips);
	void TeamPlayerEquipChange(int* old_item_id, int* new_item_id, int* user_id);
	void ConfigLogin();
	void SetIsMasterMode(bool* State);
	void PlayerNameRepeat();
	void SetLeaveTeamButtonValid(bool* State);
	void ClearTeam(TArray<int>* new_team_ids);
	void ComfirmMaster(int* master_id);
	void SetPLayerLoginState(int* user_id, int* login_state);
	void ClearHallItem();
	void SetPingTaiLogin(struct FString* user_name, struct FString* PassWord, int* Type, ESlateVisibility* showCancle);
	void AppendGongGao(EGongGaoType* Type, struct FText* Info);
	void ResetHallItemLanguageInfo();
	void ShowInputName();
	void CreateSkin(int* skin_id, int* Num, ESexType* sex, int* Type, class UTexture2D** item_texture);
	void InitSkinSelectId(int* skin_id, int* Type, class UTexture2D** icon_texture, bool* is_show);
	void SetSkinSelectId(int* skin_id, int* Type, class UTexture2D** icon_texture);
	void SetPreviewSkin(int* player_id, EPreviewType* Type, int* skin_id);
	void ClearGoods();
	void CreateOwnerKey(int* item_id, struct FString* Name, int* Num);
	void CreateOwnerBox(int* item_id, struct FString* Name, int* Num, class UTexture2D** icon, bool* is_need_key);
	void UpdateUserMoney(int* money);
	void ObtainNewBox(int* item_id, struct FString* Name, class UTexture2D** icon, bool* is_need_key);
	void ObtainNewItem(struct FString* Name, class UTexture2D** icon);
	void CreateBuyBox(int* random_box, int* fixed_box);
	void ReCalculateBoxPrice(int* item_id, int* Times);
	void AppendHallItem(int* item_id, int* Num);
	void AppendHallSkin(int* item_id, int* Num);
	void RemoveItem(int itemID);
	void ResetServerListLanguageInfo();
	void SetUserRank(struct FWuXiaX_FUserRank* rank, int* player_id);
	void ResetTotalRank(TArray<struct FTotalRank>* total_rank);
	void ResetVicRank(TArray<struct FVictoryRank>* vic_rank);
	void ResetFightRank(TArray<struct FFightRank>* fight_rank);
	void InitServerList(TArray<int>* server_list);
	void LoginCharacterMoveComplete();
	void ResetGoodsLanguage();
	void UserHallBackGroundAlpha(float Value);
	void HallRemind(struct FText* remind);
	void BuyBoxRemind(struct FText* remind);
	void OpenBoxRemind(struct FText* remind);
	void SetTeamMode(int* Mode);
	void CreateOwnerItemComplete();
	void BuyKeyResponse(int* item_id, class UTexture2D** Texture);
	void RemoveHallItem(int* item_id);
	void RemoveHallSkin(int* skin_id);
	void JiHuoMaItemAppend(struct FString* Name, class UTexture2D** Texture);
	void JiHuoMaRemind(struct FText* remind);
	void GetNewSkin(int* Type);
	void ObtainNewItems(TArray<struct FBoxRewardItem>* items);
	void LoadUrl(struct FString* URL);
	void HideUrl();
	void BuyKeyRemind(struct FText* remind);
	void BndEvt__UserHallWidget_K2Node_ComponentBoundEvent_0_PlayBGSound__DelegateSignature(bool State);
	void WidgetEscape();
	void WidgetNextTips();
	void ClearAllEquip();
	void BndEvt__UserLoginWidget_K2Node_ComponentBoundEvent_0_SaveLoginInfo__DelegateSignature(const struct FString& UserName, const struct FString& PassWord);
	void BndEvt__UserLoginWidget_K2Node_ComponentBoundEvent_8_LoginDispatch__DelegateSignature();
	void TeamChangeLook(int* player_id, ESexType* sex, struct FString* Name, int* user_face, int* skin_color, int* user_hair, int* user_haircolor, class UTexture2D** icon);
	void SoldItemComplete();
	void SetPlayMode(int* Mode);
	void DeleteFriendComplete(int* player_id);
	void ClearFriends();
	void SetOnlineType(int* online_type);
	void SetFriendYSState(int* user_id, int* login_state);
	void SetPlayModeState(int* Mode, int* State);
	void SetPlayModeEndTime(int* Mode, int* days, int* Hours, int* Minutes, bool* is_start);
	void TeamPlayerTalk(int* player_id);
	void UpdateVersion();
	void CreateRooms(TArray<struct FUIRoomInfo>* rooms);
	void PlayerJoinedRoom(struct FUIRoomInfo* room, int* master_id, TArray<struct FRoomUser>* users);
	void QuitFromRoom();
	void PlayerLeaveRoom(int* player_id);
	void DeleteRoomComplete();
	void UpdateRoomPlayer(struct FRoomUser* user);
	void SetPageNum(int* Num);
	void PopOBReconnect();
	void SetMaxPage(int* page);
	void StartRoomTick();
	void QuitRoomTick();
	void TeamPlayerRoomStateChange(int* player_id, bool* State);
	void SetServerMode(int* server_id);
	void CheckResetSortState();
	void ExecuteUbergraph_MainLoginWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
