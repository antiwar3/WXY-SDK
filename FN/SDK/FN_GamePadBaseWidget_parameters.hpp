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

// Function GamePadBaseWidget.GamePadBaseWidget_C.StartInto
struct UGamePadBaseWidget_C_StartInto_Params
{
	bool                                               Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamePadBaseWidget.GamePadBaseWidget_C.LabelAppend
struct UGamePadBaseWidget_C_LabelAppend_Params
{
	int                                                Append;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamePadBaseWidget.GamePadBaseWidget_C.Verticle
struct UGamePadBaseWidget_C_Verticle_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamePadBaseWidget.GamePadBaseWidget_C.Horizontal
struct UGamePadBaseWidget_C_Horizontal_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsRight;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamePadBaseWidget.GamePadBaseWidget_C.ResetHover
struct UGamePadBaseWidget_C_ResetHover_Params
{
};

// Function GamePadBaseWidget.GamePadBaseWidget_C.Press
struct UGamePadBaseWidget_C_Press_Params
{
};

// Function GamePadBaseWidget.GamePadBaseWidget_C.Release
struct UGamePadBaseWidget_C_Release_Params
{
};

// Function GamePadBaseWidget.GamePadBaseWidget_C.SetChildWidgetHoverNone
struct UGamePadBaseWidget_C_SetChildWidgetHoverNone_Params
{
};

// Function GamePadBaseWidget.GamePadBaseWidget_C.ExecuteUbergraph_GamePadBaseWidget
struct UGamePadBaseWidget_C_ExecuteUbergraph_GamePadBaseWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamePadBaseWidget.GamePadBaseWidget_C.MouseExit__DelegateSignature
struct UGamePadBaseWidget_C_MouseExit__DelegateSignature_Params
{
};

// Function GamePadBaseWidget.GamePadBaseWidget_C.MouseEnter__DelegateSignature
struct UGamePadBaseWidget_C_MouseEnter__DelegateSignature_Params
{
};

// Function GamePadBaseWidget.GamePadBaseWidget_C.QuitOut__DelegateSignature
struct UGamePadBaseWidget_C_QuitOut__DelegateSignature_Params
{
	bool                                               Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
