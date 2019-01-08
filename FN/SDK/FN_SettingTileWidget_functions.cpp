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

// Function SettingTileWidget.SettingTileWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USettingTileWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingTileWidget.SettingTileWidget_C.Construct");

	USettingTileWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingTileWidget.SettingTileWidget_C.ExecuteUbergraph_SettingTileWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingTileWidget_C::ExecuteUbergraph_SettingTileWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingTileWidget.SettingTileWidget_C.ExecuteUbergraph_SettingTileWidget");

	USettingTileWidget_C_ExecuteUbergraph_SettingTileWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
