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

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ResetPreviewState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::ResetPreviewState(int Type, bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ResetPreviewState");

	UPlayerConfigItemWidget_C_ResetPreviewState_Params params;
	params.Type = Type;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SetSkinFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SkinId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture2D                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::SetSkinFunc(int Type, int SkinId, class UTexture2D* Texture2D)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SetSkinFunc");

	UPlayerConfigItemWidget_C_SetSkinFunc_Params params;
	params.Type = Type;
	params.SkinId = SkinId;
	params.Texture2D = Texture2D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SingleEquipItemToggle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBagType                       bagtype                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::SingleEquipItemToggle(int itemID, EBagType bagtype, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SingleEquipItemToggle");

	UPlayerConfigItemWidget_C_SingleEquipItemToggle_Params params;
	params.itemID = itemID;
	params.bagtype = bagtype;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.GetSkinBox
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UScrollBox*              RetBox                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPlayerConfigItemWidget_C::GetSkinBox(int Type, class UScrollBox** RetBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.GetSkinBox");

	UPlayerConfigItemWidget_C_GetSkinBox_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetBox != nullptr)
		*RetBox = params.RetBox;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SkinRemove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SkinId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::SkinRemove(int SkinId, int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SkinRemove");

	UPlayerConfigItemWidget_C_SkinRemove_Params params;
	params.SkinId = SkinId;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.AppendSkin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::AppendSkin(int ID, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.AppendSkin");

	UPlayerConfigItemWidget_C_AppendSkin_Params params;
	params.ID = ID;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.AppendItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::AppendItem(int ID, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.AppendItem");

	UPlayerConfigItemWidget_C_AppendItem_Params params;
	params.ID = ID;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.CheckPreview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::CheckPreview(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.CheckPreview");

	UPlayerConfigItemWidget_C_CheckPreview_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.GetPreviewArray
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int>                    RetArray                       (Parm, OutParm, ZeroConstructor)

void UPlayerConfigItemWidget_C::GetPreviewArray(TArray<int>* RetArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.GetPreviewArray");

	UPlayerConfigItemWidget_C_GetPreviewArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetArray != nullptr)
		*RetArray = params.RetArray;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ResetPreview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Preview                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::ResetPreview(int Type, bool Preview)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ResetPreview");

	UPlayerConfigItemWidget_C_ResetPreview_Params params;
	params.Type = Type;
	params.Preview = Preview;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SetSkinToggle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SkinId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::SetSkinToggle(int Type, int SkinId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SetSkinToggle");

	UPlayerConfigItemWidget_C_SetSkinToggle_Params params;
	params.Type = Type;
	params.SkinId = SkinId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.CreateSkin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SkinId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESexType                       sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::CreateSkin(int SkinId, int Type, class UTexture2D* icon, int Num, ESexType sex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.CreateSkin");

	UPlayerConfigItemWidget_C_CreateSkin_Params params;
	params.SkinId = SkinId;
	params.Type = Type;
	params.icon = icon;
	params.Num = Num;
	params.sex = sex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.GetSkinWidgetByType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkinWidget_C*           SkinWidget                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPlayerConfigItemWidget_C::GetSkinWidgetByType(int Type, class USkinWidget_C** SkinWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.GetSkinWidgetByType");

	UPlayerConfigItemWidget_C_GetSkinWidgetByType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkinWidget != nullptr)
		*SkinWidget = params.SkinWidget;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ResetEquipToNet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBagType                       bagtype                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            newID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::ResetEquipToNet(EBagType bagtype, int index, int newID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ResetEquipToNet");

	UPlayerConfigItemWidget_C_ResetEquipToNet_Params params;
	params.bagtype = bagtype;
	params.index = index;
	params.newID = newID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.EquipTypeToDistribution
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemEquipType                 equiptype                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESexType                       sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UTexture2D*              Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::EquipTypeToDistribution(EItemEquipType equiptype, int itemID, ESexType sex, int Num, int Level, const struct FString& Name, class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.EquipTypeToDistribution");

	UPlayerConfigItemWidget_C_EquipTypeToDistribution_Params params;
	params.equiptype = equiptype;
	params.itemID = itemID;
	params.sex = sex;
	params.Num = Num;
	params.Level = Level;
	params.Name = Name;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__AllItemButton_K2Node_ComponentBoundEvent_495_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__AllItemButton_K2Node_ComponentBoundEvent_495_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__AllItemButton_K2Node_ComponentBoundEvent_495_OnButtonHoverEvent__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__AllItemButton_K2Node_ComponentBoundEvent_495_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__AllItemButton_K2Node_ComponentBoundEvent_508_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__AllItemButton_K2Node_ComponentBoundEvent_508_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__AllItemButton_K2Node_ComponentBoundEvent_508_OnButtonHoverEvent__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__AllItemButton_K2Node_ComponentBoundEvent_508_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__AllItemButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__AllItemButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__AllItemButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__AllItemButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerConfigItemWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.Construct");

	UPlayerConfigItemWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__VeilItemButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__VeilItemButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__VeilItemButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__VeilItemButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__VeilItemButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__VeilItemButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__VeilItemButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__VeilItemButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__VeilItemButton_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__VeilItemButton_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__VeilItemButton_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__VeilItemButton_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__JacketItemButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__JacketItemButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__JacketItemButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__JacketItemButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__JacketItemButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__JacketItemButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__JacketItemButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__JacketItemButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__JacketItemButton_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__JacketItemButton_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__JacketItemButton_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__JacketItemButton_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ShawlItemButton_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__ShawlItemButton_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ShawlItemButton_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__ShawlItemButton_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ShawlItemButton_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__ShawlItemButton_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ShawlItemButton_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__ShawlItemButton_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ShawlItemButton_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__ShawlItemButton_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ShawlItemButton_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__ShawlItemButton_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__TrousersItemButton_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__TrousersItemButton_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__TrousersItemButton_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__TrousersItemButton_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__TrousersItemButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__TrousersItemButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__TrousersItemButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__TrousersItemButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__TrousersItemButton_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__TrousersItemButton_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__TrousersItemButton_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__TrousersItemButton_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__BootsItemButton_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__BootsItemButton_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__BootsItemButton_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__BootsItemButton_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__BootsItemButton_K2Node_ComponentBoundEvent_43_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__BootsItemButton_K2Node_ComponentBoundEvent_43_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__BootsItemButton_K2Node_ComponentBoundEvent_43_OnButtonHoverEvent__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__BootsItemButton_K2Node_ComponentBoundEvent_43_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__BootsItemButton_K2Node_ComponentBoundEvent_44_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__BootsItemButton_K2Node_ComponentBoundEvent_44_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__BootsItemButton_K2Node_ComponentBoundEvent_44_OnButtonHoverEvent__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__BootsItemButton_K2Node_ComponentBoundEvent_44_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ResetAllEquipItemToggle
// (BlueprintCallable, BlueprintEvent)

void UPlayerConfigItemWidget_C::ResetAllEquipItemToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ResetAllEquipItemToggle");

	UPlayerConfigItemWidget_C_ResetAllEquipItemToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__SkinButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__SkinButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__WeaponButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__WeaponButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__WeaponButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__WeaponButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.CreateItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESexType                       sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerConfigItemWidget_C::CreateItem(int itemID, int Num, ESexType sex, class UTexture2D* Texture, int Level, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.CreateItem");

	UPlayerConfigItemWidget_C_CreateItem_Params params;
	params.itemID = itemID;
	params.Num = Num;
	params.sex = sex;
	params.Texture = Texture;
	params.Level = Level;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ItemChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            item_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBagType                       bag_type                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::ItemChange(int item_id, EBagType bag_type, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ItemChange");

	UPlayerConfigItemWidget_C_ItemChange_Params params;
	params.item_id = item_id;
	params.bag_type = bag_type;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.EquipDetailShow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 detail                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ItemLevel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::EquipDetailShow(const struct FString& Name, const struct FString& detail, int ItemLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.EquipDetailShow");

	UPlayerConfigItemWidget_C_EquipDetailShow_Params params;
	params.Name = Name;
	params.detail = detail;
	params.ItemLevel = ItemLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.InitEquip
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    equips                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPlayerConfigItemWidget_C::InitEquip(TArray<int> equips)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.InitEquip");

	UPlayerConfigItemWidget_C_InitEquip_Params params;
	params.equips = equips;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ClearAllItem
// (BlueprintCallable, BlueprintEvent)

void UPlayerConfigItemWidget_C::ClearAllItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ClearAllItem");

	UPlayerConfigItemWidget_C_ClearAllItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ResetLanguageName
// (BlueprintCallable, BlueprintEvent)

void UPlayerConfigItemWidget_C::ResetLanguageName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ResetLanguageName");

	UPlayerConfigItemWidget_C_ResetLanguageName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__Hat1SkinWidget_K2Node_ComponentBoundEvent_0_Onclick__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__Hat1SkinWidget_K2Node_ComponentBoundEvent_0_Onclick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__Hat1SkinWidget_K2Node_ComponentBoundEvent_0_Onclick__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__Hat1SkinWidget_K2Node_ComponentBoundEvent_0_Onclick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__Hat2SkinWidget_K2Node_ComponentBoundEvent_1_Onclick__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__Hat2SkinWidget_K2Node_ComponentBoundEvent_1_Onclick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__Hat2SkinWidget_K2Node_ComponentBoundEvent_1_Onclick__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__Hat2SkinWidget_K2Node_ComponentBoundEvent_1_Onclick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__Hat3SkinWidget_K2Node_ComponentBoundEvent_99_Onclick__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__Hat3SkinWidget_K2Node_ComponentBoundEvent_99_Onclick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__Hat3SkinWidget_K2Node_ComponentBoundEvent_99_Onclick__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__Hat3SkinWidget_K2Node_ComponentBoundEvent_99_Onclick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__BowSkinWidget_K2Node_ComponentBoundEvent_100_Onclick__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__BowSkinWidget_K2Node_ComponentBoundEvent_100_Onclick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__BowSkinWidget_K2Node_ComponentBoundEvent_100_Onclick__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__BowSkinWidget_K2Node_ComponentBoundEvent_100_Onclick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__CrossSkinWidget_K2Node_ComponentBoundEvent_137_Onclick__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__CrossSkinWidget_K2Node_ComponentBoundEvent_137_Onclick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__CrossSkinWidget_K2Node_ComponentBoundEvent_137_Onclick__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__CrossSkinWidget_K2Node_ComponentBoundEvent_137_Onclick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__HuoChongSkinWidget_K2Node_ComponentBoundEvent_174_Onclick__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__HuoChongSkinWidget_K2Node_ComponentBoundEvent_174_Onclick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__HuoChongSkinWidget_K2Node_ComponentBoundEvent_174_Onclick__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__HuoChongSkinWidget_K2Node_ComponentBoundEvent_174_Onclick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__SanYanChongSkinWidget_K2Node_ComponentBoundEvent_212_Onclick__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__SanYanChongSkinWidget_K2Node_ComponentBoundEvent_212_Onclick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__SanYanChongSkinWidget_K2Node_ComponentBoundEvent_212_Onclick__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__SanYanChongSkinWidget_K2Node_ComponentBoundEvent_212_Onclick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__DanDaoSkinWidget_K2Node_ComponentBoundEvent_251_Onclick__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__DanDaoSkinWidget_K2Node_ComponentBoundEvent_251_Onclick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__DanDaoSkinWidget_K2Node_ComponentBoundEvent_251_Onclick__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__DanDaoSkinWidget_K2Node_ComponentBoundEvent_251_Onclick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__DanJianSkinWidget_K2Node_ComponentBoundEvent_291_Onclick__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__DanJianSkinWidget_K2Node_ComponentBoundEvent_291_Onclick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__DanJianSkinWidget_K2Node_ComponentBoundEvent_291_Onclick__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__DanJianSkinWidget_K2Node_ComponentBoundEvent_291_Onclick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ShuangCiSkinWidget_K2Node_ComponentBoundEvent_332_Onclick__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__ShuangCiSkinWidget_K2Node_ComponentBoundEvent_332_Onclick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ShuangCiSkinWidget_K2Node_ComponentBoundEvent_332_Onclick__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__ShuangCiSkinWidget_K2Node_ComponentBoundEvent_332_Onclick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ShuangJianSkinWidget_K2Node_ComponentBoundEvent_374_Onclick__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__ShuangJianSkinWidget_K2Node_ComponentBoundEvent_374_Onclick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ShuangJianSkinWidget_K2Node_ComponentBoundEvent_374_Onclick__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__ShuangJianSkinWidget_K2Node_ComponentBoundEvent_374_Onclick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ChangDaoSkinWidget_K2Node_ComponentBoundEvent_417_Onclick__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__ChangDaoSkinWidget_K2Node_ComponentBoundEvent_417_Onclick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ChangDaoSkinWidget_K2Node_ComponentBoundEvent_417_Onclick__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__ChangDaoSkinWidget_K2Node_ComponentBoundEvent_417_Onclick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ChangJianSkinWidget_K2Node_ComponentBoundEvent_461_Onclick__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__ChangJianSkinWidget_K2Node_ComponentBoundEvent_461_Onclick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ChangJianSkinWidget_K2Node_ComponentBoundEvent_461_Onclick__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__ChangJianSkinWidget_K2Node_ComponentBoundEvent_461_Onclick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ZhongJianSkinWidget_K2Node_ComponentBoundEvent_507_Onclick__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__ZhongJianSkinWidget_K2Node_ComponentBoundEvent_507_Onclick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ZhongJianSkinWidget_K2Node_ComponentBoundEvent_507_Onclick__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__ZhongJianSkinWidget_K2Node_ComponentBoundEvent_507_Onclick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ChangQiangSkinWidget_K2Node_ComponentBoundEvent_554_Onclick__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__ChangQiangSkinWidget_K2Node_ComponentBoundEvent_554_Onclick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ChangQiangSkinWidget_K2Node_ComponentBoundEvent_554_Onclick__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__ChangQiangSkinWidget_K2Node_ComponentBoundEvent_554_Onclick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SetSkinByPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SkinId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::SetSkinByPlayer(int Type, int SkinId, class UTexture2D* icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SetSkinByPlayer");

	UPlayerConfigItemWidget_C_SetSkinByPlayer_Params params;
	params.Type = Type;
	params.SkinId = SkinId;
	params.icon = icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.OnclickSkinChild
// (BlueprintCallable, BlueprintEvent)

void UPlayerConfigItemWidget_C::OnclickSkinChild()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.OnclickSkinChild");

	UPlayerConfigItemWidget_C_OnclickSkinChild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SetSkinTypePreviewState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::SetSkinTypePreviewState(int Type, bool IsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SetSkinTypePreviewState");

	UPlayerConfigItemWidget_C_SetSkinTypePreviewState_Params params;
	params.Type = Type;
	params.IsShow = IsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ShowSkinDetail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SkinId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::ShowSkinDetail(int SkinId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ShowSkinDetail");

	UPlayerConfigItemWidget_C_ShowSkinDetail_Params params;
	params.SkinId = SkinId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.RemoveItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::RemoveItem(int itemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.RemoveItem");

	UPlayerConfigItemWidget_C_RemoveItem_Params params;
	params.itemID = itemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SkinRemind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerConfigItemWidget_C::SkinRemind(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SkinRemind");

	UPlayerConfigItemWidget_C_SkinRemind_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__AllEquipBoxWidget_K2Node_ComponentBoundEvent_0_TextRemind__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerConfigItemWidget_C::BndEvt__AllEquipBoxWidget_K2Node_ComponentBoundEvent_0_TextRemind__DelegateSignature(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__AllEquipBoxWidget_K2Node_ComponentBoundEvent_0_TextRemind__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__AllEquipBoxWidget_K2Node_ComponentBoundEvent_0_TextRemind__DelegateSignature_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__VeilBoxWidget_K2Node_ComponentBoundEvent_98_TextRemind__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerConfigItemWidget_C::BndEvt__VeilBoxWidget_K2Node_ComponentBoundEvent_98_TextRemind__DelegateSignature(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__VeilBoxWidget_K2Node_ComponentBoundEvent_98_TextRemind__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__VeilBoxWidget_K2Node_ComponentBoundEvent_98_TextRemind__DelegateSignature_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__JacketBoxWidget_K2Node_ComponentBoundEvent_166_TextRemind__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerConfigItemWidget_C::BndEvt__JacketBoxWidget_K2Node_ComponentBoundEvent_166_TextRemind__DelegateSignature(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__JacketBoxWidget_K2Node_ComponentBoundEvent_166_TextRemind__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__JacketBoxWidget_K2Node_ComponentBoundEvent_166_TextRemind__DelegateSignature_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ShawlBoxWidget_K2Node_ComponentBoundEvent_235_TextRemind__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerConfigItemWidget_C::BndEvt__ShawlBoxWidget_K2Node_ComponentBoundEvent_235_TextRemind__DelegateSignature(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ShawlBoxWidget_K2Node_ComponentBoundEvent_235_TextRemind__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__ShawlBoxWidget_K2Node_ComponentBoundEvent_235_TextRemind__DelegateSignature_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__TrousersBoxWidget_K2Node_ComponentBoundEvent_304_TextRemind__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerConfigItemWidget_C::BndEvt__TrousersBoxWidget_K2Node_ComponentBoundEvent_304_TextRemind__DelegateSignature(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__TrousersBoxWidget_K2Node_ComponentBoundEvent_304_TextRemind__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__TrousersBoxWidget_K2Node_ComponentBoundEvent_304_TextRemind__DelegateSignature_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__BootsBoxWidget_K2Node_ComponentBoundEvent_444_TextRemind__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerConfigItemWidget_C::BndEvt__BootsBoxWidget_K2Node_ComponentBoundEvent_444_TextRemind__DelegateSignature(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__BootsBoxWidget_K2Node_ComponentBoundEvent_444_TextRemind__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__BootsBoxWidget_K2Node_ComponentBoundEvent_444_TextRemind__DelegateSignature_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SetSkinByServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SkinId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::SetSkinByServer(int Type, int SkinId, class UTexture2D* icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SetSkinByServer");

	UPlayerConfigItemWidget_C_SetSkinByServer_Params params;
	params.Type = Type;
	params.SkinId = SkinId;
	params.icon = icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.PreviewSkin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsPreview                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::PreviewSkin(int Type, bool IsPreview)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.PreviewSkin");

	UPlayerConfigItemWidget_C_PreviewSkin_Params params;
	params.Type = Type;
	params.IsPreview = IsPreview;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ShowSkinTypeDetail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::ShowSkinTypeDetail(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ShowSkinTypeDetail");

	UPlayerConfigItemWidget_C_ShowSkinTypeDetail_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.PanelSwitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::PanelSwitch(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.PanelSwitch");

	UPlayerConfigItemWidget_C_PanelSwitch_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.GetNewSkin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::GetNewSkin(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.GetNewSkin");

	UPlayerConfigItemWidget_C_GetNewSkin_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ShowButton_K2Node_ComponentBoundEvent_726_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerConfigItemWidget_C::BndEvt__ShowButton_K2Node_ComponentBoundEvent_726_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ShowButton_K2Node_ComponentBoundEvent_726_OnButtonClickedEvent__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__ShowButton_K2Node_ComponentBoundEvent_726_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ClearAllEquip
// (BlueprintCallable, BlueprintEvent)

void UPlayerConfigItemWidget_C::ClearAllEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ClearAllEquip");

	UPlayerConfigItemWidget_C_ClearAllEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__AllEquipBoxWidget_K2Node_ComponentBoundEvent_2_EventSellItem__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::BndEvt__AllEquipBoxWidget_K2Node_ComponentBoundEvent_2_EventSellItem__DelegateSignature(int itemID, int ItemNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__AllEquipBoxWidget_K2Node_ComponentBoundEvent_2_EventSellItem__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__AllEquipBoxWidget_K2Node_ComponentBoundEvent_2_EventSellItem__DelegateSignature_Params params;
	params.itemID = itemID;
	params.ItemNum = ItemNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__VeilBoxWidget_K2Node_ComponentBoundEvent_12_EventSellItem__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::BndEvt__VeilBoxWidget_K2Node_ComponentBoundEvent_12_EventSellItem__DelegateSignature(int itemID, int ItemNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__VeilBoxWidget_K2Node_ComponentBoundEvent_12_EventSellItem__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__VeilBoxWidget_K2Node_ComponentBoundEvent_12_EventSellItem__DelegateSignature_Params params;
	params.itemID = itemID;
	params.ItemNum = ItemNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__JacketBoxWidget_K2Node_ComponentBoundEvent_88_EventSellItem__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::BndEvt__JacketBoxWidget_K2Node_ComponentBoundEvent_88_EventSellItem__DelegateSignature(int itemID, int ItemNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__JacketBoxWidget_K2Node_ComponentBoundEvent_88_EventSellItem__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__JacketBoxWidget_K2Node_ComponentBoundEvent_88_EventSellItem__DelegateSignature_Params params;
	params.itemID = itemID;
	params.ItemNum = ItemNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ShawlBoxWidget_K2Node_ComponentBoundEvent_151_EventSellItem__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::BndEvt__ShawlBoxWidget_K2Node_ComponentBoundEvent_151_EventSellItem__DelegateSignature(int itemID, int ItemNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ShawlBoxWidget_K2Node_ComponentBoundEvent_151_EventSellItem__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__ShawlBoxWidget_K2Node_ComponentBoundEvent_151_EventSellItem__DelegateSignature_Params params;
	params.itemID = itemID;
	params.ItemNum = ItemNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__TrousersBoxWidget_K2Node_ComponentBoundEvent_213_EventSellItem__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::BndEvt__TrousersBoxWidget_K2Node_ComponentBoundEvent_213_EventSellItem__DelegateSignature(int itemID, int ItemNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__TrousersBoxWidget_K2Node_ComponentBoundEvent_213_EventSellItem__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__TrousersBoxWidget_K2Node_ComponentBoundEvent_213_EventSellItem__DelegateSignature_Params params;
	params.itemID = itemID;
	params.ItemNum = ItemNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__BootsBoxWidget_K2Node_ComponentBoundEvent_276_EventSellItem__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::BndEvt__BootsBoxWidget_K2Node_ComponentBoundEvent_276_EventSellItem__DelegateSignature(int itemID, int ItemNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__BootsBoxWidget_K2Node_ComponentBoundEvent_276_EventSellItem__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__BootsBoxWidget_K2Node_ComponentBoundEvent_276_EventSellItem__DelegateSignature_Params params;
	params.itemID = itemID;
	params.ItemNum = ItemNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SellSkin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SkinId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::SellSkin(int SkinId, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SellSkin");

	UPlayerConfigItemWidget_C_SellSkin_Params params;
	params.SkinId = SkinId;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__BootsBoxWidget_K2Node_ComponentBoundEvent_842_TotalEquipItemChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBagType                       bagtype                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::BndEvt__BootsBoxWidget_K2Node_ComponentBoundEvent_842_TotalEquipItemChange__DelegateSignature(int itemID, EBagType bagtype, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__BootsBoxWidget_K2Node_ComponentBoundEvent_842_TotalEquipItemChange__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__BootsBoxWidget_K2Node_ComponentBoundEvent_842_TotalEquipItemChange__DelegateSignature_Params params;
	params.itemID = itemID;
	params.bagtype = bagtype;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__TrousersBoxWidget_K2Node_ComponentBoundEvent_677_TotalEquipItemChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBagType                       bagtype                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::BndEvt__TrousersBoxWidget_K2Node_ComponentBoundEvent_677_TotalEquipItemChange__DelegateSignature(int itemID, EBagType bagtype, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__TrousersBoxWidget_K2Node_ComponentBoundEvent_677_TotalEquipItemChange__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__TrousersBoxWidget_K2Node_ComponentBoundEvent_677_TotalEquipItemChange__DelegateSignature_Params params;
	params.itemID = itemID;
	params.bagtype = bagtype;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ShawlBoxWidget_K2Node_ComponentBoundEvent_596_TotalEquipItemChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBagType                       bagtype                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::BndEvt__ShawlBoxWidget_K2Node_ComponentBoundEvent_596_TotalEquipItemChange__DelegateSignature(int itemID, EBagType bagtype, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ShawlBoxWidget_K2Node_ComponentBoundEvent_596_TotalEquipItemChange__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__ShawlBoxWidget_K2Node_ComponentBoundEvent_596_TotalEquipItemChange__DelegateSignature_Params params;
	params.itemID = itemID;
	params.bagtype = bagtype;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__JacketBoxWidget_K2Node_ComponentBoundEvent_513_TotalEquipItemChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBagType                       bagtype                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::BndEvt__JacketBoxWidget_K2Node_ComponentBoundEvent_513_TotalEquipItemChange__DelegateSignature(int itemID, EBagType bagtype, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__JacketBoxWidget_K2Node_ComponentBoundEvent_513_TotalEquipItemChange__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__JacketBoxWidget_K2Node_ComponentBoundEvent_513_TotalEquipItemChange__DelegateSignature_Params params;
	params.itemID = itemID;
	params.bagtype = bagtype;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__VeilBoxWidget_K2Node_ComponentBoundEvent_429_TotalEquipItemChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBagType                       bagtype                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::BndEvt__VeilBoxWidget_K2Node_ComponentBoundEvent_429_TotalEquipItemChange__DelegateSignature(int itemID, EBagType bagtype, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__VeilBoxWidget_K2Node_ComponentBoundEvent_429_TotalEquipItemChange__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__VeilBoxWidget_K2Node_ComponentBoundEvent_429_TotalEquipItemChange__DelegateSignature_Params params;
	params.itemID = itemID;
	params.bagtype = bagtype;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__AllEquipBoxWidget_K2Node_ComponentBoundEvent_1_SingleEquipItemChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBagType                       bagtype                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::BndEvt__AllEquipBoxWidget_K2Node_ComponentBoundEvent_1_SingleEquipItemChange__DelegateSignature(int itemID, EBagType bagtype, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__AllEquipBoxWidget_K2Node_ComponentBoundEvent_1_SingleEquipItemChange__DelegateSignature");

	UPlayerConfigItemWidget_C_BndEvt__AllEquipBoxWidget_K2Node_ComponentBoundEvent_1_SingleEquipItemChange__DelegateSignature_Params params;
	params.itemID = itemID;
	params.bagtype = bagtype;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ExecuteUbergraph_PlayerConfigItemWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::ExecuteUbergraph_PlayerConfigItemWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ExecuteUbergraph_PlayerConfigItemWidget");

	UPlayerConfigItemWidget_C_ExecuteUbergraph_PlayerConfigItemWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.EventSellItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsItem                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::EventSellItem__DelegateSignature(bool IsItem, int ID, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.EventSellItem__DelegateSignature");

	UPlayerConfigItemWidget_C_EventSellItem__DelegateSignature_Params params;
	params.IsItem = IsItem;
	params.ID = ID;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SetReConstructCharState__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::SetReConstructCharState__DelegateSignature(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SetReConstructCharState__DelegateSignature");

	UPlayerConfigItemWidget_C_SetReConstructCharState__DelegateSignature_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SetPlayerCapturePreview__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPreviewType                   Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SkinId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::SetPlayerCapturePreview__DelegateSignature(EPreviewType Type, int SkinId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SetPlayerCapturePreview__DelegateSignature");

	UPlayerConfigItemWidget_C_SetPlayerCapturePreview__DelegateSignature_Params params;
	params.Type = Type;
	params.SkinId = SkinId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.PreviewIndexChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPlayerConfigItemWidget_C::PreviewIndexChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.PreviewIndexChange__DelegateSignature");

	UPlayerConfigItemWidget_C_PreviewIndexChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.NewSkinChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SkinId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::NewSkinChange__DelegateSignature(int Type, int SkinId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.NewSkinChange__DelegateSignature");

	UPlayerConfigItemWidget_C_NewSkinChange__DelegateSignature_Params params;
	params.Type = Type;
	params.SkinId = SkinId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.OldSkinChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SkinId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::OldSkinChange__DelegateSignature(int Type, int SkinId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.OldSkinChange__DelegateSignature");

	UPlayerConfigItemWidget_C_OldSkinChange__DelegateSignature_Params params;
	params.Type = Type;
	params.SkinId = SkinId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.EquipItemChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerConfigItemWidget_C::EquipItemChange__DelegateSignature(int itemID, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.EquipItemChange__DelegateSignature");

	UPlayerConfigItemWidget_C_EquipItemChange__DelegateSignature_Params params;
	params.itemID = itemID;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SendRemind__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   remind                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerConfigItemWidget_C::SendRemind__DelegateSignature(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SendRemind__DelegateSignature");

	UPlayerConfigItemWidget_C_SendRemind__DelegateSignature_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
