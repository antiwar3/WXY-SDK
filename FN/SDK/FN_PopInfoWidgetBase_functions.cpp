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

// Function PopInfoWidgetBase.PopInfoWidgetBase_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPopInfoWidgetBase_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopInfoWidgetBase.PopInfoWidgetBase_C.Tick");

	UPopInfoWidgetBase_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopInfoWidgetBase.PopInfoWidgetBase_C.ExecuteUbergraph_PopInfoWidgetBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPopInfoWidgetBase_C::ExecuteUbergraph_PopInfoWidgetBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopInfoWidgetBase.PopInfoWidgetBase_C.ExecuteUbergraph_PopInfoWidgetBase");

	UPopInfoWidgetBase_C_ExecuteUbergraph_PopInfoWidgetBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopInfoWidgetBase.PopInfoWidgetBase_C.PopTimeOut__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPopInfoWidgetBase_C*    SelfWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPopInfoWidgetBase_C::PopTimeOut__DelegateSignature(class UPopInfoWidgetBase_C* SelfWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopInfoWidgetBase.PopInfoWidgetBase_C.PopTimeOut__DelegateSignature");

	UPopInfoWidgetBase_C_PopTimeOut__DelegateSignature_Params params;
	params.SelfWidget = SelfWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
