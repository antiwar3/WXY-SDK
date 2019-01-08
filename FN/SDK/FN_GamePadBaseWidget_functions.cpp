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

// Function GamePadBaseWidget.GamePadBaseWidget_C.StartInto
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamePadBaseWidget_C::StartInto(bool Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadBaseWidget.GamePadBaseWidget_C.StartInto");

	UGamePadBaseWidget_C_StartInto_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadBaseWidget.GamePadBaseWidget_C.LabelAppend
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Append                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamePadBaseWidget_C::LabelAppend(int Append)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadBaseWidget.GamePadBaseWidget_C.LabelAppend");

	UGamePadBaseWidget_C_LabelAppend_Params params;
	params.Append = Append;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadBaseWidget.GamePadBaseWidget_C.Verticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsDown                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamePadBaseWidget_C::Verticle(bool State, bool IsDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadBaseWidget.GamePadBaseWidget_C.Verticle");

	UGamePadBaseWidget_C_Verticle_Params params;
	params.State = State;
	params.IsDown = IsDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadBaseWidget.GamePadBaseWidget_C.Horizontal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsRight                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamePadBaseWidget_C::Horizontal(bool State, bool IsRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadBaseWidget.GamePadBaseWidget_C.Horizontal");

	UGamePadBaseWidget_C_Horizontal_Params params;
	params.State = State;
	params.IsRight = IsRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadBaseWidget.GamePadBaseWidget_C.ResetHover
// (Public, BlueprintCallable, BlueprintEvent)

void UGamePadBaseWidget_C::ResetHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadBaseWidget.GamePadBaseWidget_C.ResetHover");

	UGamePadBaseWidget_C_ResetHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadBaseWidget.GamePadBaseWidget_C.Press
// (Public, BlueprintCallable, BlueprintEvent)

void UGamePadBaseWidget_C::Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadBaseWidget.GamePadBaseWidget_C.Press");

	UGamePadBaseWidget_C_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadBaseWidget.GamePadBaseWidget_C.Release
// (Public, BlueprintCallable, BlueprintEvent)

void UGamePadBaseWidget_C::Release()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadBaseWidget.GamePadBaseWidget_C.Release");

	UGamePadBaseWidget_C_Release_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadBaseWidget.GamePadBaseWidget_C.SetChildWidgetHoverNone
// (Public, BlueprintCallable, BlueprintEvent)

void UGamePadBaseWidget_C::SetChildWidgetHoverNone()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadBaseWidget.GamePadBaseWidget_C.SetChildWidgetHoverNone");

	UGamePadBaseWidget_C_SetChildWidgetHoverNone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadBaseWidget.GamePadBaseWidget_C.ExecuteUbergraph_GamePadBaseWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamePadBaseWidget_C::ExecuteUbergraph_GamePadBaseWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadBaseWidget.GamePadBaseWidget_C.ExecuteUbergraph_GamePadBaseWidget");

	UGamePadBaseWidget_C_ExecuteUbergraph_GamePadBaseWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadBaseWidget.GamePadBaseWidget_C.MouseExit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGamePadBaseWidget_C::MouseExit__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadBaseWidget.GamePadBaseWidget_C.MouseExit__DelegateSignature");

	UGamePadBaseWidget_C_MouseExit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadBaseWidget.GamePadBaseWidget_C.MouseEnter__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGamePadBaseWidget_C::MouseEnter__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadBaseWidget.GamePadBaseWidget_C.MouseEnter__DelegateSignature");

	UGamePadBaseWidget_C_MouseEnter__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadBaseWidget.GamePadBaseWidget_C.QuitOut__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamePadBaseWidget_C::QuitOut__DelegateSignature(bool Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadBaseWidget.GamePadBaseWidget_C.QuitOut__DelegateSignature");

	UGamePadBaseWidget_C_QuitOut__DelegateSignature_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
