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

// WidgetBlueprintGeneratedClass PlayGameFrameWidget.PlayGameFrameWidget_C
// 0x000C (0x0248 - 0x023C)
class UPlayGameFrameWidget_C : public UFrameWidget_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayGameFrameWidget.PlayGameFrameWidget_C");
		return ptr;
	}


	void SetImageState(TEnumAsByte<EButtonState> State);
	void ExecuteUbergraph_PlayGameFrameWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
