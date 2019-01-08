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

// Function GamePadBaseWidgetInterface.GamePadBaseWidgetInterface_C.SetChildWidgetHoverNone
struct UGamePadBaseWidgetInterface_C_SetChildWidgetHoverNone_Params
{
};

// Function GamePadBaseWidgetInterface.GamePadBaseWidgetInterface_C.Release
struct UGamePadBaseWidgetInterface_C_Release_Params
{
};

// Function GamePadBaseWidgetInterface.GamePadBaseWidgetInterface_C.Press
struct UGamePadBaseWidgetInterface_C_Press_Params
{
};

// Function GamePadBaseWidgetInterface.GamePadBaseWidgetInterface_C.ResetHover
struct UGamePadBaseWidgetInterface_C_ResetHover_Params
{
};

// Function GamePadBaseWidgetInterface.GamePadBaseWidgetInterface_C.Horizontal
struct UGamePadBaseWidgetInterface_C_Horizontal_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsRight;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamePadBaseWidgetInterface.GamePadBaseWidgetInterface_C.Verticle
struct UGamePadBaseWidgetInterface_C_Verticle_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamePadBaseWidgetInterface.GamePadBaseWidgetInterface_C.LabelAppend
struct UGamePadBaseWidgetInterface_C_LabelAppend_Params
{
	int                                                Append;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamePadBaseWidgetInterface.GamePadBaseWidgetInterface_C.StartInto
struct UGamePadBaseWidgetInterface_C_StartInto_Params
{
	bool                                               Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
