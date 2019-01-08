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

// Function WinRankSortPlayerChildWidget.WinRankSortPlayerChildWidget_C.DealSort
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Sort                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWinRankSortPlayerChildWidget_C::DealSort(int Sort)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinRankSortPlayerChildWidget.WinRankSortPlayerChildWidget_C.DealSort");

	UWinRankSortPlayerChildWidget_C_DealSort_Params params;
	params.Sort = Sort;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WinRankSortPlayerChildWidget.WinRankSortPlayerChildWidget_C.SetInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Sort                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            WinTimes                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Ten                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          WinRate                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWinRankSortPlayerChildWidget_C::SetInfo(int PlayerID, int Sort, const struct FString& Name, int score, int WinTimes, int Ten, float WinRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinRankSortPlayerChildWidget.WinRankSortPlayerChildWidget_C.SetInfo");

	UWinRankSortPlayerChildWidget_C_SetInfo_Params params;
	params.PlayerID = PlayerID;
	params.Sort = Sort;
	params.Name = Name;
	params.score = score;
	params.WinTimes = WinTimes;
	params.Ten = Ten;
	params.WinRate = WinRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WinRankSortPlayerChildWidget.WinRankSortPlayerChildWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWinRankSortPlayerChildWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinRankSortPlayerChildWidget.WinRankSortPlayerChildWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UWinRankSortPlayerChildWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WinRankSortPlayerChildWidget.WinRankSortPlayerChildWidget_C.SetButtonState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EButtonState>*     State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWinRankSortPlayerChildWidget_C::SetButtonState(TEnumAsByte<EButtonState>* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinRankSortPlayerChildWidget.WinRankSortPlayerChildWidget_C.SetButtonState");

	UWinRankSortPlayerChildWidget_C_SetButtonState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WinRankSortPlayerChildWidget.WinRankSortPlayerChildWidget_C.ExecuteUbergraph_WinRankSortPlayerChildWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWinRankSortPlayerChildWidget_C::ExecuteUbergraph_WinRankSortPlayerChildWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinRankSortPlayerChildWidget.WinRankSortPlayerChildWidget_C.ExecuteUbergraph_WinRankSortPlayerChildWidget");

	UWinRankSortPlayerChildWidget_C_ExecuteUbergraph_WinRankSortPlayerChildWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WinRankSortPlayerChildWidget.WinRankSortPlayerChildWidget_C.GetRank__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWinRankSortPlayerChildWidget_C::GetRank__DelegateSignature(int PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinRankSortPlayerChildWidget.WinRankSortPlayerChildWidget_C.GetRank__DelegateSignature");

	UWinRankSortPlayerChildWidget_C_GetRank__DelegateSignature_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
