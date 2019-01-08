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

// WidgetBlueprintGeneratedClass BoxRewardItemPreviewWidget.BoxRewardItemPreviewWidget_C
// 0x000C (0x0214 - 0x0208)
class UBoxRewardItemPreviewWidget_C : public UUserWidget
{
public:
	class UScrollBox*                                  scroll;                                                   // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                CreateCounter;                                            // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BoxRewardItemPreviewWidget.BoxRewardItemPreviewWidget_C");
		return ptr;
	}


	void ClearRewardItem();
	void CreateRewardItem(int RewardItem, int Type, class UTexture2D* icon, int Level, class URewardItemWidget_C** RetVal);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
