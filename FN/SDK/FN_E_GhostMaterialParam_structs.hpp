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

// UserDefinedStruct E_GhostMaterialParam.E_GhostMaterialParam
// 0x0018
struct FE_GhostMaterialParam
{
	struct FName                                       ParamName_12_7BBBFC27417E70F3B4247989B720B5D9;            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 Curve_8_CC05CC424473955C67D941A47C7AE5A0;                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           ColorCurve_11_E6EAC465450C0BEC8A6B1A9C1452A825;           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
