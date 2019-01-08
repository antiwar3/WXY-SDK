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

// Function LoginCharacter.LoginCharacter_C.GetHUD
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_ClientLogin_HUD_C*   HUD                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALoginCharacter_C::GetHUD(class ABP_ClientLogin_HUD_C** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCharacter.LoginCharacter_C.GetHUD");

	ALoginCharacter_C_GetHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HUD != nullptr)
		*HUD = params.HUD;
}


// Function LoginCharacter.LoginCharacter_C.ChangeType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ELoginMapLocationType> newType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NeedMove                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALoginCharacter_C::ChangeType(TEnumAsByte<ELoginMapLocationType> newType, bool* NeedMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCharacter.LoginCharacter_C.ChangeType");

	ALoginCharacter_C_ChangeType_Params params;
	params.newType = newType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NeedMove != nullptr)
		*NeedMove = params.NeedMove;
}


// Function LoginCharacter.LoginCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALoginCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCharacter.LoginCharacter_C.UserConstructionScript");

	ALoginCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginCharacter.LoginCharacter_C.MoveToLocationTimeLine__FinishedFunc
// (BlueprintEvent)

void ALoginCharacter_C::MoveToLocationTimeLine__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCharacter.LoginCharacter_C.MoveToLocationTimeLine__FinishedFunc");

	ALoginCharacter_C_MoveToLocationTimeLine__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginCharacter.LoginCharacter_C.MoveToLocationTimeLine__UpdateFunc
// (BlueprintEvent)

void ALoginCharacter_C::MoveToLocationTimeLine__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCharacter.LoginCharacter_C.MoveToLocationTimeLine__UpdateFunc");

	ALoginCharacter_C_MoveToLocationTimeLine__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginCharacter.LoginCharacter_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ALoginCharacter_C::InpActEvt_SpaceBar_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCharacter.LoginCharacter_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_2");

	ALoginCharacter_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginCharacter.LoginCharacter_C.InpActEvt_Escape_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ALoginCharacter_C::InpActEvt_Escape_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCharacter.LoginCharacter_C.InpActEvt_Escape_K2Node_InputKeyEvent_1");

	ALoginCharacter_C_InpActEvt_Escape_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginCharacter.LoginCharacter_C.InpActEvt_Talk_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ALoginCharacter_C::InpActEvt_Talk_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCharacter.LoginCharacter_C.InpActEvt_Talk_K2Node_InputActionEvent_2");

	ALoginCharacter_C_InpActEvt_Talk_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginCharacter.LoginCharacter_C.InpActEvt_Talk_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ALoginCharacter_C::InpActEvt_Talk_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCharacter.LoginCharacter_C.InpActEvt_Talk_K2Node_InputActionEvent_1");

	ALoginCharacter_C_InpActEvt_Talk_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginCharacter.LoginCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALoginCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCharacter.LoginCharacter_C.ReceiveBeginPlay");

	ALoginCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginCharacter.LoginCharacter_C.ChangeLoginType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ELoginMapLocationType> newType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALoginCharacter_C::ChangeLoginType(TEnumAsByte<ELoginMapLocationType> newType)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCharacter.LoginCharacter_C.ChangeLoginType");

	ALoginCharacter_C_ChangeLoginType_Params params;
	params.newType = newType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginCharacter.LoginCharacter_C.ExecuteUbergraph_LoginCharacter
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALoginCharacter_C::ExecuteUbergraph_LoginCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginCharacter.LoginCharacter_C.ExecuteUbergraph_LoginCharacter");

	ALoginCharacter_C_ExecuteUbergraph_LoginCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
