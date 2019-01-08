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

// Function KeySelectHorizontalBoxWidget.KeySelectHorizontalBoxWidget_C.CreateKey
struct UKeySelectHorizontalBoxWidget_C_CreateKey_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UTexture2D*                                  icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     price;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UKeyWidget_C*                                RetKey;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KeySelectHorizontalBoxWidget.KeySelectHorizontalBoxWidget_C.BndEvt__Left_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UKeySelectHorizontalBoxWidget_C_BndEvt__Left_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function KeySelectHorizontalBoxWidget.KeySelectHorizontalBoxWidget_C.BndEvt__Right_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UKeySelectHorizontalBoxWidget_C_BndEvt__Right_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function KeySelectHorizontalBoxWidget.KeySelectHorizontalBoxWidget_C.Tick
struct UKeySelectHorizontalBoxWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KeySelectHorizontalBoxWidget.KeySelectHorizontalBoxWidget_C.ExecuteUbergraph_KeySelectHorizontalBoxWidget
struct UKeySelectHorizontalBoxWidget_C_ExecuteUbergraph_KeySelectHorizontalBoxWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
