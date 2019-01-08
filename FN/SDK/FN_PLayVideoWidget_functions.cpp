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

// Function PLayVideoWidget.PlayVideoWidget_C.ResetSound
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayVideoWidget_C::ResetSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLayVideoWidget.PlayVideoWidget_C.ResetSound");

	UPlayVideoWidget_C_ResetSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLayVideoWidget.PlayVideoWidget_C.SetPlayButtonState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayVideoWidget_C::SetPlayButtonState(int State)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLayVideoWidget.PlayVideoWidget_C.SetPlayButtonState");

	UPlayVideoWidget_C_SetPlayButtonState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLayVideoWidget.PlayVideoWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayVideoWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLayVideoWidget.PlayVideoWidget_C.Construct");

	UPlayVideoWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLayVideoWidget.PlayVideoWidget_C.SetPlayerSource
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              VideoText                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMediaSource*            NewSource                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayVideoWidget_C::SetPlayerSource(class UTexture2D* VideoText, class UMediaSource* NewSource, class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLayVideoWidget.PlayVideoWidget_C.SetPlayerSource");

	UPlayVideoWidget_C_SetPlayerSource_Params params;
	params.VideoText = VideoText;
	params.NewSource = NewSource;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLayVideoWidget.PlayVideoWidget_C.CloseSource
// (BlueprintCallable, BlueprintEvent)

void UPlayVideoWidget_C::CloseSource()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLayVideoWidget.PlayVideoWidget_C.CloseSource");

	UPlayVideoWidget_C_CloseSource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLayVideoWidget.PlayVideoWidget_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPlayVideoWidget_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLayVideoWidget.PlayVideoWidget_C.OnMouseEnter");

	UPlayVideoWidget_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLayVideoWidget.PlayVideoWidget_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPlayVideoWidget_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLayVideoWidget.PlayVideoWidget_C.OnMouseLeave");

	UPlayVideoWidget_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLayVideoWidget.PlayVideoWidget_C.BndEvt__MediaPlay_K2Node_ComponentBoundEvent_2_OnMediaPlayerMediaEvent__DelegateSignature
// (BlueprintEvent)

void UPlayVideoWidget_C::BndEvt__MediaPlay_K2Node_ComponentBoundEvent_2_OnMediaPlayerMediaEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLayVideoWidget.PlayVideoWidget_C.BndEvt__MediaPlay_K2Node_ComponentBoundEvent_2_OnMediaPlayerMediaEvent__DelegateSignature");

	UPlayVideoWidget_C_BndEvt__MediaPlay_K2Node_ComponentBoundEvent_2_OnMediaPlayerMediaEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLayVideoWidget.PlayVideoWidget_C.BndEvt__Pause_K2Node_ComponentBoundEvent_222_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayVideoWidget_C::BndEvt__Pause_K2Node_ComponentBoundEvent_222_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLayVideoWidget.PlayVideoWidget_C.BndEvt__Pause_K2Node_ComponentBoundEvent_222_OnButtonClickedEvent__DelegateSignature");

	UPlayVideoWidget_C_BndEvt__Pause_K2Node_ComponentBoundEvent_222_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLayVideoWidget.PlayVideoWidget_C.BndEvt__Rewind_K2Node_ComponentBoundEvent_240_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayVideoWidget_C::BndEvt__Rewind_K2Node_ComponentBoundEvent_240_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLayVideoWidget.PlayVideoWidget_C.BndEvt__Rewind_K2Node_ComponentBoundEvent_240_OnButtonClickedEvent__DelegateSignature");

	UPlayVideoWidget_C_BndEvt__Rewind_K2Node_ComponentBoundEvent_240_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLayVideoWidget.PlayVideoWidget_C.BndEvt__Play_K2Node_ComponentBoundEvent_259_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayVideoWidget_C::BndEvt__Play_K2Node_ComponentBoundEvent_259_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLayVideoWidget.PlayVideoWidget_C.BndEvt__Play_K2Node_ComponentBoundEvent_259_OnButtonClickedEvent__DelegateSignature");

	UPlayVideoWidget_C_BndEvt__Play_K2Node_ComponentBoundEvent_259_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLayVideoWidget.PlayVideoWidget_C.BndEvt__Sound_K2Node_ComponentBoundEvent_1_OnAudioFinished__DelegateSignature
// (BlueprintEvent)

void UPlayVideoWidget_C::BndEvt__Sound_K2Node_ComponentBoundEvent_1_OnAudioFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLayVideoWidget.PlayVideoWidget_C.BndEvt__Sound_K2Node_ComponentBoundEvent_1_OnAudioFinished__DelegateSignature");

	UPlayVideoWidget_C_BndEvt__Sound_K2Node_ComponentBoundEvent_1_OnAudioFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLayVideoWidget.PlayVideoWidget_C.ExecuteUbergraph_PlayVideoWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayVideoWidget_C::ExecuteUbergraph_PlayVideoWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLayVideoWidget.PlayVideoWidget_C.ExecuteUbergraph_PlayVideoWidget");

	UPlayVideoWidget_C_ExecuteUbergraph_PlayVideoWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
