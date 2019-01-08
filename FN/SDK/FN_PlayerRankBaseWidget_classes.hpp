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

// WidgetBlueprintGeneratedClass PlayerRankBaseWidget.PlayerRankBaseWidget_C
// 0x0000 (0x0208 - 0x0208)
class UPlayerRankBaseWidget_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerRankBaseWidget.PlayerRankBaseWidget_C");
		return ptr;
	}


	void GetHUD(class AWuXiaXHUDBase** HUD);
	void SetButtonState(TEnumAsByte<EButtonState> State);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
