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

// Function RewardItemHorizontalListWidget.RewardItemHorizontalListWidget_C.CreateRewardItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class URewardItemWidget_C*     NewItem                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URewardItemHorizontalListWidget_C::CreateRewardItem(int itemID, int Type, class UTexture2D* icon, int Level, class URewardItemWidget_C** NewItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardItemHorizontalListWidget.RewardItemHorizontalListWidget_C.CreateRewardItem");

	URewardItemHorizontalListWidget_C_CreateRewardItem_Params params;
	params.itemID = itemID;
	params.Type = Type;
	params.icon = icon;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewItem != nullptr)
		*NewItem = params.NewItem;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
