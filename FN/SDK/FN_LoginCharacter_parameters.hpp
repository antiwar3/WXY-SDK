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

// Function LoginCharacter.LoginCharacter_C.GetHUD
struct ALoginCharacter_C_GetHUD_Params
{
	class ABP_ClientLogin_HUD_C*                       HUD;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LoginCharacter.LoginCharacter_C.ChangeType
struct ALoginCharacter_C_ChangeType_Params
{
	TEnumAsByte<ELoginMapLocationType>                 newType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NeedMove;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LoginCharacter.LoginCharacter_C.UserConstructionScript
struct ALoginCharacter_C_UserConstructionScript_Params
{
};

// Function LoginCharacter.LoginCharacter_C.MoveToLocationTimeLine__FinishedFunc
struct ALoginCharacter_C_MoveToLocationTimeLine__FinishedFunc_Params
{
};

// Function LoginCharacter.LoginCharacter_C.MoveToLocationTimeLine__UpdateFunc
struct ALoginCharacter_C_MoveToLocationTimeLine__UpdateFunc_Params
{
};

// Function LoginCharacter.LoginCharacter_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_2
struct ALoginCharacter_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LoginCharacter.LoginCharacter_C.InpActEvt_Escape_K2Node_InputKeyEvent_1
struct ALoginCharacter_C_InpActEvt_Escape_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LoginCharacter.LoginCharacter_C.InpActEvt_Talk_K2Node_InputActionEvent_2
struct ALoginCharacter_C_InpActEvt_Talk_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LoginCharacter.LoginCharacter_C.InpActEvt_Talk_K2Node_InputActionEvent_1
struct ALoginCharacter_C_InpActEvt_Talk_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LoginCharacter.LoginCharacter_C.ReceiveBeginPlay
struct ALoginCharacter_C_ReceiveBeginPlay_Params
{
};

// Function LoginCharacter.LoginCharacter_C.ChangeLoginType
struct ALoginCharacter_C_ChangeLoginType_Params
{
	TEnumAsByte<ELoginMapLocationType>                 newType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginCharacter.LoginCharacter_C.ExecuteUbergraph_LoginCharacter
struct ALoginCharacter_C_ExecuteUbergraph_LoginCharacter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
