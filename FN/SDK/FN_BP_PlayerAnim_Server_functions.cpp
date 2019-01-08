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

// Function BP_PlayerAnim_Server.BP_PlayerAnim_Server_C.WuXia_Montage_Play
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage**           MontageToPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         delay_time                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  section_name                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_PlayerAnim_Server_C::WuXia_Montage_Play(class UAnimMontage** MontageToPlay, float* delay_time, struct FName* section_name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerAnim_Server.BP_PlayerAnim_Server_C.WuXia_Montage_Play");

	UBP_PlayerAnim_Server_C_WuXia_Montage_Play_Params params;
	params.MontageToPlay = MontageToPlay;
	params.delay_time = delay_time;
	params.section_name = section_name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerAnim_Server.BP_PlayerAnim_Server_C.OnNotifyEnd_075E808649095A4B0EC3CB90F7262E3B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerAnim_Server_C::OnNotifyEnd_075E808649095A4B0EC3CB90F7262E3B(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerAnim_Server.BP_PlayerAnim_Server_C.OnNotifyEnd_075E808649095A4B0EC3CB90F7262E3B");

	UBP_PlayerAnim_Server_C_OnNotifyEnd_075E808649095A4B0EC3CB90F7262E3B_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerAnim_Server.BP_PlayerAnim_Server_C.OnNotifyBegin_075E808649095A4B0EC3CB90F7262E3B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerAnim_Server_C::OnNotifyBegin_075E808649095A4B0EC3CB90F7262E3B(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerAnim_Server.BP_PlayerAnim_Server_C.OnNotifyBegin_075E808649095A4B0EC3CB90F7262E3B");

	UBP_PlayerAnim_Server_C_OnNotifyBegin_075E808649095A4B0EC3CB90F7262E3B_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerAnim_Server.BP_PlayerAnim_Server_C.OnInterrupted_075E808649095A4B0EC3CB90F7262E3B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerAnim_Server_C::OnInterrupted_075E808649095A4B0EC3CB90F7262E3B(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerAnim_Server.BP_PlayerAnim_Server_C.OnInterrupted_075E808649095A4B0EC3CB90F7262E3B");

	UBP_PlayerAnim_Server_C_OnInterrupted_075E808649095A4B0EC3CB90F7262E3B_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerAnim_Server.BP_PlayerAnim_Server_C.OnBlendOut_075E808649095A4B0EC3CB90F7262E3B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerAnim_Server_C::OnBlendOut_075E808649095A4B0EC3CB90F7262E3B(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerAnim_Server.BP_PlayerAnim_Server_C.OnBlendOut_075E808649095A4B0EC3CB90F7262E3B");

	UBP_PlayerAnim_Server_C_OnBlendOut_075E808649095A4B0EC3CB90F7262E3B_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerAnim_Server.BP_PlayerAnim_Server_C.OnCompleted_075E808649095A4B0EC3CB90F7262E3B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerAnim_Server_C::OnCompleted_075E808649095A4B0EC3CB90F7262E3B(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerAnim_Server.BP_PlayerAnim_Server_C.OnCompleted_075E808649095A4B0EC3CB90F7262E3B");

	UBP_PlayerAnim_Server_C_OnCompleted_075E808649095A4B0EC3CB90F7262E3B_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerAnim_Server.BP_PlayerAnim_Server_C.PlaySkill
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            MontageToPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StartingPosition               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StartingSection                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerAnim_Server_C::PlaySkill(class UAnimMontage* MontageToPlay, float StartingPosition, const struct FName& StartingSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerAnim_Server.BP_PlayerAnim_Server_C.PlaySkill");

	UBP_PlayerAnim_Server_C_PlaySkill_Params params;
	params.MontageToPlay = MontageToPlay;
	params.StartingPosition = StartingPosition;
	params.StartingSection = StartingSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerAnim_Server.BP_PlayerAnim_Server_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UBP_PlayerAnim_Server_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerAnim_Server.BP_PlayerAnim_Server_C.BlueprintInitializeAnimation");

	UBP_PlayerAnim_Server_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerAnim_Server.BP_PlayerAnim_Server_C.AnimNotify_TSBW
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerAnim_Server_C::AnimNotify_TSBW()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerAnim_Server.BP_PlayerAnim_Server_C.AnimNotify_TSBW");

	UBP_PlayerAnim_Server_C_AnimNotify_TSBW_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerAnim_Server.BP_PlayerAnim_Server_C.ExecuteUbergraph_BP_PlayerAnim_Server
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerAnim_Server_C::ExecuteUbergraph_BP_PlayerAnim_Server(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerAnim_Server.BP_PlayerAnim_Server_C.ExecuteUbergraph_BP_PlayerAnim_Server");

	UBP_PlayerAnim_Server_C_ExecuteUbergraph_BP_PlayerAnim_Server_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
