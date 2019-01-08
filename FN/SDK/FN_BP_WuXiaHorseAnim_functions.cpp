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

// Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.UpdateValues
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_WuXiaHorseAnim_C::UpdateValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.UpdateValues");

	UBP_WuXiaHorseAnim_C_UpdateValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.IsPlayerJumpOnHorse?
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_WuXiaHorseAnim_C::IsPlayerJumpOnHorse_()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.IsPlayerJumpOnHorse?");

	UBP_WuXiaHorseAnim_C_IsPlayerJumpOnHorse__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.GetFootIKLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   InBoneName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Add                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 default_value                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_WuXiaHorseAnim_C::GetFootIKLocation(const struct FName& InBoneName, float Add, const struct FVector& default_value, struct FVector* OutLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.GetFootIKLocation");

	UBP_WuXiaHorseAnim_C_GetFootIKLocation_Params params;
	params.InBoneName = InBoneName;
	params.Add = Add;
	params.default_value = default_value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
}


// Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.SetMeshRotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WuXiaHorseAnim_C::SetMeshRotation(const struct FRotator& Rotation, float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.SetMeshRotation");

	UBP_WuXiaHorseAnim_C_SetMeshRotation_Params params;
	params.Rotation = Rotation;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_4C37E6554797D32079CFF993BD29055E
// (BlueprintEvent)

void UBP_WuXiaHorseAnim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_4C37E6554797D32079CFF993BD29055E()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_4C37E6554797D32079CFF993BD29055E");

	UBP_WuXiaHorseAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_4C37E6554797D32079CFF993BD29055E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_307C53444213840AE2335894B363AF83
// (BlueprintEvent)

void UBP_WuXiaHorseAnim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_307C53444213840AE2335894B363AF83()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_307C53444213840AE2335894B363AF83");

	UBP_WuXiaHorseAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_307C53444213840AE2335894B363AF83_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_2492B39547E5C0CD5313579B1BAF80B0
// (BlueprintEvent)

void UBP_WuXiaHorseAnim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_2492B39547E5C0CD5313579B1BAF80B0()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_2492B39547E5C0CD5313579B1BAF80B0");

	UBP_WuXiaHorseAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_2492B39547E5C0CD5313579B1BAF80B0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_F03377604F4F5A4F64228FB74C67C665
// (BlueprintEvent)

void UBP_WuXiaHorseAnim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_F03377604F4F5A4F64228FB74C67C665()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_F03377604F4F5A4F64228FB74C67C665");

	UBP_WuXiaHorseAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_F03377604F4F5A4F64228FB74C67C665_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_55C25F98450FD6BDCB823EA33EE43600
// (BlueprintEvent)

void UBP_WuXiaHorseAnim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_55C25F98450FD6BDCB823EA33EE43600()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_55C25F98450FD6BDCB823EA33EE43600");

	UBP_WuXiaHorseAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_55C25F98450FD6BDCB823EA33EE43600_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_4007A45A40ACF2B9312360A38DD8F9DE
// (BlueprintEvent)

void UBP_WuXiaHorseAnim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_4007A45A40ACF2B9312360A38DD8F9DE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_4007A45A40ACF2B9312360A38DD8F9DE");

	UBP_WuXiaHorseAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_4007A45A40ACF2B9312360A38DD8F9DE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_471B8BE34139C94BC88798B3CCE9E89C
// (BlueprintEvent)

void UBP_WuXiaHorseAnim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_471B8BE34139C94BC88798B3CCE9E89C()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_471B8BE34139C94BC88798B3CCE9E89C");

	UBP_WuXiaHorseAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_471B8BE34139C94BC88798B3CCE9E89C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_BlendListByBool_848B8EFC4BAE73AD7951038B228351FB
// (BlueprintEvent)

void UBP_WuXiaHorseAnim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_BlendListByBool_848B8EFC4BAE73AD7951038B228351FB()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_BlendListByBool_848B8EFC4BAE73AD7951038B228351FB");

	UBP_WuXiaHorseAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_BlendListByBool_848B8EFC4BAE73AD7951038B228351FB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TwoWayBlend_9DE0A85A48383BF3E3443EBC4EBE8732
// (BlueprintEvent)

void UBP_WuXiaHorseAnim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TwoWayBlend_9DE0A85A48383BF3E3443EBC4EBE8732()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TwoWayBlend_9DE0A85A48383BF3E3443EBC4EBE8732");

	UBP_WuXiaHorseAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TwoWayBlend_9DE0A85A48383BF3E3443EBC4EBE8732_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_F65F083B4BCB73DF278A5ABF455529D0
// (BlueprintEvent)

void UBP_WuXiaHorseAnim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_F65F083B4BCB73DF278A5ABF455529D0()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_F65F083B4BCB73DF278A5ABF455529D0");

	UBP_WuXiaHorseAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_F65F083B4BCB73DF278A5ABF455529D0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_03E0DA8443155F1BD40E4594E9D6B9ED
// (BlueprintEvent)

void UBP_WuXiaHorseAnim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_03E0DA8443155F1BD40E4594E9D6B9ED()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_03E0DA8443155F1BD40E4594E9D6B9ED");

	UBP_WuXiaHorseAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_03E0DA8443155F1BD40E4594E9D6B9ED_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_ApplyAdditive_F55DBDAC476FD9101D62B494CE3CBA21
