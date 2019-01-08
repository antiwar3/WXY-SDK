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

// BlueprintGeneratedClass BP_Paradrop.BP_Paradrop_C
// 0x0020 (0x0398 - 0x0378)
class ABP_Paradrop_C : public AWuXiaParadrop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsLoop;                                                   // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0391(0x0003) MISSED OFFSET
	float                                              InteractiveRange;                                         // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Paradrop.BP_Paradrop_C");
		return ptr;
	}


	EInteractiveType GetInteractiveType(class AWuXiaXCharacter** Player);
	bool InteractiveUITips(class AWuXiaXCharacter** Player, struct FText* Text);
	bool CanInteractive(class AWuXiaXCharacter** Player, ETriggerInteractiveType* Trigger);
	void UserConstructionScript();
	void PlaySound();
	void StopSound();
	void ExecuteUbergraph_BP_Paradrop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
