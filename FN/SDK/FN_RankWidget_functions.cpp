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

// Function RankWidget.RankWidget_C.SwitchMainPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URankWidget_C::SwitchMainPanel(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.SwitchMainPanel");

	URankWidget_C_SwitchMainPanel_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.CheckHoverButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ERankButtonState>  State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URankWidget_C::CheckHoverButton(TEnumAsByte<ERankButtonState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.CheckHoverButton");

	URankWidget_C_CheckHoverButton_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.DealRankModeChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewRankMode                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URankWidget_C::DealRankModeChange(int NewRankMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.DealRankModeChange");

	URankWidget_C_DealRankModeChange_Params params;
	params.NewRankMode = NewRankMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.BndEvt__TotalRankData_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void URankWidget_C::BndEvt__TotalRankData_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.BndEvt__TotalRankData_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature");

	URankWidget_C_BndEvt__TotalRankData_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.BndEvt__WinRankData_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void URankWidget_C::BndEvt__WinRankData_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.BndEvt__WinRankData_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature");

	URankWidget_C_BndEvt__WinRankData_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.BndEvt__KillRankData_K2Node_ComponentBoundEvent_95_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void URankWidget_C::BndEvt__KillRankData_K2Node_ComponentBoundEvent_95_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.BndEvt__KillRankData_K2Node_ComponentBoundEvent_95_OnButtonClickedEvent__DelegateSignature");

	URankWidget_C_BndEvt__KillRankData_K2Node_ComponentBoundEvent_95_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.BndEvt__RankButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void URankWidget_C::BndEvt__RankButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.BndEvt__RankButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	URankWidget_C_BndEvt__RankButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.BndEvt__PersonButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void URankWidget_C::BndEvt__PersonButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.BndEvt__PersonButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	URankWidget_C_BndEvt__PersonButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.ResetLanguage
// (BlueprintCallable, BlueprintEvent)

void URankWidget_C::ResetLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.ResetLanguage");

	URankWidget_C_ResetLanguage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.CreateTotalRank
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTotalRank>      Ranks                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void URankWidget_C::CreateTotalRank(TArray<struct FTotalRank> Ranks)
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.CreateTotalRank");

	URankWidget_C_CreateTotalRank_Params params;
	params.Ranks = Ranks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.CreateWinRank
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVictoryRank>    Ranks                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void URankWidget_C::CreateWinRank(TArray<struct FVictoryRank> Ranks)
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.CreateWinRank");

	URankWidget_C_CreateWinRank_Params params;
	params.Ranks = Ranks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.CreateFightRank
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFightRank>      Ranks                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void URankWidget_C::CreateFightRank(TArray<struct FFightRank> Ranks)
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.CreateFightRank");

	URankWidget_C_CreateFightRank_Params params;
	params.Ranks = Ranks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.GetPlayerRank
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URankWidget_C::GetPlayerRank(int PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.GetPlayerRank");

	URankWidget_C_GetPlayerRank_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.BndEvt__RankTypeSelect_K2Node_ComponentBoundEvent_0_ModeChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            SortMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ServerMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URankWidget_C::BndEvt__RankTypeSelect_K2Node_ComponentBoundEvent_0_ModeChange__DelegateSignature(int SortMode, int ServerMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.BndEvt__RankTypeSelect_K2Node_ComponentBoundEvent_0_ModeChange__DelegateSignature");

	URankWidget_C_BndEvt__RankTypeSelect_K2Node_ComponentBoundEvent_0_ModeChange__DelegateSignature_Params params;
	params.SortMode = SortMode;
	params.ServerMode = ServerMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.BndEvt__PersonTypeSelect_K2Node_ComponentBoundEvent_1_ModeChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            SortMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ServerMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URankWidget_C::BndEvt__PersonTypeSelect_K2Node_ComponentBoundEvent_1_ModeChange__DelegateSignature(int SortMode, int ServerMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.BndEvt__PersonTypeSelect_K2Node_ComponentBoundEvent_1_ModeChange__DelegateSignature");

	URankWidget_C_BndEvt__PersonTypeSelect_K2Node_ComponentBoundEvent_1_ModeChange__DelegateSignature_Params params;
	params.SortMode = SortMode;
	params.ServerMode = ServerMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URankWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.Construct");

	URankWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.BndEvt__Button_bg_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void URankWidget_C::BndEvt__Button_bg_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.BndEvt__Button_bg_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature");

	URankWidget_C_BndEvt__Button_bg_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.BndEvt__PersonTypeSelect_K2Node_ComponentBoundEvent_3_QuitOut__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URankWidget_C::BndEvt__PersonTypeSelect_K2Node_ComponentBoundEvent_3_QuitOut__DelegateSignature(bool Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.BndEvt__PersonTypeSelect_K2Node_ComponentBoundEvent_3_QuitOut__DelegateSignature");

	URankWidget_C_BndEvt__PersonTypeSelect_K2Node_ComponentBoundEvent_3_QuitOut__DelegateSignature_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.BndEvt__RankTypeSelect_K2Node_ComponentBoundEvent_9_QuitOut__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URankWidget_C::BndEvt__RankTypeSelect_K2Node_ComponentBoundEvent_9_QuitOut__DelegateSignature(bool Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.BndEvt__RankTypeSelect_K2Node_ComponentBoundEvent_9_QuitOut__DelegateSignature");

	URankWidget_C_BndEvt__RankTypeSelect_K2Node_ComponentBoundEvent_9_QuitOut__DelegateSignature_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.BndEvt__RankTypeSelect_K2Node_ComponentBoundEvent_193_MouseExit__DelegateSignature
// (BlueprintEvent)

void URankWidget_C::BndEvt__RankTypeSelect_K2Node_ComponentBoundEvent_193_MouseExit__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.BndEvt__RankTypeSelect_K2Node_ComponentBoundEvent_193_MouseExit__DelegateSignature");

	URankWidget_C_BndEvt__RankTypeSelect_K2Node_ComponentBoundEvent_193_MouseExit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.BndEvt__PersonTypeSelect_K2Node_ComponentBoundEvent_220_MouseExit__DelegateSignature
// (BlueprintEvent)

void URankWidget_C::BndEvt__PersonTypeSelect_K2Node_ComponentBoundEvent_220_MouseExit__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.BndEvt__PersonTypeSelect_K2Node_ComponentBoundEvent_220_MouseExit__DelegateSignature");

	URankWidget_C_BndEvt__PersonTypeSelect_K2Node_ComponentBoundEvent_220_MouseExit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.BndEvt__RankTypeSelect_K2Node_ComponentBoundEvent_293_MouseEnter__DelegateSignature
// (BlueprintEvent)

void URankWidget_C::BndEvt__RankTypeSelect_K2Node_ComponentBoundEvent_293_MouseEnter__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.BndEvt__RankTypeSelect_K2Node_ComponentBoundEvent_293_MouseEnter__DelegateSignature");

	URankWidget_C_BndEvt__RankTypeSelect_K2Node_ComponentBoundEvent_293_MouseEnter__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.BndEvt__PersonTypeSelect_K2Node_ComponentBoundEvent_316_MouseEnter__DelegateSignature
// (BlueprintEvent)

void URankWidget_C::BndEvt__PersonTypeSelect_K2Node_ComponentBoundEvent_316_MouseEnter__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.BndEvt__PersonTypeSelect_K2Node_ComponentBoundEvent_316_MouseEnter__DelegateSignature");

	URankWidget_C_BndEvt__PersonTypeSelect_K2Node_ComponentBoundEvent_316_MouseEnter__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.SetChildWidgetHoverNone
// (Public, BlueprintCallable, BlueprintEvent)

void URankWidget_C::SetChildWidgetHoverNone()
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.SetChildWidgetHoverNone");

	URankWidget_C_SetChildWidgetHoverNone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.StartInto
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URankWidget_C::StartInto(bool* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.StartInto");

	URankWidget_C_StartInto_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.LabelAppend
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Append                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URankWidget_C::LabelAppend(int* Append)
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.LabelAppend");

	URankWidget_C_LabelAppend_Params params;
	params.Append = Append;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.Verticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsDown                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URankWidget_C::Verticle(bool* State, bool* IsDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.Verticle");

	URankWidget_C_Verticle_Params params;
	params.State = State;
	params.IsDown = IsDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.Horizontal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsRight                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URankWidget_C::Horizontal(bool* State, bool* IsRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.Horizontal");

	URankWidget_C_Horizontal_Params params;
	params.State = State;
	params.IsRight = IsRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.ResetHover
// (Public, BlueprintCallable, BlueprintEvent)

void URankWidget_C::ResetHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.ResetHover");

	URankWidget_C_ResetHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.Press
// (Public, BlueprintCallable, BlueprintEvent)

void URankWidget_C::Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.Press");

	URankWidget_C_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.Release
// (Public, BlueprintCallable, BlueprintEvent)

void URankWidget_C::Release()
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.Release");

	URankWidget_C_Release_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.ExecuteUbergraph_RankWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URankWidget_C::ExecuteUbergraph_RankWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.ExecuteUbergraph_RankWidget");

	URankWidget_C_ExecuteUbergraph_RankWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RankWidget.RankWidget_C.OpenPlayerRank__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SortMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ServerMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URankWidget_C::OpenPlayerRank__DelegateSignature(int SortMode, int ServerMode, int PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function RankWidget.RankWidget_C.OpenPlayerRank__DelegateSignature");

	URankWidget_C_OpenPlayerRank__DelegateSignature_Params params;
	params.SortMode = SortMode;
	params.ServerMode = ServerMode;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
