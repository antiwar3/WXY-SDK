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

// Function RewardItemWidget.RewardItemWidget_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URewardItemWidget_C::Init(int itemID, int Type, class UTexture2D* icon, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardItemWidget.RewardItemWidget_C.Init");

	URewardItemWidget_C_Init_Params params;
	params.itemID = itemID;
	params.Type = Type;
	params.icon = icon;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardItemWidget.RewardItemWidget_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void URewardItemWidget_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardItemWidget.RewardItemWidget_C.OnMouseEnter");

	URewardItemWidget_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardItemWidget.RewardItemWidget_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void URewardItemWidget_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardItemWidget.RewardItemWidget_C.OnMouseLeave");

	URewardItemWidget_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardItemWidget.RewardItemWidget_C.ExecuteUbergraph_RewardItemWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URewardItemWidget_C::ExecuteUbergraph_RewardItemWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardItemWidget.RewardItemWidget_C.ExecuteUbergraph_RewardItemWidget");

	URewardItemWidget_C_ExecuteUbergraph_RewardItemWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardItemWidget.RewardItemWidget_C.HideItemDetail__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void URewardItemWidget_C::HideItemDetail__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardItemWidget.RewardItemWidget_C.HideItemDetail__DelegateSignature");

	URewardItemWidget_C_HideItemDetail__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardItemWidget.RewardItemWidget_C.ShowItemDetail__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URewardItemWidget_C::ShowItemDetail__DelegateSignature(int itemID, int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardItemWidget.RewardItemWidget_C.ShowItemDetail__DelegateSignature");

	URewardItemWidget_C_ShowItemDetail__DelegateSignature_Params params;
	params.itemID = itemID;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
