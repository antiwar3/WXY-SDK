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

// Function HallGongGaoChildWidget.HallGongGaoChildWidget_C.SetInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Info                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UHallGongGaoChildWidget_C::SetInfo(const struct FText& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function HallGongGaoChildWidget.HallGongGaoChildWidget_C.SetInfo");

	UHallGongGaoChildWidget_C_SetInfo_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HallGongGaoChildWidget.HallGongGaoChildWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHallGongGaoChildWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HallGongGaoChildWidget.HallGongGaoChildWidget_C.Tick");

	UHallGongGaoChildWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HallGongGaoChildWidget.HallGongGaoChildWidget_C.ExecuteUbergraph_HallGongGaoChildWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHallGongGaoChildWidget_C::ExecuteUbergraph_HallGongGaoChildWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HallGongGaoChildWidget.HallGongGaoChildWidget_C.ExecuteUbergraph_HallGongGaoChildWidget");

	UHallGongGaoChildWidget_C_ExecuteUbergraph_HallGongGaoChildWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
