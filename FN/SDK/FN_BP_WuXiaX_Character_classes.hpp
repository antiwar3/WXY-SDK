#pragma once

// Fortnite (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WuXiaX_Character.BP_WuXiaX_Character_C
// 0x0188 (0x1218 - 0x1090)
class ABP_WuXiaX_Character_C : public AWuXiaXCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1090(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            Widget;                                                   // 0x1098(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialBillboardComponent*                 MaterialBillboard;                                        // 0x10A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            PlayerFightState;                                         // 0x10A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_GhostTrailComponent_C*                   BP_GhostTrailComponent;                                   // 0x10B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow3;                                                   // 0x10B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow2;                                                   // 0x10C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow1;                                                   // 0x10C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Time_HeiPin_Time_F4CF978C4B7CE648146547A10C112B04;        // 0x10D0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Time_HeiPin__Direction_F4CF978C4B7CE648146547A10C112B04;  // 0x10D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x10D5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Time_HeiPin;                                              // 0x10D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FreeBack_Value_6AEE00E34B1F08B301A30A838AE01CC4;          // 0x10E0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FreeBack__Direction_6AEE00E34B1F08B301A30A838AE01CC4;     // 0x10E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x10E5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FreeBack;                                                 // 0x10E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PostBloodTime_Value_E0444E4B4CC5B56F71A79581B8D7D35E;     // 0x10F0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    PostBloodTime__Direction_E0444E4B4CC5B56F71A79581B8D7D35E;// 0x10F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x10F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          PostBloodTime;                                            // 0x10F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TimeLine_XuRuo_Value_2_5E50A2294FB9486355AEDEA8520DCE87;  // 0x1100(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeLine_XuRuo_Value_1_5E50A2294FB9486355AEDEA8520DCE87;  // 0x1104(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeLine_XuRuo_Value_0_5E50A2294FB9486355AEDEA8520DCE87;  // 0x1108(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TimeLine_XuRuo__Direction_5E50A2294FB9486355AEDEA8520DCE87;// 0x110C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x110D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TimeLine_XuRuo;                                           // 0x1110(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x1118(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowingSwordEffect;                                       // 0x1124(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x1125(0x0003) MISSED OFFSET
	class ULockPoint_C*                                LockPoint;                                                // 0x1128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAssassinationTipWidget_C*                   AssassinationTip;                                         // 0x1130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBP_PlayerAnim_C*                            AnimInstance;                                             // 0x1138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKFeetInterpSpeed;                                        // 0x1140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKHipsInterpSpeed;                                        // 0x1144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaSeconds;                                             // 0x1148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKCapsuleHalfHeight;                                      // 0x114C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IKOptimization;                                           // 0x1150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x1151(0x0003) MISSED OFFSET
	float                                              IKTrcaeDistance;                                          // 0x1154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LeftFootSocket;                                           // 0x1158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RightFootSocket;                                          // 0x1160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKAdjustOffset;                                           // 0x1168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKTimeout;                                                // 0x116C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKCapsuleHalfHeight_Save;                                 // 0x1170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrGhostCount;                                           // 0x1174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      Parachue_Skeletal_Component_2;                            // 0x1178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Parachue_Skeletal_Component_3;                            // 0x1180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               IsPressSet;                                               // 0x1188(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x1189(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Post_Blood;                                               // 0x1190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             Sound_XinTiao;                                            // 0x1198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Sound_XuRuo;                                              // 0x11A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TMap<int, class UParticleSystemComponent*>         BuffEffect;                                               // 0x11A8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     PreLocation;                                              // 0x11F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrLocation;                                             // 0x1204(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_WuXiaX_PlayerController_C*               WuXiaXPlayerController;                                   // 0x1210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WuXiaX_Character.BP_WuXiaX_Character_C");
		return ptr;
	}


	void CheckShowHeadBillboard();
	void PlayerSkillAttack(EInputAttackType index, bool ispress, EPlayerInputType input_type);
	void GetAIID();
	void SwordEffectTick();
	void UserConstructionScript();
	void TimeLine_XuRuo__FinishedFunc();
	void TimeLine_XuRuo__UpdateFunc();
	void PostBloodTime__FinishedFunc();
	void PostBloodTime__UpdateFunc();
	void FreeBack__FinishedFunc();
	void FreeBack__UpdateFunc();
	void Time_HeiPin__FinishedFunc();
	void Time_HeiPin__UpdateFunc();
	void InpActEvt_LastPlayer_K2Node_InputActionEvent_20(const struct FKey& Key);
	void InpActEvt_NextPlayer_K2Node_InputActionEvent_19(const struct FKey& Key);
	void InpActEvt_SwitchShowCharacter_K2Node_InputActionEvent_18(const struct FKey& Key);
	void InpActEvt_ThrowWeapon_K2Node_InputActionEvent_17(const struct FKey& Key);
	void InpActEvt_FarWeapon_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_WeaponTwo_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_WeaponOne_K2Node_InputActionEvent_14(const struct FKey& Key);
	void OnNotifyEnd_90B6CFA54DB0EC5D9C003B8D17FA1BD4(const struct FName& NotifyName);
	void OnNotifyBegin_90B6CFA54DB0EC5D9C003B8D17FA1BD4(const struct FName& NotifyName);
	void OnInterrupted_90B6CFA54DB0EC5D9C003B8D17FA1BD4(const struct FName& NotifyName);
	void OnBlendOut_90B6CFA54DB0EC5D9C003B8D17FA1BD4(const struct FName& NotifyName);
	void OnCompleted_90B6CFA54DB0EC5D9C003B8D17FA1BD4(const struct FName& NotifyName);
	void InpActEvt_Explosion_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_NormalAttack_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_NormalAttack_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_UseItemThree_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_UseItemTwo_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_UseItemOne_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_SkillThree_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_SkillThree_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_SkillTwo_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_SkillTwo_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_SkillOne_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_SkillOne_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_HeavyAttack_K2Node_InputActionEvent_1(const struct FKey& Key);
	void DemoTick(float dt);
	void Server_outputa();
	void Serve_TestAn();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void Show_GhostTrail();
	void Show_GhostTrails();
	void Anim_BeginParachueJump();
	void Anim_BeginParachuteGliding();
	void Anim_EndParachuteGliding();
	void CreateParachu();
	void Event_XuRuo_Enter();
	void Event_XuRuo_Leave();
	void Event_SetPostBlood(float CurrHealth, float MaxHealth);
	void Anim_BeginEffect(int* effecttype);
	void Anim_EndEffect(int* effecttype);
	void CE_ShowShanBiEffect();
	void FreeViewTurnBack();
	void FreeViewStopTurnBack();
	void CE_JiaSu_Begin();
	void CE_JiaSu_End();
	void ShowAnimus(int* index);
	void SetBlackScreenState(bool* State);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void CheckLockPointDeath(class AActor** Enemy);
	void ChangeAssassinationUIText();
	void HideAssassinationTipUI();
	void ShowAssassinationTipUI(class AActor** Target);
	void HideLockTargetUI();
	void ShowLockTargetUI(class AActor** Target);
	void WeaponSwitch(int Value);
	void PlayBlockEffect();
	void PlayClientAttackEffect(float* Angle);
	void PlayBeAttackEffect();
	void PlayAttackEffect();
	void Bom_Montage_Play(class USkeletalMeshComponent** SkeletalMesh, class UAnimMontage** MontageToPlay, float* delay_time, struct FName* section_name);
	void CE_SetCameraSocketOffset(const struct FVector& Vector, float Speed);
	void CE_SetCameraLength(float In_X, const struct FVector& In_YZ, float Speed, float FieldValue);
	void CE_SetCameraLagSpeed(float Value, float Speed);
	void ExecuteUbergraph_BP_WuXiaX_Character(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
