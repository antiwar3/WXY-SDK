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

// Function SelectLimitWidget.SelectLimitWidget_C.LimitChildSelect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USelectLimitWidget_C::LimitChildSelect(int Type, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectLimitWidget.SelectLimitWidget_C.LimitChildSelect");

	USelectLimitWidget_C_LimitChildSelect_Params params;
	params.Type = Type;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelectLimitWidget.SelectLimitWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USelectLimitWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectLimitWidget.SelectLimitWidget_C.Construct");

	USelectLimitWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelectLimitWidget.SelectLimitWidget_C.CreateServerList
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    Servers                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void USelectLimitWidget_C::CreateServerList(TArray<int> Servers)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectLimitWidget.SelectLimitWidget_C.CreateServerList");

	USelectLimitWidget_C_CreateServerList_Params params;
	params.Servers = Servers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelectLimitWidget.SelectLimitWidget_C.ResetLanguage
// (BlueprintCallable, BlueprintEvent)

void USelectLimitWidget_C::ResetLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectLimitWidget.SelectLimitWidget_C.ResetLanguage");

	USelectLimitWidget_C_ResetLanguage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelectLimitWidget.SelectLimitWidget_C.SetVisiableState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USelectLimitWidget_C::SetVisiableState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectLimitWidget.SelectLimitWidget_C.SetVisiableState");

	USelectLimitWidget_C_SetVisiableState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelectLimitWidget.SelectLimitWidget_C.ExecuteUbergraph_SelectLimitWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USelectLimitWidget_C::ExecuteUbergraph_SelectLimitWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectLimitWidget.SelectLimitWidget_C.ExecuteUbergraph_SelectLimitWidget");

	USelectLimitWidget_C_ExecuteUbergraph_SelectLimitWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelectLimitWidget.SelectLimitWidget_C.LimitChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USelectLimitWidget_C::LimitChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectLimitWidget.SelectLimitWidget_C.LimitChange__DelegateSignature");

	USelectLimitWidget_C_LimitChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
