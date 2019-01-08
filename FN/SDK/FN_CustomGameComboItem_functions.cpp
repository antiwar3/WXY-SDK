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

// Function CustomGameComboItem.CustomGameComboItem_C.CheckState
// (Public, BlueprintCallable, BlueprintEvent)

void UCustomGameComboItem_C::CheckState()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameComboItem.CustomGameComboItem_C.CheckState");

	UCustomGameComboItem_C_CheckState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameComboItem.CustomGameComboItem_C.SetIsMainItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Main                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomGameComboItem_C::SetIsMainItem(bool Main)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameComboItem.CustomGameComboItem_C.SetIsMainItem");

	UCustomGameComboItem_C_SetIsMainItem_Params params;
	params.Main = Main;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameComboItem.CustomGameComboItem_C.SetNameStr
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Str                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UCustomGameComboItem_C::SetNameStr(const struct FString& Str)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameComboItem.CustomGameComboItem_C.SetNameStr");

	UCustomGameComboItem_C_SetNameStr_Params params;
	params.Str = Str;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameComboItem.CustomGameComboItem_C.SetOptionStr
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Str                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UCustomGameComboItem_C::SetOptionStr(const struct FString& Str)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameComboItem.CustomGameComboItem_C.SetOptionStr");

	UCustomGameComboItem_C_SetOptionStr_Params params;
	params.Str = Str;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameComboItem.CustomGameComboItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCustomGameComboItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameComboItem.CustomGameComboItem_C.Construct");

	UCustomGameComboItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameComboItem.CustomGameComboItem_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomGameComboBox_C*   Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCustomGameComboItem_C::Init(class UCustomGameComboBox_C* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameComboItem.CustomGameComboItem_C.Init");

	UCustomGameComboItem_C_Init_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameComboItem.CustomGameComboItem_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCustomGameComboItem_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameComboItem.CustomGameComboItem_C.Destruct");

	UCustomGameComboItem_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGameComboItem.CustomGameComboItem_C.ExecuteUbergraph_CustomGameComboItem
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomGameComboItem_C::ExecuteUbergraph_CustomGameComboItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGameComboItem.CustomGameComboItem_C.ExecuteUbergraph_CustomGameComboItem");

	UCustomGameComboItem_C_ExecuteUbergraph_CustomGameComboItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
