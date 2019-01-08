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

// Function BoxRewardItemPreviewWidget.BoxRewardItemPreviewWidget_C.ClearRewardItem
// (Public, BlueprintCallable, BlueprintEvent)

void UBoxRewardItemPreviewWidget_C::ClearRewardItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoxRewardItemPreviewWidget.BoxRewardItemPreviewWidget_C.ClearRewardItem");

	UBoxRewardItemPreviewWidget_C_ClearRewardItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoxRewardItemPreviewWidget.BoxRewardItemPreviewWidget_C.CreateRewardItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RewardItem                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class URewardItemWidget_C*     RetVal                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBoxRewardItemPreviewWidget_C::CreateRewardItem(int RewardItem, int Type, class UTexture2D* icon, int Level, class URewardItemWidget_C** RetVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoxRewardItemPreviewWidget.BoxRewardItemPreviewWidget_C.CreateRewardItem");

	UBoxRewardItemPreviewWidget_C_CreateRewardItem_Params params;
	params.RewardItem = RewardItem;
	params.Type = Type;
	params.icon = icon;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetVal != nullptr)
		*RetVal = params.RetVal;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
