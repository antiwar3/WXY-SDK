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

// Function VideoSourceWidget.VideoSourceWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVideoSourceWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSourceWidget.VideoSourceWidget_C.PreConstruct");

	UVideoSourceWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSourceWidget.VideoSourceWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UVideoSourceWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSourceWidget.VideoSourceWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UVideoSourceWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSourceWidget.VideoSourceWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UVideoSourceWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSourceWidget.VideoSourceWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature");

	UVideoSourceWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSourceWidget.VideoSourceWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UVideoSourceWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSourceWidget.VideoSourceWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UVideoSourceWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSourceWidget.VideoSourceWidget_C.SetSelectState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVideoSourceWidget_C::SetSelectState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSourceWidget.VideoSourceWidget_C.SetSelectState");

	UVideoSourceWidget_C_SetSelectState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSourceWidget.VideoSourceWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UVideoSourceWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSourceWidget.VideoSourceWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature");

	UVideoSourceWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSourceWidget.VideoSourceWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UVideoSourceWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSourceWidget.VideoSourceWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature");

	UVideoSourceWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSourceWidget.VideoSourceWidget_C.ExecuteUbergraph_VideoSourceWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVideoSourceWidget_C::ExecuteUbergraph_VideoSourceWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSourceWidget.VideoSourceWidget_C.ExecuteUbergraph_VideoSourceWidget");

	UVideoSourceWidget_C_ExecuteUbergraph_VideoSourceWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSourceWidget.VideoSourceWidget_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   VideoName                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*              VideoTexture                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMediaSource*            Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVideoSourceWidget_C::OnClick__DelegateSignature(const struct FText& VideoName, class UTexture2D* VideoTexture, class UMediaSource* Source, int Type, class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSourceWidget.VideoSourceWidget_C.OnClick__DelegateSignature");

	UVideoSourceWidget_C_OnClick__DelegateSignature_Params params;
	params.VideoName = VideoName;
	params.VideoTexture = VideoTexture;
	params.Source = Source;
	params.Type = Type;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
