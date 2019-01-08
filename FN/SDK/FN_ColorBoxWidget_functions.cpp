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

// Function ColorBoxWidget.ColorBoxWidget_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UColorBoxWidget_C::OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ColorBoxWidget.ColorBoxWidget_C.OnMouseWheel");

	UColorBoxWidget_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ColorBoxWidget.ColorBoxWidget_C.CreateColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UColorBoxWidget_C::CreateColor(int ID, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ColorBoxWidget.ColorBoxWidget_C.CreateColor");

	UColorBoxWidget_C_CreateColor_Params params;
	params.ID = ID;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ColorBoxWidget.ColorBoxWidget_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UColorBoxWidget_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ColorBoxWidget.ColorBoxWidget_C.OnMouseEnter");

	UColorBoxWidget_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ColorBoxWidget.ColorBoxWidget_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UColorBoxWidget_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ColorBoxWidget.ColorBoxWidget_C.OnMouseLeave");

	UColorBoxWidget_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ColorBoxWidget.ColorBoxWidget_C.BndEvt__PageLeftButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UColorBoxWidget_C::BndEvt__PageLeftButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ColorBoxWidget.ColorBoxWidget_C.BndEvt__PageLeftButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature");

	UColorBoxWidget_C_BndEvt__PageLeftButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ColorBoxWidget.ColorBoxWidget_C.BndEvt__PageRightButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UColorBoxWidget_C::BndEvt__PageRightButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ColorBoxWidget.ColorBoxWidget_C.BndEvt__PageRightButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");

	UColorBoxWidget_C_BndEvt__PageRightButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ColorBoxWidget.ColorBoxWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UColorBoxWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ColorBoxWidget.ColorBoxWidget_C.Tick");

	UColorBoxWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ColorBoxWidget.ColorBoxWidget_C.ResetColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UColorBoxWidget_C::ResetColor(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ColorBoxWidget.ColorBoxWidget_C.ResetColor");

	UColorBoxWidget_C_ResetColor_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ColorBoxWidget.ColorBoxWidget_C.ResetColorIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UColorBoxWidget_C::ResetColorIndex(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ColorBoxWidget.ColorBoxWidget_C.ResetColorIndex");

	UColorBoxWidget_C_ResetColorIndex_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ColorBoxWidget.ColorBoxWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UColorBoxWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ColorBoxWidget.ColorBoxWidget_C.Construct");

	UColorBoxWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ColorBoxWidget.ColorBoxWidget_C.ExecuteUbergraph_ColorBoxWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UColorBoxWidget_C::ExecuteUbergraph_ColorBoxWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ColorBoxWidget.ColorBoxWidget_C.ExecuteUbergraph_ColorBoxWidget");

	UColorBoxWidget_C_ExecuteUbergraph_ColorBoxWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ColorBoxWidget.ColorBoxWidget_C.HairColorIndex__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UColorBoxWidget_C::HairColorIndex__DelegateSignature(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ColorBoxWidget.ColorBoxWidget_C.HairColorIndex__DelegateSignature");

	UColorBoxWidget_C_HairColorIndex__DelegateSignature_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ColorBoxWidget.ColorBoxWidget_C.SkinColorIndex__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UColorBoxWidget_C::SkinColorIndex__DelegateSignature(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ColorBoxWidget.ColorBoxWidget_C.SkinColorIndex__DelegateSignature");

	UColorBoxWidget_C_SkinColorIndex__DelegateSignature_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ColorBoxWidget.ColorBoxWidget_C.SetColorId__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EModelType                     Model                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UColorBoxWidget_C::SetColorId__DelegateSignature(EModelType Model, int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ColorBoxWidget.ColorBoxWidget_C.SetColorId__DelegateSignature");

	UColorBoxWidget_C_SetColorId__DelegateSignature_Params params;
	params.Model = Model;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
