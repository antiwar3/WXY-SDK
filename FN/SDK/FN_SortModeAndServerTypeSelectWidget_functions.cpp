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

// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.GetServerById
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class URankServerModeWidget_C* ServerButton                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USortModeAndServerTypeSelectWidget_C::GetServerById(int ID, class URankServerModeWidget_C** ServerButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.GetServerById");

	USortModeAndServerTypeSelectWidget_C_GetServerById_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ServerButton != nullptr)
		*ServerButton = params.ServerButton;
}


// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.GetSortByIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Sort                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class URankSortModeChildWidget_C* SortButton                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USortModeAndServerTypeSelectWidget_C::GetSortByIndex(int Sort, class URankSortModeChildWidget_C** SortButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.GetSortByIndex");

	USortModeAndServerTypeSelectWidget_C_GetSortByIndex_Params params;
	params.Sort = Sort;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SortButton != nullptr)
		*SortButton = params.SortButton;
}


// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.GetServerHoverIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USortModeAndServerTypeSelectWidget_C::GetServerHoverIndex(int* index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.GetServerHoverIndex");

	USortModeAndServerTypeSelectWidget_C_GetServerHoverIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (index != nullptr)
		*index = params.index;
}


// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.GetSortHover
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Sort                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USortModeAndServerTypeSelectWidget_C::GetSortHover(int* Sort)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.GetSortHover");

	USortModeAndServerTypeSelectWidget_C_GetSortHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sort != nullptr)
		*Sort = params.Sort;
}


// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.SetServerHoverFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USortModeAndServerTypeSelectWidget_C::SetServerHoverFunc(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.SetServerHoverFunc");

	USortModeAndServerTypeSelectWidget_C_SetServerHoverFunc_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.SetSortHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USortModeAndServerTypeSelectWidget_C::SetSortHover(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.SetSortHover");

	USortModeAndServerTypeSelectWidget_C_SetSortHover_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.CheckHoverButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETypeSelectButtonState> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USortModeAndServerTypeSelectWidget_C::CheckHoverButton(TEnumAsByte<ETypeSelectButtonState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.CheckHoverButton");

	USortModeAndServerTypeSelectWidget_C_CheckHoverButton_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.ResetLanguage
// (Public, BlueprintCallable, BlueprintEvent)

void USortModeAndServerTypeSelectWidget_C::ResetLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.ResetLanguage");

	USortModeAndServerTypeSelectWidget_C_ResetLanguage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.BndEvt__SoloMode_K2Node_ComponentBoundEvent_164_SetSortMode__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            NewMode                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USortModeAndServerTypeSelectWidget_C::BndEvt__SoloMode_K2Node_ComponentBoundEvent_164_SetSortMode__DelegateSignature(int NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.BndEvt__SoloMode_K2Node_ComponentBoundEvent_164_SetSortMode__DelegateSignature");

	USortModeAndServerTypeSelectWidget_C_BndEvt__SoloMode_K2Node_ComponentBoundEvent_164_SetSortMode__DelegateSignature_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.BndEvt__DoubleMode_K2Node_ComponentBoundEvent_165_SetSortMode__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            NewMode                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USortModeAndServerTypeSelectWidget_C::BndEvt__DoubleMode_K2Node_ComponentBoundEvent_165_SetSortMode__DelegateSignature(int NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.BndEvt__DoubleMode_K2Node_ComponentBoundEvent_165_SetSortMode__DelegateSignature");

	USortModeAndServerTypeSelectWidget_C_BndEvt__DoubleMode_K2Node_ComponentBoundEvent_165_SetSortMode__DelegateSignature_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.BndEvt__SquadMode_K2Node_ComponentBoundEvent_167_SetSortMode__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            NewMode                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USortModeAndServerTypeSelectWidget_C::BndEvt__SquadMode_K2Node_ComponentBoundEvent_167_SetSortMode__DelegateSignature(int NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.BndEvt__SquadMode_K2Node_ComponentBoundEvent_167_SetSortMode__DelegateSignature");

	USortModeAndServerTypeSelectWidget_C_BndEvt__SquadMode_K2Node_ComponentBoundEvent_167_SetSortMode__DelegateSignature_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USortModeAndServerTypeSelectWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.Construct");

	USortModeAndServerTypeSelectWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.ServerModeSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewMode                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USortModeAndServerTypeSelectWidget_C::ServerModeSelect(int NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.ServerModeSelect");

	USortModeAndServerTypeSelectWidget_C_ServerModeSelect_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USortModeAndServerTypeSelectWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.PreConstruct");

	USortModeAndServerTypeSelectWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.SortModeSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Sort                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Server                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USortModeAndServerTypeSelectWidget_C::SortModeSelect(int Sort, int Server)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.SortModeSelect");

	USortModeAndServerTypeSelectWidget_C_SortModeSelect_Params params;
	params.Sort = Sort;
	params.Server = Server;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.InitServer
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    Servers                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void USortModeAndServerTypeSelectWidget_C::InitServer(TArray<int> Servers)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.InitServer");

	USortModeAndServerTypeSelectWidget_C_InitServer_Params params;
	params.Servers = Servers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USortModeAndServerTypeSelectWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature");

	USortModeAndServerTypeSelectWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_84_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USortModeAndServerTypeSelectWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_84_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_84_OnButtonHoverEvent__DelegateSignature");

	USortModeAndServerTypeSelectWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_84_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_94_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USortModeAndServerTypeSelectWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_94_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_94_OnButtonHoverEvent__DelegateSignature");

	USortModeAndServerTypeSelectWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_94_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.PanelState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USortModeAndServerTypeSelectWidget_C::PanelState(bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.PanelState");

	USortModeAndServerTypeSelectWidget_C_PanelState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.BndEvt__CtrlButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void USortModeAndServerTypeSelectWidget_C::BndEvt__CtrlButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.BndEvt__CtrlButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");

	USortModeAndServerTypeSelectWidget_C_BndEvt__CtrlButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.BndEvt__CtrlButton_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void USortModeAndServerTypeSelectWidget_C::BndEvt__CtrlButton_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.BndEvt__CtrlButton_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature");

	USortModeAndServerTypeSelectWidget_C_BndEvt__CtrlButton_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.LabelAppend
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Append                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USortModeAndServerTypeSelectWidget_C::LabelAppend(int* Append)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.LabelAppend");

	USortModeAndServerTypeSelectWidget_C_LabelAppend_Params params;
	params.Append = Append;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.StartInto
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USortModeAndServerTypeSelectWidget_C::StartInto(bool* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.StartInto");

	USortModeAndServerTypeSelectWidget_C_StartInto_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.ResetHover
// (Public, BlueprintCallable, BlueprintEvent)

void USortModeAndServerTypeSelectWidget_C::ResetHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.ResetHover");

	USortModeAndServerTypeSelectWidget_C_ResetHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.Verticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsDown                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USortModeAndServerTypeSelectWidget_C::Verticle(bool* State, bool* IsDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.Verticle");

	USortModeAndServerTypeSelectWidget_C_Verticle_Params params;
	params.State = State;
	params.IsDown = IsDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.Horizontal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsRight                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USortModeAndServerTypeSelectWidget_C::Horizontal(bool* State, bool* IsRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.Horizontal");

	USortModeAndServerTypeSelectWidget_C_Horizontal_Params params;
	params.State = State;
	params.IsRight = IsRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.Press
// (Public, BlueprintCallable, BlueprintEvent)

void USortModeAndServerTypeSelectWidget_C::Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.Press");

	USortModeAndServerTypeSelectWidget_C_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.Release
// (Public, BlueprintCallable, BlueprintEvent)

void USortModeAndServerTypeSelectWidget_C::Release()
{
	static auto fn = UObject::FindObject<UFunction>("Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.Release");

	USortModeAndServerTypeSelectWidget_C_Release_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.ExecuteUbergraph_SortModeAndServerTypeSelectWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USortModeAndServerTypeSelectWidget_C::ExecuteUbergraph_SortModeAndServerTypeSelectWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.ExecuteUbergraph_SortModeAndServerTypeSelectWidget");

	USortModeAndServerTypeSelectWidget_C_ExecuteUbergraph_SortModeAndServerTypeSelectWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.ModeChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SortMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ServerMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USortModeAndServerTypeSelectWidget_C::ModeChange__DelegateSignature(int SortMode, int ServerMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortModeAndServerTypeSelectWidget.SortModeAndServerTypeSelectWidget_C.ModeChange__DelegateSignature");

	USortModeAndServerTypeSelectWidget_C_ModeChange__DelegateSignature_Params params;
	params.SortMode = SortMode;
	params.ServerMode = ServerMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
