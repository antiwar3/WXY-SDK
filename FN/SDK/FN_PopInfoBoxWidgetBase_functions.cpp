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

// Function PopInfoBoxWidgetBase.PopInfoBoxWidgetBase_C.PushWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPopInfoWidgetBase_C*    Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPopInfoBoxWidgetBase_C::PushWidget(class UPopInfoWidgetBase_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopInfoBoxWidgetBase.PopInfoBoxWidgetBase_C.PushWidget");

	UPopInfoBoxWidgetBase_C_PushWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopInfoBoxWidgetBase.PopInfoBoxWidgetBase_C.GetEmptyPop
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPopInfoWidgetBase_C*    POP                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPopInfoBoxWidgetBase_C::GetEmptyPop(class UPopInfoWidgetBase_C** POP)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopInfoBoxWidgetBase.PopInfoBoxWidgetBase_C.GetEmptyPop");

	UPopInfoBoxWidgetBase_C_GetEmptyPop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (POP != nullptr)
		*POP = params.POP;
}


// Function PopInfoBoxWidgetBase.PopInfoBoxWidgetBase_C.PopTimeOutPushBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPopInfoWidgetBase_C*    Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPopInfoBoxWidgetBase_C::PopTimeOutPushBack(class UPopInfoWidgetBase_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopInfoBoxWidgetBase.PopInfoBoxWidgetBase_C.PopTimeOutPushBack");

	UPopInfoBoxWidgetBase_C_PopTimeOutPushBack_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopInfoBoxWidgetBase.PopInfoBoxWidgetBase_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPopInfoBoxWidgetBase_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopInfoBoxWidgetBase.PopInfoBoxWidgetBase_C.Tick");

	UPopInfoBoxWidgetBase_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopInfoBoxWidgetBase.PopInfoBoxWidgetBase_C.ExecuteUbergraph_PopInfoBoxWidgetBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPopInfoBoxWidgetBase_C::ExecuteUbergraph_PopInfoBoxWidgetBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopInfoBoxWidgetBase.PopInfoBoxWidgetBase_C.ExecuteUbergraph_PopInfoBoxWidgetBase");

	UPopInfoBoxWidgetBase_C_ExecuteUbergraph_PopInfoBoxWidgetBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
