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

// WidgetBlueprintGeneratedClass ServerSelectLimitChildWidget.ServerSelectLimitChildWidget_C
// 0x0008 (0x0270 - 0x0268)
class UServerSelectLimitChildWidget_C : public USelectLimitChildWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0268(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ServerSelectLimitChildWidget.ServerSelectLimitChildWidget_C");
		return ptr;
	}


	void PreConstruct(bool* IsDesignTime);
	void Init(int Type, int ID);
	void ResetName();
	void ExecuteUbergraph_ServerSelectLimitChildWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
