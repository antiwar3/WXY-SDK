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

// Function PersonalRankInfoWidget.PersonalRankInfoWidget_C.FloatStr
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Precision                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPersonalRankInfoWidget_C::FloatStr(float Value, int Precision)
{
	static auto fn = UObject::FindObject<UFunction>("Function PersonalRankInfoWidget.PersonalRankInfoWidget_C.FloatStr");

	UPersonalRankInfoWidget_C_FloatStr_Params params;
	params.Value = Value;
	params.Precision = Precision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PersonalRankInfoWidget.PersonalRankInfoWidget_C.SetInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWuXiaX_FUserRank       rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPersonalRankInfoWidget_C::SetInfo(const struct FWuXiaX_FUserRank& rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function PersonalRankInfoWidget.PersonalRankInfoWidget_C.SetInfo");

	UPersonalRankInfoWidget_C_SetInfo_Params params;
	params.rank = rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PersonalRankInfoWidget.PersonalRankInfoWidget_C.Clear
// (BlueprintCallable, BlueprintEvent)

void UPersonalRankInfoWidget_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function PersonalRankInfoWidget.PersonalRankInfoWidget_C.Clear");

	UPersonalRankInfoWidget_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PersonalRankInfoWidget.PersonalRankInfoWidget_C.ExecuteUbergraph_PersonalRankInfoWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPersonalRankInfoWidget_C::ExecuteUbergraph_PersonalRankInfoWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PersonalRankInfoWidget.PersonalRankInfoWidget_C.ExecuteUbergraph_PersonalRankInfoWidget");

	UPersonalRankInfoWidget_C_ExecuteUbergraph_PersonalRankInfoWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
