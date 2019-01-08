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

// WidgetBlueprintGeneratedClass SkinChildWidgetBoxWidget.SkinChildWidgetBoxWidget_C
// 0x0008 (0x0210 - 0x0208)
class USkinChildWidgetBoxWidget_C : public UUserWidget
{
public:
	class UHorizontalBox*                              HorizontalBox_1;                                          // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkinChildWidgetBoxWidget.SkinChildWidgetBoxWidget_C");
		return ptr;
	}


	void CreateSkinChildWidget(int SkinId, int Type, class UTexture2D* icon, int Num, ESexType sex, class USkinChildWidget_C** RetSkin);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
