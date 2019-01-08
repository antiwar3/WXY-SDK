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

// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ClientLogin_HUD_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.UserConstructionScript");

	ABP_ClientLogin_HUD_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.CreateMainLoginUI
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ClientLogin_HUD_C::CreateMainLoginUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.CreateMainLoginUI");

	ABP_ClientLogin_HUD_C_CreateMainLoginUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.ShowHallWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                player_name                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_ClientLogin_HUD_C::ShowHallWidget(struct FString* player_name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.ShowHallWidget");

	ABP_ClientLogin_HUD_C_ShowHallWidget_Params params;
	params.player_name = player_name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.ShowLoginUI
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ClientLogin_HUD_C::ShowLoginUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.ShowLoginUI");

	ABP_ClientLogin_HUD_C_ShowLoginUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.AutoLogin
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ClientLogin_HUD_C::AutoLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.AutoLogin");

	ABP_ClientLogin_HUD_C_AutoLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.LoginResponse
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ELoginResponseType*            login_state                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                player_name                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_ClientLogin_HUD_C::LoginResponse(ELoginResponseType* login_state, struct FString* player_name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.LoginResponse");

	ABP_ClientLogin_HUD_C_LoginResponse_Params params;
	params.login_state = login_state;
	params.player_name = player_name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.ShowSorting
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ClientLogin_HUD_C::ShowSorting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.ShowSorting");

	ABP_ClientLogin_HUD_C_ShowSorting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.HideSorting
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ClientLogin_HUD_C::HideSorting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.HideSorting");

	ABP_ClientLogin_HUD_C_HideSorting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.ReadyGame
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ClientLogin_HUD_C::ReadyGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.ReadyGame");

	ABP_ClientLogin_HUD_C_ReadyGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.ShowReconnect
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ClientLogin_HUD_C::ShowReconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.ShowReconnect");

	ABP_ClientLogin_HUD_C_ShowReconnect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.HideReconnect
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ClientLogin_HUD_C::HideReconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.HideReconnect");

	ABP_ClientLogin_HUD_C_HideReconnect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.MainLoginEscape
// (BlueprintCallable, BlueprintEvent)

void ABP_ClientLogin_HUD_C::MainLoginEscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.MainLoginEscape");

	ABP_ClientLogin_HUD_C_MainLoginEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.MainLoginNextTips
// (BlueprintCallable, BlueprintEvent)

void ABP_ClientLogin_HUD_C::MainLoginNextTips()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.MainLoginNextTips");

	ABP_ClientLogin_HUD_C_MainLoginNextTips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.LoginCharacterMoveComplete
// (BlueprintCallable, BlueprintEvent)

void ABP_ClientLogin_HUD_C::LoginCharacterMoveComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.LoginCharacterMoveComplete");

	ABP_ClientLogin_HUD_C_LoginCharacterMoveComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.UserHallBackGroundAlpha
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ClientLogin_HUD_C::UserHallBackGroundAlpha(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.UserHallBackGroundAlpha");

	ABP_ClientLogin_HUD_C_UserHallBackGroundAlpha_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.CheckFullScreenToWindowFullScreen
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ClientLogin_HUD_C::CheckFullScreenToWindowFullScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.CheckFullScreenToWindowFullScreen");

	ABP_ClientLogin_HUD_C_CheckFullScreenToWindowFullScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.ExecuteUbergraph_BP_ClientLogin_HUD
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ClientLogin_HUD_C::ExecuteUbergraph_BP_ClientLogin_HUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.ExecuteUbergraph_BP_ClientLogin_HUD");

	ABP_ClientLogin_HUD_C_ExecuteUbergraph_BP_ClientLogin_HUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
