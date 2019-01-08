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

// AnimBlueprintGeneratedClass BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C
// 0x0190 (0x1F050 - 0x1EEC0)
class UBP_PlayerAnim_Sound_C : public UBP_PlayerAnim_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1EEC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                Sound_Body_Tpye;                                          // 0x1EEC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x1EECC(0x0004) MISSED OFFSET
	TArray<class USoundBase*>                          Footstep_Grass;                                           // 0x1EED0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          Footstep_Desert;                                          // 0x1EEE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          Footstep_Snow;                                            // 0x1EEF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          Footstep_Rock;                                            // 0x1EF00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          Footstep_Wet;                                             // 0x1EF10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          Footstep_Wood;                                            // 0x1EF20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          Footstep_Tile;                                            // 0x1EF30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          SoundArray_Body_Skin;                                     // 0x1EF40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          SoundArray_Body_Cloth;                                    // 0x1EF50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          SoundArray_Body_Leath;                                    // 0x1EF60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          SoundArray_Body_Armor;                                    // 0x1EF70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          SoundArray_Hit_Male;                                      // 0x1EF80(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class USoundBase*>                          SoundArray_Body_Cloth_Loud;                               // 0x1EF90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          SoundArray_Body_Armor_Loud;                               // 0x1EFA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          SoundArray_Hit_Weapon;                                    // 0x1EFB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          SoundArray_Hit_Blood;                                     // 0x1EFC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          SoundArray_Death_Male;                                    // 0x1EFD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          SoundArray_Male_Attack;                                   // 0x1EFE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          SoundArray_Female_Attack;                                 // 0x1EFF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          SoundArray_Male_Attack_High;                              // 0x1F000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          SoundArray_Hit_Female;                                    // 0x1F010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class USoundBase*>                          SoundArray_Death_Female;                                  // 0x1F020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          SoundArray_Swim;                                          // 0x1F030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAudioComponent*                             Sound_XuRuo;                                              // 0x1F040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Sound_Wind;                                               // 0x1F048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_PlayerAnim_Sound.BP_PlayerAnim_Sound_C");
		return ptr;
	}


	void SelectBySexType(TArray<class USoundBase*>* Male_Sound, TArray<class USoundBase*>* Female_Sound, TArray<class USoundBase*>* OutSound);
	void AnimNotify_Sound_Body();
	void AnimNotify_Sound_Footstep();
	void AnimNotify_EnterHitBlendIn();
	void AnimNotify_Sound_Body_Loud();
	void AnimNotify_BlendIn_Jump();
	void AnimNotify_Damage_1();
	void AnimNotify_Damage_2();
	void AnimNotify_Damage_3();
	void AnimNotify_BlendIn_BinSi_Begin();
	void AnimNotify_Show_Ghost();
	void AnimNotify_Show_Ghost_More();
	void AnimNotify_SwimSound();
	void AnimNotify_Sound_HorseSpeed();
	void AnimNotify_EnterBlockHit();
	void AnimNotify_Enter_XuanYun();
	void BlueprintBeginPlay();
	void AnimNotify_Enter_DengJi();
	void AnimNotify_Enter_JiangLuo();
	void Event_Leave_Par();
	void ExecuteUbergraph_BP_PlayerAnim_Sound(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
