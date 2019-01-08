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

// BlueprintGeneratedClass BP_ClientLogin_HUD.BP_ClientLogin_HUD_C
// 0x0010 (0x0438 - 0x0428)
class ABP_ClientLogin_HUD_C : public AClientLoginHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ClientLogin_HUD.BP_ClientLogin_HUD_C");
		return ptr;
	}


	void UserConstructionScript();
	void CreateMainLoginUI();
	void ShowHallWidget(struct FString* player_name);
	void ShowLoginUI();
	void AutoLogin();
	void LoginResponse(ELoginResponseType* login_state, struct FString* player_name);
	void ShowSorting();
	void HideSorting();
	void ReadyGame();
	void ShowReconnect();
	void HideReconnect();
	void MainLoginEscape();
	void MainLoginNextTips();
	void LoginCharacterMoveComplete();
	void UserHallBackGroundAlpha(float Value);
	void CheckFullScreenToWindowFullScreen();
	void ExecuteUbergraph_BP_ClientLogin_HUD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
