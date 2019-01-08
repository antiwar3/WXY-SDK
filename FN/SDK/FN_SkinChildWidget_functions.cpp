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

// Function SkinChildWidget.SkinChildWidget_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply USkinChildWidget_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinChildWidget.SkinChildWidget_C.OnMouseButtonDown");

	USkinChildWidget_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkinChildWidget.SkinChildWidget_C.Append
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkinChildWidget_C::Append(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinChildWidget.SkinChildWidget_C.Append");

	USkinChildWidget_C_Append_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinChildWidget.SkinChildWidget_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USkinChildWidget_C::BndEvt__SkinButton_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinChildWidget.SkinChildWidget_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature");

	USkinChildWidget_C_BndEvt__SkinButton_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinChildWidget.SkinChildWidget_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USkinChildWidget_C::BndEvt__SkinButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinChildWidget.SkinChildWidget_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	USkinChildWidget_C_BndEvt__SkinButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinChildWidget.SkinChildWidget_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USkinChildWidget_C::BndEvt__SkinButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinChildWidget.SkinChildWidget_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	USkinChildWidget_C_BndEvt__SkinButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinChildWidget.SkinChildWidget_C.SetEquipState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkinChildWidget_C::SetEquipState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinChildWidget.SkinChildWidget_C.SetEquipState");

	USkinChildWidget_C_SetEquipState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinChildWidget.SkinChildWidget_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESexType                       sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SkinId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkinChildWidget_C::Init(int Type, int Num, ESexType sex, int SkinId, class UTexture2D* icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinChildWidget.SkinChildWidget_C.Init");

	USkinChildWidget_C_Init_Params params;
	params.Type = Type;
	params.Num = Num;
	params.sex = sex;
	params.SkinId = SkinId;
	params.icon = icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinChildWidget.SkinChildWidget_C.ExecuteUbergraph_SkinChildWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkinChildWidget_C::ExecuteUbergraph_SkinChildWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinChildWidget.SkinChildWidget_C.ExecuteUbergraph_SkinChildWidget");

	USkinChildWidget_C_ExecuteUbergraph_SkinChildWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinChildWidget.SkinChildWidget_C.SellSkin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SkinId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentNum                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkinChildWidget_C::SellSkin__DelegateSignature(int SkinId, int CurrentNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinChildWidget.SkinChildWidget_C.SellSkin__DelegateSignature");

	USkinChildWidget_C_SellSkin__DelegateSignature_Params params;
	params.SkinId = SkinId;
	params.CurrentNum = CurrentNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinChildWidget.SkinChildWidget_C.SkinTypeSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SkinId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkinChildWidget_C::SkinTypeSelect__DelegateSignature(int Type, int SkinId, class UTexture2D* icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinChildWidget.SkinChildWidget_C.SkinTypeSelect__DelegateSignature");

	USkinChildWidget_C_SkinTypeSelect__DelegateSignature_Params params;
	params.Type = Type;
	params.SkinId = SkinId;
	params.icon = icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinChildWidget.SkinChildWidget_C.RemindText__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void USkinChildWidget_C::RemindText__DelegateSignature(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinChildWidget.SkinChildWidget_C.RemindText__DelegateSignature");

	USkinChildWidget_C_RemindText__DelegateSignature_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinChildWidget.SkinChildWidget_C.RemoveSkin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SkinId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkinChildWidget_C::RemoveSkin__DelegateSignature(int SkinId, int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinChildWidget.SkinChildWidget_C.RemoveSkin__DelegateSignature");

	USkinChildWidget_C_RemoveSkin__DelegateSignature_Params params;
	params.SkinId = SkinId;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinChildWidget.SkinChildWidget_C.ShowDetail__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SkinId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkinChildWidget_C::ShowDetail__DelegateSignature(int SkinId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinChildWidget.SkinChildWidget_C.ShowDetail__DelegateSignature");

	USkinChildWidget_C_ShowDetail__DelegateSignature_Params params;
	params.SkinId = SkinId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkinChildWidget.SkinChildWidget_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USkinChildWidget_C::OnClick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinChildWidget.SkinChildWidget_C.OnClick__DelegateSignature");

	USkinChildWidget_C_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
