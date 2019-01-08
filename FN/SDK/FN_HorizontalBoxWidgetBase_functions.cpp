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

// Function HorizontalBoxWidgetBase.HorizontalBoxWidgetBase_C.PageRight
// (BlueprintCallable, BlueprintEvent)

void UHorizontalBoxWidgetBase_C::PageRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizontalBoxWidgetBase.HorizontalBoxWidgetBase_C.PageRight");

	UHorizontalBoxWidgetBase_C_PageRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HorizontalBoxWidgetBase.HorizontalBoxWidgetBase_C.PageLeft
// (BlueprintCallable, BlueprintEvent)

void UHorizontalBoxWidgetBase_C::PageLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizontalBoxWidgetBase.HorizontalBoxWidgetBase_C.PageLeft");

	UHorizontalBoxWidgetBase_C_PageLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HorizontalBoxWidgetBase.HorizontalBoxWidgetBase_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHorizontalBoxWidgetBase_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizontalBoxWidgetBase.HorizontalBoxWidgetBase_C.Tick");

	UHorizontalBoxWidgetBase_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HorizontalBoxWidgetBase.HorizontalBoxWidgetBase_C.CallCreateNewWidget
// (BlueprintCallable, BlueprintEvent)

void UHorizontalBoxWidgetBase_C::CallCreateNewWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizontalBoxWidgetBase.HorizontalBoxWidgetBase_C.CallCreateNewWidget");

	UHorizontalBoxWidgetBase_C_CallCreateNewWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HorizontalBoxWidgetBase.HorizontalBoxWidgetBase_C.ExecuteUbergraph_HorizontalBoxWidgetBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHorizontalBoxWidgetBase_C::ExecuteUbergraph_HorizontalBoxWidgetBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizontalBoxWidgetBase.HorizontalBoxWidgetBase_C.ExecuteUbergraph_HorizontalBoxWidgetBase");

	UHorizontalBoxWidgetBase_C_ExecuteUbergraph_HorizontalBoxWidgetBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
