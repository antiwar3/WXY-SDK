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

// BlueprintGeneratedClass BP_WuXiaHorse.BP_WuXiaHorse_C
// 0x0021 (0x0811 - 0x07F0)
class ABP_WuXiaHorse_C : public AWuXiaXHorse
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCableComponent*                             Cable_R;                                                  // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCableComponent*                             Cable_C;                                                  // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCableComponent*                             Cable_L;                                                  // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsRide_;                                                  // 0x0810(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WuXiaHorse.BP_WuXiaHorse_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void CE_CharacterEnter();
	void CE_CharacterLeave();
	void ExecuteUbergraph_BP_WuXiaHorse(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
