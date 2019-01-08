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

// Function OBPlayerStateWidget.OBPlayerStateWidget_C.OnEvt_AllCharInited
// (Public, BlueprintCallable, BlueprintEvent)

void UOBPlayerStateWidget_C::OnEvt_AllCharInited()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBPlayerStateWidget.OBPlayerStateWidget_C.OnEvt_AllCharInited");

	UOBPlayerStateWidget_C_OnEvt_AllCharInited_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBPlayerStateWidget.OBPlayerStateWidget_C.doInit
// (Public, BlueprintCallable, BlueprintEvent)

void UOBPlayerStateWidget_C::doInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBPlayerStateWidget.OBPlayerStateWidget_C.doInit");

	UOBPlayerStateWidget_C_doInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBPlayerStateWidget.OBPlayerStateWidget_C.OnEvet_ViewMethodChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EObserveCameraType             New                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EObserveCameraType             Old                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOBPlayerStateWidget_C::OnEvet_ViewMethodChanged(EObserveCameraType New, EObserveCameraType Old)
{
	static auto fn = UObject::FindObject<UFunction>("Function OBPlayerStateWidget.OBPlayerStateWidget_C.OnEvet_ViewMethodChanged");

	UOBPlayerStateWidget_C_OnEvet_ViewMethodChanged_Params params;
	params.New = New;
	params.Old = Old;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBPlayerStateWidget.OBPlayerStateWidget_C.OnEvt_ViewTargetChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            newID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOBPlayerStateWidget_C::OnEvt_ViewTargetChanged(int newID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OBPlayerStateWidget.OBPlayerStateWidget_C.OnEvt_ViewTargetChanged");

	UOBPlayerStateWidget_C_OnEvt_ViewTargetChanged_Params params;
	params.newID = newID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBPlayerStateWidget.OBPlayerStateWidget_C.OnEvt_CharRefreshed
// (Public, BlueprintCallable, BlueprintEvent)

void UOBPlayerStateWidget_C::OnEvt_CharRefreshed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBPlayerStateWidget.OBPlayerStateWidget_C.OnEvt_CharRefreshed");

	UOBPlayerStateWidget_C_OnEvt_CharRefreshed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBPlayerStateWidget.OBPlayerStateWidget_C.RefreshVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOBPlayerStateWidget_C::RefreshVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBPlayerStateWidget.OBPlayerStateWidget_C.RefreshVisibility");

	UOBPlayerStateWidget_C_RefreshVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBPlayerStateWidget.OBPlayerStateWidget_C.RefreshAll
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOBPlayerStateWidget_C::RefreshAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBPlayerStateWidget.OBPlayerStateWidget_C.RefreshAll");

	UOBPlayerStateWidget_C_RefreshAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBPlayerStateWidget.OBPlayerStateWidget_C.RefreshDynamic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOBPlayerStateWidget_C::RefreshDynamic()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBPlayerStateWidget.OBPlayerStateWidget_C.RefreshDynamic");

	UOBPlayerStateWidget_C_RefreshDynamic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBPlayerStateWidget.OBPlayerStateWidget_C.OnCharInfoChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UOBPlayerStateWidget_C::OnCharInfoChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBPlayerStateWidget.OBPlayerStateWidget_C.OnCharInfoChanged");

	UOBPlayerStateWidget_C_OnCharInfoChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBPlayerStateWidget.OBPlayerStateWidget_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOBPlayerStateWidget_C::Init(int PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OBPlayerStateWidget.OBPlayerStateWidget_C.Init");

	UOBPlayerStateWidget_C_Init_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBPlayerStateWidget.OBPlayerStateWidget_C.SetMpValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOBPlayerStateWidget_C::SetMpValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OBPlayerStateWidget.OBPlayerStateWidget_C.SetMpValue");

	UOBPlayerStateWidget_C_SetMpValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBPlayerStateWidget.OBPlayerStateWidget_C.SetHpValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOBPlayerStateWidget_C::SetHpValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OBPlayerStateWidget.OBPlayerStateWidget_C.SetHpValue");

	UOBPlayerStateWidget_C_SetHpValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBPlayerStateWidget.OBPlayerStateWidget_C.SetInjuryValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOBPlayerStateWidget_C::SetInjuryValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OBPlayerStateWidget.OBPlayerStateWidget_C.SetInjuryValue");

	UOBPlayerStateWidget_C_SetInjuryValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBPlayerStateWidget.OBPlayerStateWidget_C.SetPlayerInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 playername                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UOBPlayerStateWidget_C::SetPlayerInfo(const struct FString& TeamID, const struct FString& playername)
{
	static auto fn = UObject::FindObject<UFunction>("Function OBPlayerStateWidget.OBPlayerStateWidget_C.SetPlayerInfo");

	UOBPlayerStateWidget_C_SetPlayerInfo_Params params;
	params.TeamID = TeamID;
	params.playername = playername;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBPlayerStateWidget.OBPlayerStateWidget_C.SetTeamColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FColor                  TeamColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOBPlayerStateWidget_C::SetTeamColor(const struct FColor& TeamColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function OBPlayerStateWidget.OBPlayerStateWidget_C.SetTeamColor");

	UOBPlayerStateWidget_C_SetTeamColor_Params params;
	params.TeamColor = TeamColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBPlayerStateWidget.OBPlayerStateWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOBPlayerStateWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OBPlayerStateWidget.OBPlayerStateWidget_C.Tick");

	UOBPlayerStateWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBPlayerStateWidget.OBPlayerStateWidget_C.ExecuteUbergraph_OBPlayerStateWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOBPlayerStateWidget_C::ExecuteUbergraph_OBPlayerStateWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OBPlayerStateWidget.OBPlayerStateWidget_C.ExecuteUbergraph_OBPlayerStateWidget");

	UOBPlayerStateWidget_C_ExecuteUbergraph_OBPlayerStateWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
