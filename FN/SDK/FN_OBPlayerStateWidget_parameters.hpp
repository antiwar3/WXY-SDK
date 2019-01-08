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

// Function OBPlayerStateWidget.OBPlayerStateWidget_C.OnEvt_AllCharInited
struct UOBPlayerStateWidget_C_OnEvt_AllCharInited_Params
{
};

// Function OBPlayerStateWidget.OBPlayerStateWidget_C.doInit
struct UOBPlayerStateWidget_C_doInit_Params
{
};

// Function OBPlayerStateWidget.OBPlayerStateWidget_C.OnEvet_ViewMethodChanged
struct UOBPlayerStateWidget_C_OnEvet_ViewMethodChanged_Params
{
	EObserveCameraType                                 New;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EObserveCameraType                                 Old;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OBPlayerStateWidget.OBPlayerStateWidget_C.OnEvt_ViewTargetChanged
struct UOBPlayerStateWidget_C_OnEvt_ViewTargetChanged_Params
{
	int                                                newID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OBPlayerStateWidget.OBPlayerStateWidget_C.OnEvt_CharRefreshed
struct UOBPlayerStateWidget_C_OnEvt_CharRefreshed_Params
{
};

// Function OBPlayerStateWidget.OBPlayerStateWidget_C.RefreshVisibility
struct UOBPlayerStateWidget_C_RefreshVisibility_Params
{
};

// Function OBPlayerStateWidget.OBPlayerStateWidget_C.RefreshAll
struct UOBPlayerStateWidget_C_RefreshAll_Params
{
};

// Function OBPlayerStateWidget.OBPlayerStateWidget_C.RefreshDynamic
struct UOBPlayerStateWidget_C_RefreshDynamic_Params
{
};

// Function OBPlayerStateWidget.OBPlayerStateWidget_C.OnCharInfoChanged
struct UOBPlayerStateWidget_C_OnCharInfoChanged_Params
{
};

// Function OBPlayerStateWidget.OBPlayerStateWidget_C.Init
struct UOBPlayerStateWidget_C_Init_Params
{
	int                                                PlayerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OBPlayerStateWidget.OBPlayerStateWidget_C.SetMpValue
struct UOBPlayerStateWidget_C_SetMpValue_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OBPlayerStateWidget.OBPlayerStateWidget_C.SetHpValue
struct UOBPlayerStateWidget_C_SetHpValue_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OBPlayerStateWidget.OBPlayerStateWidget_C.SetInjuryValue
struct UOBPlayerStateWidget_C_SetInjuryValue_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OBPlayerStateWidget.OBPlayerStateWidget_C.SetPlayerInfo
struct UOBPlayerStateWidget_C_SetPlayerInfo_Params
{
	struct FString                                     TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     playername;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function OBPlayerStateWidget.OBPlayerStateWidget_C.SetTeamColor
struct UOBPlayerStateWidget_C_SetTeamColor_Params
{
	struct FColor                                      TeamColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OBPlayerStateWidget.OBPlayerStateWidget_C.Tick
struct UOBPlayerStateWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OBPlayerStateWidget.OBPlayerStateWidget_C.ExecuteUbergraph_OBPlayerStateWidget
struct UOBPlayerStateWidget_C_ExecuteUbergraph_OBPlayerStateWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
