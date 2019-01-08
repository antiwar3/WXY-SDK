#pragma once

// Fortnite (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct E_GhostInfo.E_GhostInfo
// 0x0024
struct FE_GhostInfo
{
	class UMeshComponent*                              Ghost_9_C6BCF08E41BB0AF14D6855B4A18E182D;                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExistTime_3_8EB17EDC4E447CD9A3E7B295E0466783;             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DynamMaterial_6_D5FCC61C41B943A399084199875377B0;         // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrigScale_12_7393A3CD49D151F33B599DA0E42FE942;            // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
