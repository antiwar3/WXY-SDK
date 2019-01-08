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

// Function OtherPersonalInfoWidget.OtherPersonalInfoWidget_C.FloatStr
struct UOtherPersonalInfoWidget_C_FloatStr_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Precision;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OtherPersonalInfoWidget.OtherPersonalInfoWidget_C.BndEvt__Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UOtherPersonalInfoWidget_C_BndEvt__Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function OtherPersonalInfoWidget.OtherPersonalInfoWidget_C.SetMode
struct UOtherPersonalInfoWidget_C_SetMode_Params
{
	int                                                Sort;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Server;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OtherPersonalInfoWidget.OtherPersonalInfoWidget_C.SetInfo
struct UOtherPersonalInfoWidget_C_SetInfo_Params
{
	struct FWuXiaX_FUserRank                           rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OtherPersonalInfoWidget.OtherPersonalInfoWidget_C.BndEvt__ModeSelect_K2Node_ComponentBoundEvent_3_ModeChange__DelegateSignature
struct UOtherPersonalInfoWidget_C_BndEvt__ModeSelect_K2Node_ComponentBoundEvent_3_ModeChange__DelegateSignature_Params
{
	int                                                SortMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ServerMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OtherPersonalInfoWidget.OtherPersonalInfoWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
struct UOtherPersonalInfoWidget_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function OtherPersonalInfoWidget.OtherPersonalInfoWidget_C.Clear
struct UOtherPersonalInfoWidget_C_Clear_Params
{
};

// Function OtherPersonalInfoWidget.OtherPersonalInfoWidget_C.ExecuteUbergraph_OtherPersonalInfoWidget
struct UOtherPersonalInfoWidget_C_ExecuteUbergraph_OtherPersonalInfoWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
