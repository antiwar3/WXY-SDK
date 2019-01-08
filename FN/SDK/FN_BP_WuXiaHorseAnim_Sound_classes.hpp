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

// AnimBlueprintGeneratedClass BP_WuXiaHorseAnim_Sound.BP_WuXiaHorseAnim_Sound_C
// 0x006C (0x35E0 - 0x3574)
class UBP_WuXiaHorseAnim_Sound_C : public UBP_WuXiaHorseAnim_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x3574(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x3578(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class USoundBase*>                          SoundArray_Footstep_Def;                                  // 0x3580(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          SoundArray_Footstep_Grass;                                // 0x3590(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          SoundArray_Footstep_Desert;                               // 0x35A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          SoundArray_Footstep_Snow;                                 // 0x35B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          SoundArray_Footstep_Wet;                                  // 0x35C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          SoundArray_Footstep_Rock;                                 // 0x35D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_WuXiaHorseAnim_Sound.BP_WuXiaHorseAnim_Sound_C");
		return ptr;
	}


	void AnimNotify_Sound_Footstep();
	void ExecuteUbergraph_BP_WuXiaHorseAnim_Sound(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
