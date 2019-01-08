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

// WidgetBlueprintGeneratedClass RewardItemHorizontalListWidget.RewardItemHorizontalListWidget_C
// 0x0008 (0x0210 - 0x0208)
class URewardItemHorizontalListWidget_C : public UUserWidget
{
public:
	class UHorizontalBox*                              HorizontalBox_1;                                          // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RewardItemHorizontalListWidget.RewardItemHorizontalListWidget_C");
		return ptr;
	}


	void CreateRewardItem(int itemID, int Type, class UTexture2D* icon, int Level, class URewardItemWidget_C** NewItem);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
