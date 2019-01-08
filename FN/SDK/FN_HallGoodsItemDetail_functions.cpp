// Fortnite (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HallGoodsItemDetail.HallGoodsItemDetail_C.SetItemInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 descript                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UHallGoodsItemDetail_C::SetItemInfo(const struct FString& Name, const struct FString& descript)
{
	static auto fn = UObject::FindObject<UFunction>("Function HallGoodsItemDetail.HallGoodsItemDetail_C.SetItemInfo");

	UHallGoodsItemDetail_C_SetItemInfo_Params params;
	params.Name = Name;
	params.descript = descript;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HallGoodsItemDetail.HallGoodsItemDetail_C.ExecuteUbergraph_HallGoodsItemDetail
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHallGoodsItemDetail_C::ExecuteUbergraph_HallGoodsItemDetail(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HallGoodsItemDetail.HallGoodsItemDetail_C.ExecuteUbergraph_HallGoodsItemDetail");

	UHallGoodsItemDetail_C_ExecuteUbergraph_HallGoodsItemDetail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
