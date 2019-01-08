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

// Function SelectColorWidget.SelectColorWidget_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USettingColorSelectWidget_C* Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USelectColorWidget_C::Init(int index, const struct FColor& Color, class USettingColorSelectWidget_C* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectColorWidget.SelectColorWidget_C.Init");

	USelectColorWidget_C_Init_Params params;
	params.index = index;
	params.Color = Color;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelectColorWidget.SelectColorWidget_C.ExecuteUbergraph_SelectColorWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USelectColorWidget_C::ExecuteUbergraph_SelectColorWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectColorWidget.SelectColorWidget_C.ExecuteUbergraph_SelectColorWidget");

	USelectColorWidget_C_ExecuteUbergraph_SelectColorWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
