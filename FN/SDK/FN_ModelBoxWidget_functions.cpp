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

// Function ModelBoxWidget.ModelBoxWidget_C.SetRightIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EButtonState>      State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UModelBoxWidget_C::SetRightIcon(TEnumAsByte<EButtonState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelBoxWidget.ModelBoxWidget_C.SetRightIcon");

	UModelBoxWidget_C_SetRightIcon_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModelBoxWidget.ModelBoxWidget_C.SetLeftIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EButtonState>      State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UModelBoxWidget_C::SetLeftIcon(TEnumAsByte<EButtonState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelBoxWidget.ModelBoxWidget_C.SetLeftIcon");

	UModelBoxWidget_C_SetLeftIcon_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModelBoxWidget.ModelBoxWidget_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UModelBoxWidget_C::OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelBoxWidget.ModelBoxWidget_C.OnMouseWheel");

	UModelBoxWidget_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ModelBoxWidget.ModelBoxWidget_C.CreateModel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UModelBoxWidget_C::CreateModel(int ID, class UTexture2D* Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelBoxWidget.ModelBoxWidget_C.CreateModel");

	UModelBoxWidget_C_CreateModel_Params params;
	params.ID = ID;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModelBoxWidget.ModelBoxWidget_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UModelBoxWidget_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelBoxWidget.ModelBoxWidget_C.OnMouseEnter");

	UModelBoxWidget_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModelBoxWidget.ModelBoxWidget_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UModelBoxWidget_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelBoxWidget.ModelBoxWidget_C.OnMouseLeave");

	UModelBoxWidget_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModelBoxWidget.ModelBoxWidget_C.BndEvt__PageLeftButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UModelBoxWidget_C::BndEvt__PageLeftButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelBoxWidget.ModelBoxWidget_C.BndEvt__PageLeftButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");

	UModelBoxWidget_C_BndEvt__PageLeftButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModelBoxWidget.ModelBoxWidget_C.BndEvt__PageRightButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UModelBoxWidget_C::BndEvt__PageRightButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelBoxWidget.ModelBoxWidget_C.BndEvt__PageRightButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");

	UModelBoxWidget_C_BndEvt__PageRightButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModelBoxWidget.ModelBoxWidget_C.ResetModel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UModelBoxWidget_C::ResetModel(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelBoxWidget.ModelBoxWidget_C.ResetModel");

	UModelBoxWidget_C_ResetModel_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModelBoxWidget.ModelBoxWidget_C.ResetModelIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UModelBoxWidget_C::ResetModelIndex(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelBoxWidget.ModelBoxWidget_C.ResetModelIndex");

	UModelBoxWidget_C_ResetModelIndex_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModelBoxWidget.ModelBoxWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UModelBoxWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelBoxWidget.ModelBoxWidget_C.Tick");

	UModelBoxWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModelBoxWidget.ModelBoxWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UModelBoxWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelBoxWidget.ModelBoxWidget_C.Construct");

	UModelBoxWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModelBoxWidget.ModelBoxWidget_C.BndEvt__Left_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UModelBoxWidget_C::BndEvt__Left_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelBoxWidget.ModelBoxWidget_C.BndEvt__Left_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature");

	UModelBoxWidget_C_BndEvt__Left_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModelBoxWidget.ModelBoxWidget_C.BndEvt__Left_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UModelBoxWidget_C::BndEvt__Left_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelBoxWidget.ModelBoxWidget_C.BndEvt__Left_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature");

	UModelBoxWidget_C_BndEvt__Left_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModelBoxWidget.ModelBoxWidget_C.BndEvt__Left_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UModelBoxWidget_C::BndEvt__Left_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelBoxWidget.ModelBoxWidget_C.BndEvt__Left_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UModelBoxWidget_C_BndEvt__Left_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModelBoxWidget.ModelBoxWidget_C.BndEvt__Left_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UModelBoxWidget_C::BndEvt__Left_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelBoxWidget.ModelBoxWidget_C.BndEvt__Left_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");

	UModelBoxWidget_C_BndEvt__Left_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModelBoxWidget.ModelBoxWidget_C.BndEvt__Right_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UModelBoxWidget_C::BndEvt__Right_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelBoxWidget.ModelBoxWidget_C.BndEvt__Right_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature");

	UModelBoxWidget_C_BndEvt__Right_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModelBoxWidget.ModelBoxWidget_C.BndEvt__Right_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UModelBoxWidget_C::BndEvt__Right_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelBoxWidget.ModelBoxWidget_C.BndEvt__Right_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature");

	UModelBoxWidget_C_BndEvt__Right_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModelBoxWidget.ModelBoxWidget_C.BndEvt__Right_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UModelBoxWidget_C::BndEvt__Right_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelBoxWidget.ModelBoxWidget_C.BndEvt__Right_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature");

	UModelBoxWidget_C_BndEvt__Right_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModelBoxWidget.ModelBoxWidget_C.BndEvt__Right_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UModelBoxWidget_C::BndEvt__Right_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelBoxWidget.ModelBoxWidget_C.BndEvt__Right_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");

	UModelBoxWidget_C_BndEvt__Right_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModelBoxWidget.ModelBoxWidget_C.ExecuteUbergraph_ModelBoxWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UModelBoxWidget_C::ExecuteUbergraph_ModelBoxWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelBoxWidget.ModelBoxWidget_C.ExecuteUbergraph_ModelBoxWidget");

	UModelBoxWidget_C_ExecuteUbergraph_ModelBoxWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModelBoxWidget.ModelBoxWidget_C.HairIndex__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UModelBoxWidget_C::HairIndex__DelegateSignature(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelBoxWidget.ModelBoxWidget_C.HairIndex__DelegateSignature");

	UModelBoxWidget_C_HairIndex__DelegateSignature_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModelBoxWidget.ModelBoxWidget_C.FaceIndex__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UModelBoxWidget_C::FaceIndex__DelegateSignature(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelBoxWidget.ModelBoxWidget_C.FaceIndex__DelegateSignature");

	UModelBoxWidget_C_FaceIndex__DelegateSignature_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModelBoxWidget.ModelBoxWidget_C.SetModelId__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESexType                       sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EModelType                     Model                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UModelBoxWidget_C::SetModelId__DelegateSignature(ESexType sex, EModelType Model, int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModelBoxWidget.ModelBoxWidget_C.SetModelId__DelegateSignature");

	UModelBoxWidget_C_SetModelId__DelegateSignature_Params params;
	params.sex = sex;
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
