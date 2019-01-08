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

// Function PersonalRankTileWidget.PersonalRankTileWidget_C.SetValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPersonalRankTileWidget_C::SetValue(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function PersonalRankTileWidget.PersonalRankTileWidget_C.SetValue");

	UPersonalRankTileWidget_C_SetValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PersonalRankTileWidget.PersonalRankTileWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPersonalRankTileWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PersonalRankTileWidget.PersonalRankTileWidget_C.PreConstruct");

	UPersonalRankTileWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PersonalRankTileWidget.PersonalRankTileWidget_C.ExecuteUbergraph_PersonalRankTileWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPersonalRankTileWidget_C::ExecuteUbergraph_PersonalRankTileWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PersonalRankTileWidget.PersonalRankTileWidget_C.ExecuteUbergraph_PersonalRankTileWidget");

	UPersonalRankTileWidget_C_ExecuteUbergraph_PersonalRankTileWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
