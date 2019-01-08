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

// Function KeyInputWidgetBase.KeyInputWidgetBase_C.GetHUD
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AWuXiaXHUDBase*          HUD                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKeyInputWidgetBase_C::GetHUD(class AWuXiaXHUDBase** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyInputWidgetBase.KeyInputWidgetBase_C.GetHUD");

	UKeyInputWidgetBase_C_GetHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HUD != nullptr)
		*HUD = params.HUD;
}


// Function KeyInputWidgetBase.KeyInputWidgetBase_C.GetGameKeyStr
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    InputKey                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   KeyName                        (Parm, OutParm)

void UKeyInputWidgetBase_C::GetGameKeyStr(const struct FKey& InputKey, struct FText* KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyInputWidgetBase.KeyInputWidgetBase_C.GetGameKeyStr");

	UKeyInputWidgetBase_C_GetGameKeyStr_Params params;
	params.InputKey = InputKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KeyName != nullptr)
		*KeyName = params.KeyName;
}


// Function KeyInputWidgetBase.KeyInputWidgetBase_C.CheckSameKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputChord             Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UKeyInputWidgetBase_C::CheckSameKey(const struct FInputChord& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyInputWidgetBase.KeyInputWidgetBase_C.CheckSameKey");

	UKeyInputWidgetBase_C_CheckSameKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyInputWidgetBase.KeyInputWidgetBase_C.InitKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_UserSettingUI_C*     Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKeyInputWidgetBase_C::InitKey(class UBP_UserSettingUI_C* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyInputWidgetBase.KeyInputWidgetBase_C.InitKey");

	UKeyInputWidgetBase_C_InitKey_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
