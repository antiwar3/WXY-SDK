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

// Function OtherPersonalInfoWidget.OtherPersonalInfoWidget_C.FloatStr
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Precision                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UOtherPersonalInfoWidget_C::FloatStr(float Value, int Precision)
{
	static auto fn = UObject::FindObject<UFunction>("Function OtherPersonalInfoWidget.OtherPersonalInfoWidget_C.FloatStr");

	UOtherPersonalInfoWidget_C_FloatStr_Params params;
	params.Value = Value;
	params.Precision = Precision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OtherPersonalInfoWidget.OtherPersonalInfoWidget_C.BndEvt__Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOtherPersonalInfoWidget_C::BndEvt__Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OtherPersonalInfoWidget.OtherPersonalInfoWidget_C.BndEvt__Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UOtherPersonalInfoWidget_C_BndEvt__Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OtherPersonalInfoWidget.OtherPersonalInfoWidget_C.SetMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Sort                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Server                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOtherPersonalInfoWidget_C::SetMode(int Sort, int Server, int PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OtherPersonalInfoWidget.OtherPersonalInfoWidget_C.SetMode");

	UOtherPersonalInfoWidget_C_SetMode_Params params;
	params.Sort = Sort;
	params.Server = Server;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OtherPersonalInfoWidget.OtherPersonalInfoWidget_C.SetInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWuXiaX_FUserRank       rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOtherPersonalInfoWidget_C::SetInfo(const struct FWuXiaX_FUserRank& rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function OtherPersonalInfoWidget.OtherPersonalInfoWidget_C.SetInfo");

	UOtherPersonalInfoWidget_C_SetInfo_Params params;
	params.rank = rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OtherPersonalInfoWidget.OtherPersonalInfoWidget_C.BndEvt__ModeSelect_K2Node_ComponentBoundEvent_3_ModeChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            SortMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ServerMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOtherPersonalInfoWidget_C::BndEvt__ModeSelect_K2Node_ComponentBoundEvent_3_ModeChange__DelegateSignature(int SortMode, int ServerMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OtherPersonalInfoWidget.OtherPersonalInfoWidget_C.BndEvt__ModeSelect_K2Node_ComponentBoundEvent_3_ModeChange__DelegateSignature");

	UOtherPersonalInfoWidget_C_BndEvt__ModeSelect_K2Node_ComponentBoundEvent_3_ModeChange__DelegateSignature_Params params;
	params.SortMode = SortMode;
	params.ServerMode = ServerMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OtherPersonalInfoWidget.OtherPersonalInfoWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOtherPersonalInfoWidget_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OtherPersonalInfoWidget.OtherPersonalInfoWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	UOtherPersonalInfoWidget_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OtherPersonalInfoWidget.OtherPersonalInfoWidget_C.Clear
// (BlueprintCallable, BlueprintEvent)

void UOtherPersonalInfoWidget_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function OtherPersonalInfoWidget.OtherPersonalInfoWidget_C.Clear");

	UOtherPersonalInfoWidget_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OtherPersonalInfoWidget.OtherPersonalInfoWidget_C.ExecuteUbergraph_OtherPersonalInfoWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOtherPersonalInfoWidget_C::ExecuteUbergraph_OtherPersonalInfoWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OtherPersonalInfoWidget.OtherPersonalInfoWidget_C.ExecuteUbergraph_OtherPersonalInfoWidget");

	UOtherPersonalInfoWidget_C_ExecuteUbergraph_OtherPersonalInfoWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
