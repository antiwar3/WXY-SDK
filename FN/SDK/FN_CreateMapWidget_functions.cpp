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

// Function CreateMapWidget.CreateMapWidget_C.SetPlayMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreateMapWidget_C::SetPlayMode(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreateMapWidget.CreateMapWidget_C.SetPlayMode");

	UCreateMapWidget_C_SetPlayMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreateMapWidget.CreateMapWidget_C.SetMapInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreateMapWidget_C::SetMapInfo(int PlayMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreateMapWidget.CreateMapWidget_C.SetMapInfo");

	UCreateMapWidget_C_SetMapInfo_Params params;
	params.PlayMode = PlayMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreateMapWidget.CreateMapWidget_C.ResetMapName
// (BlueprintCallable, BlueprintEvent)

void UCreateMapWidget_C::ResetMapName()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreateMapWidget.CreateMapWidget_C.ResetMapName");

	UCreateMapWidget_C_ResetMapName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreateMapWidget.CreateMapWidget_C.Reset
// (BlueprintCallable, BlueprintEvent)

void UCreateMapWidget_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreateMapWidget.CreateMapWidget_C.Reset");

	UCreateMapWidget_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreateMapWidget.CreateMapWidget_C.ExecuteUbergraph_CreateMapWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreateMapWidget_C::ExecuteUbergraph_CreateMapWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreateMapWidget.CreateMapWidget_C.ExecuteUbergraph_CreateMapWidget");

	UCreateMapWidget_C_ExecuteUbergraph_CreateMapWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
