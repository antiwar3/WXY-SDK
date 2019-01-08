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

// Function CustomGameComboBox.CustomGameComboBox_C.SetOpenState
struct UCustomGameComboBox_C_SetOpenState_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomGameComboBox.CustomGameComboBox_C.OnGenerateWidget_1
struct UCustomGameComboBox_C_OnGenerateWidget_1_Params
{
	struct FString                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CustomGameComboBox.CustomGameComboBox_C.BndEvt__ComboBoxString_0_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
struct UCustomGameComboBox_C_BndEvt__ComboBoxString_0_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomGameComboBox.CustomGameComboBox_C.BndEvt__ComboBoxString_0_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature
struct UCustomGameComboBox_C_BndEvt__ComboBoxString_0_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature_Params
{
};

// Function CustomGameComboBox.CustomGameComboBox_C.CreateOptions
struct UCustomGameComboBox_C_CreateOptions_Params
{
	TArray<struct FString>                             Options;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function CustomGameComboBox.CustomGameComboBox_C.SetOption
struct UCustomGameComboBox_C_SetOption_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomGameComboBox.CustomGameComboBox_C.OnChildCreate
struct UCustomGameComboBox_C_OnChildCreate_Params
{
	class UCustomGameComboItem_C*                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CustomGameComboBox.CustomGameComboBox_C.OnChildDestruct
struct UCustomGameComboBox_C_OnChildDestruct_Params
{
	class UCustomGameComboItem_C*                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CustomGameComboBox.CustomGameComboBox_C.Tick
struct UCustomGameComboBox_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomGameComboBox.CustomGameComboBox_C.ExecuteUbergraph_CustomGameComboBox
struct UCustomGameComboBox_C_ExecuteUbergraph_CustomGameComboBox_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomGameComboBox.CustomGameComboBox_C.OptionChange__DelegateSignature
struct UCustomGameComboBox_C_OptionChange__DelegateSignature_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
