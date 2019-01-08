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

// WidgetBlueprintGeneratedClass KeyInputWidgetBase.KeyInputWidgetBase_C
// 0x0060 (0x02B8 - 0x0258)
class UKeyInputWidgetBase_C : public USettingChildWidgetBase_C
{
public:
	struct FText                                       Name;                                                     // 0x0258(0x0018) (Edit, BlueprintVisible)
	struct FName                                       KeyName;                                                  // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FInputChord>                         ReadInputKeys;                                            // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     Module;                                                   // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UKeyInputWidgetBase_C*                       ConnectInputWidget;                                       // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FKey                                        NoneKey;                                                  // 0x02A0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KeyInputWidgetBase.KeyInputWidgetBase_C");
		return ptr;
	}


	void GetHUD(class AWuXiaXHUDBase** HUD);
	void GetGameKeyStr(const struct FKey& InputKey, struct FText* KeyName);
	void CheckSameKey(const struct FInputChord& Key);
	void InitKey(class UBP_UserSettingUI_C* Parent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
