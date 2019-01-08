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

// BlueprintGeneratedClass GamePadBaseWidgetInterface.GamePadBaseWidgetInterface_C
// 0x0000 (0x0028 - 0x0028)
class UGamePadBaseWidgetInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GamePadBaseWidgetInterface.GamePadBaseWidgetInterface_C");
		return ptr;
	}


	void SetChildWidgetHoverNone();
	void Release();
	void Press();
	void ResetHover();
	void Horizontal(bool State, bool IsRight);
	void Verticle(bool State, bool IsDown);
	void LabelAppend(int Append);
	void StartInto(bool Direction);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
