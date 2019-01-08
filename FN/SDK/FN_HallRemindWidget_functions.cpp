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

// Function HallRemindWidget.HallRemindWidget_C.SetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   RemindText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UHallRemindWidget_C::SetText(const struct FText& RemindText)
{
	static auto fn = UObject::FindObject<UFunction>("Function HallRemindWidget.HallRemindWidget_C.SetText");

	UHallRemindWidget_C_SetText_Params params;
	params.RemindText = RemindText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HallRemindWidget.HallRemindWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHallRemindWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HallRemindWidget.HallRemindWidget_C.Tick");

	UHallRemindWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HallRemindWidget.HallRemindWidget_C.ExecuteUbergraph_HallRemindWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHallRemindWidget_C::ExecuteUbergraph_HallRemindWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HallRemindWidget.HallRemindWidget_C.ExecuteUbergraph_HallRemindWidget");

	UHallRemindWidget_C_ExecuteUbergraph_HallRemindWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
