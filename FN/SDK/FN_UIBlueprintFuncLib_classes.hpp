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

// BlueprintGeneratedClass UIBlueprintFuncLib.UIBlueprintFuncLib_C
// 0x0000 (0x0028 - 0x0028)
class UUIBlueprintFuncLib_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UIBlueprintFuncLib.UIBlueprintFuncLib_C");
		return ptr;
	}


	void STATIC_CheckTextBoxInputNumber(const struct FText& Text, class UEditableTextBox* TextBox, int Min, int Max, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
