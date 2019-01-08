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

// WidgetBlueprintGeneratedClass GamePadBaseWidget.GamePadBaseWidget_C
// 0x0038 (0x0240 - 0x0208)
class UGamePadBaseWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    QuitOut;                                                  // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    MouseEnter;                                               // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    MouseExit;                                                // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GamePadBaseWidget.GamePadBaseWidget_C");
		return ptr;
	}


	void StartInto(bool Direction);
	void LabelAppend(int Append);
	void Verticle(bool State, bool IsDown);
	void Horizontal(bool State, bool IsRight);
	void ResetHover();
	void Press();
	void Release();
	void SetChildWidgetHoverNone();
	void ExecuteUbergraph_GamePadBaseWidget(int EntryPoint);
	void MouseExit__DelegateSignature();
	void MouseEnter__DelegateSignature();
	void QuitOut__DelegateSignature(bool Direction);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
