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

// Function BoxPreviewWidget.BoxPreviewWidget_C.SetInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UTexture2D*              icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBoxPreviewWidget_C::SetInfo(const struct FString& Name, class UTexture2D* icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoxPreviewWidget.BoxPreviewWidget_C.SetInfo");

	UBoxPreviewWidget_C_SetInfo_Params params;
	params.Name = Name;
	params.icon = icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoxPreviewWidget.BoxPreviewWidget_C.ExecuteUbergraph_BoxPreviewWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBoxPreviewWidget_C::ExecuteUbergraph_BoxPreviewWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoxPreviewWidget.BoxPreviewWidget_C.ExecuteUbergraph_BoxPreviewWidget");

	UBoxPreviewWidget_C_ExecuteUbergraph_BoxPreviewWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
