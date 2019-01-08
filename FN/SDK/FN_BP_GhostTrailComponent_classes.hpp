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

// BlueprintGeneratedClass BP_GhostTrailComponent.BP_GhostTrailComponent_C
// 0x0068 (0x0158 - 0x00F0)
class UBP_GhostTrailComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               ActiveAtStart;                                            // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	float                                              GhostSpawnDelay;                                          // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GhostLifetime;                                            // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               GhostAllMeshes;                                           // 0x0104(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
	TArray<struct FName>                               TagsToGhost;                                              // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UMaterialInterface*                          GhostMaterial;                                            // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FE_GhostMaterialParam>               MatParams;                                                // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               ScaleOverTime;                                            // 0x0130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	class UCurveFloat*                                 ScaleCurve;                                               // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LastIsInvisible;                                          // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               VelocityDepending;                                        // 0x0141(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0142(0x0002) MISSED OFFSET
	float                                              VelocityThreshold;                                        // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ActiveTrail;                                              // 0x0148(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0149(0x0007) MISSED OFFSET
	class ABP_GhostTrailManager_C*                     GhostTrailManager;                                        // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GhostTrailComponent.BP_GhostTrailComponent_C");
		return ptr;
	}


	void GetTrailActive(bool* Active);
	void SetTrailActive(bool Active);
	bool MeshMustCastTrails(class USceneComponent* Component);
	void AddMeshesToGhost();
	void InitManager();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_GhostTrailComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
