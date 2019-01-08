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

// Function OpenBoxWidget.OpenBoxWidget_C.SetOpenBoxInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              BoxIcon                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              OpenBoxIcon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              KeyIcon                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            KeyNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BoxId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNeedKey                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOpenBoxWidget_C::SetOpenBoxInfo(class UTexture2D* BoxIcon, class UTexture2D* OpenBoxIcon, class UTexture2D* KeyIcon, int KeyNum, int BoxId, bool IsNeedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenBoxWidget.OpenBoxWidget_C.SetOpenBoxInfo");

	UOpenBoxWidget_C_SetOpenBoxInfo_Params params;
	params.BoxIcon = BoxIcon;
	params.OpenBoxIcon = OpenBoxIcon;
	params.KeyIcon = KeyIcon;
	params.KeyNum = KeyNum;
	params.BoxId = BoxId;
	params.IsNeedKey = IsNeedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenBoxWidget.OpenBoxWidget_C.BndEvt__Close_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOpenBoxWidget_C::BndEvt__Close_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenBoxWidget.OpenBoxWidget_C.BndEvt__Close_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature");

	UOpenBoxWidget_C_BndEvt__Close_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenBoxWidget.OpenBoxWidget_C.BndEvt__Open_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOpenBoxWidget_C::BndEvt__Open_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenBoxWidget.OpenBoxWidget_C.BndEvt__Open_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UOpenBoxWidget_C_BndEvt__Open_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenBoxWidget.OpenBoxWidget_C.SetBuyKeyInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              BoxIcon                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              OpenBoxIcon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              KeyIcon                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            KeyId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BoxId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOpenBoxWidget_C::SetBuyKeyInfo(class UTexture2D* BoxIcon, class UTexture2D* OpenBoxIcon, class UTexture2D* KeyIcon, int KeyId, int BoxId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenBoxWidget.OpenBoxWidget_C.SetBuyKeyInfo");

	UOpenBoxWidget_C_SetBuyKeyInfo_Params params;
	params.BoxIcon = BoxIcon;
	params.OpenBoxIcon = OpenBoxIcon;
	params.KeyIcon = KeyIcon;
	params.KeyId = KeyId;
	params.BoxId = BoxId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenBoxWidget.OpenBoxWidget_C.BndEvt__BuyKey_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOpenBoxWidget_C::BndEvt__BuyKey_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenBoxWidget.OpenBoxWidget_C.BndEvt__BuyKey_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UOpenBoxWidget_C_BndEvt__BuyKey_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenBoxWidget.OpenBoxWidget_C.GetItem
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBoxRewardItem>  items                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UOpenBoxWidget_C::GetItem(TArray<struct FBoxRewardItem> items)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenBoxWidget.OpenBoxWidget_C.GetItem");

	UOpenBoxWidget_C_GetItem_Params params;
	params.items = items;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenBoxWidget.OpenBoxWidget_C.BndEvt__Close1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOpenBoxWidget_C::BndEvt__Close1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenBoxWidget.OpenBoxWidget_C.BndEvt__Close1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UOpenBoxWidget_C_BndEvt__Close1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenBoxWidget.OpenBoxWidget_C.CheckNetWait
// (BlueprintCallable, BlueprintEvent)

void UOpenBoxWidget_C::CheckNetWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenBoxWidget.OpenBoxWidget_C.CheckNetWait");

	UOpenBoxWidget_C_CheckNetWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenBoxWidget.OpenBoxWidget_C.CheckGetKey
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            KeyId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            KeyNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOpenBoxWidget_C::CheckGetKey(int KeyId, int KeyNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenBoxWidget.OpenBoxWidget_C.CheckGetKey");

	UOpenBoxWidget_C_CheckGetKey_Params params;
	params.KeyId = KeyId;
	params.KeyNum = KeyNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenBoxWidget.OpenBoxWidget_C.SetRemindText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UOpenBoxWidget_C::SetRemindText(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenBoxWidget.OpenBoxWidget_C.SetRemindText");

	UOpenBoxWidget_C_SetRemindText_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenBoxWidget.OpenBoxWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOpenBoxWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenBoxWidget.OpenBoxWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UOpenBoxWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenBoxWidget.OpenBoxWidget_C.ShowTip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 detail                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UOpenBoxWidget_C::ShowTip(const struct FString& Name, const struct FString& detail)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenBoxWidget.OpenBoxWidget_C.ShowTip");

	UOpenBoxWidget_C_ShowTip_Params params;
	params.Name = Name;
	params.detail = detail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenBoxWidget.OpenBoxWidget_C.HideTip
// (BlueprintCallable, BlueprintEvent)

void UOpenBoxWidget_C::HideTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenBoxWidget.OpenBoxWidget_C.HideTip");

	UOpenBoxWidget_C_HideTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenBoxWidget.OpenBoxWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOpenBoxWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenBoxWidget.OpenBoxWidget_C.Tick");

	UOpenBoxWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenBoxWidget.OpenBoxWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOpenBoxWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenBoxWidget.OpenBoxWidget_C.Construct");

	UOpenBoxWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenBoxWidget.OpenBoxWidget_C.ExecuteUbergraph_OpenBoxWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOpenBoxWidget_C::ExecuteUbergraph_OpenBoxWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenBoxWidget.OpenBoxWidget_C.ExecuteUbergraph_OpenBoxWidget");

	UOpenBoxWidget_C_ExecuteUbergraph_OpenBoxWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
