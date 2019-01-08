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

// Function OpenBoxRewardItemWidget.OpenBoxRewardItemWidget_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOpenBoxRewardItemWidget_C::Init(class UTexture2D* icon, int ID, int Type, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenBoxRewardItemWidget.OpenBoxRewardItemWidget_C.Init");

	UOpenBoxRewardItemWidget_C_Init_Params params;
	params.icon = icon;
	params.ID = ID;
	params.Type = Type;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenBoxRewardItemWidget.OpenBoxRewardItemWidget_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOpenBoxRewardItemWidget_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenBoxRewardItemWidget.OpenBoxRewardItemWidget_C.OnMouseLeave");

	UOpenBoxRewardItemWidget_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenBoxRewardItemWidget.OpenBoxRewardItemWidget_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOpenBoxRewardItemWidget_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenBoxRewardItemWidget.OpenBoxRewardItemWidget_C.OnMouseEnter");

	UOpenBoxRewardItemWidget_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenBoxRewardItemWidget.OpenBoxRewardItemWidget_C.ExecuteUbergraph_OpenBoxRewardItemWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOpenBoxRewardItemWidget_C::ExecuteUbergraph_OpenBoxRewardItemWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenBoxRewardItemWidget.OpenBoxRewardItemWidget_C.ExecuteUbergraph_OpenBoxRewardItemWidget");

	UOpenBoxRewardItemWidget_C_ExecuteUbergraph_OpenBoxRewardItemWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenBoxRewardItemWidget.OpenBoxRewardItemWidget_C.HideTips__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOpenBoxRewardItemWidget_C::HideTips__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenBoxRewardItemWidget.OpenBoxRewardItemWidget_C.HideTips__DelegateSignature");

	UOpenBoxRewardItemWidget_C_HideTips__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenBoxRewardItemWidget.OpenBoxRewardItemWidget_C.ShowTips__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 detail                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UOpenBoxRewardItemWidget_C::ShowTips__DelegateSignature(const struct FString& Name, const struct FString& detail)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenBoxRewardItemWidget.OpenBoxRewardItemWidget_C.ShowTips__DelegateSignature");

	UOpenBoxRewardItemWidget_C_ShowTips__DelegateSignature_Params params;
	params.Name = Name;
	params.detail = detail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
