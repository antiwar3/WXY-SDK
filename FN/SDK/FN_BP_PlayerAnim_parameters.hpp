#pragma once

// Fortnite (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PlayerAnim.BP_PlayerAnim_C.WuXia_Montage_Play
struct UBP_PlayerAnim_C_WuXia_Montage_Play_Params
{
	class UAnimMontage**                               MontageToPlay;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             delay_time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      section_name;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.GetTurnInPlaceAnimation
struct UBP_PlayerAnim_C_GetTurnInPlaceAnimation_Params
{
	class UAnimSequence*                               TrunL90;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               TurnR90;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               TurnL180;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               TurnR180;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.ShouldnotRotate
struct UBP_PlayerAnim_C_ShouldnotRotate_Params
{
	bool                                               ShouldnotRotate;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.ChooseTurnInPlaceCurve
struct UBP_PlayerAnim_C_ChooseTurnInPlaceCurve_Params
{
	class UObject*                                     TurnAnim;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TurnInPlaceCurve;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.CanTurnInPlace
struct UBP_PlayerAnim_C_CanTurnInPlace_Params
{
	bool                                               CanTurnInPlace;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.InAirTrace
struct UBP_PlayerAnim_C_InAirTrace_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.RotateInPlace
struct UBP_PlayerAnim_C_RotateInPlace_Params
{
	float                                              RotationDegree_Limit;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max_Time;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Min_Rotation_Rate;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max_Rotation_Rate;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.TurnInPlace
struct UBP_PlayerAnim_C_TurnInPlace_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.TurnInPlaceCheck
struct UBP_PlayerAnim_C_TurnInPlaceCheck_Params
{
	float                                              Timer_Angle_A;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timer_Angle_B;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timer_Delay_A;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timer_Delay_B;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AimAngleThreshold;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate1;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendInTime1;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               TurnLeftAnim1;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               TurnRightAnim1;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Aim_Angle_Threshold;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate2;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendInTime2;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               TurnLeftAnim2;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               TurnRightAnim2;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.SetGroundedLeaningValues
struct UBP_PlayerAnim_C_SetGroundedLeaningValues_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.SetAimOffset
struct UBP_PlayerAnim_C_SetAimOffset_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.SetCharacterRotation
struct UBP_PlayerAnim_C_SetCharacterRotation_Params
{
	struct FRotator                                    TargetRotation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.GetVariablesFromPawn
struct UBP_PlayerAnim_C_GetVariablesFromPawn_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.SetReferenceToWuXiaComponent
struct UBP_PlayerAnim_C_SetReferenceToWuXiaComponent_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.SetComponents
struct UBP_PlayerAnim_C_SetComponents_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.OnNotifyEnd_6F316ECE470CB50BD147EFA19BD5E688
struct UBP_PlayerAnim_C_OnNotifyEnd_6F316ECE470CB50BD147EFA19BD5E688_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.OnNotifyBegin_6F316ECE470CB50BD147EFA19BD5E688
struct UBP_PlayerAnim_C_OnNotifyBegin_6F316ECE470CB50BD147EFA19BD5E688_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.OnInterrupted_6F316ECE470CB50BD147EFA19BD5E688
struct UBP_PlayerAnim_C_OnInterrupted_6F316ECE470CB50BD147EFA19BD5E688_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.OnBlendOut_6F316ECE470CB50BD147EFA19BD5E688
struct UBP_PlayerAnim_C_OnBlendOut_6F316ECE470CB50BD147EFA19BD5E688_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.OnCompleted_6F316ECE470CB50BD147EFA19BD5E688
struct UBP_PlayerAnim_C_OnCompleted_6F316ECE470CB50BD147EFA19BD5E688_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_FF3C18094142A16CEC7E63B4F29C89F1
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_FF3C18094142A16CEC7E63B4F29C89F1_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_CCC48D9947261DAEED375380D510724E
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_CCC48D9947261DAEED375380D510724E_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_033D22CE4975AAFB2DA62B89C58966EE
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_033D22CE4975AAFB2DA62B89C58966EE_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_A7DB12ED446BE2EDF94C9FAF9086E7A5
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_A7DB12ED446BE2EDF94C9FAF9086E7A5_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_F91DDFCA49FCABA7890094A6E6DA7933
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_F91DDFCA49FCABA7890094A6E6DA7933_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_61AE4AEB435723E61F006B8BE50A0CA7
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_61AE4AEB435723E61F006B8BE50A0CA7_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_F6147F4349501D1714743CB37E4758B9
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_F6147F4349501D1714743CB37E4758B9_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_960A4E1346C9FAC41FE96290CBEF7FAA
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_960A4E1346C9FAC41FE96290CBEF7FAA_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_369087FE4CCA04A193AC4AA60D530260
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_369087FE4CCA04A193AC4AA60D530260_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_C96F09D84EECF9989A776EA63575A821
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_C96F09D84EECF9989A776EA63575A821_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_688FE1D445CF405EB4EF8A9C2878C99B
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_688FE1D445CF405EB4EF8A9C2878C99B_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_25EC6169481122A55AB549B1D8D2A805
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_25EC6169481122A55AB549B1D8D2A805_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_9CC4D91947EF0C36EDDAAF8EE64A2885
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_9CC4D91947EF0C36EDDAAF8EE64A2885_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_21A0D5A64D3122232BECACB7FDA85E40
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_21A0D5A64D3122232BECACB7FDA85E40_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_5807D7D24C7A12CDB04AB7892468DDD5
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_5807D7D24C7A12CDB04AB7892468DDD5_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_DE5F60B84742B2BF4315BE9166A9EC76
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_DE5F60B84742B2BF4315BE9166A9EC76_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TwoWayBlend_D9F743EA46F55C59FAFAEA9CC15E6C31
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TwoWayBlend_D9F743EA46F55C59FAFAEA9CC15E6C31_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_5215CB204AE8527BE4EA7E88ECF5C60A
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_5215CB204AE8527BE4EA7E88ECF5C60A_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_51999B3142098BC142948D97E1F89D37
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_51999B3142098BC142948D97E1F89D37_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TwoWayBlend_8B1D4B054414C0AF6E3907AE03A210BA
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TwoWayBlend_8B1D4B054414C0AF6E3907AE03A210BA_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_3A69ACB44AC7CBAEC6E4EFAC82E4FD5B
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_3A69ACB44AC7CBAEC6E4EFAC82E4FD5B_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByBool_4473AC894B8E3B337B7DFF8F06C9B7C1
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByBool_4473AC894B8E3B337B7DFF8F06C9B7C1_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_BB308B6A427E8011E985A0AC0CFDCF3E
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_BB308B6A427E8011E985A0AC0CFDCF3E_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TwoWayBlend_7CEAD19E48E6F00D261D0B942897D5B0
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TwoWayBlend_7CEAD19E48E6F00D261D0B942897D5B0_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_7E355467462FEA20E7EE83B48FF2500C
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_7E355467462FEA20E7EE83B48FF2500C_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_004EED7940344A15766C12A6AE657BA3
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_004EED7940344A15766C12A6AE657BA3_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TwoWayBlend_1D6243C74E400111F0AB709487E5E2DA
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TwoWayBlend_1D6243C74E400111F0AB709487E5E2DA_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_8FCCA06B4502BEF765E7DDAC94D51603
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_8FCCA06B4502BEF765E7DDAC94D51603_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByInt_081EC2AF48DD6C880F12A1B466EE5770
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByInt_081EC2AF48DD6C880F12A1B466EE5770_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByBool_34DC2E904B63F5530B5293AD46B4334C
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByBool_34DC2E904B63F5530B5293AD46B4334C_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByBool_EF9D084A471393E3BC23D983CD444F2C
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByBool_EF9D084A471393E3BC23D983CD444F2C_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByBool_046342664E6062AA1755F58BC7354B21
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByBool_046342664E6062AA1755F58BC7354B21_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByBool_5FDDF61440325C2F3F77B58A45F94456
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByBool_5FDDF61440325C2F3F77B58A45F94456_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_2C2806AC4F135191E09DCBA48BC307F4
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_2C2806AC4F135191E09DCBA48BC307F4_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendSpacePlayer_56F5A4684390A0F2BAE6CDACA1913EAE
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendSpacePlayer_56F5A4684390A0F2BAE6CDACA1913EAE_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendSpacePlayer_456B08FF427B336842D036B1B28E2E27
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendSpacePlayer_456B08FF427B336842D036B1B28E2E27_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByBool_E5DFCB1D4A8AA8ABBC09F99D7058D7EA
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByBool_E5DFCB1D4A8AA8ABBC09F99D7058D7EA_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_A2CFBEA047BD318B86758A921CF8D90B
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_A2CFBEA047BD318B86758A921CF8D90B_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_1D20D39943F02DDD93AAA3A199E68DB8
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_1D20D39943F02DDD93AAA3A199E68DB8_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_D243A0C54479ED02EEF5BCAF52BF0235
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_D243A0C54479ED02EEF5BCAF52BF0235_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_LayeredBoneBlend_62807B7942E203CDBC788A8EE34F8B5C
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_LayeredBoneBlend_62807B7942E203CDBC788A8EE34F8B5C_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_5B11B1294B692F499A4AB4BEC3C85759
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_5B11B1294B692F499A4AB4BEC3C85759_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_9B8DD56A49E1C602FDCDE78073BB16C5
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_9B8DD56A49E1C602FDCDE78073BB16C5_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_8AA2AD834A8BB2E669ED95950CA24F27
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_SequenceEvaluator_8AA2AD834A8BB2E669ED95950CA24F27_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByBool_2DD3BA814F641BE7C208F1B112F3EE9B
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByBool_2DD3BA814F641BE7C208F1B112F3EE9B_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.BlueprintUpdateAnimation
struct UBP_PlayerAnim_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.BlueprintInitializeAnimation
struct UBP_PlayerAnim_C_BlueprintInitializeAnimation_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByBool_5F126C7745FB7D24FBABFE9C3CC3488C
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByBool_5F126C7745FB7D24FBABFE9C3CC3488C_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.PlaySkill
struct UBP_PlayerAnim_C_PlaySkill_Params
{
	class UAnimMontage*                                MontageToPlay;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartingPosition;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartingSection;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByBool_F972FD6240D7AC95F93C7FAD3A6FE4BD
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByBool_F972FD6240D7AC95F93C7FAD3A6FE4BD_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByBool_1365FFC749BD5D966C8359B2A7F39167
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByBool_1365FFC749BD5D966C8359B2A7F39167_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByInt_393C95A04BCD8C7F446D06ABB5B7C4F0
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByInt_393C95A04BCD8C7F446D06ABB5B7C4F0_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByBool_6EF7542D495C6234FBC2C58121E5AE9E
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByBool_6EF7542D495C6234FBC2C58121E5AE9E_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByBool_C851846C4F9AB81CE964E794245CBFA7
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByBool_C851846C4F9AB81CE964E794245CBFA7_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_63F958354F38771D70AB839C9ADF3932
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_63F958354F38771D70AB839C9ADF3932_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_2CC331454833201369A2DE8D256F6C2E
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_2CC331454833201369A2DE8D256F6C2E_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendSpacePlayer_99BEAA6743729AD38713D990232370A0
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendSpacePlayer_99BEAA6743729AD38713D990232370A0_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.CE_HuoHuaEffect
struct UBP_PlayerAnim_C_CE_HuoHuaEffect_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_AA4BAFD14841CD235EAF9B8796F7BE0C
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_AA4BAFD14841CD235EAF9B8796F7BE0C_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_E2E619D04F4A0D1E1992FA900D7A2482
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_E2E619D04F4A0D1E1992FA900D7A2482_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByBool_00C3D8FB4212344186227F818A2A36D1
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByBool_00C3D8FB4212344186227F818A2A36D1_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByBool_D5848D64461BE993EC8867911861ABFA
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_BlendListByBool_D5848D64461BE993EC8867911861ABFA_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_65F2D2E84D41B0ADC1A803BC609D8498
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_65F2D2E84D41B0ADC1A803BC609D8498_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_D79FF28546D7AA92E30984B57C9244FE
struct UBP_PlayerAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PlayerAnim_AnimGraphNode_TransitionResult_D79FF28546D7AA92E30984B57C9244FE_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_BlendIn_ShanBi
struct UBP_PlayerAnim_C_AnimNotify_BlendIn_ShanBi_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_Enter_BlendOut_XiuXian
struct UBP_PlayerAnim_C_AnimNotify_Enter_BlendOut_XiuXian_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_Enter_Grounded_To_TiaoQi
struct UBP_PlayerAnim_C_AnimNotify_Enter_Grounded_To_TiaoQi_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_Enter_TiaoYueKaiShi_To_DengQiangTiao
struct UBP_PlayerAnim_C_AnimNotify_Enter_TiaoYueKaiShi_To_DengQiangTiao_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.Event_DengQiangTiao
struct UBP_PlayerAnim_C_Event_DengQiangTiao_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_Enter_ChangJingHuDong
struct UBP_PlayerAnim_C_AnimNotify_Enter_ChangJingHuDong_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_Enter_QingGong_To_TiaoQi
struct UBP_PlayerAnim_C_AnimNotify_Enter_QingGong_To_TiaoQi_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_BlendIn_Begin_BinSi_To_BeiJiJiu
struct UBP_PlayerAnim_C_AnimNotify_BlendIn_Begin_BinSi_To_BeiJiJiu_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_Enter_TiaoQi_To_Grounded
struct UBP_PlayerAnim_C_AnimNotify_Enter_TiaoQi_To_Grounded_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_Enter_TiaoQi_To_QiTiaoJieShu
struct UBP_PlayerAnim_C_AnimNotify_Enter_TiaoQi_To_QiTiaoJieShu_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_Enter_Grounded_To_LianTiao
struct UBP_PlayerAnim_C_AnimNotify_Enter_Grounded_To_LianTiao_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_Falling
struct UBP_PlayerAnim_C_AnimNotify_Falling_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_EnteredGroundedState
struct UBP_PlayerAnim_C_AnimNotify_EnteredGroundedState_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_LeftGroundedState
struct UBP_PlayerAnim_C_AnimNotify_LeftGroundedState_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_LeftIdleState
struct UBP_PlayerAnim_C_AnimNotify_LeftIdleState_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_EnteredIdleState
struct UBP_PlayerAnim_C_AnimNotify_EnteredIdleState_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.StopRotatingInPlace
struct UBP_PlayerAnim_C_StopRotatingInPlace_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.StopTurnInPlace
struct UBP_PlayerAnim_C_StopTurnInPlace_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.StartTurnInPlace
struct UBP_PlayerAnim_C_StartTurnInPlace_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.PlayTurnInPlaceAnimation
struct UBP_PlayerAnim_C_PlayTurnInPlaceAnimation_Params
{
	float                                              PlayRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendInTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               TurnAnim;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.ClientPlayAddAtack
struct UBP_PlayerAnim_C_ClientPlayAddAtack_Params
{
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_EnterHitBlendIn
struct UBP_PlayerAnim_C_AnimNotify_EnterHitBlendIn_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_LeaveHitBlendOut
struct UBP_PlayerAnim_C_AnimNotify_LeaveHitBlendOut_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_EnterHitBlendOut
struct UBP_PlayerAnim_C_AnimNotify_EnterHitBlendOut_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_LeaveHitBlendIn
struct UBP_PlayerAnim_C_AnimNotify_LeaveHitBlendIn_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_daoguang_end
struct UBP_PlayerAnim_C_AnimNotify_daoguang_end_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_daoguang_start
struct UBP_PlayerAnim_C_AnimNotify_daoguang_start_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_EnterBlockHit
struct UBP_PlayerAnim_C_AnimNotify_EnterBlockHit_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_LeaveRealHit3
struct UBP_PlayerAnim_C_AnimNotify_LeaveRealHit3_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_LeaveRealHit2
struct UBP_PlayerAnim_C_AnimNotify_LeaveRealHit2_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_LeaveRealHit1
struct UBP_PlayerAnim_C_AnimNotify_LeaveRealHit1_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_EnterHit
struct UBP_PlayerAnim_C_AnimNotify_EnterHit_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_Enter_PuTongYiDong_To_ShiYongDaoJu
struct UBP_PlayerAnim_C_AnimNotify_Enter_PuTongYiDong_To_ShiYongDaoJu_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_Enter_ZhuiWei_To_CiShaZhong
struct UBP_PlayerAnim_C_AnimNotify_Enter_ZhuiWei_To_CiShaZhong_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_Enter_Grounded_To_CiSha
struct UBP_PlayerAnim_C_AnimNotify_Enter_Grounded_To_CiSha_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_Enter_YiDong_BlendIn_Reload
struct UBP_PlayerAnim_C_AnimNotify_Enter_YiDong_BlendIn_Reload_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_Enter_BlendIn_YiDong_To_MiaoZhun
struct UBP_PlayerAnim_C_AnimNotify_Enter_BlendIn_YiDong_To_MiaoZhun_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.AnimNotify_Enter_Shoot_Fire
struct UBP_PlayerAnim_C_AnimNotify_Enter_Shoot_Fire_Params
{
};

// Function BP_PlayerAnim.BP_PlayerAnim_C.ExecuteUbergraph_BP_PlayerAnim
struct UBP_PlayerAnim_C_ExecuteUbergraph_BP_PlayerAnim_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
