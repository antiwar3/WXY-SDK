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

// Function BoxDetailWidget.BoxDetailWidget_C.SetInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 descript                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBoxDetailWidget_C::SetInfo(const struct FString& descript)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoxDetailWidget.BoxDetailWidget_C.SetInfo");

	UBoxDetailWidget_C_SetInfo_Params params;
	params.descript = descript;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoxDetailWidget.BoxDetailWidget_C.ExecuteUbergraph_BoxDetailWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBoxDetailWidget_C::ExecuteUbergraph_BoxDetailWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoxDetailWidget.BoxDetailWidget_C.ExecuteUbergraph_BoxDetailWidget");

	UBoxDetailWidget_C_ExecuteUbergraph_BoxDetailWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
