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

// Function BoxRewardItemWidget.BoxRewardItemWidget_C.CreateRewardItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RewardItem                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class URewardItemWidget_C*     NewItem                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBoxRewardItemWidget_C::CreateRewardItem(int RewardItem, int Type, class UTexture2D* icon, int Level, class URewardItemWidget_C** NewItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoxRewardItemWidget.BoxRewardItemWidget_C.CreateRewardItem");

	UBoxRewardItemWidget_C_CreateRewardItem_Params params;
	params.RewardItem = RewardItem;
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
