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

// Function ServerSelectLimitChildWidget.ServerSelectLimitChildWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerSelectLimitChildWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerSelectLimitChildWidget.ServerSelectLimitChildWidget_C.PreConstruct");

	UServerSelectLimitChildWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerSelectLimitChildWidget.ServerSelectLimitChildWidget_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerSelectLimitChildWidget_C::Init(int Type, int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerSelectLimitChildWidget.ServerSelectLimitChildWidget_C.Init");

	UServerSelectLimitChildWidget_C_Init_Params params;
	params.Type = Type;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerSelectLimitChildWidget.ServerSelectLimitChildWidget_C.ResetName
// (BlueprintCallable, BlueprintEvent)

void UServerSelectLimitChildWidget_C::ResetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerSelectLimitChildWidget.ServerSelectLimitChildWidget_C.ResetName");

	UServerSelectLimitChildWidget_C_ResetName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerSelectLimitChildWidget.ServerSelectLimitChildWidget_C.ExecuteUbergraph_ServerSelectLimitChildWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerSelectLimitChildWidget_C::ExecuteUbergraph_ServerSelectLimitChildWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerSelectLimitChildWidget.ServerSelectLimitChildWidget_C.ExecuteUbergraph_ServerSelectLimitChildWidget");

	UServerSelectLimitChildWidget_C_ExecuteUbergraph_ServerSelectLimitChildWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
