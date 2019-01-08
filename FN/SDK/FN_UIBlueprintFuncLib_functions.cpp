// Fortnite (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UIBlueprintFuncLib.UIBlueprintFuncLib_C.CheckTextBoxInputNumber
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UEditableTextBox*        TextBox                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUIBlueprintFuncLib_C::STATIC_CheckTextBoxInputNumber(const struct FText& Text, class UEditableTextBox* TextBox, int Min, int Max, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIBlueprintFuncLib.UIBlueprintFuncLib_C.CheckTextBoxInputNumber");

	UUIBlueprintFuncLib_C_CheckTextBoxInputNumber_Params params;
	params.Text = Text;
	params.TextBox = TextBox;
	params.Min = Min;
	params.Max = Max;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
