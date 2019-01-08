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

// Function ComboxItem.ComboxItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UComboxItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ComboxItem.ComboxItem_C.Construct");

	UComboxItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComboxItem.ComboxItem_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UComboxItem_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ComboxItem.ComboxItem_C.Tick");

	UComboxItem_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComboxItem.ComboxItem_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class USettingSeleteWidget_C*  Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UComboxItem_C::Init(const struct FString& Name, class USettingSeleteWidget_C* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ComboxItem.ComboxItem_C.Init");

	UComboxItem_C_Init_Params params;
	params.Name = Name;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComboxItem.ComboxItem_C.SetOptionStr
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewStr                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UComboxItem_C::SetOptionStr(const struct FString& NewStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function ComboxItem.ComboxItem_C.SetOptionStr");

	UComboxItem_C_SetOptionStr_Params params;
	params.NewStr = NewStr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComboxItem.ComboxItem_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UComboxItem_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ComboxItem.ComboxItem_C.Destruct");

	UComboxItem_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComboxItem.ComboxItem_C.CheckState
// (BlueprintCallable, BlueprintEvent)

void UComboxItem_C::CheckState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ComboxItem.ComboxItem_C.CheckState");

	UComboxItem_C_CheckState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComboxItem.ComboxItem_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UComboxItem_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ComboxItem.ComboxItem_C.OnMouseLeave");

	UComboxItem_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComboxItem.ComboxItem_C.CloseState
// (BlueprintCallable, BlueprintEvent)

void UComboxItem_C::CloseState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ComboxItem.ComboxItem_C.CloseState");

	UComboxItem_C_CloseState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComboxItem.ComboxItem_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UComboxItem_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ComboxItem.ComboxItem_C.OnMouseEnter");

	UComboxItem_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComboxItem.ComboxItem_C.ExecuteUbergraph_ComboxItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UComboxItem_C::ExecuteUbergraph_ComboxItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ComboxItem.ComboxItem_C.ExecuteUbergraph_ComboxItem");

	UComboxItem_C_ExecuteUbergraph_ComboxItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
