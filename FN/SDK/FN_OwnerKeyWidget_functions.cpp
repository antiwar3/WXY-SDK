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

// Function OwnerKeyWidget.OwnerKeyWidget_C.SetName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UOwnerKeyWidget_C::SetName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerKeyWidget.OwnerKeyWidget_C.SetName");

	UOwnerKeyWidget_C_SetName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerKeyWidget.OwnerKeyWidget_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOwnerKeyWidget_C::Init(int itemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerKeyWidget.OwnerKeyWidget_C.Init");

	UOwnerKeyWidget_C_Init_Params params;
	params.itemID = itemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerKeyWidget.OwnerKeyWidget_C.SetInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOwnerKeyWidget_C::SetInfo(const struct FString& Name, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerKeyWidget.OwnerKeyWidget_C.SetInfo");

	UOwnerKeyWidget_C_SetInfo_Params params;
	params.Name = Name;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerKeyWidget.OwnerKeyWidget_C.ExecuteUbergraph_OwnerKeyWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOwnerKeyWidget_C::ExecuteUbergraph_OwnerKeyWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerKeyWidget.OwnerKeyWidget_C.ExecuteUbergraph_OwnerKeyWidget");

	UOwnerKeyWidget_C_ExecuteUbergraph_OwnerKeyWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerKeyWidget.OwnerKeyWidget_C.RemoveKey__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOwnerKeyWidget_C*       Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOwnerKeyWidget_C::RemoveKey__DelegateSignature(class UOwnerKeyWidget_C* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerKeyWidget.OwnerKeyWidget_C.RemoveKey__DelegateSignature");

	UOwnerKeyWidget_C_RemoveKey__DelegateSignature_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
