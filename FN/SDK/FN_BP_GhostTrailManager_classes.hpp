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

// BlueprintGeneratedClass BP_GhostTrailManager.BP_GhostTrailManager_C
// 0x00E0 (0x0408 - 0x0328)
class ABP_GhostTrailManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_GhostTrailComponent_C*                   GhostTrailOwnerComponent;                                 // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          GhostMaterial;                                            // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FE_GhostMaterialParam>               MatParams;                                                // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UStaticMeshComponent*>                StaticMeshCompsToTrail;                                   // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USkeletalMeshComponent*>              SkeletalMeshCompsToTrail;                                 // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Active;                                                   // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0379(0x0003) MISSED OFFSET
	float                                              GhostsLifetime;                                           // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               VelocityDepending;                                        // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0381(0x0003) MISSED OFFSET
	float                                              VelocityThreshold;                                        // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LastInvisible;                                            // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0389(0x0003) MISSED OFFSET
	float                                              GhostSpawnDelay;                                          // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GhostSpawnTimer;                                          // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0394(0x0004) MISSED OFFSET
	TArray<struct FE_GhostInfo>                        Ghosts;                                                   // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ScaleGhost;                                               // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	class UCurveFloat*                                 ScaleCurve;                                               // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             SkeletalVelocities;                                       // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             StaticVelocities;                                         // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             LastSkelLocations;                                        // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             LastStaticLocations;                                      // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    GhostSpawned;                                             // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GhostTrailManager.BP_GhostTrailManager_C");
		return ptr;
	}


	void AddMeshToTrail(class UMeshComponent* Mesh);
	void SetGhostMaterialParams(const struct FE_GhostInfo& Ghost);
	void CalcVelocities();
	void RevealLastGhosts();
	void UpdateGhostVisual(const struct FE_GhostInfo& GhostInfo);
	void SpawnGhosts();
	void UpdateGhostInfos();
	void SpawnSkeletalGhost(class USkeletalMeshComponent* MasterStaticMeshComponent, struct FE_GhostInfo* GhostInfo);
	void SpawnTimer();
	void SpawnStaticGhost(class UStaticMeshComponent* MasterStaticMeshComponent, struct FE_GhostInfo* GhostInfo);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_GhostTrailManager(int EntryPoint);
	void GhostSpawned__DelegateSignature(const struct FE_GhostInfo& GhostInfo);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
