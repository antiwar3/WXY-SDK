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

// Function SelfItemTIleWidget.SelfItemTIleWidget_C.SetName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void USelfItemTIleWidget_C::SetName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelfItemTIleWidget.SelfItemTIleWidget_C.SetName");

	USelfItemTIleWidget_C_SetName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelfItemTIleWidget.SelfItemTIleWidget_C.ExecuteUbergraph_SelfItemTIleWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USelfItemTIleWidget_C::ExecuteUbergraph_SelfItemTIleWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelfItemTIleWidget.SelfItemTIleWidget_C.ExecuteUbergraph_SelfItemTIleWidget");

	USelfItemTIleWidget_C_ExecuteUbergraph_SelfItemTIleWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
