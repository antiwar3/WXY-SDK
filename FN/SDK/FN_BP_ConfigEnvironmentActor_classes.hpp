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

// BlueprintGeneratedClass BP_ConfigEnvironmentActor.BP_ConfigEnvironmentActor_C
// 0x0010 (0x0340 - 0x0330)
class ABP_ConfigEnvironmentActor_C : public AConfigEnvironmentActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ConfigEnvironmentActor.BP_ConfigEnvironmentActor_C");
		return ptr;
	}


	void UserConstructionScript();
	void EffectSoundVolume();
	void ExecuteUbergraph_BP_ConfigEnvironmentActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
