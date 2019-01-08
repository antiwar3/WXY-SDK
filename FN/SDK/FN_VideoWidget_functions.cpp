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

// Function VideoWidget.VideoWidget_C.BndEvt__SelectServerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UVideoWidget_C::BndEvt__SelectServerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoWidget.VideoWidget_C.BndEvt__SelectServerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UVideoWidget_C_BndEvt__SelectServerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoWidget.VideoWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVideoWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoWidget.VideoWidget_C.Construct");

	UVideoWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoWidget.VideoWidget_C.StartInto
// (BlueprintCallable, BlueprintEvent)

void UVideoWidget_C::StartInto()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoWidget.VideoWidget_C.StartInto");

	UVideoWidget_C_StartInto_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoWidget.VideoWidget_C.VideoSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   VideoName                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*              VideoTexture                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMediaSource*            Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVideoWidget_C::VideoSelect(const struct FText& VideoName, class UTexture2D* VideoTexture, class UMediaSource* Source, int Type, class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoWidget.VideoWidget_C.VideoSelect");

	UVideoWidget_C_VideoSelect_Params params;
	params.VideoName = VideoName;
	params.VideoTexture = VideoTexture;
	params.Source = Source;
	params.Type = Type;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoWidget.VideoWidget_C.ExecuteUbergraph_VideoWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVideoWidget_C::ExecuteUbergraph_VideoWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoWidget.VideoWidget_C.ExecuteUbergraph_VideoWidget");

	UVideoWidget_C_ExecuteUbergraph_VideoWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoWidget.VideoWidget_C.PlayBGSound__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UVideoWidget_C::PlayBGSound__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoWidget.VideoWidget_C.PlayBGSound__DelegateSignature");

	UVideoWidget_C_PlayBGSound__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
