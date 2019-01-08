#pragma once

// Fortnite (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.UserConstructionScript
struct ABP_ClientLogin_HUD_C_UserConstructionScript_Params
{
};

// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.CreateMainLoginUI
struct ABP_ClientLogin_HUD_C_CreateMainLoginUI_Params
{
};

// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.ShowHallWidget
struct ABP_ClientLogin_HUD_C_ShowHallWidget_Params
{
	struct FString*                                    player_name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.ShowLoginUI
struct ABP_ClientLogin_HUD_C_ShowLoginUI_Params
{
};

// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.AutoLogin
struct ABP_ClientLogin_HUD_C_AutoLogin_Params
{
};

// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.LoginResponse
struct ABP_ClientLogin_HUD_C_LoginResponse_Params
{
	ELoginResponseType*                                login_state;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    player_name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.ShowSorting
struct ABP_ClientLogin_HUD_C_ShowSorting_Params
{
};

// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.HideSorting
struct ABP_ClientLogin_HUD_C_HideSorting_Params
{
};

// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.ReadyGame
struct ABP_ClientLogin_HUD_C_ReadyGame_Params
{
};

// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.ShowReconnect
struct ABP_ClientLogin_HUD_C_ShowReconnect_Params
{
};

// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.HideReconnect
struct ABP_ClientLogin_HUD_C_HideReconnect_Params
{
};

// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.MainLoginEscape
struct ABP_ClientLogin_HUD_C_MainLoginEscape_Params
{
};

// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.MainLoginNextTips
struct ABP_ClientLogin_HUD_C_MainLoginNextTips_Params
{
};

// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.LoginCharacterMoveComplete
struct ABP_ClientLogin_HUD_C_LoginCharacterMoveComplete_Params
{
};

// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.UserHallBackGroundAlpha
struct ABP_ClientLogin_HUD_C_UserHallBackGroundAlpha_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.CheckFullScreenToWindowFullScreen
struct ABP_ClientLogin_HUD_C_CheckFullScreenToWindowFullScreen_Params
{
};

// Function BP_ClientLogin_HUD.BP_ClientLogin_HUD_C.ExecuteUbergraph_BP_ClientLogin_HUD
struct ABP_ClientLogin_HUD_C_ExecuteUbergraph_BP_ClientLogin_HUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
