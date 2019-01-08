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

// Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.CheckPage
// (Public, BlueprintCallable, BlueprintEvent)

void UOwnerItemHorizontalBoxWidget_C::CheckPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.CheckPage");

	UOwnerItemHorizontalBoxWidget_C_CheckPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.SetBoxWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ItemNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              BoxIcon                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              KeyIcon                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNeedKey                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasKey                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UOwnerItemBoxWidget_C*   RetBox                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOwnerItemHorizontalBoxWidget_C::SetBoxWidget(int itemID, const struct FString& Name, int ItemNum, class UTexture2D* BoxIcon, class UTexture2D* KeyIcon, bool IsNeedKey, bool HasKey, class UOwnerItemBoxWidget_C** RetBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.SetBoxWidget");

	UOwnerItemHorizontalBoxWidget_C_SetBoxWidget_Params params;
	params.itemID = itemID;
	params.Name = Name;
	params.ItemNum = ItemNum;
	params.BoxIcon = BoxIcon;
	params.KeyIcon = KeyIcon;
	params.IsNeedKey = IsNeedKey;
	params.HasKey = HasKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetBox != nullptr)
		*RetBox = params.RetBox;
}


// Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.AppendBox
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              KeyIcon                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNeedKey                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UOwnerItemBoxWidget_C*   RetBox                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOwnerItemHorizontalBoxWidget_C::AppendBox(int itemID, const struct FString& Name, int Num, class UTexture2D* icon, class UTexture2D* KeyIcon, bool IsNeedKey, class UOwnerItemBoxWidget_C** RetBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.AppendBox");

	UOwnerItemHorizontalBoxWidget_C_AppendBox_Params params;
	params.itemID = itemID;
	params.Name = Name;
	params.Num = Num;
	params.icon = icon;
	params.KeyIcon = KeyIcon;
	params.IsNeedKey = IsNeedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetBox != nullptr)
		*RetBox = params.RetBox;
}


// Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.CalculateLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOwnerItemHorizontalBoxWidget_C::CalculateLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.CalculateLocation");

	UOwnerItemHorizontalBoxWidget_C_CalculateLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.CreateNewBoxWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              KeyIcon                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNeedKey                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasKey                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UOwnerItemBoxWidget_C*   RetBox                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOwnerItemHorizontalBoxWidget_C::CreateNewBoxWidget(int itemID, const struct FString& Name, int Num, class UTexture2D* icon, class UTexture2D* KeyIcon, bool IsNeedKey, bool HasKey, class UOwnerItemBoxWidget_C** RetBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.CreateNewBoxWidget");

	UOwnerItemHorizontalBoxWidget_C_CreateNewBoxWidget_Params params;
	params.itemID = itemID;
	params.Name = Name;
	params.Num = Num;
	params.icon = icon;
	params.KeyIcon = KeyIcon;
	params.IsNeedKey = IsNeedKey;
	params.HasKey = HasKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetBox != nullptr)
		*RetBox = params.RetBox;
}


// Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOwnerItemHorizontalBoxWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.Tick");

	UOwnerItemHorizontalBoxWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.BndEvt__Left_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOwnerItemHorizontalBoxWidget_C::BndEvt__Left_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.BndEvt__Left_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UOwnerItemHorizontalBoxWidget_C_BndEvt__Left_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.BndEvt__Right_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOwnerItemHorizontalBoxWidget_C::BndEvt__Right_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.BndEvt__Right_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UOwnerItemHorizontalBoxWidget_C_BndEvt__Right_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.RemoveBox
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOwnerItemBoxWidget_C*   Box                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOwnerItemHorizontalBoxWidget_C::RemoveBox(class UOwnerItemBoxWidget_C* Box)
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.RemoveBox");

	UOwnerItemHorizontalBoxWidget_C_RemoveBox_Params params;
	params.Box = Box;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.Clear
// (BlueprintCallable, BlueprintEvent)

void UOwnerItemHorizontalBoxWidget_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.Clear");

	UOwnerItemHorizontalBoxWidget_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.SetValidPosition
// (BlueprintCallable, BlueprintEvent)

void UOwnerItemHorizontalBoxWidget_C::SetValidPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.SetValidPosition");

	UOwnerItemHorizontalBoxWidget_C_SetValidPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.ExecuteUbergraph_OwnerItemHorizontalBoxWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOwnerItemHorizontalBoxWidget_C::ExecuteUbergraph_OwnerItemHorizontalBoxWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.ExecuteUbergraph_OwnerItemHorizontalBoxWidget");

	UOwnerItemHorizontalBoxWidget_C_ExecuteUbergraph_OwnerItemHorizontalBoxWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.RemoveBoxItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOwnerItemHorizontalBoxWidget_C::RemoveBoxItem__DelegateSignature(int itemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.RemoveBoxItem__DelegateSignature");

	UOwnerItemHorizontalBoxWidget_C_RemoveBoxItem__DelegateSignature_Params params;
	params.itemID = itemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.NoBoxItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOwnerItemHorizontalBoxWidget_C::NoBoxItem__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OwnerItemHorizontalBoxWidget.OwnerItemHorizontalBoxWidget_C.NoBoxItem__DelegateSignature");

	UOwnerItemHorizontalBoxWidget_C_NoBoxItem__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
