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

// Function KillRankSortPlayerChildWidget.KillRankSortPlayerChildWidget_C.DealSort
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Sort                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKillRankSortPlayerChildWidget_C::DealSort(int Sort)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillRankSortPlayerChildWidget.KillRankSortPlayerChildWidget_C.DealSort");

	UKillRankSortPlayerChildWidget_C_DealSort_Params params;
	params.Sort = Sort;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillRankSortPlayerChildWidget.KillRankSortPlayerChildWidget_C.SetInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Sort                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            KillNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxKill                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          KillRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKillRankSortPlayerChildWidget_C::SetInfo(int PlayerID, int Sort, const struct FString& Name, int score, int KillNum, int MaxKill, float KillRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillRankSortPlayerChildWidget.KillRankSortPlayerChildWidget_C.SetInfo");

	UKillRankSortPlayerChildWidget_C_SetInfo_Params params;
	params.PlayerID = PlayerID;
	params.Sort = Sort;
	params.Name = Name;
	params.score = score;
	params.KillNum = KillNum;
	params.MaxKill = MaxKill;
	params.KillRate = KillRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillRankSortPlayerChildWidget.KillRankSortPlayerChildWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UKillRankSortPlayerChildWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillRankSortPlayerChildWidget.KillRankSortPlayerChildWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UKillRankSortPlayerChildWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillRankSortPlayerChildWidget.KillRankSortPlayerChildWidget_C.SetButtonState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EButtonState>*     State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKillRankSortPlayerChildWidget_C::SetButtonState(TEnumAsByte<EButtonState>* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillRankSortPlayerChildWidget.KillRankSortPlayerChildWidget_C.SetButtonState");

	UKillRankSortPlayerChildWidget_C_SetButtonState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillRankSortPlayerChildWidget.KillRankSortPlayerChildWidget_C.ExecuteUbergraph_KillRankSortPlayerChildWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKillRankSortPlayerChildWidget_C::ExecuteUbergraph_KillRankSortPlayerChildWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillRankSortPlayerChildWidget.KillRankSortPlayerChildWidget_C.ExecuteUbergraph_KillRankSortPlayerChildWidget");

	UKillRankSortPlayerChildWidget_C_ExecuteUbergraph_KillRankSortPlayerChildWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillRankSortPlayerChildWidget.KillRankSortPlayerChildWidget_C.GetRank__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKillRankSortPlayerChildWidget_C::GetRank__DelegateSignature(int PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillRankSortPlayerChildWidget.KillRankSortPlayerChildWidget_C.GetRank__DelegateSignature");

	UKillRankSortPlayerChildWidget_C_GetRank__DelegateSignature_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
