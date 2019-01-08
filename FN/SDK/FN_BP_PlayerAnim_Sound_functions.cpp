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

// Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.SelectBySexType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USoundBase*>      Male_Sound                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class USoundBase*>      Female_Sound                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class USoundBase*>      OutSound                       (Parm, OutParm, ZeroConstructor)

void UBP_PlayerAnim_Sound_C::SelectBySexType(TArray<class USoundBase*>* Male_Sound, TArray<class USoundBase*>* Female_Sound, TArray<class USoundBase*>* OutSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.SelectBySexType");

	UBP_PlayerAnim_Sound_C_SelectBySexType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Male_Sound != nullptr)
		*Male_Sound = params.Male_Sound;
	if (Female_Sound != nullptr)
		*Female_Sound = params.Female_Sound;
	if (OutSound != nullptr)
		*OutSound = params.OutSound;
}


// Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_Sound_Body
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerAnim_Sound_C::AnimNotify_Sound_Body()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_Sound_Body");

	UBP_PlayerAnim_Sound_C_AnimNotify_Sound_Body_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_Sound_Footstep
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerAnim_Sound_C::AnimNotify_Sound_Footstep()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_Sound_Footstep");

	UBP_PlayerAnim_Sound_C_AnimNotify_Sound_Footstep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_EnterHitBlendIn
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerAnim_Sound_C::AnimNotify_EnterHitBlendIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_EnterHitBlendIn");

	UBP_PlayerAnim_Sound_C_AnimNotify_EnterHitBlendIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_Sound_Body_Loud
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerAnim_Sound_C::AnimNotify_Sound_Body_Loud()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_Sound_Body_Loud");

	UBP_PlayerAnim_Sound_C_AnimNotify_Sound_Body_Loud_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_BlendIn_Jump
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerAnim_Sound_C::AnimNotify_BlendIn_Jump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_BlendIn_Jump");

	UBP_PlayerAnim_Sound_C_AnimNotify_BlendIn_Jump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_Damage_1
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerAnim_Sound_C::AnimNotify_Damage_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_Damage_1");

	UBP_PlayerAnim_Sound_C_AnimNotify_Damage_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_Damage_2
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerAnim_Sound_C::AnimNotify_Damage_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_Damage_2");

	UBP_PlayerAnim_Sound_C_AnimNotify_Damage_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_Damage_3
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerAnim_Sound_C::AnimNotify_Damage_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_Damage_3");

	UBP_PlayerAnim_Sound_C_AnimNotify_Damage_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_BlendIn_BinSi_Begin
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerAnim_Sound_C::AnimNotify_BlendIn_BinSi_Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_BlendIn_BinSi_Begin");

	UBP_PlayerAnim_Sound_C_AnimNotify_BlendIn_BinSi_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_Show_Ghost
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerAnim_Sound_C::AnimNotify_Show_Ghost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_Show_Ghost");

	UBP_PlayerAnim_Sound_C_AnimNotify_Show_Ghost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_Show_Ghost_More
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerAnim_Sound_C::AnimNotify_Show_Ghost_More()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_Show_Ghost_More");

	UBP_PlayerAnim_Sound_C_AnimNotify_Show_Ghost_More_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_SwimSound
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerAnim_Sound_C::AnimNotify_SwimSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_SwimSound");

	UBP_PlayerAnim_Sound_C_AnimNotify_SwimSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_Sound_HorseSpeed
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerAnim_Sound_C::AnimNotify_Sound_HorseSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_Sound_HorseSpeed");

	UBP_PlayerAnim_Sound_C_AnimNotify_Sound_HorseSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_EnterBlockHit
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerAnim_Sound_C::AnimNotify_EnterBlockHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_EnterBlockHit");

	UBP_PlayerAnim_Sound_C_AnimNotify_EnterBlockHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_Enter_XuanYun
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerAnim_Sound_C::AnimNotify_Enter_XuanYun()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_Enter_XuanYun");

	UBP_PlayerAnim_Sound_C_AnimNotify_Enter_XuanYun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_PlayerAnim_Sound_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.BlueprintBeginPlay");

	UBP_PlayerAnim_Sound_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_Enter_DengJi
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerAnim_Sound_C::AnimNotify_Enter_DengJi()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_Enter_DengJi");

	UBP_PlayerAnim_Sound_C_AnimNotify_Enter_DengJi_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_Enter_JiangLuo
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerAnim_Sound_C::AnimNotify_Enter_JiangLuo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.AnimNotify_Enter_JiangLuo");

	UBP_PlayerAnim_Sound_C_AnimNotify_Enter_JiangLuo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.Event_Leave_Par
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerAnim_Sound_C::Event_Leave_Par()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.Event_Leave_Par");

	UBP_PlayerAnim_Sound_C_Event_Leave_Par_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.ExecuteUbergraph_BP_PlayerAnim_Sound
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerAnim_Sound_C::ExecuteUbergraph_BP_PlayerAnim_Sound(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C.ExecuteUbergraph_BP_PlayerAnim_Sound");

	UBP_PlayerAnim_Sound_C_ExecuteUbergraph_BP_PlayerAnim_Sound_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
