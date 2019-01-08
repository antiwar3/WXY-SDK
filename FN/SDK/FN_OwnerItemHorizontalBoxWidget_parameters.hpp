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

// Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.CheckPage
struct UOwnerItemHorizontalBoxWidget_C_CheckPage_Params
{
};

// Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.SetBoxWidget
struct UOwnerItemHorizontalBoxWidget_C_SetBoxWidget_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ItemNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  BoxIcon;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  KeyIcon;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNeedKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasKey;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UOwnerItemBoxWidget_C*                       RetBox;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.AppendBox
struct UOwnerItemHorizontalBoxWidget_C_AppendBox_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  KeyIcon;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNeedKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UOwnerItemBoxWidget_C*                       RetBox;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.CalculateLocation
struct UOwnerItemHorizontalBoxWidget_C_CalculateLocation_Params
{
};

// Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.CreateNewBoxWidget
struct UOwnerItemHorizontalBoxWidget_C_CreateNewBoxWidget_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  KeyIcon;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNeedKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasKey;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UOwnerItemBoxWidget_C*                       RetBox;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.Tick
struct UOwnerItemHorizontalBoxWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.BndEvt__Left_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UOwnerItemHorizontalBoxWidget_C_BndEvt__Left_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.BndEvt__Right_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UOwnerItemHorizontalBoxWidget_C_BndEvt__Right_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.RemoveBox
struct UOwnerItemHorizontalBoxWidget_C_RemoveBox_Params
{
	class UOwnerItemBoxWidget_C*                       Box;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.Clear
struct UOwnerItemHorizontalBoxWidget_C_Clear_Params
{
};

// Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.SetValidPosition
struct UOwnerItemHorizontalBoxWidget_C_SetValidPosition_Params
{
};

// Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.ExecuteUbergraph_OwnerItemHorizontalBoxWidget
struct UOwnerItemHorizontalBoxWidget_C_ExecuteUbergraph_OwnerItemHorizontalBoxWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.RemoveBoxItem__DelegateSignature
struct UOwnerItemHorizontalBoxWidget_C_RemoveBoxItem__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.NoBoxItem__DelegateSignature
struct UOwnerItemHorizontalBoxWidget_C_NoBoxItem__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
