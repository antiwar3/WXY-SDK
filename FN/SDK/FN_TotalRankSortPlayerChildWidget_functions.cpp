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

// Function TotalRankSortPlayerChildWidget.TotalRankSortPlayerChildWidget_C.DealSort
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Sort                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTotalRankSortPlayerChildWidget_C::DealSort(int Sort)
{
	static auto fn = UObject::FindObject<UFunction>("Function TotalRankSortPlayerChildWidget.TotalRankSortPlayerChildWidget_C.DealSort");

	UTotalRankSortPlayerChildWidget_C_DealSort_Params params;
	params.Sort = Sort;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TotalRankSortPlayerChildWidget.TotalRankSortPlayerChildWidget_C.SetInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Sort                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            WinScore                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FightScore                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTotalRankSortPlayerChildWidget_C::SetInfo(int PlayerID, int Sort, const struct FString& Name, int score, int Time, int WinScore, int FightScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function TotalRankSortPlayerChildWidget.TotalRankSortPlayerChildWidget_C.SetInfo");

	UTotalRankSortPlayerChildWidget_C_SetInfo_Params params;
	params.PlayerID = PlayerID;
	params.Sort = Sort;
	params.Name = Name;
	params.score = score;
	params.Time = Time;
	params.WinScore = WinScore;
	params.FightScore = FightScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TotalRankSortPlayerChildWidget.TotalRankSortPlayerChildWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTotalRankSortPlayerChildWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TotalRankSortPlayerChildWidget.TotalRankSortPlayerChildWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UTotalRankSortPlayerChildWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TotalRankSortPlayerChildWidget.TotalRankSortPlayerChildWidget_C.SetButtonState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EButtonState>*     State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTotalRankSortPlayerChildWidget_C::SetButtonState(TEnumAsByte<EButtonState>* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function TotalRankSortPlayerChildWidget.TotalRankSortPlayerChildWidget_C.SetButtonState");

	UTotalRankSortPlayerChildWidget_C_SetButtonState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TotalRankSortPlayerChildWidget.TotalRankSortPlayerChildWidget_C.ExecuteUbergraph_TotalRankSortPlayerChildWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTotalRankSortPlayerChildWidget_C::ExecuteUbergraph_TotalRankSortPlayerChildWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TotalRankSortPlayerChildWidget.TotalRankSortPlayerChildWidget_C.ExecuteUbergraph_TotalRankSortPlayerChildWidget");

	UTotalRankSortPlayerChildWidget_C_ExecuteUbergraph_TotalRankSortPlayerChildWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TotalRankSortPlayerChildWidget.TotalRankSortPlayerChildWidget_C.GetRank__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTotalRankSortPlayerChildWidget_C::GetRank__DelegateSignature(int PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TotalRankSortPlayerChildWidget.TotalRankSortPlayerChildWidget_C.GetRank__DelegateSignature");

	UTotalRankSortPlayerChildWidget_C_GetRank__DelegateSignature_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
