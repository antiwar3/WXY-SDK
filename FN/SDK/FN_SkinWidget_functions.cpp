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

// Function SkinWidget.SkinWidget_C.SetSkinButtonIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EButtonState>      State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkinWidget_C::SetSkinButtonIcon(TEnumAsByte<EButtonState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinWidget.SkinWidget_C.SetSkinButtonIcon");

	USkinWidget_C_SetSkinButtonIcon_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinWidget.SkinWidget_C.CheckIsPreciew
// (Public, BlueprintCallable, BlueprintEvent)

void USkinWidget_C::CheckIsPreciew()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinWidget.SkinWidget_C.CheckIsPreciew");

	USkinWidget_C_CheckIsPreciew_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinWidget.SkinWidget_C.SetDefaultIcon
// (Public, BlueprintCallable, BlueprintEvent)

void USkinWidget_C::SetDefaultIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinWidget.SkinWidget_C.SetDefaultIcon");

	USkinWidget_C_SetDefaultIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinWidget.SkinWidget_C.SendRemind
// (Public, BlueprintCallable, BlueprintEvent)

void USkinWidget_C::SendRemind()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinWidget.SkinWidget_C.SendRemind");

	USkinWidget_C_SendRemind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinWidget.SkinWidget_C.SetPreviewState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkinWidget_C::SetPreviewState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinWidget.SkinWidget_C.SetPreviewState");

	USkinWidget_C_SetPreviewState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinWidget.SkinWidget_C.SetSelectSkin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SkinId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture2D                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkinWidget_C::SetSelectSkin(int SkinId, class UTexture2D* Texture2D)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinWidget.SkinWidget_C.SetSelectSkin");

	USkinWidget_C_SetSelectSkin_Params params;
	params.SkinId = SkinId;
	params.Texture2D = Texture2D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinWidget.SkinWidget_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USkinWidget_C::BndEvt__SkinButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinWidget.SkinWidget_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	USkinWidget_C_BndEvt__SkinButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinWidget.SkinWidget_C.BndEvt__PreviewButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USkinWidget_C::BndEvt__PreviewButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinWidget.SkinWidget_C.BndEvt__PreviewButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	USkinWidget_C_BndEvt__PreviewButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinWidget.SkinWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkinWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinWidget.SkinWidget_C.Construct");

	USkinWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinWidget.SkinWidget_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USkinWidget_C::BndEvt__SkinButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinWidget.SkinWidget_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	USkinWidget_C_BndEvt__SkinButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinWidget.SkinWidget_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USkinWidget_C::BndEvt__SkinButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinWidget.SkinWidget_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	USkinWidget_C_BndEvt__SkinButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinWidget.SkinWidget_C.BndEvt__PreviewButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USkinWidget_C::BndEvt__PreviewButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinWidget.SkinWidget_C.BndEvt__PreviewButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	USkinWidget_C_BndEvt__PreviewButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinWidget.SkinWidget_C.BndEvt__PreviewButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USkinWidget_C::BndEvt__PreviewButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinWidget.SkinWidget_C.BndEvt__PreviewButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	USkinWidget_C_BndEvt__PreviewButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinWidget.SkinWidget_C.GetNewSkin
// (BlueprintCallable, BlueprintEvent)

void USkinWidget_C::GetNewSkin()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinWidget.SkinWidget_C.GetNewSkin");

	USkinWidget_C_GetNewSkin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinWidget.SkinWidget_C.ExecuteUbergraph_SkinWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkinWidget_C::ExecuteUbergraph_SkinWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinWidget.SkinWidget_C.ExecuteUbergraph_SkinWidget");

	USkinWidget_C_ExecuteUbergraph_SkinWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinWidget.SkinWidget_C.ShowSkinTypeDetail__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkinWidget_C::ShowSkinTypeDetail__DelegateSignature(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinWidget.SkinWidget_C.ShowSkinTypeDetail__DelegateSignature");

	USkinWidget_C_ShowSkinTypeDetail__DelegateSignature_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinWidget.SkinWidget_C.RemindText__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void USkinWidget_C::RemindText__DelegateSignature(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinWidget.SkinWidget_C.RemindText__DelegateSignature");

	USkinWidget_C_RemindText__DelegateSignature_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinWidget.SkinWidget_C.OnPreview__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsPreview                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkinWidget_C::OnPreview__DelegateSignature(int Type, bool IsPreview)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinWidget.SkinWidget_C.OnPreview__DelegateSignature");

	USkinWidget_C_OnPreview__DelegateSignature_Params params;
	params.Type = Type;
	params.IsPreview = IsPreview;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinWidget.SkinWidget_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USkinWidget_C::OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinWidget.SkinWidget_C.OnClick__DelegateSignature");

	USkinWidget_C_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
