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

// Function GamePadBaseWidgetInterface.GamePadBaseWidgetInterface_C.SetChildWidgetHoverNone
// (Public, BlueprintCallable, BlueprintEvent)

void UGamePadBaseWidgetInterface_C::SetChildWidgetHoverNone()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadBaseWidgetInterface.GamePadBaseWidgetInterface_C.SetChildWidgetHoverNone");

	UGamePadBaseWidgetInterface_C_SetChildWidgetHoverNone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadBaseWidgetInterface.GamePadBaseWidgetInterface_C.Release
// (Public, BlueprintCallable, BlueprintEvent)

void UGamePadBaseWidgetInterface_C::Release()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadBaseWidgetInterface.GamePadBaseWidgetInterface_C.Release");

	UGamePadBaseWidgetInterface_C_Release_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadBaseWidgetInterface.GamePadBaseWidgetInterface_C.Press
// (Public, BlueprintCallable, BlueprintEvent)

void UGamePadBaseWidgetInterface_C::Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadBaseWidgetInterface.GamePadBaseWidgetInterface_C.Press");

	UGamePadBaseWidgetInterface_C_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadBaseWidgetInterface.GamePadBaseWidgetInterface_C.ResetHover
// (Public, BlueprintCallable, BlueprintEvent)

void UGamePadBaseWidgetInterface_C::ResetHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadBaseWidgetInterface.GamePadBaseWidgetInterface_C.ResetHover");

	UGamePadBaseWidgetInterface_C_ResetHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadBaseWidgetInterface.GamePadBaseWidgetInterface_C.Horizontal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsRight                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamePadBaseWidgetInterface_C::Horizontal(bool State, bool IsRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadBaseWidgetInterface.GamePadBaseWidgetInterface_C.Horizontal");

	UGamePadBaseWidgetInterface_C_Horizontal_Params params;
	params.State = State;
	params.IsRight = IsRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadBaseWidgetInterface.GamePadBaseWidgetInterface_C.Verticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsDown                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamePadBaseWidgetInterface_C::Verticle(bool State, bool IsDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadBaseWidgetInterface.GamePadBaseWidgetInterface_C.Verticle");

	UGamePadBaseWidgetInterface_C_Verticle_Params params;
	params.State = State;
	params.IsDown = IsDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadBaseWidgetInterface.GamePadBaseWidgetInterface_C.LabelAppend
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Append                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamePadBaseWidgetInterface_C::LabelAppend(int Append)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadBaseWidgetInterface.GamePadBaseWidgetInterface_C.LabelAppend");

	UGamePadBaseWidgetInterface_C_LabelAppend_Params params;
	params.Append = Append;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadBaseWidgetInterface.GamePadBaseWidgetInterface_C.StartInto
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamePadBaseWidgetInterface_C::StartInto(bool Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadBaseWidgetInterface.GamePadBaseWidgetInterface_C.StartInto");

	UGamePadBaseWidgetInterface_C_StartInto_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