// (BlueprintEvent)

void UBP_WuXiaHorseAnim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_ApplyAdditive_F55DBDAC476FD9101D62B494CE3CBA21()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_ApplyAdditive_F55DBDAC476FD9101D62B494CE3CBA21");

	UBP_WuXiaHorseAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_ApplyAdditive_F55DBDAC476FD9101D62B494CE3CBA21_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_2864D7294661B68884D59DBDE1008F77
// (BlueprintEvent)

void UBP_WuXiaHorseAnim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_2864D7294661B68884D59DBDE1008F77()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_2864D7294661B68884D59DBDE1008F77");

	UBP_WuXiaHorseAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_2864D7294661B68884D59DBDE1008F77_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_ModifyBone_E6E73CE64E0E437AE457B097A56989EE
// (BlueprintEvent)

void UBP_WuXiaHorseAnim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_ModifyBone_E6E73CE64E0E437AE457B097A56989EE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_ModifyBone_E6E73CE64E0E437AE457B097A56989EE");

	UBP_WuXiaHorseAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_ModifyBone_E6E73CE64E0E437AE457B097A56989EE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_ModifyBone_D0154A194D642896E035AA90BFD1B744
// (BlueprintEvent)

void UBP_WuXiaHorseAnim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_ModifyBone_D0154A194D642896E035AA90BFD1B744()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_ModifyBone_D0154A194D642896E035AA90BFD1B744");

	UBP_WuXiaHorseAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_ModifyBone_D0154A194D642896E035AA90BFD1B744_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_ModifyBone_5EC3E2FB4262E21A88DFBD97084DF4F2
// (BlueprintEvent)

void UBP_WuXiaHorseAnim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_ModifyBone_5EC3E2FB4262E21A88DFBD97084DF4F2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_ModifyBone_5EC3E2FB4262E21A88DFBD97084DF4F2");

	UBP_WuXiaHorseAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_ModifyBone_5EC3E2FB4262E21A88DFBD97084DF4F2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_ModifyBone_1DF9782144B26E5E9779F7A2CD93DD9D
// (BlueprintEvent)

void UBP_WuXiaHorseAnim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_ModifyBone_1DF9782144B26E5E9779F7A2CD93DD9D()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_ModifyBone_1DF9782144B26E5E9779F7A2CD93DD9D");

	UBP_WuXiaHorseAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_ModifyBone_1DF9782144B26E5E9779F7A2CD93DD9D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TwoBoneIK_75BF2D984DA7029138EF92B5724CCBE8
// (BlueprintEvent)

void UBP_WuXiaHorseAnim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TwoBoneIK_75BF2D984DA7029138EF92B5724CCBE8()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TwoBoneIK_75BF2D984DA7029138EF92B5724CCBE8");

	UBP_WuXiaHorseAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TwoBoneIK_75BF2D984DA7029138EF92B5724CCBE8_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TwoBoneIK_B0BF7E474A092EB270253399DB46FC56
// (BlueprintEvent)

void UBP_WuXiaHorseAnim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TwoBoneIK_B0BF7E474A092EB270253399DB46FC56()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TwoBoneIK_B0BF7E474A092EB270253399DB46FC56");

	UBP_WuXiaHorseAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TwoBoneIK_B0BF7E474A092EB270253399DB46FC56_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_344D8F6D40570A41505E70B25564A14B
// (BlueprintEvent)

void UBP_WuXiaHorseAnim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_344D8F6D40570A41505E70B25564A14B()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_344D8F6D40570A41505E70B25564A14B");

	UBP_WuXiaHorseAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_344D8F6D40570A41505E70B25564A14B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_54F03F454A961C590EF03F91237EC957
// (BlueprintEvent)

void UBP_WuXiaHorseAnim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_54F03F454A961C590EF03F91237EC957()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_54F03F454A961C590EF03F91237EC957");

	UBP_WuXiaHorseAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_54F03F454A961C590EF03F91237EC957_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_670653D244BB3F6CC62D328579CBFB8A
// (BlueprintEvent)

void UBP_WuXiaHorseAnim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_670653D244BB3F6CC62D328579CBFB8A()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_670653D244BB3F6CC62D328579CBFB8A");

	UBP_WuXiaHorseAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WuXiaHorseAnim_AnimGraphNode_TransitionResult_670653D244BB3F6CC62D328579CBFB8A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WuXiaHorseAnim_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.BlueprintUpdateAnimation");

	UBP_WuXiaHorseAnim_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UBP_WuXiaHorseAnim_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.BlueprintInitializeAnimation");

	UBP_WuXiaHorseAnim_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.ExecuteUbergraph_BP_WuXiaHorseAnim
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WuXiaHorseAnim_C::ExecuteUbergraph_BP_WuXiaHorseAnim(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WuXiaHorseAnim.BP_WuXiaHorseAnim_C.ExecuteUbergraph_BP_WuXiaHorseAnim");

	UBP_WuXiaHorseAnim_C_ExecuteUbergraph_BP_WuXiaHorseAnim_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
