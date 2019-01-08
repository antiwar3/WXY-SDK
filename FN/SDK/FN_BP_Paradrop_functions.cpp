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

// Function BP_Paradrop.BP_Paradrop_C.GetInteractiveType
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWuXiaXCharacter**       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EInteractiveType               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EInteractiveType ABP_Paradrop_C::GetInteractiveType(class AWuXiaXCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Paradrop.BP_Paradrop_C.GetInteractiveType");

	ABP_Paradrop_C_GetInteractiveType_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Paradrop.BP_Paradrop_C.InteractiveUITips
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWuXiaXCharacter**       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Paradrop_C::InteractiveUITips(class AWuXiaXCharacter** Player, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Paradrop.BP_Paradrop_C.InteractiveUITips");

	ABP_Paradrop_C_InteractiveUITips_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

	return params.ReturnValue;
}


// Function BP_Paradrop.BP_Paradrop_C.CanInteractive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWuXiaXCharacter**       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ETriggerInteractiveType*       Trigger                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Paradrop_C::CanInteractive(class AWuXiaXCharacter** Player, ETriggerInteractiveType* Trigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Paradrop.BP_Paradrop_C.CanInteractive");

	ABP_Paradrop_C_CanInteractive_Params params;
	params.Player = Player;
	params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Paradrop.BP_Paradrop_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Paradrop_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Paradrop.BP_Paradrop_C.UserConstructionScript");

	ABP_Paradrop_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Paradrop.BP_Paradrop_C.PlaySound
// (Event, Public, BlueprintEvent)

void ABP_Paradrop_C::PlaySound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Paradrop.BP_Paradrop_C.PlaySound");

	ABP_Paradrop_C_PlaySound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Paradrop.BP_Paradrop_C.StopSound
// (Event, Public, BlueprintEvent)

void ABP_Paradrop_C::StopSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Paradrop.BP_Paradrop_C.StopSound");

	ABP_Paradrop_C_StopSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Paradrop.BP_Paradrop_C.ExecuteUbergraph_BP_Paradrop
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Paradrop_C::ExecuteUbergraph_BP_Paradrop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Paradrop.BP_Paradrop_C.ExecuteUbergraph_BP_Paradrop");

	ABP_Paradrop_C_ExecuteUbergraph_BP_Paradrop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
