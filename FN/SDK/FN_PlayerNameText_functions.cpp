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

// Function PlayerNameText.PlayerNameText_C.SetMaster
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsMaster                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerNameText_C::SetMaster(bool IsMaster)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerNameText.PlayerNameText_C.SetMaster");

	UPlayerNameText_C_SetMaster_Params params;
	params.IsMaster = IsMaster;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerNameText.PlayerNameText_C.SetOnlineMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerNameText_C::SetOnlineMode(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerNameText.PlayerNameText_C.SetOnlineMode");

	UPlayerNameText_C_SetOnlineMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerNameText.PlayerNameText_C.SetReadeState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReadyState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerNameText_C::SetReadeState(int ReadyState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerNameText.PlayerNameText_C.SetReadeState");

	UPlayerNameText_C_SetReadeState_Params params;
	params.ReadyState = ReadyState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerNameText.PlayerNameText_C.SetTalkState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerNameText_C::SetTalkState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerNameText.PlayerNameText_C.SetTalkState");

	UPlayerNameText_C_SetTalkState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerNameText.PlayerNameText_C.SetRoomState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerNameText_C::SetRoomState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerNameText.PlayerNameText_C.SetRoomState");

	UPlayerNameText_C_SetRoomState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerNameText.PlayerNameText_C.ExecuteUbergraph_PlayerNameText
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerNameText_C::ExecuteUbergraph_PlayerNameText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerNameText.PlayerNameText_C.ExecuteUbergraph_PlayerNameText");

	UPlayerNameText_C_ExecuteUbergraph_PlayerNameText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
