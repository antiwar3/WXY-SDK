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

// UserDefinedStruct InviteResult.InviteResult
// 0x001C
struct FInviteResult
{
	int                                                InviteType_6_6D11AE684E08B2D40A70068801FE9E18;            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Name_5_57FFA16D41CC8E71FB466185F1779067;                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Result_9_BB4B9E7A41ED5B97F2A320A741BEC892;                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
