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

// WidgetBlueprintGeneratedClass PopInfoBoxWidgetBase.PopInfoBoxWidgetBase_C
// 0x0020 (0x0228 - 0x0208)
class UPopInfoBoxWidgetBase_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UPopInfoWidgetBase_C*>                Pops;                                                     // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      WidgetClass;                                              // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PopInfoBoxWidgetBase.PopInfoBoxWidgetBase_C");
		return ptr;
	}


	void PushWidget(class UPopInfoWidgetBase_C* Widget);
	void GetEmptyPop(class UPopInfoWidgetBase_C** POP);
	void PopTimeOutPushBack(class UPopInfoWidgetBase_C* Widget);
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void ExecuteUbergraph_PopInfoBoxWidgetBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
