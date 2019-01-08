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

// Function RandomBoxHorizontalBoxWidget.RandomBoxHorizontalBoxWidget_C.CreateNewRandomBox
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class URandomBoxWidget_C*      RetBox                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URandomBoxHorizontalBoxWidget_C::CreateNewRandomBox(int itemID, int index, class UTexture2D* icon, class URandomBoxWidget_C** RetBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function RandomBoxHorizontalBoxWidget.RandomBoxHorizontalBoxWidget_C.CreateNewRandomBox");

	URandomBoxHorizontalBoxWidget_C_CreateNewRandomBox_Params params;
	params.itemID = itemID;
	params.index = index;
	params.icon = icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetBox != nullptr)
		*RetBox = params.RetBox;
}


// Function RandomBoxHorizontalBoxWidget.RandomBoxHorizontalBoxWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URandomBoxHorizontalBoxWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function RandomBoxHorizontalBoxWidget.RandomBoxHorizontalBoxWidget_C.Tick");

	URandomBoxHorizontalBoxWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RandomBoxHorizontalBoxWidget.RandomBoxHorizontalBoxWidget_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_StoreWidget_C*       Store                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URandomBoxHorizontalBoxWidget_C::Init(class UBP_StoreWidget_C* Store)
{
	static auto fn = UObject::FindObject<UFunction>("Function RandomBoxHorizontalBoxWidget.RandomBoxHorizontalBoxWidget_C.Init");

	URandomBoxHorizontalBoxWidget_C_Init_Params params;
	params.Store = Store;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RandomBoxHorizontalBoxWidget.RandomBoxHorizontalBoxWidget_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void URandomBoxHorizontalBoxWidget_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function RandomBoxHorizontalBoxWidget.RandomBoxHorizontalBoxWidget_C.OnMouseEnter");

	URandomBoxHorizontalBoxWidget_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RandomBoxHorizontalBoxWidget.RandomBoxHorizontalBoxWidget_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void URandomBoxHorizontalBoxWidget_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function RandomBoxHorizontalBoxWidget.RandomBoxHorizontalBoxWidget_C.OnMouseLeave");

	URandomBoxHorizontalBoxWidget_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RandomBoxHorizontalBoxWidget.RandomBoxHorizontalBoxWidget_C.BndEvt__Left_K2Node_ComponentBoundEvent_175_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void URandomBoxHorizontalBoxWidget_C::BndEvt__Left_K2Node_ComponentBoundEvent_175_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function RandomBoxHorizontalBoxWidget.RandomBoxHorizontalBoxWidget_C.BndEvt__Left_K2Node_ComponentBoundEvent_175_OnButtonClickedEvent__DelegateSignature");

	URandomBoxHorizontalBoxWidget_C_BndEvt__Left_K2Node_ComponentBoundEvent_175_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RandomBoxHorizontalBoxWidget.RandomBoxHorizontalBoxWidget_C.BndEvt__Right_K2Node_ComponentBoundEvent_192_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void URandomBoxHorizontalBoxWidget_C::BndEvt__Right_K2Node_ComponentBoundEvent_192_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function RandomBoxHorizontalBoxWidget.RandomBoxHorizontalBoxWidget_C.BndEvt__Right_K2Node_ComponentBoundEvent_192_OnButtonClickedEvent__DelegateSignature");

	URandomBoxHorizontalBoxWidget_C_BndEvt__Right_K2Node_ComponentBoundEvent_192_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RandomBoxHorizontalBoxWidget.RandomBoxHorizontalBoxWidget_C.SelectBox
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URandomBoxHorizontalBoxWidget_C::SelectBox(int index, int itemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function RandomBoxHorizontalBoxWidget.RandomBoxHorizontalBoxWidget_C.SelectBox");

	URandomBoxHorizontalBoxWidget_C_SelectBox_Params params;
	params.index = index;
	params.itemID = itemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RandomBoxHorizontalBoxWidget.RandomBoxHorizontalBoxWidget_C.ClearBox
// (BlueprintCallable, BlueprintEvent)

void URandomBoxHorizontalBoxWidget_C::ClearBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function RandomBoxHorizontalBoxWidget.RandomBoxHorizontalBoxWidget_C.ClearBox");

	URandomBoxHorizontalBoxWidget_C_ClearBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RandomBoxHorizontalBoxWidget.RandomBoxHorizontalBoxWidget_C.ExecuteUbergraph_RandomBoxHorizontalBoxWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URandomBoxHorizontalBoxWidget_C::ExecuteUbergraph_RandomBoxHorizontalBoxWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RandomBoxHorizontalBoxWidget.RandomBoxHorizontalBoxWidget_C.ExecuteUbergraph_RandomBoxHorizontalBoxWidget");

	URandomBoxHorizontalBoxWidget_C_ExecuteUbergraph_RandomBoxHorizontalBoxWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
