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

// Function JiHuoMaRewardWidget.JiHuoMaRewardWidget_C.SetFrontItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UJiHuoMaRewardWidget_C::SetFrontItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function JiHuoMaRewardWidget.JiHuoMaRewardWidget_C.SetFrontItem");

	UJiHuoMaRewardWidget_C_SetFrontItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JiHuoMaRewardWidget.JiHuoMaRewardWidget_C.SendJiHuoInfo
// (BlueprintCallable, BlueprintEvent)

void UJiHuoMaRewardWidget_C::SendJiHuoInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function JiHuoMaRewardWidget.JiHuoMaRewardWidget_C.SendJiHuoInfo");

	UJiHuoMaRewardWidget_C_SendJiHuoInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JiHuoMaRewardWidget.JiHuoMaRewardWidget_C.Timeout
// (BlueprintCallable, BlueprintEvent)

void UJiHuoMaRewardWidget_C::Timeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function JiHuoMaRewardWidget.JiHuoMaRewardWidget_C.Timeout");

	UJiHuoMaRewardWidget_C_Timeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JiHuoMaRewardWidget.JiHuoMaRewardWidget_C.RemindPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UJiHuoMaRewardWidget_C::RemindPlayer(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function JiHuoMaRewardWidget.JiHuoMaRewardWidget_C.RemindPlayer");

	UJiHuoMaRewardWidget_C_RemindPlayer_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JiHuoMaRewardWidget.JiHuoMaRewardWidget_C.AppendRewardItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UJiHuoMaRewardWidget_C::AppendRewardItem(class UTexture2D* icon, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function JiHuoMaRewardWidget.JiHuoMaRewardWidget_C.AppendRewardItem");

	UJiHuoMaRewardWidget_C_AppendRewardItem_Params params;
	params.icon = icon;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JiHuoMaRewardWidget.JiHuoMaRewardWidget_C.BndEvt__Sure_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UJiHuoMaRewardWidget_C::BndEvt__Sure_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function JiHuoMaRewardWidget.JiHuoMaRewardWidget_C.BndEvt__Sure_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature");

	UJiHuoMaRewardWidget_C_BndEvt__Sure_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JiHuoMaRewardWidget.JiHuoMaRewardWidget_C.BndEvt__Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UJiHuoMaRewardWidget_C::BndEvt__Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function JiHuoMaRewardWidget.JiHuoMaRewardWidget_C.BndEvt__Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UJiHuoMaRewardWidget_C_BndEvt__Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JiHuoMaRewardWidget.JiHuoMaRewardWidget_C.ExecuteUbergraph_JiHuoMaRewardWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UJiHuoMaRewardWidget_C::ExecuteUbergraph_JiHuoMaRewardWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function JiHuoMaRewardWidget.JiHuoMaRewardWidget_C.ExecuteUbergraph_JiHuoMaRewardWidget");

	UJiHuoMaRewardWidget_C_ExecuteUbergraph_JiHuoMaRewardWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
