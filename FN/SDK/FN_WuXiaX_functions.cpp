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

// Function WuXiaX.AINetMessageHandle.SendPickItemReponse
// (Final, Native, Public, BlueprintCallable)

void AAINetMessageHandle::SendPickItemReponse()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.AINetMessageHandle.SendPickItemReponse");

	AAINetMessageHandle_SendPickItemReponse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.AINetMessageHandle.SendPickItem
// (Final, Native, Public, BlueprintCallable)

void AAINetMessageHandle::SendPickItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.AINetMessageHandle.SendPickItem");

	AAINetMessageHandle_SendPickItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.AINetMessageHandle.SendAllPickItem
// (Final, Native, Public, BlueprintCallable)

void AAINetMessageHandle::SendAllPickItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.AINetMessageHandle.SendAllPickItem");

	AAINetMessageHandle_SendAllPickItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.AINetMessageHandle.SendActorInfo
// (Final, Native, Public, BlueprintCallable)

void AAINetMessageHandle::SendActorInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.AINetMessageHandle.SendActorInfo");

	AAINetMessageHandle_SendActorInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.AINetMessageHandle.OnItemGetResult
// (Final, Native, Private)
// Parameters:
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           result                         (Parm, ZeroConstructor, IsPlainOldData)

void AAINetMessageHandle::OnItemGetResult(int Type, bool result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.AINetMessageHandle.OnItemGetResult");

	AAINetMessageHandle_OnItemGetResult_Params params;
	params.Type = Type;
	params.result = result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.AINetMessageHandle.ConnectServer
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAINetMessageHandle::ConnectServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.AINetMessageHandle.ConnectServer");

	AAINetMessageHandle_ConnectServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.AINetMessageHandle.ConnectAIServer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AWuXiaXCharacter*        Obj                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAINetMessageHandle::ConnectAIServer(class AWuXiaXCharacter* Obj)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.AINetMessageHandle.ConnectAIServer");

	AAINetMessageHandle_ConnectAIServer_Params params;
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.BagUI.Vertical
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsDown                         (Parm, ZeroConstructor, IsPlainOldData)

void UBagUI::Vertical(bool State, bool IsDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BagUI.Vertical");

	UBagUI_Vertical_Params params;
	params.State = State;
	params.IsDown = IsDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.BagUI.UseHoverItem
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBagUI::UseHoverItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BagUI.UseHoverItem");

	UBagUI_UseHoverItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.BagUI.ShowItemDetail
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUIItemInfo             UIItemInfo                     (ConstParm, Parm, OutParm, ReferenceParm)

void UBagUI::ShowItemDetail(const struct FUIItemInfo& UIItemInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BagUI.ShowItemDetail");

	UBagUI_ShowItemDetail_Params params;
	params.UIItemInfo = UIItemInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.BagUI.ShowBagUI
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBagUI::ShowBagUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BagUI.ShowBagUI");

	UBagUI_ShowBagUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.BagUI.SetWeight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 maxweight                      (Parm, ZeroConstructor)
// struct FString                 Weight                         (Parm, ZeroConstructor)

void UBagUI::SetWeight(const struct FString& maxweight, const struct FString& Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BagUI.SetWeight");

	UBagUI_SetWeight_Params params;
	params.maxweight = maxweight;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.BagUI.SetSplitItemButton
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isbottondown                   (Parm, ZeroConstructor, IsPlainOldData)

void UBagUI::SetSplitItemButton(bool isbottondown)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BagUI.SetSplitItemButton");

	UBagUI_SetSplitItemButton_Params params;
	params.isbottondown = isbottondown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.BagUI.SetPlayerName
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)

void UBagUI::SetPlayerName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BagUI.SetPlayerName");

	UBagUI_SetPlayerName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.BagUI.SetItemHotKey
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Number                         (Parm, ZeroConstructor, IsPlainOldData)

void UBagUI::SetItemHotKey(int index, class UTexture2D* icon, int Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BagUI.SetItemHotKey");

	UBagUI_SetItemHotKey_Params params;
	params.index = index;
	params.icon = icon;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.BagUI.SetItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBagType                       bagtype                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// int                            Number                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            itemtype                       (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              dragicon                       (Parm, ZeroConstructor, IsPlainOldData)

void UBagUI::SetItem(EBagType bagtype, int index, int Level, const struct FString& Name, int Number, int itemtype, class UTexture2D* icon, class UTexture2D* dragicon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BagUI.SetItem");

	UBagUI_SetItem_Params params;
	params.bagtype = bagtype;
	params.index = index;
	params.Level = Level;
	params.Name = Name;
	params.Number = Number;
	params.itemtype = itemtype;
	params.icon = icon;
	params.dragicon = dragicon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.BagUI.SetDurableValue
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBagType                       bag_type                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            armor                          (Parm, ZeroConstructor, IsPlainOldData)

void UBagUI::SetDurableValue(EBagType bag_type, int index, int armor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BagUI.SetDurableValue");

	UBagUI_SetDurableValue_Params params;
	params.bag_type = bag_type;
	params.index = index;
	params.armor = armor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.BagUI.SetDragItemInfo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemnumber                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            pickid                         (Parm, ZeroConstructor, IsPlainOldData)

void UBagUI::SetDragItemInfo(int itemnumber, int pickid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BagUI.SetDragItemInfo");

	UBagUI_SetDragItemInfo_Params params;
	params.itemnumber = itemnumber;
	params.pickid = pickid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.BagUI.SelectHoverItem
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBagUI::SelectHoverItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BagUI.SelectHoverItem");

	UBagUI_SelectHoverItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.BagUI.RemoveItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBagType                       bagtype                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBagUI::RemoveItem(EBagType bagtype, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BagUI.RemoveItem");

	UBagUI_RemoveItem_Params params;
	params.bagtype = bagtype;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.BagUI.ReLoadConfigShow
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBagUI::ReLoadConfigShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BagUI.ReLoadConfigShow");

	UBagUI_ReLoadConfigShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.BagUI.NextLabel
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBagUI::NextLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BagUI.NextLabel");

	UBagUI_NextLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.BagUI.MarkHoverItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGamepadMarkType               MarkType                       (Parm, ZeroConstructor, IsPlainOldData)

void UBagUI::MarkHoverItem(EGamepadMarkType MarkType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BagUI.MarkHoverItem");

	UBagUI_MarkHoverItem_Params params;
	params.MarkType = MarkType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.BagUI.LastLabel
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBagUI::LastLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BagUI.LastLabel");

	UBagUI_LastLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.BagUI.Init
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBagUI::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BagUI.Init");

	UBagUI_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.BagUI.Horizontal
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsRight                        (Parm, ZeroConstructor, IsPlainOldData)

void UBagUI::Horizontal(bool State, bool IsRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BagUI.Horizontal");

	UBagUI_Horizontal_Params params;
	params.State = State;
	params.IsRight = IsRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.BagUI.HideBagUI
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBagUI::HideBagUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BagUI.HideBagUI");

	UBagUI_HideBagUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.BagUI.GetTypeByBagIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EBagType                       bag                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBagUI::GetTypeByBagIndex(EBagType bag, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BagUI.GetTypeByBagIndex");

	UBagUI_GetTypeByBagIndex_Params params;
	params.bag = bag;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.BagUI.GetLocalCharacter
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class AWuXiaXCharacter*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AWuXiaXCharacter* UBagUI::GetLocalCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BagUI.GetLocalCharacter");

	UBagUI_GetLocalCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.BagUI.GetCharacterShowState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBagUI::GetCharacterShowState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BagUI.GetCharacterShowState");

	UBagUI_GetCharacterShowState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.BagUI.GamepadIntoWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBagUI::GamepadIntoWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BagUI.GamepadIntoWidget");

	UBagUI_GamepadIntoWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.BagUI.EndKeepAction
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBagUI::EndKeepAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BagUI.EndKeepAction");

	UBagUI_EndKeepAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.BagUI.DropHoverItem
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBagUI::DropHoverItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BagUI.DropHoverItem");

	UBagUI_DropHoverItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.BagUI.ClearItemHotKey
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBagUI::ClearItemHotKey(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BagUI.ClearItemHotKey");

	UBagUI_ClearItemHotKey_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.BagUI.ClearInventory
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBagUI::ClearInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BagUI.ClearInventory");

	UBagUI_ClearInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.BuffPoint.OnOverlapEnd
// (Native, Protected)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ABuffPoint::OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BuffPoint.OnOverlapEnd");

	ABuffPoint_OnOverlapEnd_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.BuffPoint.OnOverlapBegin
// (Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABuffPoint::OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BuffPoint.OnOverlapBegin");

	ABuffPoint_OnOverlapBegin_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.BuffPoint.OnBuffIdUpdate
// (Final, Native, Protected, BlueprintCallable)

void ABuffPoint::OnBuffIdUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BuffPoint.OnBuffIdUpdate");

	ABuffPoint_OnBuffIdUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.BuffPoint.Client_OnBuffIdUpdate
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            showid                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuffPoint::Client_OnBuffIdUpdate(int showid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.BuffPoint.Client_OnBuffIdUpdate");

	ABuffPoint_Client_OnBuffIdUpdate_Params params;
	params.showid = showid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.CharacterConfigUI.InitData
// (Final, Native, Protected, BlueprintCallable)

void UCharacterConfigUI::InitData()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.CharacterConfigUI.InitData");

	UCharacterConfigUI_InitData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.CharacterConfigUI.CreateModel
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// ESexType                       sex_type                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// EModelType                     model_type                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTexture2D*              normal_texture                 (Parm, ZeroConstructor, IsPlainOldData)

void UCharacterConfigUI::CreateModel(int ID, ESexType sex_type, EModelType model_type, class UTexture2D* normal_texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.CharacterConfigUI.CreateModel");

	UCharacterConfigUI_CreateModel_Params params;
	params.ID = ID;
	params.sex_type = sex_type;
	params.model_type = model_type;
	params.normal_texture = normal_texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.CharacterConfigUI.CreateColor
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// EModelType                     Type                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FLinearColor            Color                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCharacterConfigUI::CreateColor(int ID, EModelType Type, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.CharacterConfigUI.CreateColor");

	UCharacterConfigUI_CreateColor_Params params;
	params.ID = ID;
	params.Type = Type;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.CheckSoundActor.UpdateLocation
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 new_location                   (Parm, ZeroConstructor, IsPlainOldData)

void ACheckSoundActor::UpdateLocation(const struct FVector& new_location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.CheckSoundActor.UpdateLocation");

	ACheckSoundActor_UpdateLocation_Params params;
	params.new_location = new_location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.CheckSoundActor.Init
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void ACheckSoundActor::Init(int player_id, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.CheckSoundActor.Init");

	ACheckSoundActor_Init_Params params;
	params.player_id = player_id;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.CircleSliderUI.GetCrossPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 circle_pos                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 line_start                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 line_end                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UCircleSliderUI::GetCrossPoint(const struct FVector& circle_pos, const struct FVector& line_start, const struct FVector& line_end, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.CircleSliderUI.GetCrossPoint");

	UCircleSliderUI_GetCrossPoint_Params params;
	params.circle_pos = circle_pos;
	params.line_start = line_start;
	params.line_end = line_end;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXHUDBase.SetInteractiveType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EWidgetInteractiveType         Type                           (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUDBase::SetInteractiveType(EWidgetInteractiveType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUDBase.SetInteractiveType");

	AWuXiaXHUDBase_SetInteractiveType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUDBase.ReUMGEffect
// (Native, Public, BlueprintCallable)

void AWuXiaXHUDBase::ReUMGEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUDBase.ReUMGEffect");

	AWuXiaXHUDBase_ReUMGEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUDBase.CheckResetFocus
// (Native, Public, BlueprintCallable)

void AWuXiaXHUDBase::CheckResetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUDBase.CheckResetFocus");

	AWuXiaXHUDBase_CheckResetFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUDBase.CheckFullScreenToWindowFullScreen
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWuXiaXHUDBase::CheckFullScreenToWindowFullScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUDBase.CheckFullScreenToWindowFullScreen");

	AWuXiaXHUDBase_CheckFullScreenToWindowFullScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUDBase.CanUseInteractive
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EWidgetInteractiveType         Type                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWuXiaXHUDBase::CanUseInteractive(EWidgetInteractiveType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUDBase.CanUseInteractive");

	AWuXiaXHUDBase_CanUseInteractive_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.ClientLoginHUD.ShowSorting
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AClientLoginHUD::ShowSorting()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientLoginHUD.ShowSorting");

	AClientLoginHUD_ShowSorting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientLoginHUD.ShowReconnect
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AClientLoginHUD::ShowReconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientLoginHUD.ShowReconnect");

	AClientLoginHUD_ShowReconnect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientLoginHUD.ShowLogoUI
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AClientLoginHUD::ShowLogoUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientLoginHUD.ShowLogoUI");

	AClientLoginHUD_ShowLogoUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientLoginHUD.ShowLoginUI
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AClientLoginHUD::ShowLoginUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientLoginHUD.ShowLoginUI");

	AClientLoginHUD_ShowLoginUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientLoginHUD.ShowHallWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 player_name                    (Parm, ZeroConstructor)

void AClientLoginHUD::ShowHallWidget(const struct FString& player_name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientLoginHUD.ShowHallWidget");

	AClientLoginHUD_ShowHallWidget_Params params;
	params.player_name = player_name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientLoginHUD.ReadyGame
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AClientLoginHUD::ReadyGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientLoginHUD.ReadyGame");

	AClientLoginHUD_ReadyGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientLoginHUD.LoginResponse
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ELoginResponseType             login_state                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 player_name                    (Parm, ZeroConstructor)

void AClientLoginHUD::LoginResponse(ELoginResponseType login_state, const struct FString& player_name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientLoginHUD.LoginResponse");

	AClientLoginHUD_LoginResponse_Params params;
	params.login_state = login_state;
	params.player_name = player_name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientLoginHUD.HideSorting
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AClientLoginHUD::HideSorting()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientLoginHUD.HideSorting");

	AClientLoginHUD_HideSorting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientLoginHUD.HideReconnect
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AClientLoginHUD::HideReconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientLoginHUD.HideReconnect");

	AClientLoginHUD_HideReconnect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientLoginHUD.HideLogoUI
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AClientLoginHUD::HideLogoUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientLoginHUD.HideLogoUI");

	AClientLoginHUD_HideLogoUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientLoginHUD.HideLoginUI
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AClientLoginHUD::HideLoginUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientLoginHUD.HideLoginUI");

	AClientLoginHUD_HideLoginUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientLoginHUD.CreateMainLoginUI
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AClientLoginHUD::CreateMainLoginUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientLoginHUD.CreateMainLoginUI");

	AClientLoginHUD_CreateMainLoginUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientLoginHUD.CreateHallSkin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            skin_id                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void AClientLoginHUD::CreateHallSkin(int skin_id, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientLoginHUD.CreateHallSkin");

	AClientLoginHUD_CreateHallSkin_Params params;
	params.skin_id = skin_id;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientLoginHUD.CreateHallItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void AClientLoginHUD::CreateHallItem(int item_id, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientLoginHUD.CreateHallItem");

	AClientLoginHUD_CreateHallItem_Params params;
	params.item_id = item_id;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientLoginHUD.AutoLogin
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AClientLoginHUD::AutoLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientLoginHUD.AutoLogin");

	AClientLoginHUD_AutoLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientLoginPawn.SetVoiceMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Mode                           (Parm, ZeroConstructor, IsPlainOldData)

void AClientLoginPawn::SetVoiceMode(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientLoginPawn.SetVoiceMode");

	AClientLoginPawn_SetVoiceMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientLoginPawn.SetAlwaysTalk
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           isalways                       (Parm, ZeroConstructor, IsPlainOldData)

void AClientLoginPawn::SetAlwaysTalk(bool isalways)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientLoginPawn.SetAlwaysTalk");

	AClientLoginPawn_SetAlwaysTalk_Params params;
	params.isalways = isalways;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientLoginPawn.MuteLocalAudio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bMuted                         (Parm, ZeroConstructor, IsPlainOldData)

void AClientLoginPawn::MuteLocalAudio(bool bMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientLoginPawn.MuteLocalAudio");

	AClientLoginPawn_MuteLocalAudio_Params params;
	params.bMuted = bMuted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.StartTick
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUIRoomInfo             room                           (ConstParm, Parm, OutParm, ReferenceParm)

void AClientNetMessageHandle::StartTick(const struct FUIRoomInfo& room)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.StartTick");

	AClientNetMessageHandle_StartTick_Params params;
	params.room = room;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.StartGame
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUIRoomInfo             room                           (ConstParm, Parm, OutParm, ReferenceParm)

void AClientNetMessageHandle::StartGame(const struct FUIRoomInfo& room)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.StartGame");

	AClientNetMessageHandle_StartGame_Params params;
	params.room = room;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.SetOnlineState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            State                          (Parm, ZeroConstructor, IsPlainOldData)

void AClientNetMessageHandle::SetOnlineState(int State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.SetOnlineState");

	AClientNetMessageHandle_SetOnlineState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.SendTeamInviteResponse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            send_id                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            result                         (Parm, ZeroConstructor, IsPlainOldData)

void AClientNetMessageHandle::SendTeamInviteResponse(int send_id, int result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.SendTeamInviteResponse");

	AClientNetMessageHandle_SendTeamInviteResponse_Params params;
	params.send_id = send_id;
	params.result = result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.SendTeamInvite
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)

void AClientNetMessageHandle::SendTeamInvite(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.SendTeamInvite");

	AClientNetMessageHandle_SendTeamInvite_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.SendTeamDataRequest
// (Final, Native, Public, BlueprintCallable)

void AClientNetMessageHandle::SendTeamDataRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.SendTeamDataRequest");

	AClientNetMessageHandle_SendTeamDataRequest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.SendReconstructCharacterCreateInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 user_name                      (Parm, ZeroConstructor)
// int                            user_hair                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            user_face                      (Parm, ZeroConstructor, IsPlainOldData)
// ESexType                       user_sex                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            user_skin                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            user_hairco                    (Parm, ZeroConstructor, IsPlainOldData)

void AClientNetMessageHandle::SendReconstructCharacterCreateInfo(const struct FString& user_name, int user_hair, int user_face, ESexType user_sex, int user_skin, int user_hairco)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.SendReconstructCharacterCreateInfo");

	AClientNetMessageHandle_SendReconstructCharacterCreateInfo_Params params;
	params.user_name = user_name;
	params.user_hair = user_hair;
	params.user_face = user_face;
	params.user_sex = user_sex;
	params.user_skin = user_skin;
	params.user_hairco = user_hairco;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.SendReconnect
// (Final, Native, Public, BlueprintCallable)

void AClientNetMessageHandle::SendReconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.SendReconnect");

	AClientNetMessageHandle_SendReconnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.SendQuitTeamRequest
// (Final, Native, Public, BlueprintCallable)

void AClientNetMessageHandle::SendQuitTeamRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.SendQuitTeamRequest");

	AClientNetMessageHandle_SendQuitTeamRequest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.SendPlayerName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)

void AClientNetMessageHandle::SendPlayerName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.SendPlayerName");

	AClientNetMessageHandle_SendPlayerName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.SendMoneyRequest
// (Final, Native, Public, BlueprintCallable)

void AClientNetMessageHandle::SendMoneyRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.SendMoneyRequest");

	AClientNetMessageHandle_SendMoneyRequest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.SendLoginMsg
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 user_name                      (Parm, ZeroConstructor)
// struct FString                 PassWord                       (Parm, ZeroConstructor)
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)

void AClientNetMessageHandle::SendLoginMsg(const struct FString& user_name, const struct FString& PassWord, int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.SendLoginMsg");

	AClientNetMessageHandle_SendLoginMsg_Params params;
	params.user_name = user_name;
	params.PassWord = PassWord;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.SendLineUp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            line_mode                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            server_mode                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            play_mode                      (Parm, ZeroConstructor, IsPlainOldData)

void AClientNetMessageHandle::SendLineUp(int line_mode, int server_mode, int play_mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.SendLineUp");

	AClientNetMessageHandle_SendLineUp_Params params;
	params.line_mode = line_mode;
	params.server_mode = server_mode;
	params.play_mode = play_mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.SendItemRequest
// (Final, Native, Public, BlueprintCallable)

void AClientNetMessageHandle::SendItemRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.SendItemRequest");

	AClientNetMessageHandle_SendItemRequest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.SendGoodsItemRequest
// (Final, Native, Public, BlueprintCallable)

void AClientNetMessageHandle::SendGoodsItemRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.SendGoodsItemRequest");

	AClientNetMessageHandle_SendGoodsItemRequest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.SendFriendRequest
// (Final, Native, Public, BlueprintCallable)

void AClientNetMessageHandle::SendFriendRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.SendFriendRequest");

	AClientNetMessageHandle_SendFriendRequest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.SendFriendInviteResponse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            send_id                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            result                         (Parm, ZeroConstructor, IsPlainOldData)

void AClientNetMessageHandle::SendFriendInviteResponse(int send_id, int result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.SendFriendInviteResponse");

	AClientNetMessageHandle_SendFriendInviteResponse_Params params;
	params.send_id = send_id;
	params.result = result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.SendFriendInvite
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)

void AClientNetMessageHandle::SendFriendInvite(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.SendFriendInvite");

	AClientNetMessageHandle_SendFriendInvite_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.SendEquipChange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            origin_item_id                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            new_item_id                    (Parm, ZeroConstructor, IsPlainOldData)

void AClientNetMessageHandle::SendEquipChange(int origin_item_id, int new_item_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.SendEquipChange");

	AClientNetMessageHandle_SendEquipChange_Params params;
	params.origin_item_id = origin_item_id;
	params.new_item_id = new_item_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.SendCoinRequest
// (Final, Native, Public, BlueprintCallable)

void AClientNetMessageHandle::SendCoinRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.SendCoinRequest");

	AClientNetMessageHandle_SendCoinRequest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.SendCharacterCreateInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 user_name                      (Parm, ZeroConstructor)
// int                            user_hair                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            user_face                      (Parm, ZeroConstructor, IsPlainOldData)
// ESexType                       user_sex                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            user_skin                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            user_hairco                    (Parm, ZeroConstructor, IsPlainOldData)

void AClientNetMessageHandle::SendCharacterCreateInfo(const struct FString& user_name, int user_hair, int user_face, ESexType user_sex, int user_skin, int user_hairco)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.SendCharacterCreateInfo");

	AClientNetMessageHandle_SendCharacterCreateInfo_Params params;
	params.user_name = user_name;
	params.user_hair = user_hair;
	params.user_face = user_face;
	params.user_sex = user_sex;
	params.user_skin = user_skin;
	params.user_hairco = user_hairco;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.SendCancelLineUp
// (Final, Native, Public, BlueprintCallable)

void AClientNetMessageHandle::SendCancelLineUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.SendCancelLineUp");

	AClientNetMessageHandle_SendCancelLineUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.SellItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)

void AClientNetMessageHandle::SellItem(int item_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.SellItem");

	AClientNetMessageHandle_SellItem_Params params;
	params.item_id = item_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.RequestRankInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            sort_type                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            rank_type                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            server_type                    (Parm, ZeroConstructor, IsPlainOldData)

void AClientNetMessageHandle::RequestRankInfo(int sort_type, int rank_type, int server_type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.RequestRankInfo");

	AClientNetMessageHandle_RequestRankInfo_Params params;
	params.sort_type = sort_type;
	params.rank_type = rank_type;
	params.server_type = server_type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.RequestPlayerRankInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            sort_type                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            server_type                    (Parm, ZeroConstructor, IsPlainOldData)

void AClientNetMessageHandle::RequestPlayerRankInfo(int player_id, int sort_type, int server_type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.RequestPlayerRankInfo");

	AClientNetMessageHandle_RequestPlayerRankInfo_Params params;
	params.player_id = player_id;
	params.sort_type = sort_type;
	params.server_type = server_type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.RefreshPlatformGoodsItem
// (Final, Native, Public, BlueprintCallable)

void AClientNetMessageHandle::RefreshPlatformGoodsItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.RefreshPlatformGoodsItem");

	AClientNetMessageHandle_RefreshPlatformGoodsItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.QuitTick
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUIRoomInfo             room                           (ConstParm, Parm, OutParm, ReferenceParm)

void AClientNetMessageHandle::QuitTick(const struct FUIRoomInfo& room)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.QuitTick");

	AClientNetMessageHandle_QuitTick_Params params;
	params.room = room;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.Port
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Val                            (Parm, ZeroConstructor, IsPlainOldData)

void AClientNetMessageHandle::Port(int Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.Port");

	AClientNetMessageHandle_Port_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.PlayerReconnectOB
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ok                             (Parm, ZeroConstructor, IsPlainOldData)

void AClientNetMessageHandle::PlayerReconnectOB(bool ok)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.PlayerReconnectOB");

	AClientNetMessageHandle_PlayerReconnectOB_Params params;
	params.ok = ok;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.PlayerLeaveRoom
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// ELeaveRoomType                 Type                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FUIRoomInfo             room                           (ConstParm, Parm, OutParm, ReferenceParm)

void AClientNetMessageHandle::PlayerLeaveRoom(ELeaveRoomType Type, int player_id, const struct FUIRoomInfo& room)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.PlayerLeaveRoom");

	AClientNetMessageHandle_PlayerLeaveRoom_Params params;
	params.Type = Type;
	params.player_id = player_id;
	params.room = room;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.PingCallBack
// (Final, Native, Private)

void AClientNetMessageHandle::PingCallBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.PingCallBack");

	AClientNetMessageHandle_PingCallBack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.OpenBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)

void AClientNetMessageHandle::OpenBox(int item_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.OpenBox");

	AClientNetMessageHandle_OpenBox_Params params;
	params.item_id = item_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.JoinRoom
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUIRoomInfo             room                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 PassWord                       (Parm, ZeroConstructor)

void AClientNetMessageHandle::JoinRoom(const struct FUIRoomInfo& room, const struct FString& PassWord)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.JoinRoom");

	AClientNetMessageHandle_JoinRoom_Params params;
	params.room = room;
	params.PassWord = PassWord;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.JiHuoMa
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ma                             (Parm, ZeroConstructor)

void AClientNetMessageHandle::JiHuoMa(const struct FString& ma)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.JiHuoMa");

	AClientNetMessageHandle_JiHuoMa_Params params;
	params.ma = ma;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.Ip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Val                            (Parm, ZeroConstructor)

void AClientNetMessageHandle::Ip(const struct FString& Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.Ip");

	AClientNetMessageHandle_Ip_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.GetRooms
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            room_type                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Tile                           (Parm, ZeroConstructor)
// int                            play_mode                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            server_id                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            min_player_num                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            max_player_num                 (Parm, ZeroConstructor, IsPlainOldData)

void AClientNetMessageHandle::GetRooms(int room_type, const struct FString& Tile, int play_mode, int server_id, int min_player_num, int max_player_num)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.GetRooms");

	AClientNetMessageHandle_GetRooms_Params params;
	params.room_type = room_type;
	params.Tile = Tile;
	params.play_mode = play_mode;
	params.server_id = server_id;
	params.min_player_num = min_player_num;
	params.max_player_num = max_player_num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.GetPage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            page                           (Parm, ZeroConstructor, IsPlainOldData)

void AClientNetMessageHandle::GetPage(int page)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.GetPage");

	AClientNetMessageHandle_GetPage_Params params;
	params.page = page;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.DeleteRoom
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUIRoomInfo             room                           (ConstParm, Parm, OutParm, ReferenceParm)

void AClientNetMessageHandle::DeleteRoom(const struct FUIRoomInfo& room)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.DeleteRoom");

	AClientNetMessageHandle_DeleteRoom_Params params;
	params.room = room;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.DeleteFriend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            player_id                      (Parm, ZeroConstructor, IsPlainOldData)

void AClientNetMessageHandle::DeleteFriend(int player_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.DeleteFriend");

	AClientNetMessageHandle_DeleteFriend_Params params;
	params.player_id = player_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.CurrentServerChange
// (Final, Native, Public, BlueprintCallable)

void AClientNetMessageHandle::CurrentServerChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.CurrentServerChange");

	AClientNetMessageHandle_CurrentServerChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.CreateRoom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            play_mode                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            map_id                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 room_tile                      (Parm, ZeroConstructor)
// struct FString                 PassWord                       (Parm, ZeroConstructor)
// int                            max_player_num                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            team_player_num                (Parm, ZeroConstructor, IsPlainOldData)
// int                            max_watch_num                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            preset_mode                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            server_id                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           add_flag                       (Parm, ZeroConstructor, IsPlainOldData)

void AClientNetMessageHandle::CreateRoom(int play_mode, int map_id, const struct FString& room_tile, const struct FString& PassWord, int max_player_num, int team_player_num, int max_watch_num, int preset_mode, int server_id, bool add_flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.CreateRoom");

	AClientNetMessageHandle_CreateRoom_Params params;
	params.play_mode = play_mode;
	params.map_id = map_id;
	params.room_tile = room_tile;
	params.PassWord = PassWord;
	params.max_player_num = max_player_num;
	params.team_player_num = team_player_num;
	params.max_watch_num = max_watch_num;
	params.preset_mode = preset_mode;
	params.server_id = server_id;
	params.add_flag = add_flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.CreateNewConnect
// (Final, Native, Public, BlueprintCallable)

void AClientNetMessageHandle::CreateNewConnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.CreateNewConnect");

	AClientNetMessageHandle_CreateNewConnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.ClientCheckMsg
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AClientNetMessageHandle::ClientCheckMsg(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.ClientCheckMsg");

	AClientNetMessageHandle_ClientCheckMsg_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.ChangeShowSkinIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<int>                    Types                          (Parm, ZeroConstructor)

void AClientNetMessageHandle::ChangeShowSkinIndex(TArray<int> Types)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.ChangeShowSkinIndex");

	AClientNetMessageHandle_ChangeShowSkinIndex_Params params;
	params.Types = Types;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.ChangePlayerRole
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// ERoleType                      new_type                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            team_index                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FUIRoomInfo             room                           (ConstParm, Parm, OutParm, ReferenceParm)

void AClientNetMessageHandle::ChangePlayerRole(int player_id, ERoleType new_type, int team_index, const struct FUIRoomInfo& room)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.ChangePlayerRole");

	AClientNetMessageHandle_ChangePlayerRole_Params params;
	params.player_id = player_id;
	params.new_type = new_type;
	params.team_index = team_index;
	params.room = room;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.ChangeEquipSkin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            skin_id                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)

void AClientNetMessageHandle::ChangeEquipSkin(int skin_id, int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.ChangeEquipSkin");

	AClientNetMessageHandle_ChangeEquipSkin_Params params;
	params.skin_id = skin_id;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.CanLineUp
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AClientNetMessageHandle::CanLineUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.CanLineUp");

	AClientNetMessageHandle_CanLineUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.ClientNetMessageHandle.CancelLogin
// (Final, Native, Public, BlueprintCallable)

void AClientNetMessageHandle::CancelLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.CancelLogin");

	AClientNetMessageHandle_CancelLogin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.BuyKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)

void AClientNetMessageHandle::BuyKey(int item_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.BuyKey");

	AClientNetMessageHandle_BuyKey_Params params;
	params.item_id = item_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ClientNetMessageHandle.BuyItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)

void AClientNetMessageHandle::BuyItem(int item_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ClientNetMessageHandle.BuyItem");

	AClientNetMessageHandle_BuyItem_Params params;
	params.item_id = item_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.ComponentMiddle.State_GetPlayerMotionState
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EPlayerMotionState             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPlayerMotionState UComponentMiddle::State_GetPlayerMotionState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ComponentMiddle.State_GetPlayerMotionState");

	UComponentMiddle_State_GetPlayerMotionState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.ComponentMiddle.State_GetPlayerMainState
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EPlayerGameState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPlayerGameState UComponentMiddle::State_GetPlayerMainState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ComponentMiddle.State_GetPlayerMainState");

	UComponentMiddle_State_GetPlayerMainState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.ComponentMiddle.State_ChangePlayerState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPlayerGameState               Val                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UComponentMiddle::State_ChangePlayerState(EPlayerGameState Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ComponentMiddle.State_ChangePlayerState");

	UComponentMiddle_State_ChangePlayerState_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.ComponentMiddle.State_ChangePlayerMotionState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPlayerMotionState             Val                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UComponentMiddle::State_ChangePlayerMotionState(EPlayerMotionState Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ComponentMiddle.State_ChangePlayerMotionState");

	UComponentMiddle_State_ChangePlayerMotionState_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.ComponentMiddle.State_ChangePlayerChildState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPlayerFightState              Val                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UComponentMiddle::State_ChangePlayerChildState(EPlayerFightState Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ComponentMiddle.State_ChangePlayerChildState");

	UComponentMiddle_State_ChangePlayerChildState_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.ComponentMiddle.Property_ReSetDyingHp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UComponentMiddle::Property_ReSetDyingHp()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ComponentMiddle.Property_ReSetDyingHp");

	UComponentMiddle_Property_ReSetDyingHp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.ComponentMiddle.Property_ChangeSaveChangeValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           isadd                          (Parm, ZeroConstructor, IsPlainOldData)
// EPropertyChangeReason          reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UComponentMiddle::Property_ChangeSaveChangeValue(bool isadd, EPropertyChangeReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ComponentMiddle.Property_ChangeSaveChangeValue");

	UComponentMiddle_Property_ChangeSaveChangeValue_Params params;
	params.isadd = isadd;
	params.reason = reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.ComponentMiddle.Move_SwitchMovementModeEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EMovementMode>     Mode                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UComponentMiddle::Move_SwitchMovementModeEvent(TEnumAsByte<EMovementMode> Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ComponentMiddle.Move_SwitchMovementModeEvent");

	UComponentMiddle_Move_SwitchMovementModeEvent_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.ConfigEnvironmentActor.GetSoundVolume
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 float_value_name               (ConstParm, Parm, ZeroConstructor)
// struct FString                 bool_value_name                (ConstParm, Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AConfigEnvironmentActor::GetSoundVolume(const struct FString& float_value_name, const struct FString& bool_value_name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ConfigEnvironmentActor.GetSoundVolume");

	AConfigEnvironmentActor_GetSoundVolume_Params params;
	params.float_value_name = float_value_name;
	params.bool_value_name = bool_value_name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.ConfigEnvironmentActor.EffectSoundVolume
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void AConfigEnvironmentActor::EffectSoundVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ConfigEnvironmentActor.EffectSoundVolume");

	AConfigEnvironmentActor_EffectSoundVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.CreateMapUI.GetMapsByPlayMode
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            play_mode                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UCreateMapUI::GetMapsByPlayMode(int play_mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.CreateMapUI.GetMapsByPlayMode");

	UCreateMapUI_GetMapsByPlayMode_Params params;
	params.play_mode = play_mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.CreateMapUI.GetMapInfo
// (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            map_id                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UCreateMapUI::GetMapInfo(int map_id, struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.CreateMapUI.GetMapInfo");

	UCreateMapUI_GetMapInfo_Params params;
	params.map_id = map_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;

	return params.ReturnValue;
}


// Function WuXiaX.CustomGameUI.SortRoomChild
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class URoomChildUI*>    roominfos                      (Parm, ZeroConstructor)
// TArray<class URoomChildUI*>    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class URoomChildUI*> UCustomGameUI::SortRoomChild(TArray<class URoomChildUI*> roominfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.CustomGameUI.SortRoomChild");

	UCustomGameUI_SortRoomChild_Params params;
	params.roominfos = roominfos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.CustomGameUI.GetValidPassword
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 old_pwd                        (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCustomGameUI::GetValidPassword(const struct FString& old_pwd)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.CustomGameUI.GetValidPassword");

	UCustomGameUI_GetValidPassword_Params params;
	params.old_pwd = old_pwd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.CustomGameUI.CreateRoomInfos
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FUIRoomInfo>     roominfos                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCustomGameUI::CreateRoomInfos(TArray<struct FUIRoomInfo> roominfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.CustomGameUI.CreateRoomInfos");

	UCustomGameUI_CreateRoomInfos_Params params;
	params.roominfos = roominfos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.DamageCircleActor.Start
// (Final, Native, Public, BlueprintCallable)

void ADamageCircleActor::Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.DamageCircleActor.Start");

	ADamageCircleActor_Start_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.DamageCircleActor.Client_StartLastCircle
// (Event, Public, BlueprintEvent)

void ADamageCircleActor::Client_StartLastCircle()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.DamageCircleActor.Client_StartLastCircle");

	ADamageCircleActor_Client_StartLastCircle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.DamageCircleActor.CheckActorIsLandscape
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADamageCircleActor::CheckActorIsLandscape(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.DamageCircleActor.CheckActorIsLandscape");

	ADamageCircleActor_CheckActorIsLandscape_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.FakeCharacter.UpdateMesh
// (Event, Public, BlueprintEvent)

void AFakeCharacter::UpdateMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.FakeCharacter.UpdateMesh");

	AFakeCharacter_UpdateMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.FakeCharacter.LoadComplete
// (Final, Native, Public)

void AFakeCharacter::LoadComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.FakeCharacter.LoadComplete");

	AFakeCharacter_LoadComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.HorseRideComponent.Server_SetLastRotation
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FRotator                lastrotation                   (Parm, ZeroConstructor, IsPlainOldData)

void UHorseRideComponent::Server_SetLastRotation(const struct FRotator& lastrotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.HorseRideComponent.Server_SetLastRotation");

	UHorseRideComponent_Server_SetLastRotation_Params params;
	params.lastrotation = lastrotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.HorseRideComponent.Server_Ride
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            horse_net_id                   (Parm, ZeroConstructor, IsPlainOldData)

void UHorseRideComponent::Server_Ride(int horse_net_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.HorseRideComponent.Server_Ride");

	UHorseRideComponent_Server_Ride_Params params;
	params.horse_net_id = horse_net_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.HorseRideComponent.Server_InputRight
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UHorseRideComponent::Server_InputRight(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.HorseRideComponent.Server_InputRight");

	UHorseRideComponent_Server_InputRight_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.HorseRideComponent.Ride_state_net
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EPlayerRideStateType           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPlayerRideStateType UHorseRideComponent::Ride_state_net()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.HorseRideComponent.Ride_state_net");

	UHorseRideComponent_Ride_state_net_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.HorseRideComponent.Ride_horse_net
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AWuXiaXHorse*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AWuXiaXHorse* UHorseRideComponent::Ride_horse_net()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.HorseRideComponent.Ride_horse_net");

	UHorseRideComponent_Ride_horse_net_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.HorseRideComponent.OnRedRideStateOther
// (Final, Native, Private)

void UHorseRideComponent::OnRedRideStateOther()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.HorseRideComponent.OnRedRideStateOther");

	UHorseRideComponent_OnRedRideStateOther_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.HorseRideComponent.OnRedRideState
// (Final, Native, Private)

void UHorseRideComponent::OnRedRideState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.HorseRideComponent.OnRedRideState");

	UHorseRideComponent_OnRedRideState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.HorseRideComponent.OnRedHorseOther
// (Final, Native, Private)

void UHorseRideComponent::OnRedHorseOther()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.HorseRideComponent.OnRedHorseOther");

	UHorseRideComponent_OnRedHorseOther_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.HorseRideComponent.OnRedHorse
// (Final, Native, Private)

void UHorseRideComponent::OnRedHorse()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.HorseRideComponent.OnRedHorse");

	UHorseRideComponent_OnRedHorse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.HorseRideComponent.GetRotationSpeed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHorseRideComponent::GetRotationSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.HorseRideComponent.GetRotationSpeed");

	UHorseRideComponent_GetRotationSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.HorseRideComponent.Client_Ride_Rotation
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)

void UHorseRideComponent::Client_Ride_Rotation(const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.HorseRideComponent.Client_Ride_Rotation");

	UHorseRideComponent_Client_Ride_Rotation_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.InteractiveInterface.InteractiveUITips
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWuXiaXCharacter*        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInteractiveInterface::InteractiveUITips(class AWuXiaXCharacter* Player, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.InteractiveInterface.InteractiveUITips");

	UInteractiveInterface_InteractiveUITips_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

	return params.ReturnValue;
}


// Function WuXiaX.InteractiveInterface.GetInteractiveType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWuXiaXCharacter*        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// EInteractiveType               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EInteractiveType UInteractiveInterface::GetInteractiveType(class AWuXiaXCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.InteractiveInterface.GetInteractiveType");

	UInteractiveInterface_GetInteractiveType_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.InteractiveInterface.CanInteractive
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWuXiaXCharacter*        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// ETriggerInteractiveType        Trigger                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInteractiveInterface::CanInteractive(class AWuXiaXCharacter* Player, ETriggerInteractiveType Trigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.InteractiveInterface.CanInteractive");

	UInteractiveInterface_CanInteractive_Params params;
	params.Player = Player;
	params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.KeepActionUI.SetKeepAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UKeepActionUI::SetKeepAction(float CurrentTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.KeepActionUI.SetKeepAction");

	UKeepActionUI_SetKeepAction_Params params;
	params.CurrentTime = CurrentTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.KeepActionUI.Init
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UKeepActionUI::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.KeepActionUI.Init");

	UKeepActionUI_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.KeepActionUI.EndKeepAction
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UKeepActionUI::EndKeepAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.KeepActionUI.EndKeepAction");

	UKeepActionUI_EndKeepAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.KeepActionUI.BeginKeepAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          actiontime                     (Parm, ZeroConstructor, IsPlainOldData)

void UKeepActionUI::BeginKeepAction(float actiontime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.KeepActionUI.BeginKeepAction");

	UKeepActionUI_BeginKeepAction_Params params;
	params.actiontime = actiontime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.LoadAssetManager.LoadAsset
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FSoftObjectPath         AssetName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Component                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULoadAssetManager::LoadAsset(const struct FSoftObjectPath& AssetName, class UObject* Actor, class UObject* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.LoadAssetManager.LoadAsset");

	ULoadAssetManager_LoadAsset_Params params;
	params.AssetName = AssetName;
	params.Actor = Actor;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.LoadAssetManager.AsyncLoadAsset
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// struct FSoftObjectPath         AssetName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Component                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULoadAssetManager::AsyncLoadAsset(const struct FSoftObjectPath& AssetName, class UObject* Actor, class UObject* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.LoadAssetManager.AsyncLoadAsset");

	ULoadAssetManager_AsyncLoadAsset_Params params;
	params.AssetName = AssetName;
	params.Actor = Actor;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.LoadingUI.SetPercent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          percent                        (Parm, ZeroConstructor, IsPlainOldData)

void ULoadingUI::SetPercent(float percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.LoadingUI.SetPercent");

	ULoadingUI_SetPercent_Params params;
	params.percent = percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.LoadInterface.LoadComplete
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class UObject*                 Component                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FSoftObjectPath         asset_ref                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULoadInterface::LoadComplete(class UObject* Component, const struct FSoftObjectPath& asset_ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.LoadInterface.LoadComplete");

	ULoadInterface_LoadComplete_Params params;
	params.Component = Component;
	params.asset_ref = asset_ref;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.LoadProgressManager.LoadLevelComplete
// (Final, Native, Public)

void ALoadProgressManager::LoadLevelComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.LoadProgressManager.LoadLevelComplete");

	ALoadProgressManager_LoadLevelComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.LoadProgressManager.GamingLoadLevelComplete
// (Final, Native, Public)

void ALoadProgressManager::GamingLoadLevelComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.LoadProgressManager.GamingLoadLevelComplete");

	ALoadProgressManager_GamingLoadLevelComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.ZeroTextState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::ZeroTextState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.ZeroTextState");

	UMainGameUI_ZeroTextState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.UpdateWeaponStateEffect
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            weaponindex                    (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              effecticon                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::UpdateWeaponStateEffect(int weaponindex, class UTexture2D* effecticon, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.UpdateWeaponStateEffect");

	UMainGameUI_UpdateWeaponStateEffect_Params params;
	params.weaponindex = weaponindex;
	params.effecticon = effecticon;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.UpdateTeamPlayerState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)
// ETeamPlayerState               new_state                      (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::UpdateTeamPlayerState(int Num, ETeamPlayerState new_state)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.UpdateTeamPlayerState");

	UMainGameUI_UpdateTeamPlayerState_Params params;
	params.Num = Num;
	params.new_state = new_state;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.UpdateTeamPlayerHPPercent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::UpdateTeamPlayerHPPercent(int Num, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.UpdateTeamPlayerHPPercent");

	UMainGameUI_UpdateTeamPlayerHPPercent_Params params;
	params.Num = Num;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.UpdateTeamPlayerDyingHPPercent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::UpdateTeamPlayerDyingHPPercent(int Num, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.UpdateTeamPlayerDyingHPPercent");

	UMainGameUI_UpdateTeamPlayerDyingHPPercent_Params params;
	params.Num = Num;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.UpdateSoundLocation
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewLocation                    (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::UpdateSoundLocation(int ID, const struct FVector& NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.UpdateSoundLocation");

	UMainGameUI_UpdateSoundLocation_Params params;
	params.ID = ID;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.UpdateSatiety
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          satietyvalue                   (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::UpdateSatiety(float satietyvalue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.UpdateSatiety");

	UMainGameUI_UpdateSatiety_Params params;
	params.satietyvalue = satietyvalue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.UpdatePlayerState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerGameState               new_state                      (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::UpdatePlayerState(EPlayerGameState new_state)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.UpdatePlayerState");

	UMainGameUI_UpdatePlayerState_Params params;
	params.new_state = new_state;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.UpdatePlayerRotator
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::UpdatePlayerRotator(int Num, float Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.UpdatePlayerRotator");

	UMainGameUI_UpdatePlayerRotator_Params params;
	params.Num = Num;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.UpdatePlayerMark3DLocation
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::UpdatePlayerMark3DLocation(int Num, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.UpdatePlayerMark3DLocation");

	UMainGameUI_UpdatePlayerMark3DLocation_Params params;
	params.Num = Num;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.UpdatePlayerLocation
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::UpdatePlayerLocation(int Num, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.UpdatePlayerLocation");

	UMainGameUI_UpdatePlayerLocation_Params params;
	params.Num = Num;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.UpdateOxygen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          oxygen                         (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::UpdateOxygen(float oxygen)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.UpdateOxygen");

	UMainGameUI_UpdateOxygen_Params params;
	params.oxygen = oxygen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.UpdateMp
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          currentMP                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          currentmaxMP                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          maxMP                          (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::UpdateMp(float currentMP, float currentmaxMP, float maxMP)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.UpdateMp");

	UMainGameUI_UpdateMp_Params params;
	params.currentMP = currentMP;
	params.currentmaxMP = currentmaxMP;
	params.maxMP = maxMP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.UpdateMoisture
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          moisture                       (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::UpdateMoisture(float moisture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.UpdateMoisture");

	UMainGameUI_UpdateMoisture_Params params;
	params.moisture = moisture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.UpdateLiveData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LIVE                           (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::UpdateLiveData(int LIVE)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.UpdateLiveData");

	UMainGameUI_UpdateLiveData_Params params;
	params.LIVE = LIVE;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.UpdateKiteSpeed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::UpdateKiteSpeed(float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.UpdateKiteSpeed");

	UMainGameUI_UpdateKiteSpeed_Params params;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.UpdateKillData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            kill                           (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::UpdateKillData(int kill)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.UpdateKillData");

	UMainGameUI_UpdateKillData_Params params;
	params.kill = kill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.UpdateItemNumber
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Number                         (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::UpdateItemNumber(int index, int Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.UpdateItemNumber");

	UMainGameUI_UpdateItemNumber_Params params;
	params.index = index;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.UpdateInjury
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          injury                         (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::UpdateInjury(float injury)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.UpdateInjury");

	UMainGameUI_UpdateInjury_Params params;
	params.injury = injury;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.UpdateHorseSpeed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          current_speed                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          max_speed                      (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::UpdateHorseSpeed(float current_speed, float max_speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.UpdateHorseSpeed");

	UMainGameUI_UpdateHorseSpeed_Params params;
	params.current_speed = current_speed;
	params.max_speed = max_speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.UpdateHorsePower
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          current_power                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          max_power                      (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::UpdateHorsePower(float current_power, float max_power)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.UpdateHorsePower");

	UMainGameUI_UpdateHorsePower_Params params;
	params.current_power = current_power;
	params.max_power = max_power;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.UpdateFightHp
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          currentHP                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          maxHP                          (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::UpdateFightHp(float currentHP, float maxHP)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.UpdateFightHp");

	UMainGameUI_UpdateFightHp_Params params;
	params.currentHP = currentHP;
	params.maxHP = maxHP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.UpdateDyingHp
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          currentHP                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          maxHP                          (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::UpdateDyingHp(float currentHP, float maxHP)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.UpdateDyingHp");

	UMainGameUI_UpdateDyingHp_Params params;
	params.currentHP = currentHP;
	params.maxHP = maxHP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.UpdateDrugValue
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          drugvalue                      (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::UpdateDrugValue(float drugvalue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.UpdateDrugValue");

	UMainGameUI_UpdateDrugValue_Params params;
	params.drugvalue = drugvalue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.UpdateCompass
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Angle                          (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::UpdateCompass(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.UpdateCompass");

	UMainGameUI_UpdateCompass_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.UpdateCheckSoundCD
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          current_cd                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          max_cd                         (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::UpdateCheckSoundCD(float current_cd, float max_cd)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.UpdateCheckSoundCD");

	UMainGameUI_UpdateCheckSoundCD_Params params;
	params.current_cd = current_cd;
	params.max_cd = max_cd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.ShowWarning
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (Parm, ZeroConstructor)

void UMainGameUI::ShowWarning(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.ShowWarning");

	UMainGameUI_ShowWarning_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.ShowOxygen
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainGameUI::ShowOxygen()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.ShowOxygen");

	UMainGameUI_ShowOxygen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.ShowMainInterfaceUI
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainGameUI::ShowMainInterfaceUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.ShowMainInterfaceUI");

	UMainGameUI_ShowMainInterfaceUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.ShowInteractive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UMainGameUI::ShowInteractive(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.ShowInteractive");

	UMainGameUI_ShowInteractive_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.ShowDamageCircle
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainGameUI::ShowDamageCircle()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.ShowDamageCircle");

	UMainGameUI_ShowDamageCircle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.ShowCrossHair
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainGameUI::ShowCrossHair()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.ShowCrossHair");

	UMainGameUI_ShowCrossHair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.ShowCheckSoundLocation
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Ids                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::ShowCheckSoundLocation(int Ids, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.ShowCheckSoundLocation");

	UMainGameUI_ShowCheckSoundLocation_Params params;
	params.Ids = Ids;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.SetZeroTimer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Timer                          (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::SetZeroTimer(int Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.SetZeroTimer");

	UMainGameUI_SetZeroTimer_Params params;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.SetWeaponState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            weaponindex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              effecticon                     (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              weaponicon                     (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::SetWeaponState(int weaponindex, int Value, class UTexture2D* effecticon, class UTexture2D* weaponicon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.SetWeaponState");

	UMainGameUI_SetWeaponState_Params params;
	params.weaponindex = weaponindex;
	params.Value = Value;
	params.effecticon = effecticon;
	params.weaponicon = weaponicon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.SetTeamPlayerShowMode
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            teammode                       (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::SetTeamPlayerShowMode(int teammode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.SetTeamPlayerShowMode");

	UMainGameUI_SetTeamPlayerShowMode_Params params;
	params.teammode = teammode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.SetSplitItemButton
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isbottondown                   (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::SetSplitItemButton(bool isbottondown)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.SetSplitItemButton");

	UMainGameUI_SetSplitItemButton_Params params;
	params.isbottondown = isbottondown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.SetSkillHotKey
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            skill_id                       (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          skillcd                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canuse                         (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::SetSkillHotKey(int index, int skill_id, class UTexture2D* icon, float skillcd, bool canuse)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.SetSkillHotKey");

	UMainGameUI_SetSkillHotKey_Params params;
	params.index = index;
	params.skill_id = skill_id;
	params.icon = icon;
	params.skillcd = skillcd;
	params.canuse = canuse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.SetSkillCurrentCD
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            skill_id                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          skillcd                        (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::SetSkillCurrentCD(int skill_id, float skillcd)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.SetSkillCurrentCD");

	UMainGameUI_SetSkillCurrentCD_Params params;
	params.skill_id = skill_id;
	params.skillcd = skillcd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.SetMainInterfaceState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::SetMainInterfaceState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.SetMainInterfaceState");

	UMainGameUI_SetMainInterfaceState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.SetLifeInfoState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::SetLifeInfoState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.SetLifeInfoState");

	UMainGameUI_SetLifeInfoState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.SetKiteState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           new_state                      (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::SetKiteState(bool new_state)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.SetKiteState");

	UMainGameUI_SetKiteState_Params params;
	params.new_state = new_state;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.SetKeepActionTime
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          current_time                   (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::SetKeepActionTime(float current_time)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.SetKeepActionTime");

	UMainGameUI_SetKeepActionTime_Params params;
	params.current_time = current_time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.SetItemHotKey
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Number                         (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::SetItemHotKey(int index, class UTexture2D* icon, int Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.SetItemHotKey");

	UMainGameUI_SetItemHotKey_Params params;
	params.index = index;
	params.icon = icon;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.SetHorseState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           new_state                      (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::SetHorseState(bool new_state)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.SetHorseState");

	UMainGameUI_SetHorseState_Params params;
	params.new_state = new_state;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.SetGeneralState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::SetGeneralState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.SetGeneralState");

	UMainGameUI_SetGeneralState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.SetGeneralInfo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              icon                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          max_cd                         (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::SetGeneralInfo(class UTexture2D* icon, int ID, float max_cd)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.SetGeneralInfo");

	UMainGameUI_SetGeneralInfo_Params params;
	params.icon = icon;
	params.ID = ID;
	params.max_cd = max_cd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.SetDamageCircleWaitingTime
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::SetDamageCircleWaitingTime(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.SetDamageCircleWaitingTime");

	UMainGameUI_SetDamageCircleWaitingTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.SetDamageCircleState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDamageCircleState             State                          (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::SetDamageCircleState(EDamageCircleState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.SetDamageCircleState");

	UMainGameUI_SetDamageCircleState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.SetDamageCircleShringkingTime
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentTime                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          alltime                        (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::SetDamageCircleShringkingTime(float CurrentTime, float alltime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.SetDamageCircleShringkingTime");

	UMainGameUI_SetDamageCircleShringkingTime_Params params;
	params.CurrentTime = CurrentTime;
	params.alltime = alltime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.SetCheckSoundSkillState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::SetCheckSoundSkillState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.SetCheckSoundSkillState");

	UMainGameUI_SetCheckSoundSkillState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.SetBuff
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            buffID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            numberoflayer                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::SetBuff(int buffID, int numberoflayer, float Time, class UTexture2D* icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.SetBuff");

	UMainGameUI_SetBuff_Params params;
	params.buffID = buffID;
	params.numberoflayer = numberoflayer;
	params.Time = Time;
	params.icon = icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.ResetLanguage
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainGameUI::ResetLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.ResetLanguage");

	UMainGameUI_ResetLanguage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.RemoveWeaponState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            weaponindex                    (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::RemoveWeaponState(int weaponindex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.RemoveWeaponState");

	UMainGameUI_RemoveWeaponState_Params params;
	params.weaponindex = weaponindex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.RemoveSound
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::RemoveSound(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.RemoveSound");

	UMainGameUI_RemoveSound_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.RemoveBuff
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            buffID                         (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::RemoveBuff(int buffID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.RemoveBuff");

	UMainGameUI_RemoveBuff_Params params;
	params.buffID = buffID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.ReLoadConfigShow
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainGameUI::ReLoadConfigShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.ReLoadConfigShow");

	UMainGameUI_ReLoadConfigShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.PlayerUnLockToOther
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainGameUI::PlayerUnLockToOther()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.PlayerUnLockToOther");

	UMainGameUI_PlayerUnLockToOther_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.PlayerTalk
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            player_id                      (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::PlayerTalk(int player_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.PlayerTalk");

	UMainGameUI_PlayerTalk_Params params;
	params.player_id = player_id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.PlayerLockToOther
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainGameUI::PlayerLockToOther()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.PlayerLockToOther");

	UMainGameUI_PlayerLockToOther_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.PickUpOverWeight
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainGameUI::PickUpOverWeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.PickUpOverWeight");

	UMainGameUI_PickUpOverWeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.PickGetItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           learned                        (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::PickGetItem(bool State, class UTexture2D* Texture, int Level, bool learned)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.PickGetItem");

	UMainGameUI_PickGetItem_Params params;
	params.State = State;
	params.Texture = Texture;
	params.Level = Level;
	params.learned = learned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.MissileHitTarget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainGameUI::MissileHitTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.MissileHitTarget");

	UMainGameUI_MissileHitTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.IsInitTeamPlayer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMainGameUI::IsInitTeamPlayer(int PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.IsInitTeamPlayer");

	UMainGameUI_IsInitTeamPlayer_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.MainGameUI.InitTeamPlayer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            teammode                       (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::InitTeamPlayer(int PlayerID, const struct FString& Name, int index, int teammode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.InitTeamPlayer");

	UMainGameUI_InitTeamPlayer_Params params;
	params.PlayerID = PlayerID;
	params.Name = Name;
	params.index = index;
	params.teammode = teammode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.InitCheckSoundSkill
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            skill_id                       (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          max_cd                         (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::InitCheckSoundSkill(int skill_id, class UTexture2D* icon, float max_cd)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.InitCheckSoundSkill");

	UMainGameUI_InitCheckSoundSkill_Params params;
	params.skill_id = skill_id;
	params.icon = icon;
	params.max_cd = max_cd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.InitCheckSound
// (Final, Native, Public, BlueprintCallable)

void UMainGameUI::InitCheckSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.InitCheckSound");

	UMainGameUI_InitCheckSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.Init
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainGameUI::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.Init");

	UMainGameUI_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.HideOxygen
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainGameUI::HideOxygen()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.HideOxygen");

	UMainGameUI_HideOxygen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.HideMainInterfaceUI
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainGameUI::HideMainInterfaceUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.HideMainInterfaceUI");

	UMainGameUI_HideMainInterfaceUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.HideInteractive
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainGameUI::HideInteractive()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.HideInteractive");

	UMainGameUI_HideInteractive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.HideDamageCircle
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainGameUI::HideDamageCircle()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.HideDamageCircle");

	UMainGameUI_HideDamageCircle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.HideCrossHair
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainGameUI::HideCrossHair()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.HideCrossHair");

	UMainGameUI_HideCrossHair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.GetWeaponShowState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMainGameUI::GetWeaponShowState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.GetWeaponShowState");

	UMainGameUI_GetWeaponShowState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.MainGameUI.GetSlotItemInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EBagType                       bagtype                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Number                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FUIItemInfo             slotiteminfo                   (Parm, OutParm)

void UMainGameUI::GetSlotItemInfo(EBagType bagtype, int Number, struct FUIItemInfo* slotiteminfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.GetSlotItemInfo");

	UMainGameUI_GetSlotItemInfo_Params params;
	params.bagtype = bagtype;
	params.Number = Number;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (slotiteminfo != nullptr)
		*slotiteminfo = params.slotiteminfo;
}


// Function WuXiaX.MainGameUI.GetPostColorType
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMainGameUI::GetPostColorType()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.GetPostColorType");

	UMainGameUI_GetPostColorType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.MainGameUI.GetLocalCharacter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AWuXiaXCharacter*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AWuXiaXCharacter* UMainGameUI::GetLocalCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.GetLocalCharacter");

	UMainGameUI_GetLocalCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.MainGameUI.GetDressShowState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMainGameUI::GetDressShowState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.GetDressShowState");

	UMainGameUI_GetDressShowState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.MainGameUI.EndKeepAction
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainGameUI::EndKeepAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.EndKeepAction");

	UMainGameUI_EndKeepAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.DeleteTeamPlayerMarkState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::DeleteTeamPlayerMarkState(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.DeleteTeamPlayerMarkState");

	UMainGameUI_DeleteTeamPlayerMarkState_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.ClearTeamPlayerName
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::ClearTeamPlayerName(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.ClearTeamPlayerName");

	UMainGameUI_ClearTeamPlayerName_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.ClearSkillHotKey
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::ClearSkillHotKey(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.ClearSkillHotKey");

	UMainGameUI_ClearSkillHotKey_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.ClearItemHotKey
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::ClearItemHotKey(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.ClearItemHotKey");

	UMainGameUI_ClearItemHotKey_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.ClearBuffs
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainGameUI::ClearBuffs()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.ClearBuffs");

	UMainGameUI_ClearBuffs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.ChangeCurrentWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            weaponindex                    (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::ChangeCurrentWeapon(int weaponindex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.ChangeCurrentWeapon");

	UMainGameUI_ChangeCurrentWeapon_Params params;
	params.weaponindex = weaponindex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.CanNotShooter
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainGameUI::CanNotShooter()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.CanNotShooter");

	UMainGameUI_CanNotShooter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.CanNotEquipItem
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainGameUI::CanNotEquipItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.CanNotEquipItem");

	UMainGameUI_CanNotEquipItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.BeginKeepAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          actiontime                     (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::BeginKeepAction(float actiontime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.BeginKeepAction");

	UMainGameUI_BeginKeepAction_Params params;
	params.actiontime = actiontime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.AppendKillInfo
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 attack_player_name             (Parm, ZeroConstructor)
// struct FString                 dead_player_name               (Parm, ZeroConstructor)
// int                            cause_id                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// ECauseDyingType                reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UMainGameUI::AppendKillInfo(const struct FString& attack_player_name, const struct FString& dead_player_name, int cause_id, ECauseDyingType reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.AppendKillInfo");

	UMainGameUI_AppendKillInfo_Params params;
	params.attack_player_name = attack_player_name;
	params.dead_player_name = dead_player_name;
	params.cause_id = cause_id;
	params.reason = reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.AppendGongGao
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGongGaoType                   Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Info                           (ConstParm, Parm, OutParm, ReferenceParm)

void UMainGameUI::AppendGongGao(EGongGaoType Type, const struct FText& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.AppendGongGao");

	UMainGameUI_AppendGongGao_Params params;
	params.Type = Type;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainGameUI.ActiveComplain
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainGameUI::ActiveComplain()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainGameUI.ActiveComplain");

	UMainGameUI_ActiveComplain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.UpdateVersion
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainLoginUI::UpdateVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.UpdateVersion");

	UMainLoginUI_UpdateVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.UpdateUserMoney
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            money                          (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::UpdateUserMoney(int money)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.UpdateUserMoney");

	UMainLoginUI_UpdateUserMoney_Params params;
	params.money = money;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.UpdateRoomPlayer
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FRoomUser               user                           (ConstParm, Parm, OutParm, ReferenceParm)

void UMainLoginUI::UpdateRoomPlayer(const struct FRoomUser& user)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.UpdateRoomPlayer");

	UMainLoginUI_UpdateRoomPlayer_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.TeamPlayerTalk
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            player_id                      (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::TeamPlayerTalk(int player_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.TeamPlayerTalk");

	UMainLoginUI_TeamPlayerTalk_Params params;
	params.player_id = player_id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.TeamPlayerRoomStateChange
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::TeamPlayerRoomStateChange(int player_id, bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.TeamPlayerRoomStateChange");

	UMainLoginUI_TeamPlayerRoomStateChange_Params params;
	params.player_id = player_id;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.TeamPlayerEquipChange
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            old_item_id                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            new_item_id                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            user_id                        (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::TeamPlayerEquipChange(int old_item_id, int new_item_id, int user_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.TeamPlayerEquipChange");

	UMainLoginUI_TeamPlayerEquipChange_Params params;
	params.old_item_id = old_item_id;
	params.new_item_id = new_item_id;
	params.user_id = user_id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.TeamChangeLook
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// ESexType                       sex                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// int                            user_face                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            skin_color                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            user_hair                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            user_haircolor                 (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::TeamChangeLook(int player_id, ESexType sex, const struct FString& Name, int user_face, int skin_color, int user_hair, int user_haircolor, class UTexture2D* icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.TeamChangeLook");

	UMainLoginUI_TeamChangeLook_Params params;
	params.player_id = player_id;
	params.sex = sex;
	params.Name = Name;
	params.user_face = user_face;
	params.skin_color = skin_color;
	params.user_hair = user_hair;
	params.user_haircolor = user_haircolor;
	params.icon = icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.StartRoomTick
// (Event, Public, BlueprintEvent)

void UMainLoginUI::StartRoomTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.StartRoomTick");

	UMainLoginUI_StartRoomTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.SoldItemComplete
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainLoginUI::SoldItemComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.SoldItemComplete");

	UMainLoginUI_SoldItemComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.ShowLoginWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainLoginUI::ShowLoginWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.ShowLoginWidget");

	UMainLoginUI_ShowLoginWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.ShowInputName
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainLoginUI::ShowInputName()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.ShowInputName");

	UMainLoginUI_ShowInputName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.ShowCreateCharacter
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)

void UMainLoginUI::ShowCreateCharacter(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.ShowCreateCharacter");

	UMainLoginUI_ShowCreateCharacter_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.SetUserRank
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWuXiaX_FUserRank       rank                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            player_id                      (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::SetUserRank(const struct FWuXiaX_FUserRank& rank, int player_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.SetUserRank");

	UMainLoginUI_SetUserRank_Params params;
	params.rank = rank;
	params.player_id = player_id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.SetTeamMode
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Mode                           (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::SetTeamMode(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.SetTeamMode");

	UMainLoginUI_SetTeamMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.SetSkinSelectId
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            skin_id                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon_texture                   (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::SetSkinSelectId(int skin_id, int Type, class UTexture2D* icon_texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.SetSkinSelectId");

	UMainLoginUI_SetSkinSelectId_Params params;
	params.skin_id = skin_id;
	params.Type = Type;
	params.icon_texture = icon_texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.SetServerMode
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            server_id                      (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::SetServerMode(int server_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.SetServerMode");

	UMainLoginUI_SetServerMode_Params params;
	params.server_id = server_id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.SetPreviewSkin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// EPreviewType                   Type                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            skin_id                        (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::SetPreviewSkin(int player_id, EPreviewType Type, int skin_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.SetPreviewSkin");

	UMainLoginUI_SetPreviewSkin_Params params;
	params.player_id = player_id;
	params.Type = Type;
	params.skin_id = skin_id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.SetPlayModeState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Mode                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            State                          (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::SetPlayModeState(int Mode, int State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.SetPlayModeState");

	UMainLoginUI_SetPlayModeState_Params params;
	params.Mode = Mode;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.SetPlayModeEndTime
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Mode                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            days                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Hours                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Minutes                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           is_start                       (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::SetPlayModeEndTime(int Mode, int days, int Hours, int Minutes, bool is_start)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.SetPlayModeEndTime");

	UMainLoginUI_SetPlayModeEndTime_Params params;
	params.Mode = Mode;
	params.days = days;
	params.Hours = Hours;
	params.Minutes = Minutes;
	params.is_start = is_start;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.SetPlayMode
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Mode                           (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::SetPlayMode(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.SetPlayMode");

	UMainLoginUI_SetPlayMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.SetPLayerLoginState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            user_id                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            login_state                    (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::SetPLayerLoginState(int user_id, int login_state)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.SetPLayerLoginState");

	UMainLoginUI_SetPLayerLoginState_Params params;
	params.user_id = user_id;
	params.login_state = login_state;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.SetPingTaiLogin
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 user_name                      (Parm, ZeroConstructor)
// struct FString                 PassWord                       (Parm, ZeroConstructor)
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)
// ESlateVisibility               showCancle                     (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::SetPingTaiLogin(const struct FString& user_name, const struct FString& PassWord, int Type, ESlateVisibility showCancle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.SetPingTaiLogin");

	UMainLoginUI_SetPingTaiLogin_Params params;
	params.user_name = user_name;
	params.PassWord = PassWord;
	params.Type = Type;
	params.showCancle = showCancle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.SetPageNum
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::SetPageNum(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.SetPageNum");

	UMainLoginUI_SetPageNum_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.SetOnlineType
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            online_type                    (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::SetOnlineType(int online_type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.SetOnlineType");

	UMainLoginUI_SetOnlineType_Params params;
	params.online_type = online_type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.SetMaxPage
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            page                           (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::SetMaxPage(int page)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.SetMaxPage");

	UMainLoginUI_SetMaxPage_Params params;
	params.page = page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.SetLeaveTeamButtonValid
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::SetLeaveTeamButtonValid(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.SetLeaveTeamButtonValid");

	UMainLoginUI_SetLeaveTeamButtonValid_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.SetIsMasterMode
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::SetIsMasterMode(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.SetIsMasterMode");

	UMainLoginUI_SetIsMasterMode_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.SetFriendYSState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            user_id                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            login_state                    (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::SetFriendYSState(int user_id, int login_state)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.SetFriendYSState");

	UMainLoginUI_SetFriendYSState_Params params;
	params.user_id = user_id;
	params.login_state = login_state;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.SetFriendInfo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// int                            login_state                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ys_state                       (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::SetFriendInfo(int ID, const struct FString& Name, int login_state, int ys_state, class UTexture2D* icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.SetFriendInfo");

	UMainLoginUI_SetFriendInfo_Params params;
	params.ID = ID;
	params.Name = Name;
	params.login_state = login_state;
	params.ys_state = ys_state;
	params.icon = icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.SaveUserName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor)

void UMainLoginUI::SaveUserName(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.SaveUserName");

	UMainLoginUI_SaveUserName_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.SavePassWord
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor)

void UMainLoginUI::SavePassWord(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.SavePassWord");

	UMainLoginUI_SavePassWord_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.ResetVicRank
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVictoryRank>    vic_rank                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMainLoginUI::ResetVicRank(TArray<struct FVictoryRank> vic_rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.ResetVicRank");

	UMainLoginUI_ResetVicRank_Params params;
	params.vic_rank = vic_rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.ResetTotalRank
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTotalRank>      total_rank                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMainLoginUI::ResetTotalRank(TArray<struct FTotalRank> total_rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.ResetTotalRank");

	UMainLoginUI_ResetTotalRank_Params params;
	params.total_rank = total_rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.ResetServerListLanguageInfo
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainLoginUI::ResetServerListLanguageInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.ResetServerListLanguageInfo");

	UMainLoginUI_ResetServerListLanguageInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.ResetHallItemLanguageInfo
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainLoginUI::ResetHallItemLanguageInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.ResetHallItemLanguageInfo");

	UMainLoginUI_ResetHallItemLanguageInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.ResetGoodsLanguage
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainLoginUI::ResetGoodsLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.ResetGoodsLanguage");

	UMainLoginUI_ResetGoodsLanguage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.ResetFightRank
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFightRank>      fight_rank                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMainLoginUI::ResetFightRank(TArray<struct FFightRank> fight_rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.ResetFightRank");

	UMainLoginUI_ResetFightRank_Params params;
	params.fight_rank = fight_rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.RemoveHallSkin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            skin_id                        (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::RemoveHallSkin(int skin_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.RemoveHallSkin");

	UMainLoginUI_RemoveHallSkin_Params params;
	params.skin_id = skin_id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.RemoveHallItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::RemoveHallItem(int item_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.RemoveHallItem");

	UMainLoginUI_RemoveHallItem_Params params;
	params.item_id = item_id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.ReCalculateBoxPrice
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Times                          (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::ReCalculateBoxPrice(int item_id, int Times)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.ReCalculateBoxPrice");

	UMainLoginUI_ReCalculateBoxPrice_Params params;
	params.item_id = item_id;
	params.Times = Times;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.QuitRoomTick
// (Event, Public, BlueprintEvent)

void UMainLoginUI::QuitRoomTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.QuitRoomTick");

	UMainLoginUI_QuitRoomTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.QuitFromRoom
// (Event, Public, BlueprintEvent)

void UMainLoginUI::QuitFromRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.QuitFromRoom");

	UMainLoginUI_QuitFromRoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.PopOBReconnect
// (Event, Public, BlueprintEvent)

void UMainLoginUI::PopOBReconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.PopOBReconnect");

	UMainLoginUI_PopOBReconnect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.PlayerQuitTeam
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainLoginUI::PlayerQuitTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.PlayerQuitTeam");

	UMainLoginUI_PlayerQuitTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.PlayerNameRepeat
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainLoginUI::PlayerNameRepeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.PlayerNameRepeat");

	UMainLoginUI_PlayerNameRepeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.PlayerLeaveRoom
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            player_id                      (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::PlayerLeaveRoom(int player_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.PlayerLeaveRoom");

	UMainLoginUI_PlayerLeaveRoom_Params params;
	params.player_id = player_id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.PlayerJoinedRoom
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FUIRoomInfo             room                           (ConstParm, Parm, OutParm, ReferenceParm)
// int                            master_id                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FRoomUser>       users                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMainLoginUI::PlayerJoinedRoom(const struct FUIRoomInfo& room, int master_id, TArray<struct FRoomUser> users)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.PlayerJoinedRoom");

	UMainLoginUI_PlayerJoinedRoom_Params params;
	params.room = room;
	params.master_id = master_id;
	params.users = users;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.PlayerInviteResponse
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// int                            result                         (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::PlayerInviteResponse(const struct FString& Name, int result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.PlayerInviteResponse");

	UMainLoginUI_PlayerInviteResponse_Params params;
	params.Name = Name;
	params.result = result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.PlayerInviteFriendResponse
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// int                            result                         (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::PlayerInviteFriendResponse(const struct FString& Name, int result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.PlayerInviteFriendResponse");

	UMainLoginUI_PlayerInviteFriendResponse_Params params;
	params.Name = Name;
	params.result = result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.PlayerEquip
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    equips                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMainLoginUI::PlayerEquip(TArray<int> equips)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.PlayerEquip");

	UMainLoginUI_PlayerEquip_Params params;
	params.equips = equips;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.PlayerBeInvite
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            invite_id                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)

void UMainLoginUI::PlayerBeInvite(int invite_id, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.PlayerBeInvite");

	UMainLoginUI_PlayerBeInvite_Params params;
	params.invite_id = invite_id;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.PlayerBeFriendInvite
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            invite_id                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)

void UMainLoginUI::PlayerBeFriendInvite(int invite_id, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.PlayerBeFriendInvite");

	UMainLoginUI_PlayerBeFriendInvite_Params params;
	params.invite_id = invite_id;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.OpenBoxRemind
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   remind                         (ConstParm, Parm, OutParm, ReferenceParm)

void UMainLoginUI::OpenBoxRemind(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.OpenBoxRemind");

	UMainLoginUI_OpenBoxRemind_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.ObtainNewItems
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBoxRewardItem>  items                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMainLoginUI::ObtainNewItems(TArray<struct FBoxRewardItem> items)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.ObtainNewItems");

	UMainLoginUI_ObtainNewItems_Params params;
	params.items = items;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.ObtainNewItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// class UTexture2D*              icon                           (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::ObtainNewItem(const struct FString& Name, class UTexture2D* icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.ObtainNewItem");

	UMainLoginUI_ObtainNewItem_Params params;
	params.Name = Name;
	params.icon = icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.ObtainNewBox
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// class UTexture2D*              icon                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           is_need_key                    (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::ObtainNewBox(int item_id, const struct FString& Name, class UTexture2D* icon, bool is_need_key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.ObtainNewBox");

	UMainLoginUI_ObtainNewBox_Params params;
	params.item_id = item_id;
	params.Name = Name;
	params.icon = icon;
	params.is_need_key = is_need_key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.LoadUrl
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)

void UMainLoginUI::LoadUrl(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.LoadUrl");

	UMainLoginUI_LoadUrl_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.JiHuoMaRemind
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   remind                         (ConstParm, Parm, OutParm, ReferenceParm)

void UMainLoginUI::JiHuoMaRemind(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.JiHuoMaRemind");

	UMainLoginUI_JiHuoMaRemind_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.JiHuoMaItemAppend
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::JiHuoMaItemAppend(const struct FString& Name, class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.JiHuoMaItemAppend");

	UMainLoginUI_JiHuoMaItemAppend_Params params;
	params.Name = Name;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.InitTeamInfo
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESexType                       sex_type                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            user_id                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// int                            face_id                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            skin_color_id                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            hair_id                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            hair_color_id                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            State                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ready                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           in_room                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    equip_items                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UTexture2D*              icon                           (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::InitTeamInfo(ESexType sex_type, int user_id, const struct FString& Name, int face_id, int skin_color_id, int hair_id, int hair_color_id, int State, int ready, bool in_room, TArray<int> equip_items, class UTexture2D* icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.InitTeamInfo");

	UMainLoginUI_InitTeamInfo_Params params;
	params.sex_type = sex_type;
	params.user_id = user_id;
	params.Name = Name;
	params.face_id = face_id;
	params.skin_color_id = skin_color_id;
	params.hair_id = hair_id;
	params.hair_color_id = hair_color_id;
	params.State = State;
	params.ready = ready;
	params.in_room = in_room;
	params.equip_items = equip_items;
	params.icon = icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.InitSkinSelectId
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            skin_id                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon_texture                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           is_show                        (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::InitSkinSelectId(int skin_id, int Type, class UTexture2D* icon_texture, bool is_show)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.InitSkinSelectId");

	UMainLoginUI_InitSkinSelectId_Params params;
	params.skin_id = skin_id;
	params.Type = Type;
	params.icon_texture = icon_texture;
	params.is_show = is_show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.InitServerList
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    server_list                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMainLoginUI::InitServerList(TArray<int> server_list)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.InitServerList");

	UMainLoginUI_InitServerList_Params params;
	params.server_list = server_list;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.InitCharacterInfo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESexType                       sex_type                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// int                            face_id                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            skin_color_id                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            hair_id                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            hair_color_id                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            money                          (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::InitCharacterInfo(ESexType sex_type, const struct FString& Name, int face_id, int skin_color_id, int hair_id, int hair_color_id, int money)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.InitCharacterInfo");

	UMainLoginUI_InitCharacterInfo_Params params;
	params.sex_type = sex_type;
	params.Name = Name;
	params.face_id = face_id;
	params.skin_color_id = skin_color_id;
	params.hair_id = hair_id;
	params.hair_color_id = hair_color_id;
	params.money = money;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.Init
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AClientNetMessageHandle* Net_actor                      (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::Init(class AClientNetMessageHandle* Net_actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.Init");

	UMainLoginUI_Init_Params params;
	params.Net_actor = Net_actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.HideUrl
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainLoginUI::HideUrl()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.HideUrl");

	UMainLoginUI_HideUrl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.HallRemind
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   remind                         (ConstParm, Parm, OutParm, ReferenceParm)

void UMainLoginUI::HallRemind(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.HallRemind");

	UMainLoginUI_HallRemind_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.GetSaveUserName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMainLoginUI::GetSaveUserName()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.GetSaveUserName");

	UMainLoginUI_GetSaveUserName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.MainLoginUI.GetSavePassWord
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMainLoginUI::GetSavePassWord()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.GetSavePassWord");

	UMainLoginUI_GetSavePassWord_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.MainLoginUI.GetNewSkin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::GetNewSkin(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.GetNewSkin");

	UMainLoginUI_GetNewSkin_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.DeleteRoomComplete
// (Event, Public, BlueprintEvent)

void UMainLoginUI::DeleteRoomComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.DeleteRoomComplete");

	UMainLoginUI_DeleteRoomComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.DeleteFriendComplete
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            player_id                      (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::DeleteFriendComplete(int player_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.DeleteFriendComplete");

	UMainLoginUI_DeleteFriendComplete_Params params;
	params.player_id = player_id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.CreateSkin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            skin_id                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)
// ESexType                       sex                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              item_texture                   (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::CreateSkin(int skin_id, int Num, ESexType sex, int Type, class UTexture2D* item_texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.CreateSkin");

	UMainLoginUI_CreateSkin_Params params;
	params.skin_id = skin_id;
	params.Num = Num;
	params.sex = sex;
	params.Type = Type;
	params.item_texture = item_texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.CreateRooms
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FUIRoomInfo>     rooms                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMainLoginUI::CreateRooms(TArray<struct FUIRoomInfo> rooms)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.CreateRooms");

	UMainLoginUI_CreateRooms_Params params;
	params.rooms = rooms;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.CreateRoomComplete
// (Event, Public, BlueprintEvent)

void UMainLoginUI::CreateRoomComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.CreateRoomComplete");

	UMainLoginUI_CreateRoomComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.CreateOwnerKey
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::CreateOwnerKey(int item_id, const struct FString& Name, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.CreateOwnerKey");

	UMainLoginUI_CreateOwnerKey_Params params;
	params.item_id = item_id;
	params.Name = Name;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.CreateOwnerItemComplete
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainLoginUI::CreateOwnerItemComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.CreateOwnerItemComplete");

	UMainLoginUI_CreateOwnerItemComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.CreateOwnerBox
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           is_need_key                    (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::CreateOwnerBox(int item_id, const struct FString& Name, int Num, class UTexture2D* icon, bool is_need_key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.CreateOwnerBox");

	UMainLoginUI_CreateOwnerBox_Params params;
	params.item_id = item_id;
	params.Name = Name;
	params.Num = Num;
	params.icon = icon;
	params.is_need_key = is_need_key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.CreateItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)
// ESexType                       sex                            (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              item_texture                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            item_level                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 item_name                      (Parm, ZeroConstructor)

void UMainLoginUI::CreateItem(int item_id, int Num, ESexType sex, class UTexture2D* item_texture, int item_level, const struct FString& item_name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.CreateItem");

	UMainLoginUI_CreateItem_Params params;
	params.item_id = item_id;
	params.Num = Num;
	params.sex = sex;
	params.item_texture = item_texture;
	params.item_level = item_level;
	params.item_name = item_name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.CreateBuyBox
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            random_box                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            fixed_box                      (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::CreateBuyBox(int random_box, int fixed_box)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.CreateBuyBox");

	UMainLoginUI_CreateBuyBox_Params params;
	params.random_box = random_box;
	params.fixed_box = fixed_box;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.ComfirmMaster
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            master_id                      (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::ComfirmMaster(int master_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.ComfirmMaster");

	UMainLoginUI_ComfirmMaster_Params params;
	params.master_id = master_id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.ClearTeam
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    new_team_ids                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMainLoginUI::ClearTeam(TArray<int> new_team_ids)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.ClearTeam");

	UMainLoginUI_ClearTeam_Params params;
	params.new_team_ids = new_team_ids;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.ClearHallItem
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainLoginUI::ClearHallItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.ClearHallItem");

	UMainLoginUI_ClearHallItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.ClearGoods
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainLoginUI::ClearGoods()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.ClearGoods");

	UMainLoginUI_ClearGoods_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.ClearFriends
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainLoginUI::ClearFriends()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.ClearFriends");

	UMainLoginUI_ClearFriends_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.ClearAllEquip
// (Event, Public, BlueprintEvent)

void UMainLoginUI::ClearAllEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.ClearAllEquip");

	UMainLoginUI_ClearAllEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.CheckResetSortState
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMainLoginUI::CheckResetSortState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.CheckResetSortState");

	UMainLoginUI_CheckResetSortState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.BuyKeyResponse
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::BuyKeyResponse(int item_id, class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.BuyKeyResponse");

	UMainLoginUI_BuyKeyResponse_Params params;
	params.item_id = item_id;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.BuyKeyRemind
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   remind                         (ConstParm, Parm, OutParm, ReferenceParm)

void UMainLoginUI::BuyKeyRemind(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.BuyKeyRemind");

	UMainLoginUI_BuyKeyRemind_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.BuyBoxRemind
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   remind                         (ConstParm, Parm, OutParm, ReferenceParm)

void UMainLoginUI::BuyBoxRemind(const struct FText& remind)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.BuyBoxRemind");

	UMainLoginUI_BuyBoxRemind_Params params;
	params.remind = remind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.AppendHallSkin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::AppendHallSkin(int item_id, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.AppendHallSkin");

	UMainLoginUI_AppendHallSkin_Params params;
	params.item_id = item_id;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.AppendHallItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UMainLoginUI::AppendHallItem(int item_id, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.AppendHallItem");

	UMainLoginUI_AppendHallItem_Params params;
	params.item_id = item_id;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MainLoginUI.AppendGongGao
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGongGaoType                   Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Info                           (ConstParm, Parm, OutParm, ReferenceParm)

void UMainLoginUI::AppendGongGao(EGongGaoType Type, const struct FText& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MainLoginUI.AppendGongGao");

	UMainLoginUI_AppendGongGao_Params params;
	params.Type = Type;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MiniMapCtrlUI.Vertical
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsDown                         (Parm, ZeroConstructor, IsPlainOldData)

void UMiniMapCtrlUI::Vertical(bool State, bool IsDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MiniMapCtrlUI.Vertical");

	UMiniMapCtrlUI_Vertical_Params params;
	params.State = State;
	params.IsDown = IsDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MiniMapCtrlUI.MarkLocation
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMiniMapCtrlUI::MarkLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MiniMapCtrlUI.MarkLocation");

	UMiniMapCtrlUI_MarkLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MiniMapCtrlUI.MarkHoverItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGamepadMarkType               MarkType                       (Parm, ZeroConstructor, IsPlainOldData)

void UMiniMapCtrlUI::MarkHoverItem(EGamepadMarkType MarkType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MiniMapCtrlUI.MarkHoverItem");

	UMiniMapCtrlUI_MarkHoverItem_Params params;
	params.MarkType = MarkType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MiniMapCtrlUI.MapScale
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UMiniMapCtrlUI::MapScale(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MiniMapCtrlUI.MapScale");

	UMiniMapCtrlUI_MapScale_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MiniMapCtrlUI.Init
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMiniMapCtrlUI::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MiniMapCtrlUI.Init");

	UMiniMapCtrlUI_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MiniMapCtrlUI.Horizontal
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsRight                        (Parm, ZeroConstructor, IsPlainOldData)

void UMiniMapCtrlUI::Horizontal(bool State, bool IsRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MiniMapCtrlUI.Horizontal");

	UMiniMapCtrlUI_Horizontal_Params params;
	params.State = State;
	params.IsRight = IsRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MiniMapCtrlUI.GamepadIntoWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMiniMapCtrlUI::GamepadIntoWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MiniMapCtrlUI.GamepadIntoWidget");

	UMiniMapCtrlUI_GamepadIntoWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.Missile.OnOverlapBegin
// (Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMissile::OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.Missile.OnOverlapBegin");

	AMissile_OnOverlapBegin_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.Missile.CallWhenDestroy
// (Final, Native, Protected)

void AMissile::CallWhenDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.Missile.CallWhenDestroy");

	AMissile_CallWhenDestroy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MissileController.SpawnEmitter
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void AMissileController::SpawnEmitter(const struct FVector& Location, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MissileController.SpawnEmitter");

	AMissileController_SpawnEmitter_Params params;
	params.Location = Location;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MissileController.GetTargetPlayerID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AMissileController::GetTargetPlayerID()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MissileController.GetTargetPlayerID");

	AMissileController_GetTargetPlayerID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.MissileController.DestroyMissile
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void AMissileController::DestroyMissile(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MissileController.DestroyMissile");

	AMissileController_DestroyMissile_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MissileController.Client_Init
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// int64_t                        missileid                      (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        begintime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 spawnlocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                spawnrotation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            launchplayerid                 (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        missilecontrollerid            (Parm, ZeroConstructor, IsPlainOldData)
// int                            weapon_id                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            skin_id                        (Parm, ZeroConstructor, IsPlainOldData)

void AMissileController::Client_Init(int64_t missileid, int64_t begintime, const struct FVector& spawnlocation, const struct FRotator& spawnrotation, const struct FVector& Direction, int launchplayerid, int64_t missilecontrollerid, int weapon_id, int skin_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MissileController.Client_Init");

	AMissileController_Client_Init_Params params;
	params.missileid = missileid;
	params.begintime = begintime;
	params.spawnlocation = spawnlocation;
	params.spawnrotation = spawnrotation;
	params.Direction = Direction;
	params.launchplayerid = launchplayerid;
	params.missilecontrollerid = missilecontrollerid;
	params.weapon_id = weapon_id;
	params.skin_id = skin_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.MissileController.CallWhenDestroy
// (Final, Native, Protected)

void AMissileController::CallWhenDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.MissileController.CallWhenDestroy");

	AMissileController_CallWhenDestroy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBBlueprintHelper.GetWeaponStateIconTexture
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UOBBlueprintHelper::STATIC_GetWeaponStateIconTexture(class UObject* WorldContext, int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBBlueprintHelper.GetWeaponStateIconTexture");

	UOBBlueprintHelper_GetWeaponStateIconTexture_Params params;
	params.WorldContext = WorldContext;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBBlueprintHelper.GetSkillIconTexture
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UOBBlueprintHelper::STATIC_GetSkillIconTexture(class UObject* WorldContext, int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBBlueprintHelper.GetSkillIconTexture");

	UOBBlueprintHelper_GetSkillIconTexture_Params params;
	params.WorldContext = WorldContext;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBBlueprintHelper.GetOBClientUIHelper
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// class UOBClientUIHelper*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOBClientUIHelper* UOBBlueprintHelper::STATIC_GetOBClientUIHelper(class UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBBlueprintHelper.GetOBClientUIHelper");

	UOBBlueprintHelper_GetOBClientUIHelper_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBBlueprintHelper.GetOBClientInfo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// class AOBClientInfo*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AOBClientInfo* UOBBlueprintHelper::STATIC_GetOBClientInfo(class UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBBlueprintHelper.GetOBClientInfo");

	UOBBlueprintHelper_GetOBClientInfo_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBBlueprintHelper.GetItemQuality
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            itemID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UOBBlueprintHelper::STATIC_GetItemQuality(class UObject* WorldContext, int itemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBBlueprintHelper.GetItemQuality");

	UOBBlueprintHelper_GetItemQuality_Params params;
	params.WorldContext = WorldContext;
	params.itemID = itemID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBBlueprintHelper.GetItemIconTexture
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UOBBlueprintHelper::STATIC_GetItemIconTexture(class UObject* WorldContext, int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBBlueprintHelper.GetItemIconTexture");

	UOBBlueprintHelper_GetItemIconTexture_Params params;
	params.WorldContext = WorldContext;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBBlueprintHelper.GetItemIcon
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UOBBlueprintHelper::STATIC_GetItemIcon(class UObject* WorldContext, int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBBlueprintHelper.GetItemIcon");

	UOBBlueprintHelper_GetItemIcon_Params params;
	params.WorldContext = WorldContext;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBBlueprintHelper.GetEquipStateIconTexture
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UOBBlueprintHelper::STATIC_GetEquipStateIconTexture(class UObject* WorldContext, int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBBlueprintHelper.GetEquipStateIconTexture");

	UOBBlueprintHelper_GetEquipStateIconTexture_Params params;
	params.WorldContext = WorldContext;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBBlueprintHelper.GetBuffIconTexture
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            buffID                         (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UOBBlueprintHelper::STATIC_GetBuffIconTexture(class UObject* WorldContext, int buffID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBBlueprintHelper.GetBuffIconTexture");

	UOBBlueprintHelper_GetBuffIconTexture_Params params;
	params.WorldContext = WorldContext;
	params.buffID = buffID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.UpdateTargetViewDir
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// int                            netID                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                rot                            (Parm, ZeroConstructor, IsPlainOldData)

void AOBClientInfo::UpdateTargetViewDir(int netID, const struct FRotator& rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.UpdateTargetViewDir");

	AOBClientInfo_UpdateTargetViewDir_Params params;
	params.netID = netID;
	params.rot = rot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.UpdatePlayersPosition
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<struct FOBPlayerPosInfo> posInfos                       (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AOBClientInfo::UpdatePlayersPosition(TArray<struct FOBPlayerPosInfo> posInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.UpdatePlayersPosition");

	AOBClientInfo_UpdatePlayersPosition_Params params;
	params.posInfos = posInfos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.UpdatePlayersKillInfo
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<struct FOBPlayerKillInfo> killInfos                      (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AOBClientInfo::UpdatePlayersKillInfo(TArray<struct FOBPlayerKillInfo> killInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.UpdatePlayersKillInfo");

	AOBClientInfo_UpdatePlayersKillInfo_Params params;
	params.killInfos = killInfos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.UpdateHorseRideInfo
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            horseID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            curDriverID                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            curPassagerID                  (Parm, ZeroConstructor, IsPlainOldData)

void AOBClientInfo::UpdateHorseRideInfo(int horseID, int curDriverID, int curPassagerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.UpdateHorseRideInfo");

	AOBClientInfo_UpdateHorseRideInfo_Params params;
	params.horseID = horseID;
	params.curDriverID = curDriverID;
	params.curPassagerID = curPassagerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.SetViewRotTarget
// (Final, Native, Public)
// Parameters:
// int                            netID                          (Parm, ZeroConstructor, IsPlainOldData)

void AOBClientInfo::SetViewRotTarget(int netID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.SetViewRotTarget");

	AOBClientInfo_SetViewRotTarget_Params params;
	params.netID = netID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.SetPlaneStartInfo
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        StartTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AOBClientInfo::SetPlaneStartInfo(const struct FVector& Start, const struct FVector& End, int64_t StartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.SetPlaneStartInfo");

	AOBClientInfo_SetPlaneStartInfo_Params params;
	params.Start = Start;
	params.End = End;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.SetLivePlayerNum
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void AOBClientInfo::SetLivePlayerNum(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.SetLivePlayerNum");

	AOBClientInfo_SetLivePlayerNum_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.SetGameStartTime
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        Time                           (Parm, ZeroConstructor, IsPlainOldData)

void AOBClientInfo::SetGameStartTime(int64_t Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.SetGameStartTime");

	AOBClientInfo_SetGameStartTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.SetFlyEnd
// (Net, NetReliable, Native, Event, Public, NetClient)

void AOBClientInfo::SetFlyEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.SetFlyEnd");

	AOBClientInfo_SetFlyEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.Server_UpdateOBLocation
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FVector                 pos                            (Parm, ZeroConstructor, IsPlainOldData)

void AOBClientInfo::Server_UpdateOBLocation(const struct FVector& pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.Server_UpdateOBLocation");

	AOBClientInfo_Server_UpdateOBLocation_Params params;
	params.pos = pos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.Server_RequestControlRotation
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            charNetId                      (Parm, ZeroConstructor, IsPlainOldData)

void AOBClientInfo::Server_RequestControlRotation(int charNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.Server_RequestControlRotation");

	AOBClientInfo_Server_RequestControlRotation_Params params;
	params.charNetId = charNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.Server_ClientInitReady
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AOBClientInfo::Server_ClientInitReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.Server_ClientInitReady");

	AOBClientInfo_Server_ClientInitReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.OnXingfaLearningFinish
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)

void AOBClientInfo::OnXingfaLearningFinish(int ID, int PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.OnXingfaLearningFinish");

	AOBClientInfo_OnXingfaLearningFinish_Params params;
	params.ID = ID;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.OnXingfaLearningFailed
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)

void AOBClientInfo::OnXingfaLearningFailed(int ID, int PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.OnXingfaLearningFailed");

	AOBClientInfo_OnXingfaLearningFailed_Params params;
	params.ID = ID;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.OnXingfaLearning
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)

void AOBClientInfo::OnXingfaLearning(int ID, int PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.OnXingfaLearning");

	AOBClientInfo_OnXingfaLearning_Params params;
	params.ID = ID;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.OnXingfaEmerged
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 pos                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FInteractiveInfo        Info                           (Parm)

void AOBClientInfo::OnXingfaEmerged(int ID, const struct FVector& pos, const struct FInteractiveInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.OnXingfaEmerged");

	AOBClientInfo_OnXingfaEmerged_Params params;
	params.ID = ID;
	params.pos = pos;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.OnTreasureBoxSapwned
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 pos                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FInteractiveInfo        Info                           (Parm)

void AOBClientInfo::OnTreasureBoxSapwned(int ID, const struct FVector& pos, const struct FInteractiveInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.OnTreasureBoxSapwned");

	AOBClientInfo_OnTreasureBoxSapwned_Params params;
	params.ID = ID;
	params.pos = pos;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.OnTreasureBoxOpened
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            openedPlayerID                 (Parm, ZeroConstructor, IsPlainOldData)

void AOBClientInfo::OnTreasureBoxOpened(int ID, int openedPlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.OnTreasureBoxOpened");

	AOBClientInfo_OnTreasureBoxOpened_Params params;
	params.ID = ID;
	params.openedPlayerID = openedPlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.OnTreasureBoxDestroyed
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)

void AOBClientInfo::OnTreasureBoxDestroyed(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.OnTreasureBoxDestroyed");

	AOBClientInfo_OnTreasureBoxDestroyed_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.OnServerInitDone
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            netID                          (Parm, ZeroConstructor, IsPlainOldData)

void AOBClientInfo::OnServerInitDone(int netID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.OnServerInitDone");

	AOBClientInfo_OnServerInitDone_Params params;
	params.netID = netID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.OnPlayerTargetDetailInfoUpdate
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FOBPlayerTargetDetailInfo Info                           (Parm)

void AOBClientInfo::OnPlayerTargetDetailInfoUpdate(const struct FOBPlayerTargetDetailInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.OnPlayerTargetDetailInfoUpdate");

	AOBClientInfo_OnPlayerTargetDetailInfoUpdate_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.OnPlayerGameOver
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            netID                          (Parm, ZeroConstructor, IsPlainOldData)

void AOBClientInfo::OnPlayerGameOver(int netID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.OnPlayerGameOver");

	AOBClientInfo_OnPlayerGameOver_Params params;
	params.netID = netID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.OnPlayerConnectChange
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsConnected                    (Parm, ZeroConstructor, IsPlainOldData)

void AOBClientInfo::OnPlayerConnectChange(int PlayerID, bool IsConnected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.OnPlayerConnectChange");

	AOBClientInfo_OnPlayerConnectChange_Params params;
	params.PlayerID = PlayerID;
	params.IsConnected = IsConnected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.OnParadropSpawned
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FOBParadropPosInfo      paradropPosInfo                (Parm)

void AOBClientInfo::OnParadropSpawned(const struct FOBParadropPosInfo& paradropPosInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.OnParadropSpawned");

	AOBClientInfo_OnParadropSpawned_Params params;
	params.paradropPosInfo = paradropPosInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.OnParadropItemPickedup
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            worldID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            itemID                         (Parm, ZeroConstructor, IsPlainOldData)

void AOBClientInfo::OnParadropItemPickedup(int worldID, int itemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.OnParadropItemPickedup");

	AOBClientInfo_OnParadropItemPickedup_Params params;
	params.worldID = worldID;
	params.itemID = itemID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.OnParadropFinished
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FOBParadropItemInfo     paraDetailInfo                 (Parm)

void AOBClientInfo::OnParadropFinished(const struct FOBParadropItemInfo& paraDetailInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.OnParadropFinished");

	AOBClientInfo_OnParadropFinished_Params params;
	params.paraDetailInfo = paraDetailInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.OnMijingmenSpawned
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 pos                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FInteractiveInfo        Info                           (Parm)

void AOBClientInfo::OnMijingmenSpawned(int ID, const struct FVector& pos, const struct FInteractiveInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.OnMijingmenSpawned");

	AOBClientInfo_OnMijingmenSpawned_Params params;
	params.ID = ID;
	params.pos = pos;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.OnMijingmenOpened
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)

void AOBClientInfo::OnMijingmenOpened(int ID, int PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.OnMijingmenOpened");

	AOBClientInfo_OnMijingmenOpened_Params params;
	params.ID = ID;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.OnGameOver
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<struct FOBStasticsInfo> result                         (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AOBClientInfo::OnGameOver(TArray<struct FOBStasticsInfo> result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.OnGameOver");

	AOBClientInfo_OnGameOver_Params params;
	params.result = result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.OnFightStateExpired
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)

void AOBClientInfo::OnFightStateExpired(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.OnFightStateExpired");

	AOBClientInfo_OnFightStateExpired_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.OnFightStateCreate
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FOBFightState           Info                           (Parm)

void AOBClientInfo::OnFightStateCreate(const struct FOBFightState& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.OnFightStateCreate");

	AOBClientInfo_OnFightStateCreate_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.OnCharacterRespawned
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 pos                            (Parm, ZeroConstructor, IsPlainOldData)

void AOBClientInfo::OnCharacterRespawned(int PlayerID, const struct FVector& pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.OnCharacterRespawned");

	AOBClientInfo_OnCharacterRespawned_Params params;
	params.PlayerID = PlayerID;
	params.pos = pos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.OnCharacterDyingRecover
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 pos                            (Parm, ZeroConstructor, IsPlainOldData)

void AOBClientInfo::OnCharacterDyingRecover(int PlayerID, const struct FVector& pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.OnCharacterDyingRecover");

	AOBClientInfo_OnCharacterDyingRecover_Params params;
	params.PlayerID = PlayerID;
	params.pos = pos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.OnCharacterDying
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 pos                            (Parm, ZeroConstructor, IsPlainOldData)

void AOBClientInfo::OnCharacterDying(int PlayerID, const struct FVector& pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.OnCharacterDying");

	AOBClientInfo_OnCharacterDying_Params params;
	params.PlayerID = PlayerID;
	params.pos = pos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.OnCharacterDied
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 pos                            (Parm, ZeroConstructor, IsPlainOldData)

void AOBClientInfo::OnCharacterDied(int PlayerID, const struct FVector& pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.OnCharacterDied");

	AOBClientInfo_OnCharacterDied_Params params;
	params.PlayerID = PlayerID;
	params.pos = pos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.IsViewingTargetPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AOBClientInfo::IsViewingTargetPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.IsViewingTargetPlayer");

	AOBClientInfo_IsViewingTargetPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.IsShowTeamColor
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AOBClientInfo::IsShowTeamColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.IsShowTeamColor");

	AOBClientInfo_IsShowTeamColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.InitNewHorses
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<struct FOBHorseInfo>    c_horseInfos                   (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AOBClientInfo::InitNewHorses(TArray<struct FOBHorseInfo> c_horseInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.InitNewHorses");

	AOBClientInfo_InitNewHorses_Params params;
	params.c_horseInfos = c_horseInfos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.InitNewCharacters
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<struct FOBPlayerInfo>   c_playerInfos                  (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AOBClientInfo::InitNewCharacters(TArray<struct FOBPlayerInfo> c_playerInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.InitNewCharacters");

	AOBClientInfo_InitNewCharacters_Params params;
	params.c_playerInfos = c_playerInfos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.InitAll
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FOBGameInitInfo         initAllInfo                    (Parm)

void AOBClientInfo::InitAll(const struct FOBGameInitInfo& initAllInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.InitAll");

	AOBClientInfo_InitAll_Params params;
	params.initAllInfo = initAllInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBClientInfo.GetXinfaInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            worldID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FOBXinfaInfo            Info                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AOBClientInfo::GetXinfaInfo(int worldID, struct FOBXinfaInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetXinfaInfo");

	AOBClientInfo_GetXinfaInfo_Params params;
	params.worldID = worldID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetViewTargetPlayerID
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AOBClientInfo::GetViewTargetPlayerID()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetViewTargetPlayerID");

	AOBClientInfo_GetViewTargetPlayerID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetTreasureboxInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            worldID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FOBTreasureBoxInfo      Info                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AOBClientInfo::GetTreasureboxInfo(int worldID, struct FOBTreasureBoxInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetTreasureboxInfo");

	AOBClientInfo_GetTreasureboxInfo_Params params;
	params.worldID = worldID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetTimeToGameStart
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AOBClientInfo::GetTimeToGameStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetTimeToGameStart");

	AOBClientInfo_GetTimeToGameStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetTeamNum
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AOBClientInfo::GetTeamNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetTeamNum");

	AOBClientInfo_GetTeamNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetTeamMemInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 teamName                       (Parm, ZeroConstructor)
// TArray<struct FOBPlayerInfo>   infos                          (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AOBClientInfo::GetTeamMemInfo(const struct FString& teamName, TArray<struct FOBPlayerInfo>* infos)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetTeamMemInfo");

	AOBClientInfo_GetTeamMemInfo_Params params;
	params.teamName = teamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (infos != nullptr)
		*infos = params.infos;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetTeamInfoStr
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 TeamID                         (Parm, ZeroConstructor)
// struct FOBTeamInfo             Info                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AOBClientInfo::GetTeamInfoStr(const struct FString& TeamID, struct FOBTeamInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetTeamInfoStr");

	AOBClientInfo_GetTeamInfoStr_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetTeamInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FOBTeamInfo             Info                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AOBClientInfo::GetTeamInfo(int TeamID, struct FOBTeamInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetTeamInfo");

	AOBClientInfo_GetTeamInfo_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.getTeamColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 TeamID                         (Parm, ZeroConstructor)
// struct FColor                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FColor AOBClientInfo::getTeamColor(const struct FString& TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.getTeamColor");

	AOBClientInfo_getTeamColor_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetTargetPlayerBuffInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FOBBuffSimpleInfo> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FOBBuffSimpleInfo> AOBClientInfo::GetTargetPlayerBuffInfo(int PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetTargetPlayerBuffInfo");

	AOBClientInfo_GetTargetPlayerBuffInfo_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetStartTime
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          timeInMS                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AOBClientInfo::GetStartTime(float* timeInMS)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetStartTime");

	AOBClientInfo_GetStartTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (timeInMS != nullptr)
		*timeInMS = params.timeInMS;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetPlayerTargetDetailInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FOBPlayerTargetDetailInfo Info                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AOBClientInfo::GetPlayerTargetDetailInfo(int PlayerID, struct FOBPlayerTargetDetailInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetPlayerTargetDetailInfo");

	AOBClientInfo_GetPlayerTargetDetailInfo_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetPlayersSortedByTeamIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> AOBClientInfo::GetPlayersSortedByTeamIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetPlayersSortedByTeamIndex");

	AOBClientInfo_GetPlayersSortedByTeamIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetPlayersSortedByKillMajor
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           is_forward                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> AOBClientInfo::GetPlayersSortedByKillMajor(bool is_forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetPlayersSortedByKillMajor");

	AOBClientInfo_GetPlayersSortedByKillMajor_Params params;
	params.is_forward = is_forward;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetPlayersSortedByDamageMajor
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           is_forward                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> AOBClientInfo::GetPlayersSortedByDamageMajor(bool is_forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetPlayersSortedByDamageMajor");

	AOBClientInfo_GetPlayersSortedByDamageMajor_Params params;
	params.is_forward = is_forward;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetPlayerInfo_MaxInjury
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AOBClientInfo::GetPlayerInfo_MaxInjury()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetPlayerInfo_MaxInjury");

	AOBClientInfo_GetPlayerInfo_MaxInjury_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetPlayerInfo_MaxDyingHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AOBClientInfo::GetPlayerInfo_MaxDyingHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetPlayerInfo_MaxDyingHealth");

	AOBClientInfo_GetPlayerInfo_MaxDyingHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetPlayerInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FOBPlayerInfo           Info                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AOBClientInfo::GetPlayerInfo(int PlayerID, struct FOBPlayerInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetPlayerInfo");

	AOBClientInfo_GetPlayerInfo_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetParaPosInfos
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TMap<int, struct FOBParadropPosInfo> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<int, struct FOBParadropPosInfo> AOBClientInfo::GetParaPosInfos()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetParaPosInfos");

	AOBClientInfo_GetParaPosInfos_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetParadropPosInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FOBParadropPosInfo      Info                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AOBClientInfo::GetParadropPosInfo(int ID, struct FOBParadropPosInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetParadropPosInfo");

	AOBClientInfo_GetParadropPosInfo_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetParadropDetailInfos
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TMap<int, struct FOBParadropItemInfo> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<int, struct FOBParadropItemInfo> AOBClientInfo::GetParadropDetailInfos()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetParadropDetailInfos");

	AOBClientInfo_GetParadropDetailInfos_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetParadropDetailInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FOBParadropItemInfo     Info                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AOBClientInfo::GetParadropDetailInfo(int ID, struct FOBParadropItemInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetParadropDetailInfo");

	AOBClientInfo_GetParadropDetailInfo_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetMijingenInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            worldID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FOBMijingmenInfo        Info                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AOBClientInfo::GetMijingenInfo(int worldID, struct FOBMijingmenInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetMijingenInfo");

	AOBClientInfo_GetMijingenInfo_Params params;
	params.worldID = worldID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetMaxPlayerPerTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AOBClientInfo::GetMaxPlayerPerTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetMaxPlayerPerTeam");

	AOBClientInfo_GetMaxPlayerPerTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetHorseInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            horseID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FOBHorseInfo            Info                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AOBClientInfo::GetHorseInfo(int horseID, struct FOBHorseInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetHorseInfo");

	AOBClientInfo_GetHorseInfo_Params params;
	params.horseID = horseID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetHorseBaseInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            horseBaseID                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FOBHorseBasicInfoToShow ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FOBHorseBasicInfoToShow AOBClientInfo::GetHorseBaseInfo(int horseBaseID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetHorseBaseInfo");

	AOBClientInfo_GetHorseBaseInfo_Params params;
	params.horseBaseID = horseBaseID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetGameResultInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FOBStasticsInfo> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FOBStasticsInfo> AOBClientInfo::GetGameResultInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetGameResultInfo");

	AOBClientInfo_GetGameResultInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetFlyStartInfo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 pos                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 dir                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AOBClientInfo::GetFlyStartInfo(struct FVector* pos, struct FVector* dir, float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetFlyStartInfo");

	AOBClientInfo_GetFlyStartInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (pos != nullptr)
		*pos = params.pos;
	if (dir != nullptr)
		*dir = params.dir;
	if (Time != nullptr)
		*Time = params.Time;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetFightStateInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FOBFightState           Info                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AOBClientInfo::GetFightStateInfo(int ID, struct FOBFightState* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetFightStateInfo");

	AOBClientInfo_GetFightStateInfo_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetCurCameraType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EObserveCameraType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EObserveCameraType AOBClientInfo::GetCurCameraType()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetCurCameraType");

	AOBClientInfo_GetCurCameraType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetAllXinfaInfos
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TMap<int, struct FOBXinfaInfo> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<int, struct FOBXinfaInfo> AOBClientInfo::GetAllXinfaInfos()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetAllXinfaInfos");

	AOBClientInfo_GetAllXinfaInfos_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetAllTreasureboxInfos
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TMap<int, struct FOBTreasureBoxInfo> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<int, struct FOBTreasureBoxInfo> AOBClientInfo::GetAllTreasureboxInfos()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetAllTreasureboxInfos");

	AOBClientInfo_GetAllTreasureboxInfos_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetAllTeamInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FOBTeamInfo>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FOBTeamInfo> AOBClientInfo::GetAllTeamInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetAllTeamInfo");

	AOBClientInfo_GetAllTeamInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetAllPlayerInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TMap<int, struct FOBPlayerInfo> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<int, struct FOBPlayerInfo> AOBClientInfo::GetAllPlayerInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetAllPlayerInfo");

	AOBClientInfo_GetAllPlayerInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetAllMijingmenInfos
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TMap<int, struct FOBMijingmenInfo> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<int, struct FOBMijingmenInfo> AOBClientInfo::GetAllMijingmenInfos()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetAllMijingmenInfos");

	AOBClientInfo_GetAllMijingmenInfos_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetAllFightStates
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TMap<int, struct FOBFightState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<int, struct FOBFightState> AOBClientInfo::GetAllFightStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetAllFightStates");

	AOBClientInfo_GetAllFightStates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetAliveTeamNum
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AOBClientInfo::GetAliveTeamNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetAliveTeamNum");

	AOBClientInfo_GetAliveTeamNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBClientInfo.GetAlivePlayerNum
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AOBClientInfo::GetAlivePlayerNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBClientInfo.GetAlivePlayerNum");

	AOBClientInfo_GetAlivePlayerNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBMapUI.OnInit
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector2D               original_level_size            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               original_map_size              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               show_map_size                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Center                         (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              chinese_map                    (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              english_map                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           can_mark                       (Parm, ZeroConstructor, IsPlainOldData)

void UOBMapUI::OnInit(const struct FVector2D& original_level_size, const struct FVector2D& original_map_size, const struct FVector2D& show_map_size, const struct FVector& Center, class UTexture2D* chinese_map, class UTexture2D* english_map, bool can_mark)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBMapUI.OnInit");

	UOBMapUI_OnInit_Params params;
	params.original_level_size = original_level_size;
	params.original_map_size = original_map_size;
	params.show_map_size = show_map_size;
	params.Center = Center;
	params.chinese_map = chinese_map;
	params.english_map = english_map;
	params.can_mark = can_mark;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBMapUI.Init
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               original_level_size            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               original_map_size              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               show_map_size                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Center                         (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              chinese_map                    (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              english_map                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           can_mark                       (Parm, ZeroConstructor, IsPlainOldData)

void UOBMapUI::Init(const struct FVector2D& original_level_size, const struct FVector2D& original_map_size, const struct FVector2D& show_map_size, const struct FVector& Center, class UTexture2D* chinese_map, class UTexture2D* english_map, bool can_mark)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBMapUI.Init");

	UOBMapUI_Init_Params params;
	params.original_level_size = original_level_size;
	params.original_map_size = original_map_size;
	params.show_map_size = show_map_size;
	params.Center = Center;
	params.chinese_map = chinese_map;
	params.english_map = english_map;
	params.can_mark = can_mark;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBMapUI.GetPositionByVector3
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UOBMapUI::GetPositionByVector3(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBMapUI.GetPositionByVector3");

	UOBMapUI_GetPositionByVector3_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBMapUI.GetPercentByVector3
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UOBMapUI::GetPercentByVector3(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBMapUI.GetPercentByVector3");

	UOBMapUI_GetPercentByVector3_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.OBStatisticsWidget.InitPlayerInfos
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FOBStasticsInfo> playerinfos                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UOBStatisticsWidget::InitPlayerInfos(TArray<struct FOBStasticsInfo> playerinfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBStatisticsWidget.InitPlayerInfos");

	UOBStatisticsWidget_InitPlayerInfos_Params params;
	params.playerinfos = playerinfos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBTargetViewUI.ShowDamageCircle
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOBTargetViewUI::ShowDamageCircle()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBTargetViewUI.ShowDamageCircle");

	UOBTargetViewUI_ShowDamageCircle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBTargetViewUI.SetDamageCircleWaitingTime
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void UOBTargetViewUI::SetDamageCircleWaitingTime(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBTargetViewUI.SetDamageCircleWaitingTime");

	UOBTargetViewUI_SetDamageCircleWaitingTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBTargetViewUI.SetDamageCircleState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDamageCircleState             State                          (Parm, ZeroConstructor, IsPlainOldData)

void UOBTargetViewUI::SetDamageCircleState(EDamageCircleState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBTargetViewUI.SetDamageCircleState");

	UOBTargetViewUI_SetDamageCircleState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBTargetViewUI.SetDamageCircleShringkingTime
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentTime                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          alltime                        (Parm, ZeroConstructor, IsPlainOldData)

void UOBTargetViewUI::SetDamageCircleShringkingTime(float CurrentTime, float alltime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBTargetViewUI.SetDamageCircleShringkingTime");

	UOBTargetViewUI_SetDamageCircleShringkingTime_Params params;
	params.CurrentTime = CurrentTime;
	params.alltime = alltime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBTargetViewUI.HideDamageCircle
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOBTargetViewUI::HideDamageCircle()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBTargetViewUI.HideDamageCircle");

	UOBTargetViewUI_HideDamageCircle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBTargetViewUI.AppendKillInfo
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 attack_player_name             (Parm, ZeroConstructor)
// struct FString                 dead_player_name               (Parm, ZeroConstructor)
// int                            cause_id                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// ECauseDyingType                reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UOBTargetViewUI::AppendKillInfo(const struct FString& attack_player_name, const struct FString& dead_player_name, int cause_id, ECauseDyingType reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBTargetViewUI.AppendKillInfo");

	UOBTargetViewUI_AppendKillInfo_Params params;
	params.attack_player_name = attack_player_name;
	params.dead_player_name = dead_player_name;
	params.cause_id = cause_id;
	params.reason = reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OBTargetViewUI.AppendGongGao
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGongGaoType                   Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Info                           (ConstParm, Parm, OutParm, ReferenceParm)

void UOBTargetViewUI::AppendGongGao(EGongGaoType Type, const struct FText& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OBTargetViewUI.AppendGongGao");

	UOBTargetViewUI_AppendGongGao_Params params;
	params.Type = Type;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OpeningUI.SetDonshowIntroduce
// (Final, Native, Protected, BlueprintCallable)

void UOpeningUI::SetDonshowIntroduce()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OpeningUI.SetDonshowIntroduce");

	UOpeningUI_SetDonshowIntroduce_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.OpeningUI.GetIsShowIntroduce
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOpeningUI::GetIsShowIntroduce()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.OpeningUI.GetIsShowIntroduce");

	UOpeningUI_GetIsShowIntroduce_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PickBox.InteractiveUITips
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWuXiaXCharacter*        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APickBox::InteractiveUITips(class AWuXiaXCharacter* Player, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PickBox.InteractiveUITips");

	APickBox_InteractiveUITips_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

	return params.ReturnValue;
}


// Function WuXiaX.PickBox.GetInteractiveType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWuXiaXCharacter*        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// EInteractiveType               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EInteractiveType APickBox::GetInteractiveType(class AWuXiaXCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PickBox.GetInteractiveType");

	APickBox_GetInteractiveType_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PickBox.CanInteractive
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWuXiaXCharacter*        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// ETriggerInteractiveType        Trigger                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APickBox::CanInteractive(class AWuXiaXCharacter* Player, ETriggerInteractiveType Trigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PickBox.CanInteractive");

	APickBox_CanInteractive_Params params;
	params.Player = Player;
	params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PickItem.OnRepScale
// (Final, Native, Protected)

void APickItem::OnRepScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PickItem.OnRepScale");

	APickItem_OnRepScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PickItem.OnRepPickType
// (Final, Native, Protected)

void APickItem::OnRepPickType()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PickItem.OnRepPickType");

	APickItem_OnRepPickType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PickItem.OnRepIteminfo
// (Final, Native, Protected)

void APickItem::OnRepIteminfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PickItem.OnRepIteminfo");

	APickItem_OnRepIteminfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PickItem.OnOverlapEnd
// (Native, Protected)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void APickItem::OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PickItem.OnOverlapEnd");

	APickItem_OnOverlapEnd_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PickItem.OnOverlapBegin
// (Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APickItem::OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PickItem.OnOverlapBegin");

	APickItem_OnOverlapBegin_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PickItem.InteractiveUITips
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWuXiaXCharacter*        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APickItem::InteractiveUITips(class AWuXiaXCharacter* Player, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PickItem.InteractiveUITips");

	APickItem_InteractiveUITips_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

	return params.ReturnValue;
}


// Function WuXiaX.PickItem.GetInteractiveType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWuXiaXCharacter*        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// EInteractiveType               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EInteractiveType APickItem::GetInteractiveType(class AWuXiaXCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PickItem.GetInteractiveType");

	APickItem_GetInteractiveType_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PickItem.CanInteractive
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWuXiaXCharacter*        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// ETriggerInteractiveType        Trigger                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APickItem::CanInteractive(class AWuXiaXCharacter* Player, ETriggerInteractiveType Trigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PickItem.CanInteractive");

	APickItem_CanInteractive_Params params;
	params.Player = Player;
	params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PickItem.CallWhenDestroy
// (Final, Native, Protected)

void APickItem::CallWhenDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PickItem.CallWhenDestroy");

	APickItem_CallWhenDestroy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PickTextUI.WUXUEUseState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UPickTextUI::WUXUEUseState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PickTextUI.WUXUEUseState");

	UPickTextUI_WUXUEUseState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PickTextUI.SetItemName
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)

void UPickTextUI::SetItemName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PickTextUI.SetItemName");

	UPickTextUI_SetItemName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerAssassinationComponent.Server_AssassinationTarget
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void UPlayerAssassinationComponent::Server_AssassinationTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerAssassinationComponent.Server_AssassinationTarget");

	UPlayerAssassinationComponent_Server_AssassinationTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerAssassinationComponent.GetIsKillSuccess
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlayerAssassinationComponent::GetIsKillSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerAssassinationComponent.GetIsKillSuccess");

	UPlayerAssassinationComponent_GetIsKillSuccess_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerAssassinationComponent.GetIsFallKill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlayerAssassinationComponent::GetIsFallKill()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerAssassinationComponent.GetIsFallKill");

	UPlayerAssassinationComponent_GetIsFallKill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerAssassinationComponent.GetFullActionTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlayerAssassinationComponent::GetFullActionTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerAssassinationComponent.GetFullActionTime");

	UPlayerAssassinationComponent_GetFullActionTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerAssassinationComponent.GetCurrentActionTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlayerAssassinationComponent::GetCurrentActionTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerAssassinationComponent.GetCurrentActionTime");

	UPlayerAssassinationComponent_GetCurrentActionTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_WallJump_Client
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewVelocity                    (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_WallJump_Client(int64_t player_id, const struct FVector& NewVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_WallJump_Client");

	UPlayerBroadcastComponent_Broad_WallJump_Client_Params params;
	params.player_id = player_id;
	params.NewVelocity = NewVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_WallJump
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewVelocity                    (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_WallJump(const struct FVector& NewVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_WallJump");

	UPlayerBroadcastComponent_Broad_WallJump_Params params;
	params.NewVelocity = NewVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_TakeWeapon_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           take_change                    (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_TakeWeapon_Client(int64_t player_id, int index, bool take_change)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_TakeWeapon_Client");

	UPlayerBroadcastComponent_Broad_TakeWeapon_Client_Params params;
	params.player_id = player_id;
	params.index = index;
	params.take_change = take_change;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_StartFallingAttack_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_StartFallingAttack_Client(int64_t player_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_StartFallingAttack_Client");

	UPlayerBroadcastComponent_Broad_StartFallingAttack_Client_Params params;
	params.player_id = player_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_SkillPlay_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        play_time                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            skill_id                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   section_name                   (Parm, ZeroConstructor, IsPlainOldData)
// int16_t                        rotation_r                     (Parm, ZeroConstructor, IsPlainOldData)
// int16_t                        rotation_p                     (Parm, ZeroConstructor, IsPlainOldData)
// int16_t                        rotation_y                     (Parm, ZeroConstructor, IsPlainOldData)
// EPlayerFightState              child_state                    (Parm, ZeroConstructor, IsPlainOldData)
// EActionCheckType               check_action                   (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_SkillPlay_Client(int64_t player_id, int64_t play_time, int skill_id, const struct FName& section_name, int16_t rotation_r, int16_t rotation_p, int16_t rotation_y, EPlayerFightState child_state, EActionCheckType check_action)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_SkillPlay_Client");

	UPlayerBroadcastComponent_Broad_SkillPlay_Client_Params params;
	params.player_id = player_id;
	params.play_time = play_time;
	params.skill_id = skill_id;
	params.section_name = section_name;
	params.rotation_r = rotation_r;
	params.rotation_p = rotation_p;
	params.rotation_y = rotation_y;
	params.child_state = child_state;
	params.check_action = check_action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_SetStiffState_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           foo                            (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_SetStiffState_Client(int64_t player_id, bool foo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_SetStiffState_Client");

	UPlayerBroadcastComponent_Broad_SetStiffState_Client_Params params;
	params.player_id = player_id;
	params.foo = foo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_SetStiffState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           foo                            (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_SetStiffState(bool foo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_SetStiffState");

	UPlayerBroadcastComponent_Broad_SetStiffState_Params params;
	params.foo = foo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_SetPickItemNumber_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            world_id                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Number                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_SetPickItemNumber_Client(int world_id, int Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_SetPickItemNumber_Client");

	UPlayerBroadcastComponent_Broad_SetPickItemNumber_Client_Params params;
	params.world_id = world_id;
	params.Number = Number;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_SaveSquad_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            actionindex                    (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_SaveSquad_Client(int64_t player_id, int PlayerID, int actionindex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_SaveSquad_Client");

	UPlayerBroadcastComponent_Broad_SaveSquad_Client_Params params;
	params.player_id = player_id;
	params.PlayerID = PlayerID;
	params.actionindex = actionindex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_RideHorse_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isride                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isleft                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_RideHorse_Client(int64_t player_id, bool isride, bool isleft)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_RideHorse_Client");

	UPlayerBroadcastComponent_Broad_RideHorse_Client_Params params;
	params.player_id = player_id;
	params.isride = isride;
	params.isleft = isleft;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_PlaySkillEffect_Client
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// EPlayerFightState              Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        skill_time                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          be_attack_angle                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 dir                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Len                            (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_PlaySkillEffect_Client(int64_t player_id, EPlayerFightState Type, const struct FRotator& Rotation, int64_t skill_time, float be_attack_angle, const struct FVector& dir, float Len)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_PlaySkillEffect_Client");

	UPlayerBroadcastComponent_Broad_PlaySkillEffect_Client_Params params;
	params.player_id = player_id;
	params.Type = Type;
	params.Rotation = Rotation;
	params.skill_time = skill_time;
	params.be_attack_angle = be_attack_angle;
	params.dir = dir;
	params.Len = Len;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_PlayerResurrection_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_PlayerResurrection_Client(int64_t player_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_PlayerResurrection_Client");

	UPlayerBroadcastComponent_Broad_PlayerResurrection_Client_Params params;
	params.player_id = player_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_PlayBlockBeAttack_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_PlayBlockBeAttack_Client(int64_t player_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_PlayBlockBeAttack_Client");

	UPlayerBroadcastComponent_Broad_PlayBlockBeAttack_Client_Params params;
	params.player_id = player_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_PlayBeAttack_Client
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        play_time                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           beattack                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            be_attack_type                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          be_attack_angle                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 dir                            (Parm, ZeroConstructor, IsPlainOldData)
// EPlayerActionState             action_type                    (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_PlayBeAttack_Client(int64_t player_id, int64_t play_time, bool beattack, int be_attack_type, float be_attack_angle, const struct FVector& dir, EPlayerActionState action_type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_PlayBeAttack_Client");

	UPlayerBroadcastComponent_Broad_PlayBeAttack_Client_Params params;
	params.player_id = player_id;
	params.play_time = play_time;
	params.beattack = beattack;
	params.be_attack_type = be_attack_type;
	params.be_attack_angle = be_attack_angle;
	params.dir = dir;
	params.action_type = action_type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_PlayAim_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           flag                           (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_PlayAim_Client(int64_t player_id, bool flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_PlayAim_Client");

	UPlayerBroadcastComponent_Broad_PlayAim_Client_Params params;
	params.player_id = player_id;
	params.flag = flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_OnRep_Block_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        block_counter_attack_play_time (Parm, ZeroConstructor, IsPlainOldData)
// bool                           flag                           (Parm, ZeroConstructor, IsPlainOldData)
// EPlayerFightState              false_flag                     (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_OnRep_Block_Client(int64_t player_id, int64_t block_counter_attack_play_time, bool flag, EPlayerFightState false_flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_OnRep_Block_Client");

	UPlayerBroadcastComponent_Broad_OnRep_Block_Client_Params params;
	params.player_id = player_id;
	params.block_counter_attack_play_time = block_counter_attack_play_time;
	params.flag = flag;
	params.false_flag = false_flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_LianTiao_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           is_in_lian_tiao                (Parm, ZeroConstructor, IsPlainOldData)
// int                            lian_tiao_index                (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_LianTiao_Client(int64_t player_id, bool is_in_lian_tiao, int lian_tiao_index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_LianTiao_Client");

	UPlayerBroadcastComponent_Broad_LianTiao_Client_Params params;
	params.player_id = player_id;
	params.is_in_lian_tiao = is_in_lian_tiao;
	params.lian_tiao_index = lian_tiao_index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_LaunchMissile_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        begintime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           hasnextmissile                 (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_LaunchMissile_Client(int64_t player_id, int64_t begintime, bool hasnextmissile)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_LaunchMissile_Client");

	UPlayerBroadcastComponent_Broad_LaunchMissile_Client_Params params;
	params.player_id = player_id;
	params.begintime = begintime;
	params.hasnextmissile = hasnextmissile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_KillTarget_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            actionindex                    (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_KillTarget_Client(int64_t player_id, int PlayerID, int actionindex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_KillTarget_Client");

	UPlayerBroadcastComponent_Broad_KillTarget_Client_Params params;
	params.player_id = player_id;
	params.PlayerID = PlayerID;
	params.actionindex = actionindex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_FinishSaveSquad_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_FinishSaveSquad_Client(int64_t player_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_FinishSaveSquad_Client");

	UPlayerBroadcastComponent_Broad_FinishSaveSquad_Client_Params params;
	params.player_id = player_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_FinishKillTarget_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_FinishKillTarget_Client(int64_t player_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_FinishKillTarget_Client");

	UPlayerBroadcastComponent_Broad_FinishKillTarget_Client_Params params;
	params.player_id = player_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_FinishKeepInteractive_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_FinishKeepInteractive_Client(int64_t player_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_FinishKeepInteractive_Client");

	UPlayerBroadcastComponent_Broad_FinishKeepInteractive_Client_Params params;
	params.player_id = player_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_FinishInteractiveMove_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_FinishInteractiveMove_Client(int64_t player_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_FinishInteractiveMove_Client");

	UPlayerBroadcastComponent_Broad_FinishInteractiveMove_Client_Params params;
	params.player_id = player_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_FinishFallingAttack_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        skillid                        (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_FinishFallingAttack_Client(int64_t player_id, int64_t skillid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_FinishFallingAttack_Client");

	UPlayerBroadcastComponent_Broad_FinishFallingAttack_Client_Params params;
	params.player_id = player_id;
	params.skillid = skillid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_FakeCharacter_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<int64_t>                player_id                      (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector_NetQuantize> pos                            (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// TArray<int64_t>                net_player_cloth_id            (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UPlayerBroadcastComponent::Broad_FakeCharacter_Client(TArray<int64_t> player_id, TArray<struct FVector_NetQuantize> pos, TArray<int64_t> net_player_cloth_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_FakeCharacter_Client");

	UPlayerBroadcastComponent_Broad_FakeCharacter_Client_Params params;
	params.player_id = player_id;
	params.pos = pos;
	params.net_player_cloth_id = net_player_cloth_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_EndAnimEffect_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            effecttype                     (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_EndAnimEffect_Client(int64_t player_id, int effecttype)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_EndAnimEffect_Client");

	UPlayerBroadcastComponent_Broad_EndAnimEffect_Client_Params params;
	params.player_id = player_id;
	params.effecttype = effecttype;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_CollisionEnabled_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_CollisionEnabled_Client(int64_t player_id, bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_CollisionEnabled_Client");

	UPlayerBroadcastComponent_Broad_CollisionEnabled_Client_Params params;
	params.player_id = player_id;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_ChangeQingGongState_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// EPlayerMotionState             State                          (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_ChangeQingGongState_Client(int64_t player_id, EPlayerMotionState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_ChangeQingGongState_Client");

	UPlayerBroadcastComponent_Broad_ChangeQingGongState_Client_Params params;
	params.player_id = player_id;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_ChangePlayerChildState_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// EPlayerFightState              State                          (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_ChangePlayerChildState_Client(int64_t player_id, EPlayerFightState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_ChangePlayerChildState_Client");

	UPlayerBroadcastComponent_Broad_ChangePlayerChildState_Client_Params params;
	params.player_id = player_id;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_BreakKeepInteractive_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_BreakKeepInteractive_Client(int64_t player_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_BreakKeepInteractive_Client");

	UPlayerBroadcastComponent_Broad_BreakKeepInteractive_Client_Params params;
	params.player_id = player_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_BreakBeKill_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_BreakBeKill_Client(int64_t player_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_BreakBeKill_Client");

	UPlayerBroadcastComponent_Broad_BreakBeKill_Client_Params params;
	params.player_id = player_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_BreakAction_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// EBreakActionType               breaktype                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_BreakAction_Client(int64_t player_id, EBreakActionType breaktype)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_BreakAction_Client");

	UPlayerBroadcastComponent_Broad_BreakAction_Client_Params params;
	params.player_id = player_id;
	params.breaktype = breaktype;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_BeginUseItem_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// EBagType                       bag_type                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)
// EUseItemState                  useitemstate                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            actionindex                    (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_BeginUseItem_Client(int64_t player_id, EBagType bag_type, int index, int Num, EUseItemState useitemstate, float Time, int actionindex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_BeginUseItem_Client");

	UPlayerBroadcastComponent_Broad_BeginUseItem_Client_Params params;
	params.player_id = player_id;
	params.bag_type = bag_type;
	params.index = index;
	params.Num = Num;
	params.useitemstate = useitemstate;
	params.Time = Time;
	params.actionindex = actionindex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_BeginKeepInteractive_Client
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        begintime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          keeptime                       (Parm, ZeroConstructor, IsPlainOldData)
// EKeeyInteractiveType           Type                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            interactiveid                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 playerlocation                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LookAtLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            actionindex                    (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_BeginKeepInteractive_Client(int64_t player_id, int64_t begintime, float keeptime, EKeeyInteractiveType Type, int interactiveid, const struct FVector& playerlocation, const struct FVector& LookAtLocation, int actionindex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_BeginKeepInteractive_Client");

	UPlayerBroadcastComponent_Broad_BeginKeepInteractive_Client_Params params;
	params.player_id = player_id;
	params.begintime = begintime;
	params.keeptime = keeptime;
	params.Type = Type;
	params.interactiveid = interactiveid;
	params.playerlocation = playerlocation;
	params.LookAtLocation = LookAtLocation;
	params.actionindex = actionindex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_BeginInteractiveMove_Client
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        begintime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          keeptime                       (Parm, ZeroConstructor, IsPlainOldData)
// EKeeyInteractiveType           Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 beginlocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 EndLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// class AWuXiaInteractiveActor*  interactiveactor               (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_BeginInteractiveMove_Client(int64_t player_id, int64_t begintime, float keeptime, EKeeyInteractiveType Type, const struct FVector& beginlocation, const struct FVector& EndLocation, class AWuXiaInteractiveActor* interactiveactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_BeginInteractiveMove_Client");

	UPlayerBroadcastComponent_Broad_BeginInteractiveMove_Client_Params params;
	params.player_id = player_id;
	params.begintime = begintime;
	params.keeptime = keeptime;
	params.Type = Type;
	params.beginlocation = beginlocation;
	params.EndLocation = EndLocation;
	params.interactiveactor = interactiveactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_BeginBeKill_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_BeginBeKill_Client(int64_t player_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_BeginBeKill_Client");

	UPlayerBroadcastComponent_Broad_BeginBeKill_Client_Params params;
	params.player_id = player_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_BeginBeAssassination_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isfall                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           issucces                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        begintime                      (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        actiontime                     (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        ID                             (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_BeginBeAssassination_Client(int64_t player_id, bool isfall, bool issucces, float Damage, int64_t begintime, int64_t actiontime, int64_t ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_BeginBeAssassination_Client");

	UPlayerBroadcastComponent_Broad_BeginBeAssassination_Client_Params params;
	params.player_id = player_id;
	params.isfall = isfall;
	params.issucces = issucces;
	params.Damage = Damage;
	params.begintime = begintime;
	params.actiontime = actiontime;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_BeginAssassinationTarget_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isfall                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           issucces                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        begintime                      (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        actiontime                     (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        targetid                       (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_BeginAssassinationTarget_Client(int64_t player_id, bool isfall, bool issucces, float Damage, int64_t begintime, int64_t actiontime, int64_t targetid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_BeginAssassinationTarget_Client");

	UPlayerBroadcastComponent_Broad_BeginAssassinationTarget_Client_Params params;
	params.player_id = player_id;
	params.isfall = isfall;
	params.issucces = issucces;
	params.Damage = Damage;
	params.begintime = begintime;
	params.actiontime = actiontime;
	params.targetid = targetid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBroadcastComponent.Broad_BeginAnimEffect_Client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            effecttype                     (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBroadcastComponent::Broad_BeginAnimEffect_Client(int64_t player_id, int effecttype)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBroadcastComponent.Broad_BeginAnimEffect_Client");

	UPlayerBroadcastComponent_Broad_BeginAnimEffect_Client_Params params;
	params.player_id = player_id;
	params.effecttype = effecttype;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBuffComponent.UI_SetBuff
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        buffID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            numberoflayer                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBuffComponent::UI_SetBuff(int64_t buffID, int numberoflayer, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBuffComponent.UI_SetBuff");

	UPlayerBuffComponent_UI_SetBuff_Params params;
	params.buffID = buffID;
	params.numberoflayer = numberoflayer;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBuffComponent.UI_RemoveBuff
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        buffID                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBuffComponent::UI_RemoveBuff(int64_t buffID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBuffComponent.UI_RemoveBuff");

	UPlayerBuffComponent_UI_RemoveBuff_Params params;
	params.buffID = buffID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerBuffComponent.UI_ClearBuffs
// (Net, NetReliable, Native, Event, Public, NetClient)

void UPlayerBuffComponent::UI_ClearBuffs()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerBuffComponent.UI_ClearBuffs");

	UPlayerBuffComponent_UI_ClearBuffs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerCaptureActor.ShowHair
// (Final, Native, Public, BlueprintCallable)

void APlayerCaptureActor::ShowHair()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerCaptureActor.ShowHair");

	APlayerCaptureActor_ShowHair_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerCaptureActor.ShowFace
// (Final, Native, Public, BlueprintCallable)

void APlayerCaptureActor::ShowFace()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerCaptureActor.ShowFace");

	APlayerCaptureActor_ShowFace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerCaptureActor.SetWeapon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            skin_id                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void APlayerCaptureActor::SetWeapon(int skin_id, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerCaptureActor.SetWeapon");

	APlayerCaptureActor_SetWeapon_Params params;
	params.skin_id = skin_id;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerCaptureActor.SetHat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            skin_id                        (Parm, ZeroConstructor, IsPlainOldData)

void APlayerCaptureActor::SetHat(int skin_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerCaptureActor.SetHat");

	APlayerCaptureActor_SetHat_Params params;
	params.skin_id = skin_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerCaptureActor.SetEquip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void APlayerCaptureActor::SetEquip(int item_id, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerCaptureActor.SetEquip");

	APlayerCaptureActor_SetEquip_Params params;
	params.item_id = item_id;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerCaptureActor.ResetSkinColor
// (Final, Native, Public, BlueprintCallable)

void APlayerCaptureActor::ResetSkinColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerCaptureActor.ResetSkinColor");

	APlayerCaptureActor_ResetSkinColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerCaptureActor.ResetHairColor
// (Final, Native, Public, BlueprintCallable)

void APlayerCaptureActor::ResetHairColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerCaptureActor.ResetHairColor");

	APlayerCaptureActor_ResetHairColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerCaptureActor.LoadComplete
// (Final, Native, Private)

void APlayerCaptureActor::LoadComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerCaptureActor.LoadComplete");

	APlayerCaptureActor_LoadComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerEnumFunctionLibrary.IsContainsSpecialStr
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 originstr                      (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlayerEnumFunctionLibrary::STATIC_IsContainsSpecialStr(const struct FString& originstr)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerEnumFunctionLibrary.IsContainsSpecialStr");

	UPlayerEnumFunctionLibrary_IsContainsSpecialStr_Params params;
	params.originstr = originstr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerEnumFunctionLibrary.GetWeaponEquipTypeById
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWuXiaXGameInstance*     game_instance                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)
// EWeaponEquipType               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EWeaponEquipType UPlayerEnumFunctionLibrary::STATIC_GetWeaponEquipTypeById(class UWuXiaXGameInstance* game_instance, int item_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerEnumFunctionLibrary.GetWeaponEquipTypeById");

	UPlayerEnumFunctionLibrary_GetWeaponEquipTypeById_Params params;
	params.game_instance = game_instance;
	params.item_id = item_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerEnumFunctionLibrary.GetStrArrayByPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UPlayerEnumFunctionLibrary::STATIC_GetStrArrayByPath(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerEnumFunctionLibrary.GetStrArrayByPath");

	UPlayerEnumFunctionLibrary_GetStrArrayByPath_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerEnumFunctionLibrary.GetStateString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EPlayerGameState               Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPlayerEnumFunctionLibrary::STATIC_GetStateString(EPlayerGameState Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerEnumFunctionLibrary.GetStateString");

	UPlayerEnumFunctionLibrary_GetStateString_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerEnumFunctionLibrary.GetSkinType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            skin_id                        (Parm, ZeroConstructor, IsPlainOldData)
// class UWuXiaXGameInstance*     game_instance                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlayerEnumFunctionLibrary::STATIC_GetSkinType(int skin_id, class UWuXiaXGameInstance* game_instance)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerEnumFunctionLibrary.GetSkinType");

	UPlayerEnumFunctionLibrary_GetSkinType_Params params;
	params.skin_id = skin_id;
	params.game_instance = game_instance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerEnumFunctionLibrary.GetSkinIcon
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            skin_id                        (Parm, ZeroConstructor, IsPlainOldData)
// class UWuXiaXGameInstance*     game_instance                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UPlayerEnumFunctionLibrary::STATIC_GetSkinIcon(int skin_id, class UWuXiaXGameInstance* game_instance)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerEnumFunctionLibrary.GetSkinIcon");

	UPlayerEnumFunctionLibrary_GetSkinIcon_Params params;
	params.skin_id = skin_id;
	params.game_instance = game_instance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerEnumFunctionLibrary.GetSkinDetailById
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UWuXiaXGameInstance*     game_instance                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            skin_id                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor)
// struct FString                 detail                         (Parm, OutParm, ZeroConstructor)

void UPlayerEnumFunctionLibrary::STATIC_GetSkinDetailById(class UWuXiaXGameInstance* game_instance, int skin_id, struct FString* Name, struct FString* detail)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerEnumFunctionLibrary.GetSkinDetailById");

	UPlayerEnumFunctionLibrary_GetSkinDetailById_Params params;
	params.game_instance = game_instance;
	params.skin_id = skin_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
	if (detail != nullptr)
		*detail = params.detail;
}


// Function WuXiaX.PlayerEnumFunctionLibrary.GetSkillNameById
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWuXiaXGameInstance*     game_instance                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            skill_id                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPlayerEnumFunctionLibrary::STATIC_GetSkillNameById(class UWuXiaXGameInstance* game_instance, int skill_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerEnumFunctionLibrary.GetSkillNameById");

	UPlayerEnumFunctionLibrary_GetSkillNameById_Params params;
	params.game_instance = game_instance;
	params.skill_id = skill_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerEnumFunctionLibrary.GetModelById
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UWuXiaXGameInstance*     game_instance                  (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USkeletalMesh* UPlayerEnumFunctionLibrary::STATIC_GetModelById(int ID, class UWuXiaXGameInstance* game_instance)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerEnumFunctionLibrary.GetModelById");

	UPlayerEnumFunctionLibrary_GetModelById_Params params;
	params.ID = ID;
	params.game_instance = game_instance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerEnumFunctionLibrary.GetItemTypeById
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWuXiaXGameInstance*     game_instance                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)
// EBagType                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EBagType UPlayerEnumFunctionLibrary::STATIC_GetItemTypeById(class UWuXiaXGameInstance* game_instance, int item_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerEnumFunctionLibrary.GetItemTypeById");

	UPlayerEnumFunctionLibrary_GetItemTypeById_Params params;
	params.game_instance = game_instance;
	params.item_id = item_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerEnumFunctionLibrary.GetItemMeshById
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWuXiaXGameInstance*     game_instance                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)
// ESexType                       sex_type                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UPlayerEnumFunctionLibrary::STATIC_GetItemMeshById(class UWuXiaXGameInstance* game_instance, int item_id, ESexType sex_type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerEnumFunctionLibrary.GetItemMeshById");

	UPlayerEnumFunctionLibrary_GetItemMeshById_Params params;
	params.game_instance = game_instance;
	params.item_id = item_id;
	params.sex_type = sex_type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerEnumFunctionLibrary.GetItemEquipTypeById
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWuXiaXGameInstance*     game_instance                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)
// EItemEquipType                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EItemEquipType UPlayerEnumFunctionLibrary::STATIC_GetItemEquipTypeById(class UWuXiaXGameInstance* game_instance, int item_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerEnumFunctionLibrary.GetItemEquipTypeById");

	UPlayerEnumFunctionLibrary_GetItemEquipTypeById_Params params;
	params.game_instance = game_instance;
	params.item_id = item_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerEnumFunctionLibrary.GetItemDetailById
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UWuXiaXGameInstance*     game_instance                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor)
// struct FString                 detail                         (Parm, OutParm, ZeroConstructor)

void UPlayerEnumFunctionLibrary::STATIC_GetItemDetailById(class UWuXiaXGameInstance* game_instance, int item_id, struct FString* Name, struct FString* detail)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerEnumFunctionLibrary.GetItemDetailById");

	UPlayerEnumFunctionLibrary_GetItemDetailById_Params params;
	params.game_instance = game_instance;
	params.item_id = item_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
	if (detail != nullptr)
		*detail = params.detail;
}


// Function WuXiaX.PlayerEnumFunctionLibrary.GetItemChildTypeById
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWuXiaXGameInstance*     game_instance                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)
// EItemType                      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EItemType UPlayerEnumFunctionLibrary::STATIC_GetItemChildTypeById(class UWuXiaXGameInstance* game_instance, int item_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerEnumFunctionLibrary.GetItemChildTypeById");

	UPlayerEnumFunctionLibrary_GetItemChildTypeById_Params params;
	params.game_instance = game_instance;
	params.item_id = item_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerEnumFunctionLibrary.GetHallItemDetailById
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UWuXiaXGameInstance*     game_instance                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor)
// struct FString                 detail                         (Parm, OutParm, ZeroConstructor)

void UPlayerEnumFunctionLibrary::STATIC_GetHallItemDetailById(class UWuXiaXGameInstance* game_instance, int item_id, struct FString* Name, struct FString* detail)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerEnumFunctionLibrary.GetHallItemDetailById");

	UPlayerEnumFunctionLibrary_GetHallItemDetailById_Params params;
	params.game_instance = game_instance;
	params.item_id = item_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
	if (detail != nullptr)
		*detail = params.detail;
}


// Function WuXiaX.PlayerEnumFunctionLibrary.GetHairMeshByHatId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWuXiaXGameInstance*     game_instance                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)
// ESexType                       sex_type                       (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USkeletalMesh* UPlayerEnumFunctionLibrary::STATIC_GetHairMeshByHatId(class UWuXiaXGameInstance* game_instance, int item_id, ESexType sex_type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerEnumFunctionLibrary.GetHairMeshByHatId");

	UPlayerEnumFunctionLibrary_GetHairMeshByHatId_Params params;
	params.game_instance = game_instance;
	params.item_id = item_id;
	params.sex_type = sex_type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerEnumFunctionLibrary.GetColorById
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UWuXiaXGameInstance*     game_instance                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UPlayerEnumFunctionLibrary::STATIC_GetColorById(int ID, class UWuXiaXGameInstance* game_instance)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerEnumFunctionLibrary.GetColorById");

	UPlayerEnumFunctionLibrary_GetColorById_Params params;
	params.ID = ID;
	params.game_instance = game_instance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerEnumFunctionLibrary.GetChineseString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 originstr                      (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPlayerEnumFunctionLibrary::STATIC_GetChineseString(const struct FString& originstr)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerEnumFunctionLibrary.GetChineseString");

	UPlayerEnumFunctionLibrary_GetChineseString_Params params;
	params.originstr = originstr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerEnumFunctionLibrary.GetBuffNameById
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWuXiaXGameInstance*     game_instance                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPlayerEnumFunctionLibrary::STATIC_GetBuffNameById(class UWuXiaXGameInstance* game_instance, int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerEnumFunctionLibrary.GetBuffNameById");

	UPlayerEnumFunctionLibrary_GetBuffNameById_Params params;
	params.game_instance = game_instance;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerEnumFunctionLibrary.CloseSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       player_ctrl                    (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerEnumFunctionLibrary::STATIC_CloseSession(class APlayerController* player_ctrl)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerEnumFunctionLibrary.CloseSession");

	UPlayerEnumFunctionLibrary_CloseSession_Params params;
	params.player_ctrl = player_ctrl;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.UnTakeWeapon
// (Final, Native, Public, BlueprintCallable)

void UPlayerFightComponent::UnTakeWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.UnTakeWeapon");

	UPlayerFightComponent_UnTakeWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.TakeWeapon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           take_change                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           send_server                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           is_design                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerFightComponent::TakeWeapon(int index, bool take_change, bool send_server, bool is_design)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.TakeWeapon");

	UPlayerFightComponent_TakeWeapon_Params params;
	params.index = index;
	params.take_change = take_change;
	params.send_server = send_server;
	params.is_design = is_design;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.SwitchWeaponAmongFarAndNear
// (Final, Native, Public, BlueprintCallable)

void UPlayerFightComponent::SwitchWeaponAmongFarAndNear()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.SwitchWeaponAmongFarAndNear");

	UPlayerFightComponent_SwitchWeaponAmongFarAndNear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.SwitchWeapon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerFightComponent::SwitchWeapon(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.SwitchWeapon");

	UPlayerFightComponent_SwitchWeapon_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.SwitchThrowWeapon
// (Final, Native, Public, BlueprintCallable)

void UPlayerFightComponent::SwitchThrowWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.SwitchThrowWeapon");

	UPlayerFightComponent_SwitchThrowWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.SwitchNearWeapon
// (Final, Native, Public, BlueprintCallable)

void UPlayerFightComponent::SwitchNearWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.SwitchNearWeapon");

	UPlayerFightComponent_SwitchNearWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.Server_TakeWeapon
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           take_change                    (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerFightComponent::Server_TakeWeapon(int index, bool take_change)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.Server_TakeWeapon");

	UPlayerFightComponent_Server_TakeWeapon_Params params;
	params.index = index;
	params.take_change = take_change;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.Server_StartFallingAttack
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void UPlayerFightComponent::Server_StartFallingAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.Server_StartFallingAttack");

	UPlayerFightComponent_Server_StartFallingAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.Server_SpawnMissileInfo
// (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults, NetValidate)
// Parameters:
// int64_t                        missileid                      (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        createtime                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            kill_item_id                   (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerFightComponent::Server_SpawnMissileInfo(int64_t missileid, int64_t createtime, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Direction, int kill_item_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.Server_SpawnMissileInfo");

	UPlayerFightComponent_Server_SpawnMissileInfo_Params params;
	params.missileid = missileid;
	params.createtime = createtime;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Direction = Direction;
	params.kill_item_id = kill_item_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.Server_SkillPlay
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int64_t                        play_time                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            skill_id                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   section_name                   (Parm, ZeroConstructor, IsPlainOldData)
// int16_t                        rotation_r                     (Parm, ZeroConstructor, IsPlainOldData)
// int16_t                        rotation_p                     (Parm, ZeroConstructor, IsPlainOldData)
// int16_t                        rotation_y                     (Parm, ZeroConstructor, IsPlainOldData)
// EPlayerFightState              child_state                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            attack_target_id               (Parm, ZeroConstructor, IsPlainOldData)
// EActionCheckType               check_action                   (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerFightComponent::Server_SkillPlay(int64_t play_time, int skill_id, const struct FName& section_name, int16_t rotation_r, int16_t rotation_p, int16_t rotation_y, EPlayerFightState child_state, int attack_target_id, EActionCheckType check_action)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.Server_SkillPlay");

	UPlayerFightComponent_Server_SkillPlay_Params params;
	params.play_time = play_time;
	params.skill_id = skill_id;
	params.section_name = section_name;
	params.rotation_r = rotation_r;
	params.rotation_p = rotation_p;
	params.rotation_y = rotation_y;
	params.child_state = child_state;
	params.attack_target_id = attack_target_id;
	params.check_action = check_action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.Server_PlayAim
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           flag                           (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerFightComponent::Server_PlayAim(bool flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.Server_PlayAim");

	UPlayerFightComponent_Server_PlayAim_Params params;
	params.flag = flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.Server_LaunchMissile
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int64_t                        begintime                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerFightComponent::Server_LaunchMissile(int64_t begintime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.Server_LaunchMissile");

	UPlayerFightComponent_Server_LaunchMissile_Params params;
	params.begintime = begintime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.Server_ChangeTarget
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int64_t                        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           is_auto_target_id              (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerFightComponent::Server_ChangeTarget(int64_t Target, bool is_auto_target_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.Server_ChangeTarget");

	UPlayerFightComponent_Server_ChangeTarget_Params params;
	params.Target = Target;
	params.is_auto_target_id = is_auto_target_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.Server_BlockPlay
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int64_t                        block_counter_attack_play_time (Parm, ZeroConstructor, IsPlainOldData)
// bool                           flag                           (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerFightComponent::Server_BlockPlay(int64_t block_counter_attack_play_time, bool flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.Server_BlockPlay");

	UPlayerFightComponent_Server_BlockPlay_Params params;
	params.block_counter_attack_play_time = block_counter_attack_play_time;
	params.flag = flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.PlayWuDi
// (Final, Native, Public, BlueprintCallable)

void UPlayerFightComponent::PlayWuDi()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.PlayWuDi");

	UPlayerFightComponent_PlayWuDi_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.PlayShanBi
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EShanBiDirection               index                          (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerFightComponent::PlayShanBi(EShanBiDirection index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.PlayShanBi");

	UPlayerFightComponent_PlayShanBi_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.PlayQiShen
// (Final, Native, Public, BlueprintCallable)

void UPlayerFightComponent::PlayQiShen()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.PlayQiShen");

	UPlayerFightComponent_PlayQiShen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.OnRep_WeakState
// (Final, Native, Private)

void UPlayerFightComponent::OnRep_WeakState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.OnRep_WeakState");

	UPlayerFightComponent_OnRep_WeakState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.OnRep_SkillBarIndex
// (Final, Native, Private)

void UPlayerFightComponent::OnRep_SkillBarIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.OnRep_SkillBarIndex");

	UPlayerFightComponent_OnRep_SkillBarIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.OnRep_OwnerSkillBarIndex
// (Final, Native, Private)

void UPlayerFightComponent::OnRep_OwnerSkillBarIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.OnRep_OwnerSkillBarIndex");

	UPlayerFightComponent_OnRep_OwnerSkillBarIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.OnPlayerOverlapEnd
// (Final, Native, Private)
// Parameters:
// class UPrimitiveComponent*     OverlappedComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerFightComponent::OnPlayerOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.OnPlayerOverlapEnd");

	UPlayerFightComponent_OnPlayerOverlapEnd_Params params;
	params.OverlappedComp = OverlappedComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.OnPlayerOverlapBegin
// (Final, Native, Private, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UPlayerFightComponent::OnPlayerOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.OnPlayerOverlapBegin");

	UPlayerFightComponent_OnPlayerOverlapBegin_Params params;
	params.OverlappedComp = OverlappedComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.NormalAttacRelease
// (Final, Native, Public, BlueprintCallable)

void UPlayerFightComponent::NormalAttacRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.NormalAttacRelease");

	UPlayerFightComponent_NormalAttacRelease_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.NormalAttack
// (Final, Native, Public, BlueprintCallable)

void UPlayerFightComponent::NormalAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.NormalAttack");

	UPlayerFightComponent_NormalAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.LaunchMissile
// (Final, Native, Public, BlueprintCallable)

void UPlayerFightComponent::LaunchMissile()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.LaunchMissile");

	UPlayerFightComponent_LaunchMissile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.HeavyAttack
// (Final, Native, Public, BlueprintCallable)

void UPlayerFightComponent::HeavyAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.HeavyAttack");

	UPlayerFightComponent_HeavyAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.GetCurrentWeapon
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlayerFightComponent::GetCurrentWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.GetCurrentWeapon");

	UPlayerFightComponent_GetCurrentWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerFightComponent.GetCurrentAttackTargetId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlayerFightComponent::GetCurrentAttackTargetId()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.GetCurrentAttackTargetId");

	UPlayerFightComponent_GetCurrentAttackTargetId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerFightComponent.Client_ReconnectUpdate
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerFightComponent::Client_ReconnectUpdate(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.Client_ReconnectUpdate");

	UPlayerFightComponent_Client_ReconnectUpdate_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.Client_CheckSoundResult
// (Final, Net, NetReliable, Native, Event, Private, NetClient, NetValidate)
// Parameters:
// TArray<int>                    Ids                            (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         Locations                      (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UPlayerFightComponent::Client_CheckSoundResult(TArray<int> Ids, TArray<struct FVector> Locations)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.Client_CheckSoundResult");

	UPlayerFightComponent_Client_CheckSoundResult_Params params;
	params.Ids = Ids;
	params.Locations = Locations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.Client_CancleSkillPlay
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            skill_id                       (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerFightComponent::Client_CancleSkillPlay(int skill_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.Client_CancleSkillPlay");

	UPlayerFightComponent_Client_CancleSkillPlay_Params params;
	params.skill_id = skill_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.CheckSound
// (Final, Native, Public, BlueprintCallable)

void UPlayerFightComponent::CheckSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.CheckSound");

	UPlayerFightComponent_CheckSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.CheckIsInSkill
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlayerFightComponent::CheckIsInSkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.CheckIsInSkill");

	UPlayerFightComponent_CheckIsInSkill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerFightComponent.CheckIsInRangeWeaponState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlayerFightComponent::CheckIsInRangeWeaponState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.CheckIsInRangeWeaponState");

	UPlayerFightComponent_CheckIsInRangeWeaponState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerFightComponent.CheckIsInAim
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlayerFightComponent::CheckIsInAim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.CheckIsInAim");

	UPlayerFightComponent_CheckIsInAim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerFightComponent.BlockPlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           flag                           (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerFightComponent::BlockPlay(bool flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.BlockPlay");

	UPlayerFightComponent_BlockPlay_Params params;
	params.flag = flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.AttackInBlock
// (Final, Native, Public, BlueprintCallable)

void UPlayerFightComponent::AttackInBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.AttackInBlock");

	UPlayerFightComponent_AttackInBlock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.AttackByIndexRelease
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EInputAttackType               index                          (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerFightComponent::AttackByIndexRelease(EInputAttackType index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.AttackByIndexRelease");

	UPlayerFightComponent_AttackByIndexRelease_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerFightComponent.AttackByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerFightComponent::AttackByIndex(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerFightComponent.AttackByIndex");

	UPlayerFightComponent_AttackByIndex_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerInteractiveComponent.Server_InteractiveToActor
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// ETriggerInteractiveType        Trigger                        (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerInteractiveComponent::Server_InteractiveToActor(int ID, ETriggerInteractiveType Trigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerInteractiveComponent.Server_InteractiveToActor");

	UPlayerInteractiveComponent_Server_InteractiveToActor_Params params;
	params.ID = ID;
	params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerInteractiveComponent.OnRepInteractiveType
// (Final, Native, Protected)

void UPlayerInteractiveComponent::OnRepInteractiveType()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerInteractiveComponent.OnRepInteractiveType");

	UPlayerInteractiveComponent_OnRepInteractiveType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerInteractiveComponent.Mult_StopInteractive
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            interactiveactorid             (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerInteractiveComponent::Mult_StopInteractive(int interactiveactorid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerInteractiveComponent.Mult_StopInteractive");

	UPlayerInteractiveComponent_Mult_StopInteractive_Params params;
	params.interactiveactorid = interactiveactorid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerInteractiveComponent.Mult_Interactive
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            interactiveactorid             (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerInteractiveComponent::Mult_Interactive(int interactiveactorid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerInteractiveComponent.Mult_Interactive");

	UPlayerInteractiveComponent_Mult_Interactive_Params params;
	params.interactiveactorid = interactiveactorid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerInteractiveComponent.Mult_BeginInteractive
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            interactiveactorid             (Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerInteractiveComponent::Mult_BeginInteractive(int interactiveactorid, int PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerInteractiveComponent.Mult_BeginInteractive");

	UPlayerInteractiveComponent_Mult_BeginInteractive_Params params;
	params.interactiveactorid = interactiveactorid;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerInteractiveComponent.GetKeeyInteractiveType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EKeeyInteractiveType           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EKeeyInteractiveType UPlayerInteractiveComponent::GetKeeyInteractiveType()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerInteractiveComponent.GetKeeyInteractiveType");

	UPlayerInteractiveComponent_GetKeeyInteractiveType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerInteractiveComponent.GetKeepingFullTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPlayerInteractiveComponent::GetKeepingFullTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerInteractiveComponent.GetKeepingFullTime");

	UPlayerInteractiveComponent_GetKeepingFullTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerInteractiveComponent.GetKeepingCurrentTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPlayerInteractiveComponent::GetKeepingCurrentTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerInteractiveComponent.GetKeepingCurrentTime");

	UPlayerInteractiveComponent_GetKeepingCurrentTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerItemCtrlComponent.UI_UseSkillBook
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EBagType                       bag_type                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerItemCtrlComponent::UI_UseSkillBook(EBagType bag_type, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.UI_UseSkillBook");

	UPlayerItemCtrlComponent_UI_UseSkillBook_Params params;
	params.bag_type = bag_type;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.UI_UseItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EBagType                       bag_type                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerItemCtrlComponent::UI_UseItem(EBagType bag_type, int index, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.UI_UseItem");

	UPlayerItemCtrlComponent_UI_UseItem_Params params;
	params.bag_type = bag_type;
	params.index = index;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.UI_SwapItemToSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EBagType                       source_bag_type                (Parm, ZeroConstructor, IsPlainOldData)
// int                            source_index                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)
// EBagType                       target_bag_type                (Parm, ZeroConstructor, IsPlainOldData)
// int                            target_index                   (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerItemCtrlComponent::UI_SwapItemToSlot(EBagType source_bag_type, int source_index, int Num, EBagType target_bag_type, int target_index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.UI_SwapItemToSlot");

	UPlayerItemCtrlComponent_UI_SwapItemToSlot_Params params;
	params.source_bag_type = source_bag_type;
	params.source_index = source_index;
	params.Num = Num;
	params.target_bag_type = target_bag_type;
	params.target_index = target_index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.UI_SwapItemToBag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EBagType                       source_bag_type                (Parm, ZeroConstructor, IsPlainOldData)
// int                            source_index                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)
// EBagType                       target_bag_type                (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerItemCtrlComponent::UI_SwapItemToBag(EBagType source_bag_type, int source_index, int Num, EBagType target_bag_type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.UI_SwapItemToBag");

	UPlayerItemCtrlComponent_UI_SwapItemToBag_Params params;
	params.source_bag_type = source_bag_type;
	params.source_index = source_index;
	params.Num = Num;
	params.target_bag_type = target_bag_type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.UI_SwapItemHotKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SourceIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            targetindex                    (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerItemCtrlComponent::UI_SwapItemHotKey(int SourceIndex, int targetindex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.UI_SwapItemHotKey");

	UPlayerItemCtrlComponent_UI_SwapItemHotKey_Params params;
	params.SourceIndex = SourceIndex;
	params.targetindex = targetindex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.UI_SetItemHotKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EBagType                       bag_type                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            hotkeyindex                    (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerItemCtrlComponent::UI_SetItemHotKey(EBagType bag_type, int index, int hotkeyindex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.UI_SetItemHotKey");

	UPlayerItemCtrlComponent_UI_SetItemHotKey_Params params;
	params.bag_type = bag_type;
	params.index = index;
	params.hotkeyindex = hotkeyindex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.UI_RemoveItemHotKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerItemCtrlComponent::UI_RemoveItemHotKey(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.UI_RemoveItemHotKey");

	UPlayerItemCtrlComponent_UI_RemoveItemHotKey_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.UI_DropItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EBagType                       bag_type                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerItemCtrlComponent::UI_DropItem(EBagType bag_type, int index, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.UI_DropItem");

	UPlayerItemCtrlComponent_UI_DropItem_Params params;
	params.bag_type = bag_type;
	params.index = index;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.UI_AddItemByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            world_id                       (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerItemCtrlComponent::UI_AddItemByIndex(int world_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.UI_AddItemByIndex");

	UPlayerItemCtrlComponent_UI_AddItemByIndex_Params params;
	params.world_id = world_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.TryPickUp
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// int                            world_id                       (Parm, ZeroConstructor, IsPlainOldData)
// ETriggerType                   Type                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            get_num                        (Parm, ZeroConstructor, IsPlainOldData)
// EBagType                       target_bag_type                (Parm, ZeroConstructor, IsPlainOldData)
// int                            target_index                   (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerItemCtrlComponent::TryPickUp(int world_id, ETriggerType Type, int get_num, EBagType target_bag_type, int target_index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.TryPickUp");

	UPlayerItemCtrlComponent_TryPickUp_Params params;
	params.world_id = world_id;
	params.Type = Type;
	params.get_num = get_num;
	params.target_bag_type = target_bag_type;
	params.target_index = target_index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.ShowItemDetial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EBagType                       bagtype                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerItemCtrlComponent::ShowItemDetial(EBagType bagtype, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.ShowItemDetial");

	UPlayerItemCtrlComponent_ShowItemDetial_Params params;
	params.bagtype = bagtype;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.Server_UseItem
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// EBagType                       bag_type                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerItemCtrlComponent::Server_UseItem(EBagType bag_type, int index, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.Server_UseItem");

	UPlayerItemCtrlComponent_Server_UseItem_Params params;
	params.bag_type = bag_type;
	params.index = index;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.Server_SwapItem
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// EBagType                       source_bag_type                (Parm, ZeroConstructor, IsPlainOldData)
// int                            source_index                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)
// EBagType                       target_bag_type                (Parm, ZeroConstructor, IsPlainOldData)
// int                            target_index                   (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerItemCtrlComponent::Server_SwapItem(EBagType source_bag_type, int source_index, int Num, EBagType target_bag_type, int target_index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.Server_SwapItem");

	UPlayerItemCtrlComponent_Server_SwapItem_Params params;
	params.source_bag_type = source_bag_type;
	params.source_index = source_index;
	params.Num = Num;
	params.target_bag_type = target_bag_type;
	params.target_index = target_index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.Server_DropItem
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// EBagType                       bag_type                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerItemCtrlComponent::Server_DropItem(EBagType bag_type, int index, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.Server_DropItem");

	UPlayerItemCtrlComponent_Server_DropItem_Params params;
	params.bag_type = bag_type;
	params.index = index;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.Server_BeginUseItem
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// EBagType                       bag_type                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerItemCtrlComponent::Server_BeginUseItem(EBagType bag_type, int index, int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.Server_BeginUseItem");

	UPlayerItemCtrlComponent_Server_BeginUseItem_Params params;
	params.bag_type = bag_type;
	params.index = index;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.ReSortItems
// (Final, Native, Public, BlueprintCallable)

void UPlayerItemCtrlComponent::ReSortItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.ReSortItems");

	UPlayerItemCtrlComponent_ReSortItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.QuickUseItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerItemCtrlComponent::QuickUseItem(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.QuickUseItem");

	UPlayerItemCtrlComponent_QuickUseItem_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.OnRep_Equip_Change_Other
// (Final, Native, Private)

void UPlayerItemCtrlComponent::OnRep_Equip_Change_Other()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.OnRep_Equip_Change_Other");

	UPlayerItemCtrlComponent_OnRep_Equip_Change_Other_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.OnRep_Equip_Change
// (Final, Native, Public)

void UPlayerItemCtrlComponent::OnRep_Equip_Change()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.OnRep_Equip_Change");

	UPlayerItemCtrlComponent_OnRep_Equip_Change_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.OnDragItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EBagType                       bagtype                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerItemCtrlComponent::OnDragItem(EBagType bagtype, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.OnDragItem");

	UPlayerItemCtrlComponent_OnDragItem_Params params;
	params.bagtype = bagtype;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.GetWeaponId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlayerItemCtrlComponent::GetWeaponId(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.GetWeaponId");

	UPlayerItemCtrlComponent_GetWeaponId_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerItemCtrlComponent.GetUsing_item_index
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlayerItemCtrlComponent::GetUsing_item_index()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.GetUsing_item_index");

	UPlayerItemCtrlComponent_GetUsing_item_index_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerItemCtrlComponent.GetUseItemState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EUseItemState                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EUseItemState UPlayerItemCtrlComponent::GetUseItemState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.GetUseItemState");

	UPlayerItemCtrlComponent_GetUseItemState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerItemCtrlComponent.GetUseItemFullTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPlayerItemCtrlComponent::GetUseItemFullTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.GetUseItemFullTime");

	UPlayerItemCtrlComponent_GetUseItemFullTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerItemCtrlComponent.GetPickIdByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlayerItemCtrlComponent::GetPickIdByIndex(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.GetPickIdByIndex");

	UPlayerItemCtrlComponent_GetPickIdByIndex_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerItemCtrlComponent.GetItemInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EBagType                       bag_type                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameItemInfo           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameItemInfo UPlayerItemCtrlComponent::GetItemInfo(EBagType bag_type, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.GetItemInfo");

	UPlayerItemCtrlComponent_GetItemInfo_Params params;
	params.bag_type = bag_type;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerItemCtrlComponent.GetIndexByPickId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            world_id                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlayerItemCtrlComponent::GetIndexByPickId(int world_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.GetIndexByPickId");

	UPlayerItemCtrlComponent_GetIndexByPickId_Params params;
	params.world_id = world_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerItemCtrlComponent.Client_UseItem_NotItem
// (Final, Net, NetReliable, Native, Event, Private, NetClient, NetValidate)
// Parameters:
// bool                           result                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerItemCtrlComponent::Client_UseItem_NotItem(bool result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.Client_UseItem_NotItem");

	UPlayerItemCtrlComponent_Client_UseItem_NotItem_Params params;
	params.result = result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.Client_UseItem
// (Final, Net, NetReliable, Native, Event, Private, NetClient, NetValidate)
// Parameters:
// bool                           result                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameItemInfo           out_item                       (ConstParm, Parm, ReferenceParm)

void UPlayerItemCtrlComponent::Client_UseItem(bool result, const struct FGameItemInfo& out_item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.Client_UseItem");

	UPlayerItemCtrlComponent_Client_UseItem_Params params;
	params.result = result;
	params.out_item = out_item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.Client_UpdateItem
// (Final, Net, NetReliable, Native, Event, Private, NetClient, NetValidate)
// Parameters:
// TArray<struct FGameItemInfo>   item_array                     (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UPlayerItemCtrlComponent::Client_UpdateItem(TArray<struct FGameItemInfo> item_array)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.Client_UpdateItem");

	UPlayerItemCtrlComponent_Client_UpdateItem_Params params;
	params.item_array = item_array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.Client_SwapItem_NotItem
// (Final, Net, NetReliable, Native, Event, Private, NetClient, NetValidate)
// Parameters:
// EItemOperateType               operate_type                   (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerItemCtrlComponent::Client_SwapItem_NotItem(EItemOperateType operate_type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.Client_SwapItem_NotItem");

	UPlayerItemCtrlComponent_Client_SwapItem_NotItem_Params params;
	params.operate_type = operate_type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.Client_SwapItem
// (Final, Net, NetReliable, Native, Event, Private, NetClient, NetValidate)
// Parameters:
// EItemOperateType               operate_type                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGameItemInfo>   item_array                     (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UPlayerItemCtrlComponent::Client_SwapItem(EItemOperateType operate_type, TArray<struct FGameItemInfo> item_array)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.Client_SwapItem");

	UPlayerItemCtrlComponent_Client_SwapItem_Params params;
	params.operate_type = operate_type;
	params.item_array = item_array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.Client_SetItemsHotKey
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        item1                          (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        item2                          (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        item3                          (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerItemCtrlComponent::Client_SetItemsHotKey(int64_t item1, int64_t item2, int64_t item3)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.Client_SetItemsHotKey");

	UPlayerItemCtrlComponent_Client_SetItemsHotKey_Params params;
	params.item1 = item1;
	params.item2 = item2;
	params.item3 = item3;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.Client_DropItem_NotItem
// (Final, Net, NetReliable, Native, Event, Private, NetClient, NetValidate)
// Parameters:
// bool                           result                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerItemCtrlComponent::Client_DropItem_NotItem(bool result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.Client_DropItem_NotItem");

	UPlayerItemCtrlComponent_Client_DropItem_NotItem_Params params;
	params.result = result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.Client_DropItem
// (Final, Net, NetReliable, Native, Event, Private, NetClient, NetValidate)
// Parameters:
// bool                           result                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameItemInfo           out_item                       (ConstParm, Parm, ReferenceParm)

void UPlayerItemCtrlComponent::Client_DropItem(bool result, const struct FGameItemInfo& out_item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.Client_DropItem");

	UPlayerItemCtrlComponent_Client_DropItem_Params params;
	params.result = result;
	params.out_item = out_item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.Client_ClearAllItem
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// bool                           isclearappearance              (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerItemCtrlComponent::Client_ClearAllItem(bool isclearappearance)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.Client_ClearAllItem");

	UPlayerItemCtrlComponent_Client_ClearAllItem_Params params;
	params.isclearappearance = isclearappearance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.Client_CancelOperating
// (Final, Net, NetReliable, Native, Event, Private, NetClient)

void UPlayerItemCtrlComponent::Client_CancelOperating()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.Client_CancelOperating");

	UPlayerItemCtrlComponent_Client_CancelOperating_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.Client_AddItem_NoItem
// (Final, Net, NetReliable, Native, Event, Private, NetClient, NetValidate)
// Parameters:
// EItemOperateType               operate_type                   (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerItemCtrlComponent::Client_AddItem_NoItem(EItemOperateType operate_type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.Client_AddItem_NoItem");

	UPlayerItemCtrlComponent_Client_AddItem_NoItem_Params params;
	params.operate_type = operate_type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.Client_AddItem
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// EItemOperateType               operate_type                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGameItemInfo>   item_array                     (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UPlayerItemCtrlComponent::Client_AddItem(EItemOperateType operate_type, TArray<struct FGameItemInfo> item_array)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.Client_AddItem");

	UPlayerItemCtrlComponent_Client_AddItem_Params params;
	params.operate_type = operate_type;
	params.item_array = item_array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerItemCtrlComponent.AddItem
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// TArray<int>                    Ids                            (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UPlayerItemCtrlComponent::AddItem(TArray<int> Ids)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerItemCtrlComponent.AddItem");

	UPlayerItemCtrlComponent_AddItem_Params params;
	params.Ids = Ids;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerKeepActionComponent.Server_BreakAction
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// EBreakActionType               breaktype                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerKeepActionComponent::Server_BreakAction(EBreakActionType breaktype)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerKeepActionComponent.Server_BreakAction");

	UPlayerKeepActionComponent_Server_BreakAction_Params params;
	params.breaktype = breaktype;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerKeepActionComponent.GetCurrentKeepActionState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EKeepingActionType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EKeepingActionType UPlayerKeepActionComponent::GetCurrentKeepActionState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerKeepActionComponent.GetCurrentKeepActionState");

	UPlayerKeepActionComponent_GetCurrentKeepActionState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerKeepActionComponent.Client_BreakAction
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// EBreakActionType               breaktype                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            actionindex                    (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerKeepActionComponent::Client_BreakAction(EBreakActionType breaktype, int actionindex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerKeepActionComponent.Client_BreakAction");

	UPlayerKeepActionComponent_Client_BreakAction_Params params;
	params.breaktype = breaktype;
	params.actionindex = actionindex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerKeepActionComponent.BreakAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EBreakActionType               breaktype                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerKeepActionComponent::BreakAction(EBreakActionType breaktype)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerKeepActionComponent.BreakAction");

	UPlayerKeepActionComponent_BreakAction_Params params;
	params.breaktype = breaktype;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.UpdateMaxMp
// (Final, Native, Private)

void UPlayerPropertyComponent::UpdateMaxMp()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.UpdateMaxMp");

	UPlayerPropertyComponent_UpdateMaxMp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.ServerInitProperty
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void UPlayerPropertyComponent::ServerInitProperty()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.ServerInitProperty");

	UPlayerPropertyComponent_ServerInitProperty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.ReSetDyingHp
// (Final, Native, Public, BlueprintCallable)

void UPlayerPropertyComponent::ReSetDyingHp()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.ReSetDyingHp");

	UPlayerPropertyComponent_ReSetDyingHp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.OnSaveChangeValueChange
// (Final, Native, Public)

void UPlayerPropertyComponent::OnSaveChangeValueChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.OnSaveChangeValueChange");

	UPlayerPropertyComponent_OnSaveChangeValueChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.OnSatietyChange
// (Final, Native, Public, BlueprintCallable)

void UPlayerPropertyComponent::OnSatietyChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.OnSatietyChange");

	UPlayerPropertyComponent_OnSatietyChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.OnOxygenChange
// (Final, Native, Public, BlueprintCallable)

void UPlayerPropertyComponent::OnOxygenChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.OnOxygenChange");

	UPlayerPropertyComponent_OnOxygenChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.OnMPChange
// (Final, Native, Public, BlueprintCallable)

void UPlayerPropertyComponent::OnMPChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.OnMPChange");

	UPlayerPropertyComponent_OnMPChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.OnMoistureChange
// (Final, Native, Public, BlueprintCallable)

void UPlayerPropertyComponent::OnMoistureChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.OnMoistureChange");

	UPlayerPropertyComponent_OnMoistureChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.OnInjuryChange
// (Final, Native, Public, BlueprintCallable)

void UPlayerPropertyComponent::OnInjuryChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.OnInjuryChange");

	UPlayerPropertyComponent_OnInjuryChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.OnHPChange
// (Final, Native, Public, BlueprintCallable)

void UPlayerPropertyComponent::OnHPChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.OnHPChange");

	UPlayerPropertyComponent_OnHPChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.OnDyingHPChange
// (Final, Native, Public, BlueprintCallable)

void UPlayerPropertyComponent::OnDyingHPChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.OnDyingHPChange");

	UPlayerPropertyComponent_OnDyingHPChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.InitInjurysValue
// (Final, Native, Private)

void UPlayerPropertyComponent::InitInjurysValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.InitInjurysValue");

	UPlayerPropertyComponent_InitInjurysValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.GetWaiArmorRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlayerPropertyComponent::GetWaiArmorRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.GetWaiArmorRate");

	UPlayerPropertyComponent_GetWaiArmorRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerPropertyComponent.GetWaiArmor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlayerPropertyComponent::GetWaiArmor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.GetWaiArmor");

	UPlayerPropertyComponent_GetWaiArmor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerPropertyComponent.GetSimpleWaiArmorRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlayerPropertyComponent::GetSimpleWaiArmorRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.GetSimpleWaiArmorRate");

	UPlayerPropertyComponent_GetSimpleWaiArmorRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerPropertyComponent.GetPlayerGameTimeData
// (Final, Native, Public)
// Parameters:
// struct FPlayerGameTimeData     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPlayerGameTimeData UPlayerPropertyComponent::GetPlayerGameTimeData()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.GetPlayerGameTimeData");

	UPlayerPropertyComponent_GetPlayerGameTimeData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerPropertyComponent.GetOxygen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlayerPropertyComponent::GetOxygen()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.GetOxygen");

	UPlayerPropertyComponent_GetOxygen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerPropertyComponent.GetOutPower
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlayerPropertyComponent::GetOutPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.GetOutPower");

	UPlayerPropertyComponent_GetOutPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerPropertyComponent.GetNeiArmor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlayerPropertyComponent::GetNeiArmor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.GetNeiArmor");

	UPlayerPropertyComponent_GetNeiArmor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerPropertyComponent.GetInterruptAddSkill
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            skil                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlayerPropertyComponent::GetInterruptAddSkill(int skil)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.GetInterruptAddSkill");

	UPlayerPropertyComponent_GetInterruptAddSkill_Params params;
	params.skil = skil;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerPropertyComponent.GetInnerPower
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlayerPropertyComponent::GetInnerPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.GetInnerPower");

	UPlayerPropertyComponent_GetInnerPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerPropertyComponent.GetHpChangeInfo
// (Final, Native, Public)
// Parameters:
// struct FHPChangeInfo           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FHPChangeInfo UPlayerPropertyComponent::GetHpChangeInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.GetHpChangeInfo");

	UPlayerPropertyComponent_GetHpChangeInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerPropertyComponent.GetDefCritRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlayerPropertyComponent::GetDefCritRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.GetDefCritRate");

	UPlayerPropertyComponent_GetDefCritRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerPropertyComponent.GetDefCritModulus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlayerPropertyComponent::GetDefCritModulus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.GetDefCritModulus");

	UPlayerPropertyComponent_GetDefCritModulus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerPropertyComponent.GetCurrentPlayerMP
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlayerPropertyComponent::GetCurrentPlayerMP()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.GetCurrentPlayerMP");

	UPlayerPropertyComponent_GetCurrentPlayerMP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerPropertyComponent.GetCurrentPlayerHP
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlayerPropertyComponent::GetCurrentPlayerHP()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.GetCurrentPlayerHP");

	UPlayerPropertyComponent_GetCurrentPlayerHP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerPropertyComponent.GetCurrentPlayerDyingHP
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlayerPropertyComponent::GetCurrentPlayerDyingHP()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.GetCurrentPlayerDyingHP");

	UPlayerPropertyComponent_GetCurrentPlayerDyingHP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerPropertyComponent.GetCritRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlayerPropertyComponent::GetCritRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.GetCritRate");

	UPlayerPropertyComponent_GetCritRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerPropertyComponent.GetCritModulus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlayerPropertyComponent::GetCritModulus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.GetCritModulus");

	UPlayerPropertyComponent_GetCritModulus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerPropertyComponent.GetBeInterruptAddSkill
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            skill                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlayerPropertyComponent::GetBeInterruptAddSkill(int skill)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.GetBeInterruptAddSkill");

	UPlayerPropertyComponent_GetBeInterruptAddSkill_Params params;
	params.skill = skill;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerPropertyComponent.GetAttack
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlayerPropertyComponent::GetAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.GetAttack");

	UPlayerPropertyComponent_GetAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerPropertyComponent.ChangeWaiArmor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// EPropertyChangeReason          reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPropertyComponent::ChangeWaiArmor(int Value, EPropertyChangeReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.ChangeWaiArmor");

	UPlayerPropertyComponent_ChangeWaiArmor_Params params;
	params.Value = Value;
	params.reason = reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.ChangeSaveValue
// (Final, Native, Private)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// EPropertyChangeReason          reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPropertyComponent::ChangeSaveValue(float Time, EPropertyChangeReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.ChangeSaveValue");

	UPlayerPropertyComponent_ChangeSaveValue_Params params;
	params.Time = Time;
	params.reason = reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.ChangeSaveChangeValueBeKill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPropertyChangeReason          reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPropertyComponent::ChangeSaveChangeValueBeKill(EPropertyChangeReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.ChangeSaveChangeValueBeKill");

	UPlayerPropertyComponent_ChangeSaveChangeValueBeKill_Params params;
	params.reason = reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.ChangeSaveChangeValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           isadd                          (Parm, ZeroConstructor, IsPlainOldData)
// EPropertyChangeReason          reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPropertyComponent::ChangeSaveChangeValue(bool isadd, EPropertyChangeReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.ChangeSaveChangeValue");

	UPlayerPropertyComponent_ChangeSaveChangeValue_Params params;
	params.isadd = isadd;
	params.reason = reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.ChangeRecoverRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// EPropertyChangeReason          reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPropertyComponent::ChangeRecoverRate(int Value, EPropertyChangeReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.ChangeRecoverRate");

	UPlayerPropertyComponent_ChangeRecoverRate_Params params;
	params.Value = Value;
	params.reason = reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.ChangeOxygenchange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            oxygenchange                   (Parm, ZeroConstructor, IsPlainOldData)
// EPropertyChangeReason          reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPropertyComponent::ChangeOxygenchange(int oxygenchange, EPropertyChangeReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.ChangeOxygenchange");

	UPlayerPropertyComponent_ChangeOxygenchange_Params params;
	params.oxygenchange = oxygenchange;
	params.reason = reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.ChangeOxygen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            oxygen                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// EPropertyChangeReason          reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPropertyComponent::ChangeOxygen(int oxygen, float Time, EPropertyChangeReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.ChangeOxygen");

	UPlayerPropertyComponent_ChangeOxygen_Params params;
	params.oxygen = oxygen;
	params.Time = Time;
	params.reason = reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.ChangeOutPower
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// EPropertyChangeReason          reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPropertyComponent::ChangeOutPower(int Value, EPropertyChangeReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.ChangeOutPower");

	UPlayerPropertyComponent_ChangeOutPower_Params params;
	params.Value = Value;
	params.reason = reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.ChangeNeiArmor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// EPropertyChangeReason          reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPropertyComponent::ChangeNeiArmor(int Value, EPropertyChangeReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.ChangeNeiArmor");

	UPlayerPropertyComponent_ChangeNeiArmor_Params params;
	params.Value = Value;
	params.reason = reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.ChangeMp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            mp                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// EMPChangeType                  mp_change_type                 (Parm, ZeroConstructor, IsPlainOldData)
// EPropertyChangeReason          reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPropertyComponent::ChangeMp(int mp, float Time, EMPChangeType mp_change_type, EPropertyChangeReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.ChangeMp");

	UPlayerPropertyComponent_ChangeMp_Params params;
	params.mp = mp;
	params.Time = Time;
	params.mp_change_type = mp_change_type;
	params.reason = reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.ChangeMaxHpAddRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            maxhpadd                       (Parm, ZeroConstructor, IsPlainOldData)
// EPropertyChangeReason          reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPropertyComponent::ChangeMaxHpAddRate(int maxhpadd, EPropertyChangeReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.ChangeMaxHpAddRate");

	UPlayerPropertyComponent_ChangeMaxHpAddRate_Params params;
	params.maxhpadd = maxhpadd;
	params.reason = reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.ChangeInterrupt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// EPropertyChangeReason          reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPropertyComponent::ChangeInterrupt(int Value, EPropertyChangeReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.ChangeInterrupt");

	UPlayerPropertyComponent_ChangeInterrupt_Params params;
	params.Value = Value;
	params.reason = reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.ChangeInnerPower
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// EPropertyChangeReason          reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPropertyComponent::ChangeInnerPower(int Value, EPropertyChangeReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.ChangeInnerPower");

	UPlayerPropertyComponent_ChangeInnerPower_Params params;
	params.Value = Value;
	params.reason = reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.ChangeInjury
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          injury                         (Parm, ZeroConstructor, IsPlainOldData)
// EPropertyChangeReason          reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPropertyComponent::ChangeInjury(float injury, EPropertyChangeReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.ChangeInjury");

	UPlayerPropertyComponent_ChangeInjury_Params params;
	params.injury = injury;
	params.reason = reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.ChangeHp
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            hp                             (Parm, ZeroConstructor, IsPlainOldData)
// EPropertyChangeReason          reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPropertyComponent::ChangeHp(int hp, EPropertyChangeReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.ChangeHp");

	UPlayerPropertyComponent_ChangeHp_Params params;
	params.hp = hp;
	params.reason = reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.ChangeDyingHP
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            dying_hp                       (Parm, ZeroConstructor, IsPlainOldData)
// EPropertyChangeReason          reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPropertyComponent::ChangeDyingHP(int dying_hp, EPropertyChangeReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.ChangeDyingHP");

	UPlayerPropertyComponent_ChangeDyingHP_Params params;
	params.dying_hp = dying_hp;
	params.reason = reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.ChangeDefCritRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// EPropertyChangeReason          reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPropertyComponent::ChangeDefCritRate(int Value, EPropertyChangeReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.ChangeDefCritRate");

	UPlayerPropertyComponent_ChangeDefCritRate_Params params;
	params.Value = Value;
	params.reason = reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.ChangeDefCritModulus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// EPropertyChangeReason          reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPropertyComponent::ChangeDefCritModulus(int Value, EPropertyChangeReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.ChangeDefCritModulus");

	UPlayerPropertyComponent_ChangeDefCritModulus_Params params;
	params.Value = Value;
	params.reason = reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.ChangeCritRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// EPropertyChangeReason          reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPropertyComponent::ChangeCritRate(int Value, EPropertyChangeReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.ChangeCritRate");

	UPlayerPropertyComponent_ChangeCritRate_Params params;
	params.Value = Value;
	params.reason = reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.ChangeCritModulus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// EPropertyChangeReason          reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPropertyComponent::ChangeCritModulus(int Value, EPropertyChangeReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.ChangeCritModulus");

	UPlayerPropertyComponent_ChangeCritModulus_Params params;
	params.Value = Value;
	params.reason = reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.ChangeBeInterrupt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// EPropertyChangeReason          reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPropertyComponent::ChangeBeInterrupt(int Value, EPropertyChangeReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.ChangeBeInterrupt");

	UPlayerPropertyComponent_ChangeBeInterrupt_Params params;
	params.Value = Value;
	params.reason = reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerPropertyComponent.ChangeAttack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// EPropertyChangeReason          reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPropertyComponent::ChangeAttack(int Value, EPropertyChangeReason reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerPropertyComponent.ChangeAttack");

	UPlayerPropertyComponent_ChangeAttack_Params params;
	params.Value = Value;
	params.reason = reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSkillsComponent.UI_SwapSkill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ESkillEquipType                sourceslottype                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            SourceIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            sourceskillid                  (Parm, ZeroConstructor, IsPlainOldData)
// ESkillEquipType                targetslottype                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            targetslotindex                (Parm, ZeroConstructor, IsPlainOldData)
// int                            targetskillid                  (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSkillsComponent::UI_SwapSkill(ESkillEquipType sourceslottype, int SourceIndex, int sourceskillid, ESkillEquipType targetslottype, int targetslotindex, int targetskillid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSkillsComponent.UI_SwapSkill");

	UPlayerSkillsComponent_UI_SwapSkill_Params params;
	params.sourceslottype = sourceslottype;
	params.SourceIndex = SourceIndex;
	params.sourceskillid = sourceskillid;
	params.targetslottype = targetslottype;
	params.targetslotindex = targetslotindex;
	params.targetskillid = targetskillid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSkillsComponent.UI_ShowSkillDetail
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ESkillEquipType                slottype                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            slotindex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            skillid                        (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSkillsComponent::UI_ShowSkillDetail(ESkillEquipType slottype, int slotindex, int skillid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSkillsComponent.UI_ShowSkillDetail");

	UPlayerSkillsComponent_UI_ShowSkillDetail_Params params;
	params.slottype = slottype;
	params.slotindex = slotindex;
	params.skillid = skillid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSkillsComponent.UI_RemoveSkill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ESkillEquipType                slottype                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            slotindex                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSkillsComponent::UI_RemoveSkill(ESkillEquipType slottype, int slotindex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSkillsComponent.UI_RemoveSkill");

	UPlayerSkillsComponent_UI_RemoveSkill_Params params;
	params.slottype = slottype;
	params.slotindex = slotindex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSkillsComponent.UI_DropSkillToPanel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ESkillEquipType                sourceslottype                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            SourceIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            sourceskillid                  (Parm, ZeroConstructor, IsPlainOldData)
// ESkillEquipType                targetslottype                 (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSkillsComponent::UI_DropSkillToPanel(ESkillEquipType sourceslottype, int SourceIndex, int sourceskillid, ESkillEquipType targetslottype)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSkillsComponent.UI_DropSkillToPanel");

	UPlayerSkillsComponent_UI_DropSkillToPanel_Params params;
	params.sourceslottype = sourceslottype;
	params.SourceIndex = SourceIndex;
	params.sourceskillid = sourceskillid;
	params.targetslottype = targetslottype;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSkillsComponent.Server_SwapSkill
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// ESkillEquipType                sourceslottype                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            SourceIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            sourceskillid                  (Parm, ZeroConstructor, IsPlainOldData)
// ESkillEquipType                targetslottype                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            targetslotindex                (Parm, ZeroConstructor, IsPlainOldData)
// int                            targetskillid                  (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSkillsComponent::Server_SwapSkill(ESkillEquipType sourceslottype, int SourceIndex, int sourceskillid, ESkillEquipType targetslottype, int targetslotindex, int targetskillid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSkillsComponent.Server_SwapSkill");

	UPlayerSkillsComponent_Server_SwapSkill_Params params;
	params.sourceslottype = sourceslottype;
	params.SourceIndex = SourceIndex;
	params.sourceskillid = sourceskillid;
	params.targetslottype = targetslottype;
	params.targetslotindex = targetslotindex;
	params.targetskillid = targetskillid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSkillsComponent.Server_RemoveSkill
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// ESkillEquipType                slottype                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            slotindex                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSkillsComponent::Server_RemoveSkill(ESkillEquipType slottype, int slotindex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSkillsComponent.Server_RemoveSkill");

	UPlayerSkillsComponent_Server_RemoveSkill_Params params;
	params.slottype = slottype;
	params.slotindex = slotindex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSkillsComponent.Server_ChangeEquipWeapon
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// ESkillEquipType                sourceslottype                 (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        weaponid                       (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSkillsComponent::Server_ChangeEquipWeapon(ESkillEquipType sourceslottype, int64_t weaponid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSkillsComponent.Server_ChangeEquipWeapon");

	UPlayerSkillsComponent_Server_ChangeEquipWeapon_Params params;
	params.sourceslottype = sourceslottype;
	params.weaponid = weaponid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSkillsComponent.Client_SetSkills
// (Net, NetReliable, Native, Event, Protected, NetClient, NetValidate)
// Parameters:
// TArray<struct FSetSkillInfo>   skillchangeinfo                (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UPlayerSkillsComponent::Client_SetSkills(TArray<struct FSetSkillInfo> skillchangeinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSkillsComponent.Client_SetSkills");

	UPlayerSkillsComponent_Client_SetSkills_Params params;
	params.skillchangeinfo = skillchangeinfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSkillsComponent.Client_RemoveSkill
// (Net, NetReliable, Native, Event, Protected, NetClient, NetValidate)
// Parameters:
// ESkillEquipType                slottype                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            slotindex                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSkillsComponent::Client_RemoveSkill(ESkillEquipType slottype, int slotindex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSkillsComponent.Client_RemoveSkill");

	UPlayerSkillsComponent_Client_RemoveSkill_Params params;
	params.slottype = slottype;
	params.slotindex = slotindex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSkillsComponent.Client_ReconnectUpdate
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<int64_t>                skills                         (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// TArray<int64_t>                equipskills                    (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// int64_t                        generalskillid                 (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        lastgeneralskillendtime        (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSkillsComponent::Client_ReconnectUpdate(TArray<int64_t> skills, TArray<int64_t> equipskills, int64_t generalskillid, int64_t lastgeneralskillendtime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSkillsComponent.Client_ReconnectUpdate");

	UPlayerSkillsComponent_Client_ReconnectUpdate_Params params;
	params.skills = skills;
	params.equipskills = equipskills;
	params.generalskillid = generalskillid;
	params.lastgeneralskillendtime = lastgeneralskillendtime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSkillsComponent.Client_EquipSkill
// (Net, NetReliable, Native, Event, Protected, NetClient, NetValidate)
// Parameters:
// ESkillEquipType                slottype                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            slotindex                      (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        skillid                        (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSkillsComponent::Client_EquipSkill(ESkillEquipType slottype, int slotindex, int64_t skillid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSkillsComponent.Client_EquipSkill");

	UPlayerSkillsComponent_Client_EquipSkill_Params params;
	params.slottype = slottype;
	params.slotindex = slotindex;
	params.skillid = skillid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSkillsComponent.Client_ClearAllSkill
// (Net, NetReliable, Native, Event, Protected, NetClient, NetValidate)

void UPlayerSkillsComponent::Client_ClearAllSkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSkillsComponent.Client_ClearAllSkill");

	UPlayerSkillsComponent_Client_ClearAllSkill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSkillsComponent.Client_ChangeEquipWeapon
// (Net, NetReliable, Native, Event, Protected, NetClient, NetValidate)
// Parameters:
// ESkillEquipType                sourceslottype                 (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        weaponid                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            currentweapontype1             (Parm, ZeroConstructor, IsPlainOldData)
// int                            currentweapontype2             (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSkillsComponent::Client_ChangeEquipWeapon(ESkillEquipType sourceslottype, int64_t weaponid, int currentweapontype1, int currentweapontype2)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSkillsComponent.Client_ChangeEquipWeapon");

	UPlayerSkillsComponent_Client_ChangeEquipWeapon_Params params;
	params.sourceslottype = sourceslottype;
	params.weaponid = weaponid;
	params.currentweapontype1 = currentweapontype1;
	params.currentweapontype2 = currentweapontype2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSkillsComponent.Client_AddSkill
// (Net, NetReliable, Native, Event, Protected, NetClient, NetValidate)
// Parameters:
// int64_t                        skillid                        (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSkillsComponent::Client_AddSkill(int64_t skillid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSkillsComponent.Client_AddSkill");

	UPlayerSkillsComponent_Client_AddSkill_Params params;
	params.skillid = skillid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSkillsComponent.CanUseSkillBook
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            itemID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlayerSkillsComponent::CanUseSkillBook(int itemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSkillsComponent.CanUseSkillBook");

	UPlayerSkillsComponent_CanUseSkillBook_Params params;
	params.itemID = itemID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerSquadComponent.UpdateAllDataToUI
// (Final, Native, Public, BlueprintCallable)

void UPlayerSquadComponent::UpdateAllDataToUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSquadComponent.UpdateAllDataToUI");

	UPlayerSquadComponent_UpdateAllDataToUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSquadComponent.SetMark
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasMark                        (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSquadComponent::SetMark(const struct FVector& Location, bool HasMark)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSquadComponent.SetMark");

	UPlayerSquadComponent_SetMark_Params params;
	params.Location = Location;
	params.HasMark = HasMark;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSquadComponent.Server_UpdateSquadID
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void UPlayerSquadComponent::Server_UpdateSquadID()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSquadComponent.Server_UpdateSquadID");

	UPlayerSquadComponent_Server_UpdateSquadID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSquadComponent.Server_UpdateDataByPlayerID
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSquadComponent::Server_UpdateDataByPlayerID(int PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSquadComponent.Server_UpdateDataByPlayerID");

	UPlayerSquadComponent_Server_UpdateDataByPlayerID_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSquadComponent.Server_UpdateAllData
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void UPlayerSquadComponent::Server_UpdateAllData()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSquadComponent.Server_UpdateAllData");

	UPlayerSquadComponent_Server_UpdateAllData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSquadComponent.Server_SetSquadUpdateType
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isserverupdate                 (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSquadComponent::Server_SetSquadUpdateType(int PlayerID, bool isserverupdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSquadComponent.Server_SetSquadUpdateType");

	UPlayerSquadComponent_Server_SetSquadUpdateType_Params params;
	params.PlayerID = PlayerID;
	params.isserverupdate = isserverupdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSquadComponent.Server_SetMark
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasMark                        (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSquadComponent::Server_SetMark(const struct FVector& Location, bool HasMark)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSquadComponent.Server_SetMark");

	UPlayerSquadComponent_Server_SetMark_Params params;
	params.Location = Location;
	params.HasMark = HasMark;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSquadComponent.Server_SaveSquad
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSquadComponent::Server_SaveSquad(int PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSquadComponent.Server_SaveSquad");

	UPlayerSquadComponent_Server_SaveSquad_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSquadComponent.Server_KillTarget
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSquadComponent::Server_KillTarget(int PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSquadComponent.Server_KillTarget");

	UPlayerSquadComponent_Server_KillTarget_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSquadComponent.Server_ChangeVisionPlayerID
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSquadComponent::Server_ChangeVisionPlayerID(int PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSquadComponent.Server_ChangeVisionPlayerID");

	UPlayerSquadComponent_Server_ChangeVisionPlayerID_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSquadComponent.Client_UpdateMemberTransfrom
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSquadComponent::Client_UpdateMemberTransfrom(int PlayerID, const struct FVector& Location, float Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSquadComponent.Client_UpdateMemberTransfrom");

	UPlayerSquadComponent_Client_UpdateMemberTransfrom_Params params;
	params.PlayerID = PlayerID;
	params.Location = Location;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSquadComponent.Client_UpdateMemberState
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// ETeamPlayerState               PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSquadComponent::Client_UpdateMemberState(int PlayerID, ETeamPlayerState PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSquadComponent.Client_UpdateMemberState");

	UPlayerSquadComponent_Client_UpdateMemberState_Params params;
	params.PlayerID = PlayerID;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSquadComponent.Client_UpdateMemberSaveValue
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          savevalue                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSquadComponent::Client_UpdateMemberSaveValue(int PlayerID, float savevalue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSquadComponent.Client_UpdateMemberSaveValue");

	UPlayerSquadComponent_Client_UpdateMemberSaveValue_Params params;
	params.PlayerID = PlayerID;
	params.savevalue = savevalue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSquadComponent.Client_UpdateMemberMaxHP
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            maxHP                          (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSquadComponent::Client_UpdateMemberMaxHP(int PlayerID, int maxHP)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSquadComponent.Client_UpdateMemberMaxHP");

	UPlayerSquadComponent_Client_UpdateMemberMaxHP_Params params;
	params.PlayerID = PlayerID;
	params.maxHP = maxHP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSquadComponent.Client_UpdateMemberMarkData
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 mark3dlocation                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ismark                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSquadComponent::Client_UpdateMemberMarkData(int PlayerID, const struct FVector& mark3dlocation, bool ismark)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSquadComponent.Client_UpdateMemberMarkData");

	UPlayerSquadComponent_Client_UpdateMemberMarkData_Params params;
	params.PlayerID = PlayerID;
	params.mark3dlocation = mark3dlocation;
	params.ismark = ismark;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSquadComponent.Client_UpdateMemberHp
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            hp                             (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSquadComponent::Client_UpdateMemberHp(int PlayerID, int hp)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSquadComponent.Client_UpdateMemberHp");

	UPlayerSquadComponent_Client_UpdateMemberHp_Params params;
	params.PlayerID = PlayerID;
	params.hp = hp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSquadComponent.Client_UpdateMemberDyingHP
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          dyingHp                        (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSquadComponent::Client_UpdateMemberDyingHP(int PlayerID, float dyingHp)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSquadComponent.Client_UpdateMemberDyingHP");

	UPlayerSquadComponent_Client_UpdateMemberDyingHP_Params params;
	params.PlayerID = PlayerID;
	params.dyingHp = dyingHp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSquadComponent.Client_UpdateMemberData
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FSquadMemberData        Data                           (ConstParm, Parm, ReferenceParm)

void UPlayerSquadComponent::Client_UpdateMemberData(const struct FSquadMemberData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSquadComponent.Client_UpdateMemberData");

	UPlayerSquadComponent_Client_UpdateMemberData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSquadComponent.Client_RemoveSquadData
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSquadComponent::Client_RemoveSquadData(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSquadComponent.Client_RemoveSquadData");

	UPlayerSquadComponent_Client_RemoveSquadData_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSquadComponent.Client_InitSquad
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FString                 squadid                        (Parm, ZeroConstructor)

void UPlayerSquadComponent::Client_InitSquad(const struct FString& squadid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSquadComponent.Client_InitSquad");

	UPlayerSquadComponent_Client_InitSquad_Params params;
	params.squadid = squadid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerSquadComponent.ChangeVision
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           isnext                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSquadComponent::ChangeVision(bool isnext)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerSquadComponent.ChangeVision");

	UPlayerSquadComponent_ChangeVision_Params params;
	params.isnext = isnext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerStateComponent.ServerInitProperty
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void UPlayerStateComponent::ServerInitProperty()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerStateComponent.ServerInitProperty");

	UPlayerStateComponent_ServerInitProperty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerStateComponent.Server_SetPlayerState
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// EPlayerGameState               State                          (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStateComponent::Server_SetPlayerState(EPlayerGameState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerStateComponent.Server_SetPlayerState");

	UPlayerStateComponent_Server_SetPlayerState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerStateComponent.Server_EffectPlayerState
// (Final, Native, Private)
// Parameters:
// EPlayerGameState               Val                            (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStateComponent::Server_EffectPlayerState(EPlayerGameState Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerStateComponent.Server_EffectPlayerState");

	UPlayerStateComponent_Server_EffectPlayerState_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerStateComponent.Server_ChangePlayerChildState
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// EPlayerFightState              State                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          during                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStateComponent::Server_ChangePlayerChildState(EPlayerFightState State, float during)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerStateComponent.Server_ChangePlayerChildState");

	UPlayerStateComponent_Server_ChangePlayerChildState_Params params;
	params.State = State;
	params.during = during;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerStateComponent.recover_child_state_time_FUNC
// (Final, Native, Public)

void UPlayerStateComponent::recover_child_state_time_FUNC()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerStateComponent.recover_child_state_time_FUNC");

	UPlayerStateComponent_recover_child_state_time_FUNC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerStateComponent.Player_state_net
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPlayerGameState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPlayerGameState UPlayerStateComponent::Player_state_net()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerStateComponent.Player_state_net");

	UPlayerStateComponent_Player_state_net_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerStateComponent.OnRep_State_Other
// (Final, Native, Private)

void UPlayerStateComponent::OnRep_State_Other()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerStateComponent.OnRep_State_Other");

	UPlayerStateComponent_OnRep_State_Other_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerStateComponent.OnRep_State
// (Final, Native, Private)

void UPlayerStateComponent::OnRep_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerStateComponent.OnRep_State");

	UPlayerStateComponent_OnRep_State_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerStateComponent.GetPlayerMoveState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPlayerMoveStateType           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPlayerMoveStateType UPlayerStateComponent::GetPlayerMoveState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerStateComponent.GetPlayerMoveState");

	UPlayerStateComponent_GetPlayerMoveState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerStateComponent.GetPlayerMotionState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPlayerMotionState             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPlayerMotionState UPlayerStateComponent::GetPlayerMotionState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerStateComponent.GetPlayerMotionState");

	UPlayerStateComponent_GetPlayerMotionState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerStateComponent.GetPlayerChildState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPlayerFightState              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPlayerFightState UPlayerStateComponent::GetPlayerChildState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerStateComponent.GetPlayerChildState");

	UPlayerStateComponent_GetPlayerChildState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.PlayerStateComponent.ExitFight
// (Final, Native, Public)

void UPlayerStateComponent::ExitFight()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerStateComponent.ExitFight");

	UPlayerStateComponent_ExitFight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerStateComponent.Client_EffectPlayerState
// (Final, Native, Public)
// Parameters:
// EPlayerGameState               Val                            (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStateComponent::Client_EffectPlayerState(EPlayerGameState Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerStateComponent.Client_EffectPlayerState");

	UPlayerStateComponent_Client_EffectPlayerState_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerStateComponent.ChangePlayerState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPlayerGameState               Val                            (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStateComponent::ChangePlayerState(EPlayerGameState Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerStateComponent.ChangePlayerState");

	UPlayerStateComponent_ChangePlayerState_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerStateComponent.ChangePlayerMoveState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPlayerMoveStateType           Val                            (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStateComponent::ChangePlayerMoveState(EPlayerMoveStateType Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerStateComponent.ChangePlayerMoveState");

	UPlayerStateComponent_ChangePlayerMoveState_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerStateComponent.ChangePlayerMotionState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPlayerMotionState             Val                            (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStateComponent::ChangePlayerMotionState(EPlayerMotionState Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerStateComponent.ChangePlayerMotionState");

	UPlayerStateComponent_ChangePlayerMotionState_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PlayerStateComponent.ChangePlayerChildState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPlayerFightState              Val                            (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerStateComponent::ChangePlayerChildState(EPlayerFightState Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PlayerStateComponent.ChangePlayerChildState");

	UPlayerStateComponent_ChangePlayerChildState_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PVPSelectUI.SetWeapon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            weaponid                       (Parm, ZeroConstructor, IsPlainOldData)

void UPVPSelectUI::SetWeapon(int index, int weaponid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PVPSelectUI.SetWeapon");

	UPVPSelectUI_SetWeapon_Params params;
	params.index = index;
	params.weaponid = weaponid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PVPSelectUI.SetUIWeapon
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    skillids                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>         skillnames                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UTexture2D*>      skillicons                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPVPSelectUI::SetUIWeapon(int index, int ID, class UTexture2D* icon, TArray<int> skillids, TArray<struct FString> skillnames, TArray<class UTexture2D*> skillicons)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PVPSelectUI.SetUIWeapon");

	UPVPSelectUI_SetUIWeapon_Params params;
	params.index = index;
	params.ID = ID;
	params.icon = icon;
	params.skillids = skillids;
	params.skillnames = skillnames;
	params.skillicons = skillicons;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PVPSelectUI.SetUISkill
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)

void UPVPSelectUI::SetUISkill(int Type, int index, int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PVPSelectUI.SetUISkill");

	UPVPSelectUI_SetUISkill_Params params;
	params.Type = Type;
	params.index = index;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PVPSelectUI.SetUIRangeWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              consumablesicon                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Number                         (Parm, ZeroConstructor, IsPlainOldData)

void UPVPSelectUI::SetUIRangeWeapon(int ID, class UTexture2D* icon, class UTexture2D* consumablesicon, int Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PVPSelectUI.SetUIRangeWeapon");

	UPVPSelectUI_SetUIRangeWeapon_Params params;
	params.ID = ID;
	params.icon = icon;
	params.consumablesicon = consumablesicon;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PVPSelectUI.SetUIMissile
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Number                         (Parm, ZeroConstructor, IsPlainOldData)

void UPVPSelectUI::SetUIMissile(int ID, class UTexture2D* icon, int Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PVPSelectUI.SetUIMissile");

	UPVPSelectUI_SetUIMissile_Params params;
	params.ID = ID;
	params.icon = icon;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PVPSelectUI.SetUIItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Number                         (Parm, ZeroConstructor, IsPlainOldData)

void UPVPSelectUI::SetUIItem(int index, int ID, class UTexture2D* icon, int Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PVPSelectUI.SetUIItem");

	UPVPSelectUI_SetUIItem_Params params;
	params.index = index;
	params.ID = ID;
	params.icon = icon;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PVPSelectUI.SetSkillHotKey
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   hotkeyname                     (ConstParm, Parm, OutParm, ReferenceParm)

void UPVPSelectUI::SetSkillHotKey(int index, const struct FText& hotkeyname)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PVPSelectUI.SetSkillHotKey");

	UPVPSelectUI_SetSkillHotKey_Params params;
	params.index = index;
	params.hotkeyname = hotkeyname;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PVPSelectUI.SetSkill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            typeindex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            skillid                        (Parm, ZeroConstructor, IsPlainOldData)

void UPVPSelectUI::SetSkill(int typeindex, int index, int skillid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PVPSelectUI.SetSkill");

	UPVPSelectUI_SetSkill_Params params;
	params.typeindex = typeindex;
	params.index = index;
	params.skillid = skillid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PVPSelectUI.SetResurrectionInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FResurrectionInfo       Info                           (ConstParm, Parm, OutParm, ReferenceParm)

void UPVPSelectUI::SetResurrectionInfo(const struct FResurrectionInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PVPSelectUI.SetResurrectionInfo");

	UPVPSelectUI_SetResurrectionInfo_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PVPSelectUI.SetItemHotKey
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   hotkeyname                     (ConstParm, Parm, OutParm, ReferenceParm)

void UPVPSelectUI::SetItemHotKey(int index, const struct FText& hotkeyname)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PVPSelectUI.SetItemHotKey");

	UPVPSelectUI_SetItemHotKey_Params params;
	params.index = index;
	params.hotkeyname = hotkeyname;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PVPSelectUI.SetItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            itemID                         (Parm, ZeroConstructor, IsPlainOldData)

void UPVPSelectUI::SetItem(int index, int itemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PVPSelectUI.SetItem");

	UPVPSelectUI_SetItem_Params params;
	params.index = index;
	params.itemID = itemID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PVPSelectUI.SetHandSkills
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    skillids                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>         skillnames                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UTexture2D*>      icons                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPVPSelectUI::SetHandSkills(TArray<int> skillids, TArray<struct FString> skillnames, TArray<class UTexture2D*> icons)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PVPSelectUI.SetHandSkills");

	UPVPSelectUI_SetHandSkills_Params params;
	params.skillids = skillids;
	params.skillnames = skillnames;
	params.icons = icons;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PVPSelectUI.SaveChange
// (Final, Native, Public, BlueprintCallable)

void UPVPSelectUI::SaveChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PVPSelectUI.SaveChange");

	UPVPSelectUI_SaveChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PVPSelectUI.RandomSelect
// (Final, Native, Public, BlueprintCallable)

void UPVPSelectUI::RandomSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PVPSelectUI.RandomSelect");

	UPVPSelectUI_RandomSelect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PVPSelectUI.InitIcons
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<int>                    skinids                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPVPSelectUI::InitIcons(TArray<int> skinids)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PVPSelectUI.InitIcons");

	UPVPSelectUI_InitIcons_Params params;
	params.skinids = skinids;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PVPSelectUI.InitHotKeys
// (Final, Native, Public, BlueprintCallable)

void UPVPSelectUI::InitHotKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PVPSelectUI.InitHotKeys");

	UPVPSelectUI_InitHotKeys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PVPSelectUI.InitByInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FResurrectionInfo       Info                           (ConstParm, Parm, OutParm, ReferenceParm)

void UPVPSelectUI::InitByInfo(const struct FResurrectionInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PVPSelectUI.InitByInfo");

	UPVPSelectUI_InitByInfo_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PVPSelectUI.InitAllEvents
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UPVPSelectUI::InitAllEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PVPSelectUI.InitAllEvents");

	UPVPSelectUI_InitAllEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.PVPSelectUI.CancelChange
// (Final, Native, Public, BlueprintCallable)

void UPVPSelectUI::CancelChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.PVPSelectUI.CancelChange");

	UPVPSelectUI_CancelChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.RoomChildUI.Init
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUIRoomInfo             Info                           (ConstParm, Parm, OutParm, ReferenceParm)

void URoomChildUI::Init(const struct FUIRoomInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.RoomChildUI.Init");

	URoomChildUI_Init_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.RoomInfoWidget.WidgetGetRoomInfos
// (Event, Public, BlueprintCallable, BlueprintEvent)

void URoomInfoWidget::WidgetGetRoomInfos()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.RoomInfoWidget.WidgetGetRoomInfos");

	URoomInfoWidget_WidgetGetRoomInfos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.RoomInfoWidget.UpdatePlayer
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FRoomUser               Player                         (ConstParm, Parm, OutParm, ReferenceParm)

void URoomInfoWidget::UpdatePlayer(const struct FRoomUser& Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.RoomInfoWidget.UpdatePlayer");

	URoomInfoWidget_UpdatePlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.RoomInfoWidget.SetSelectPlayer
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoomUser               Player                         (ConstParm, Parm, OutParm, ReferenceParm)

void URoomInfoWidget::SetSelectPlayer(const struct FRoomUser& Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.RoomInfoWidget.SetSelectPlayer");

	URoomInfoWidget_SetSelectPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.RoomInfoWidget.SetRoomInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUIRoomInfo             room_info                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            master_id                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FRoomUser>       userinfos                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void URoomInfoWidget::SetRoomInfo(const struct FUIRoomInfo& room_info, int master_id, TArray<struct FRoomUser> userinfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.RoomInfoWidget.SetRoomInfo");

	URoomInfoWidget_SetRoomInfo_Params params;
	params.room_info = room_info;
	params.master_id = master_id;
	params.userinfos = userinfos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.RoomInfoWidget.RemovePlayer
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoomUser               Player                         (ConstParm, Parm, OutParm, ReferenceParm)

void URoomInfoWidget::RemovePlayer(const struct FRoomUser& Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.RoomInfoWidget.RemovePlayer");

	URoomInfoWidget_RemovePlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.RoomInfoWidget.PlayerBeenRemove
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoomUser               Player                         (ConstParm, Parm, OutParm, ReferenceParm)

void URoomInfoWidget::PlayerBeenRemove(const struct FRoomUser& Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.RoomInfoWidget.PlayerBeenRemove");

	URoomInfoWidget_PlayerBeenRemove_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.RoomInfoWidget.PlayerBeenCreate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoomUser               Player                         (ConstParm, Parm, OutParm, ReferenceParm)

void URoomInfoWidget::PlayerBeenCreate(const struct FRoomUser& Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.RoomInfoWidget.PlayerBeenCreate");

	URoomInfoWidget_PlayerBeenCreate_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.RoomInfoWidget.GetMapName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            map_id                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString URoomInfoWidget::GetMapName(int map_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.RoomInfoWidget.GetMapName");

	URoomInfoWidget_GetMapName_Params params;
	params.map_id = map_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.RoomInfoWidget.DeletePlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            player_id                      (Parm, ZeroConstructor, IsPlainOldData)

void URoomInfoWidget::DeletePlayer(int player_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.RoomInfoWidget.DeletePlayer");

	URoomInfoWidget_DeletePlayer_Params params;
	params.player_id = player_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.RoomInfoWidget.CreateTeamWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           is_team                        (Parm, ZeroConstructor, IsPlainOldData)

void URoomInfoWidget::CreateTeamWidget(int index, int Num, bool is_team)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.RoomInfoWidget.CreateTeamWidget");

	URoomInfoWidget_CreateTeamWidget_Params params;
	params.index = index;
	params.Num = Num;
	params.is_team = is_team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.RoomInfoWidget.CreatePlayerComplete
// (Event, Public, BlueprintCallable, BlueprintEvent)

void URoomInfoWidget::CreatePlayerComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.RoomInfoWidget.CreatePlayerComplete");

	URoomInfoWidget_CreatePlayerComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.RoomInfoWidget.CreatePlayer
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoomUser               Player                         (ConstParm, Parm, OutParm, ReferenceParm)

void URoomInfoWidget::CreatePlayer(const struct FRoomUser& Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.RoomInfoWidget.CreatePlayer");

	URoomInfoWidget_CreatePlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.RoomInfoWidget.ClearAll
// (Event, Public, BlueprintCallable, BlueprintEvent)

void URoomInfoWidget::ClearAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.RoomInfoWidget.ClearAll");

	URoomInfoWidget_ClearAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.RoomTeamPlayerUI.UpdatePlayerInfo
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoomUser               Player                         (ConstParm, Parm, OutParm, ReferenceParm)
// int                            master_id                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           is_master                      (Parm, ZeroConstructor, IsPlainOldData)

void URoomTeamPlayerUI::UpdatePlayerInfo(const struct FRoomUser& Player, int master_id, bool is_master)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.RoomTeamPlayerUI.UpdatePlayerInfo");

	URoomTeamPlayerUI_UpdatePlayerInfo_Params params;
	params.Player = Player;
	params.master_id = master_id;
	params.is_master = is_master;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.RoomTeamPlayerUI.SetSelectState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void URoomTeamPlayerUI::SetSelectState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.RoomTeamPlayerUI.SetSelectState");

	URoomTeamPlayerUI_SetSelectState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.RoomTeamPlayerUI.ResetUserInfo
// (Final, Native, Public, BlueprintCallable)

void URoomTeamPlayerUI::ResetUserInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.RoomTeamPlayerUI.ResetUserInfo");

	URoomTeamPlayerUI_ResetUserInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.RoomTeamPlayerUI.Remove
// (Event, Public, BlueprintCallable, BlueprintEvent)

void URoomTeamPlayerUI::Remove()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.RoomTeamPlayerUI.Remove");

	URoomTeamPlayerUI_Remove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.RoomTeamPlayerUI.Init
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            team_index                     (Parm, ZeroConstructor, IsPlainOldData)
// ERoleType                      Type                           (Parm, ZeroConstructor, IsPlainOldData)

void URoomTeamPlayerUI::Init(int team_index, ERoleType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.RoomTeamPlayerUI.Init");

	URoomTeamPlayerUI_Init_Params params;
	params.team_index = team_index;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.RoomTeamUI.SortPlayer
// (Final, Native, Public, BlueprintCallable)

void URoomTeamUI::SortPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.RoomTeamUI.SortPlayer");

	URoomTeamUI_SortPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.RoomTeamUI.SetSelectPlayer
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FRoomUser               Player                         (ConstParm, Parm, OutParm, ReferenceParm)
// class URoomTeamPlayerUI*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class URoomTeamPlayerUI* URoomTeamUI::SetSelectPlayer(const struct FRoomUser& Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.RoomTeamUI.SetSelectPlayer");

	URoomTeamUI_SetSelectPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.RoomTeamUI.Init
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           is_team                        (Parm, ZeroConstructor, IsPlainOldData)

void URoomTeamUI::Init(int index, int Num, bool is_team)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.RoomTeamUI.Init");

	URoomTeamUI_Init_Params params;
	params.index = index;
	params.Num = Num;
	params.is_team = is_team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.RoomUI.SetInfo
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUIRoomInfo             Info                           (ConstParm, Parm, OutParm, ReferenceParm)

void URoomUI::SetInfo(const struct FUIRoomInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.RoomUI.SetInfo");

	URoomUI_SetInfo_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.RoomUI.GetRoomStartTime
// (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 room_id                        (Parm, ZeroConstructor)
// TArray<int>                    Times                          (Parm, OutParm, ZeroConstructor)

void URoomUI::GetRoomStartTime(const struct FString& room_id, TArray<int>* Times)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.RoomUI.GetRoomStartTime");

	URoomUI_GetRoomStartTime_Params params;
	params.room_id = room_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Times != nullptr)
		*Times = params.Times;
}


// Function WuXiaX.RoomUI.GetMapInfo
// (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            map_id                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* URoomUI::GetMapInfo(int map_id, struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.RoomUI.GetMapInfo");

	URoomUI_GetMapInfo_Params params;
	params.map_id = map_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;

	return params.ReturnValue;
}


// Function WuXiaX.ShowDebugComponent.UpdateVariables
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FDebugVariable>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FDebugVariable> UShowDebugComponent::UpdateVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ShowDebugComponent.UpdateVariables");

	UShowDebugComponent_UpdateVariables_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.ShowDebugWidget.OnVariablesUpdated
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FDebugVariable>  VariablesList                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UShowDebugWidget::OnVariablesUpdated(TArray<struct FDebugVariable> VariablesList)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.ShowDebugWidget.OnVariablesUpdated");

	UShowDebugWidget_OnVariablesUpdated_Params params;
	params.VariablesList = VariablesList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.Vertical
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsDown                         (Parm, ZeroConstructor, IsPlainOldData)

void USkillUI::Vertical(bool State, bool IsDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.Vertical");

	USkillUI_Vertical_Params params;
	params.State = State;
	params.IsDown = IsDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.UseSkillWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USkillUI::UseSkillWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.UseSkillWidget");

	USkillUI_UseSkillWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.UseSkill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            skill_id                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            skill_type                     (Parm, ZeroConstructor, IsPlainOldData)

void USkillUI::UseSkill(int skill_id, int skill_type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.UseSkill");

	USkillUI_UseSkill_Params params;
	params.skill_id = skill_id;
	params.skill_type = skill_type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.UnEquipSkill
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillEquipType                slottype                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            slotindex                      (Parm, ZeroConstructor, IsPlainOldData)

void USkillUI::UnEquipSkill(ESkillEquipType slottype, int slotindex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.UnEquipSkill");

	USkillUI_UnEquipSkill_Params params;
	params.slottype = slottype;
	params.slotindex = slotindex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.ShowUISkillDetail
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUISkillInfo            skillinfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void USkillUI::ShowUISkillDetail(const struct FUISkillInfo& skillinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.ShowUISkillDetail");

	USkillUI_ShowUISkillDetail_Params params;
	params.skillinfo = skillinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.ShowSkillUI
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USkillUI::ShowSkillUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.ShowSkillUI");

	USkillUI_ShowSkillUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.SetSkillWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillEquipType                slottype                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            weapontype                     (Parm, ZeroConstructor, IsPlainOldData)

void USkillUI::SetSkillWeapon(ESkillEquipType slottype, int weapontype)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.SetSkillWeapon");

	USkillUI_SetSkillWeapon_Params params;
	params.slottype = slottype;
	params.weapontype = weapontype;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.SetSkillEquipState
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    skillids                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void USkillUI::SetSkillEquipState(TArray<int> skillids)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.SetSkillEquipState");

	USkillUI_SetSkillEquipState_Params params;
	params.skillids = skillids;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.SetSkillBook
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemindex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            skillid                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            weapontype                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 Description                    (Parm, ZeroConstructor)
// class UTexture2D*              icon                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isenable                       (Parm, ZeroConstructor, IsPlainOldData)

void USkillUI::SetSkillBook(int itemindex, int skillid, int weapontype, int Level, const struct FString& Name, const struct FString& Description, class UTexture2D* icon, bool isenable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.SetSkillBook");

	USkillUI_SetSkillBook_Params params;
	params.itemindex = itemindex;
	params.skillid = skillid;
	params.weapontype = weapontype;
	params.Level = Level;
	params.Name = Name;
	params.Description = Description;
	params.icon = icon;
	params.isenable = isenable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.SetPassiveSkill
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FUISkillInfo>    Info                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void USkillUI::SetPassiveSkill(TArray<struct FUISkillInfo> Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.SetPassiveSkill");

	USkillUI_SetPassiveSkill_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.SetActiveSkill
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FUISkillInfo>    Info                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void USkillUI::SetActiveSkill(TArray<struct FUISkillInfo> Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.SetActiveSkill");

	USkillUI_SetActiveSkill_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.SelectHoverSkill
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USkillUI::SelectHoverSkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.SelectHoverSkill");

	USkillUI_SelectHoverSkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.RemoveSkillBook
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            skillitemid                    (Parm, ZeroConstructor, IsPlainOldData)

void USkillUI::RemoveSkillBook(int skillitemid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.RemoveSkillBook");

	USkillUI_RemoveSkillBook_Params params;
	params.skillitemid = skillitemid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.RemovePassiveSkill
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            skillid                        (Parm, ZeroConstructor, IsPlainOldData)

void USkillUI::RemovePassiveSkill(int skillid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.RemovePassiveSkill");

	USkillUI_RemovePassiveSkill_Params params;
	params.skillid = skillid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.RemoveActiveSkill
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            skillid                        (Parm, ZeroConstructor, IsPlainOldData)

void USkillUI::RemoveActiveSkill(int skillid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.RemoveActiveSkill");

	USkillUI_RemoveActiveSkill_Params params;
	params.skillid = skillid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.ReLoadConfigShow
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USkillUI::ReLoadConfigShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.ReLoadConfigShow");

	USkillUI_ReLoadConfigShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.NextLabel
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USkillUI::NextLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.NextLabel");

	USkillUI_NextLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.MarkHoverItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGamepadMarkType               MarkType                       (Parm, ZeroConstructor, IsPlainOldData)

void USkillUI::MarkHoverItem(EGamepadMarkType MarkType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.MarkHoverItem");

	USkillUI_MarkHoverItem_Params params;
	params.MarkType = MarkType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.LastLabel
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USkillUI::LastLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.LastLabel");

	USkillUI_LastLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.InitPassiveSkill
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FUISkillInfo>    skillsinfo                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void USkillUI::InitPassiveSkill(TArray<struct FUISkillInfo> skillsinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.InitPassiveSkill");

	USkillUI_InitPassiveSkill_Params params;
	params.skillsinfo = skillsinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.InitAllEvent
// (Event, Public, BlueprintEvent)

void USkillUI::InitAllEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.InitAllEvent");

	USkillUI_InitAllEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.InitActiveSkill
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FUISkillInfo>    skillsinfo                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void USkillUI::InitActiveSkill(TArray<struct FUISkillInfo> skillsinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.InitActiveSkill");

	USkillUI_InitActiveSkill_Params params;
	params.skillsinfo = skillsinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.Init
// (Final, Native, Public, BlueprintCallable)

void USkillUI::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.Init");

	USkillUI_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.Horizontal
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsRight                        (Parm, ZeroConstructor, IsPlainOldData)

void USkillUI::Horizontal(bool State, bool IsRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.Horizontal");

	USkillUI_Horizontal_Params params;
	params.State = State;
	params.IsRight = IsRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.HideUISkillDetail
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USkillUI::HideUISkillDetail()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.HideUISkillDetail");

	USkillUI_HideUISkillDetail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.HideSkillUI
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USkillUI::HideSkillUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.HideSkillUI");

	USkillUI_HideSkillUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.GamepadIntoWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USkillUI::GamepadIntoWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.GamepadIntoWidget");

	USkillUI_GamepadIntoWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.EquipSkill
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillEquipType                slottype                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            slotindex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isenable                       (Parm, ZeroConstructor, IsPlainOldData)

void USkillUI::EquipSkill(ESkillEquipType slottype, int slotindex, class UTexture2D* icon, bool isenable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.EquipSkill");

	USkillUI_EquipSkill_Params params;
	params.slottype = slottype;
	params.slotindex = slotindex;
	params.icon = icon;
	params.isenable = isenable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.DropSkill
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USkillUI::DropSkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.DropSkill");

	USkillUI_DropSkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.ClearAllSkill
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USkillUI::ClearAllSkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.ClearAllSkill");

	USkillUI_ClearAllSkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.ChangeSkillCurrentWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillEquipType                equiptype                      (Parm, ZeroConstructor, IsPlainOldData)

void USkillUI::ChangeSkillCurrentWeapon(ESkillEquipType equiptype)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.ChangeSkillCurrentWeapon");

	USkillUI_ChangeSkillCurrentWeapon_Params params;
	params.equiptype = equiptype;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.AutoShowSkillByWeapons
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    weapons                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void USkillUI::AutoShowSkillByWeapons(TArray<int> weapons)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.AutoShowSkillByWeapons");

	USkillUI_AutoShowSkillByWeapons_Params params;
	params.weapons = weapons;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.AddPassiveSkill
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            skillid                        (Parm, ZeroConstructor, IsPlainOldData)

void USkillUI::AddPassiveSkill(int skillid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.AddPassiveSkill");

	USkillUI_AddPassiveSkill_Params params;
	params.skillid = skillid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SkillUI.AddActiveSkill
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            skillid                        (Parm, ZeroConstructor, IsPlainOldData)

void USkillUI::AddActiveSkill(int skillid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SkillUI.AddActiveSkill");

	USkillUI_AddActiveSkill_Params params;
	params.skillid = skillid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SoldItemUI.ShowItemInfo
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            money                          (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)

void USoldItemUI::ShowItemInfo(int money, class UTexture2D* icon, const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SoldItemUI.ShowItemInfo");

	USoldItemUI_ShowItemInfo_Params params;
	params.money = money;
	params.icon = icon;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SoldItemUI.SetItemInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           is_item                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)

void USoldItemUI::SetItemInfo(bool is_item, int item_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SoldItemUI.SetItemInfo");

	USoldItemUI_SetItemInfo_Params params;
	params.is_item = is_item;
	params.item_id = item_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.StatisticsWidget.StartAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UStatisticsWidget::StartAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.StatisticsWidget.StartAnimation");

	UStatisticsWidget_StartAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.StatisticsWidget.SortInfo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            rank                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            kill                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            reward                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            rank_point                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            kill_point                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            damage_point                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            all_team_number                (Parm, ZeroConstructor, IsPlainOldData)

void UStatisticsWidget::SortInfo(int rank, int kill, int reward, int rank_point, int kill_point, int damage_point, int all_team_number)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.StatisticsWidget.SortInfo");

	UStatisticsWidget_SortInfo_Params params;
	params.rank = rank;
	params.kill = kill;
	params.reward = reward;
	params.rank_point = rank_point;
	params.kill_point = kill_point;
	params.damage_point = damage_point;
	params.all_team_number = all_team_number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.StatisticsWidget.SendComplainVideo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UStatisticsWidget::SendComplainVideo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.StatisticsWidget.SendComplainVideo");

	UStatisticsWidget_SendComplainVideo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.StatisticsWidget.SendComplain
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 player_name                    (Parm, ZeroConstructor)
// TArray<int>                    select                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 player_text                    (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UStatisticsWidget::SendComplain(const struct FString& player_name, TArray<int> select, const struct FString& player_text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.StatisticsWidget.SendComplain");

	UStatisticsWidget_SendComplain_Params params;
	params.player_name = player_name;
	params.select = select;
	params.player_text = player_text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.StatisticsWidget.RecordVideo
// (Final, Native, Public, BlueprintCallable)

void UStatisticsWidget::RecordVideo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.StatisticsWidget.RecordVideo");

	UStatisticsWidget_RecordVideo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.StatisticsWidget.ReConnect
// (Final, Native, Public, BlueprintCallable)

void UStatisticsWidget::ReConnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.StatisticsWidget.ReConnect");

	UStatisticsWidget_ReConnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.StatisticsWidget.OpenSummary
// (Final, Native, Public, BlueprintCallable)

void UStatisticsWidget::OpenSummary()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.StatisticsWidget.OpenSummary");

	UStatisticsWidget_OpenSummary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.StatisticsWidget.GetSwordItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 item_name                      (Parm, ZeroConstructor)

void UStatisticsWidget::GetSwordItem(class UTexture2D* Texture, int Level, const struct FString& item_name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.StatisticsWidget.GetSwordItem");

	UStatisticsWidget_GetSwordItem_Params params;
	params.Texture = Texture;
	params.Level = Level;
	params.item_name = item_name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.StatisticsWidget.GetSendedCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UStatisticsWidget::GetSendedCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.StatisticsWidget.GetSendedCount");

	UStatisticsWidget_GetSendedCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.StatisticsWidget.ActiveComplain
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UStatisticsWidget::ActiveComplain()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.StatisticsWidget.ActiveComplain");

	UStatisticsWidget_ActiveComplain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.StoreWidget.InitRandomBoxData
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)

void UStoreWidget::InitRandomBoxData(int item_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.StoreWidget.InitRandomBoxData");

	UStoreWidget_InitRandomBoxData_Params params;
	params.item_id = item_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.StoreWidget.InitPreviewBoxData
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)

void UStoreWidget::InitPreviewBoxData(int item_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.StoreWidget.InitPreviewBoxData");

	UStoreWidget_InitPreviewBoxData_Params params;
	params.item_id = item_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.StoreWidget.InitBuyKeys
// (Final, Native, Protected, BlueprintCallable)

void UStoreWidget::InitBuyKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.StoreWidget.InitBuyKeys");

	UStoreWidget_InitBuyKeys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.StoreWidget.GetOpenBoxIcon
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UStoreWidget::GetOpenBoxIcon(int item_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.StoreWidget.GetOpenBoxIcon");

	UStoreWidget_GetOpenBoxIcon_Params params;
	params.item_id = item_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.StoreWidget.GetKeyPrice
// (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreWidget::GetKeyPrice(int item_id, int* Type, float* price)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.StoreWidget.GetKeyPrice");

	UStoreWidget_GetKeyPrice_Params params;
	params.item_id = item_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
	if (price != nullptr)
		*price = params.price;
}


// Function WuXiaX.StoreWidget.GetHallItemDetail
// (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor)
// struct FString                 descript                       (Parm, OutParm, ZeroConstructor)
// struct FString                 detail                         (Parm, OutParm, ZeroConstructor)

void UStoreWidget::GetHallItemDetail(int item_id, struct FString* Name, struct FString* descript, struct FString* detail)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.StoreWidget.GetHallItemDetail");

	UStoreWidget_GetHallItemDetail_Params params;
	params.item_id = item_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
	if (descript != nullptr)
		*descript = params.descript;
	if (detail != nullptr)
		*detail = params.detail;
}


// Function WuXiaX.StoreWidget.GetConsumeInfo
// (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           valid_item                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            consume_id                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           need_consume                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreWidget::GetConsumeInfo(int item_id, bool* valid_item, int* consume_id, bool* need_consume)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.StoreWidget.GetConsumeInfo");

	UStoreWidget_GetConsumeInfo_Params params;
	params.item_id = item_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (valid_item != nullptr)
		*valid_item = params.valid_item;
	if (consume_id != nullptr)
		*consume_id = params.consume_id;
	if (need_consume != nullptr)
		*need_consume = params.need_consume;
}


// Function WuXiaX.StoreWidget.GetBoxNameAndCost
// (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor)
// int                            cost                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreWidget::GetBoxNameAndCost(int item_id, struct FString* Name, int* cost)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.StoreWidget.GetBoxNameAndCost");

	UStoreWidget_GetBoxNameAndCost_Params params;
	params.item_id = item_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
	if (cost != nullptr)
		*cost = params.cost;
}


// Function WuXiaX.StoreWidget.GetBoxIcon
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UStoreWidget::GetBoxIcon(int item_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.StoreWidget.GetBoxIcon");

	UStoreWidget_GetBoxIcon_Params params;
	params.item_id = item_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.StoreWidget.GetBoxByTimeAWeek
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UStoreWidget::GetBoxByTimeAWeek(int item_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.StoreWidget.GetBoxByTimeAWeek");

	UStoreWidget_GetBoxByTimeAWeek_Params params;
	params.item_id = item_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.StoreWidget.CreateRandomBoxItem
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            parent_id                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData)

void UStoreWidget::CreateRandomBoxItem(int ID, int parent_id, int index, int Type, class UTexture2D* icon, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.StoreWidget.CreateRandomBoxItem");

	UStoreWidget_CreateRandomBoxItem_Params params;
	params.ID = ID;
	params.parent_id = parent_id;
	params.index = index;
	params.Type = Type;
	params.icon = icon;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.StoreWidget.CreateRandomBox
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (Parm, ZeroConstructor, IsPlainOldData)

void UStoreWidget::CreateRandomBox(int item_id, int index, class UTexture2D* icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.StoreWidget.CreateRandomBox");

	UStoreWidget_CreateRandomBox_Params params;
	params.item_id = item_id;
	params.index = index;
	params.icon = icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.StoreWidget.CreatePreviewBoxItem
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData)

void UStoreWidget::CreatePreviewBoxItem(int ID, int Type, class UTexture2D* icon, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.StoreWidget.CreatePreviewBoxItem");

	UStoreWidget_CreatePreviewBoxItem_Params params;
	params.ID = ID;
	params.Type = Type;
	params.icon = icon;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.StoreWidget.CreateBuyKey
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            price_type                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          price                          (Parm, ZeroConstructor, IsPlainOldData)

void UStoreWidget::CreateBuyKey(int ID, class UTexture2D* icon, int price_type, float price)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.StoreWidget.CreateBuyKey");

	UStoreWidget_CreateBuyKey_Params params;
	params.ID = ID;
	params.icon = icon;
	params.price_type = price_type;
	params.price = price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SystemMenuUI.Vertical
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsDown                         (Parm, ZeroConstructor, IsPlainOldData)

void USystemMenuUI::Vertical(bool State, bool IsDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SystemMenuUI.Vertical");

	USystemMenuUI_Vertical_Params params;
	params.State = State;
	params.IsDown = IsDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SystemMenuUI.UseButtonRelease
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USystemMenuUI::UseButtonRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SystemMenuUI.UseButtonRelease");

	USystemMenuUI_UseButtonRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SystemMenuUI.SelectButtonRelease
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USystemMenuUI::SelectButtonRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SystemMenuUI.SelectButtonRelease");

	USystemMenuUI_SelectButtonRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SystemMenuUI.Open
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USystemMenuUI::Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SystemMenuUI.Open");

	USystemMenuUI_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SystemMenuUI.NextLabel
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USystemMenuUI::NextLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SystemMenuUI.NextLabel");

	USystemMenuUI_NextLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SystemMenuUI.MarkHoverItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGamepadMarkType               MarkType                       (Parm, ZeroConstructor, IsPlainOldData)

void USystemMenuUI::MarkHoverItem(EGamepadMarkType MarkType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SystemMenuUI.MarkHoverItem");

	USystemMenuUI_MarkHoverItem_Params params;
	params.MarkType = MarkType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SystemMenuUI.LastLabel
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USystemMenuUI::LastLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SystemMenuUI.LastLabel");

	USystemMenuUI_LastLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SystemMenuUI.Init
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USystemMenuUI::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SystemMenuUI.Init");

	USystemMenuUI_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SystemMenuUI.Horizontal
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsRight                        (Parm, ZeroConstructor, IsPlainOldData)

void USystemMenuUI::Horizontal(bool State, bool IsRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SystemMenuUI.Horizontal");

	USystemMenuUI_Horizontal_Params params;
	params.State = State;
	params.IsRight = IsRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SystemMenuUI.GamepadIntoWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USystemMenuUI::GamepadIntoWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SystemMenuUI.GamepadIntoWidget");

	USystemMenuUI_GamepadIntoWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SystemMenuUI.Drop
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USystemMenuUI::Drop()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SystemMenuUI.Drop");

	USystemMenuUI_Drop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.SystemMenuUI.CloseWidget
// (Final, Native, Protected, BlueprintCallable)

void USystemMenuUI::CloseWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.SystemMenuUI.CloseWidget");

	USystemMenuUI_CloseWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.Trap.OnRepTrapID
// (Final, Native, Protected)

void ATrap::OnRepTrapID()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.Trap.OnRepTrapID");

	ATrap_OnRepTrapID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.Trap.OnOverlapBegin
// (Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ATrap::OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.Trap.OnOverlapBegin");

	ATrap_OnOverlapBegin_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.Trap.Client_TriggerTrap
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void ATrap::Client_TriggerTrap()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.Trap.Client_TriggerTrap");

	ATrap_Client_TriggerTrap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.Trap.Client_Init
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int64_t                        trapid                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            launchplayerid                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)

void ATrap::Client_Init(int64_t trapid, int launchplayerid, int item_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.Trap.Client_Init");

	ATrap_Client_Init_Params params;
	params.trapid = trapid;
	params.launchplayerid = launchplayerid;
	params.item_id = item_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.Trap.CallWhenDestroy
// (Final, Native, Protected)

void ATrap::CallWhenDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.Trap.CallWhenDestroy");

	ATrap_CallWhenDestroy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SetVoiceMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Mode                           (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SetVoiceMode(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SetVoiceMode");

	UUserSettingWidget_SetVoiceMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SetVoiceMicVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SetVoiceMicVolume(int Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SetVoiceMicVolume");

	UUserSettingWidget_SetVoiceMicVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SetMicMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            micmode                        (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SetMicMode(int micmode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SetMicMode");

	UUserSettingWidget_SetMicMode_Params params;
	params.micmode = micmode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SetGamma
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SetGamma(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SetGamma");

	UUserSettingWidget_SetGamma_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveWeaponShow
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SaveWeaponShow(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveWeaponShow");

	UUserSettingWidget_SaveWeaponShow_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveWalkSlowHabit
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SaveWalkSlowHabit(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveWalkSlowHabit");

	UUserSettingWidget_SaveWalkSlowHabit_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveWalkQuickHabit
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SaveWalkQuickHabit(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveWalkQuickHabit");

	UUserSettingWidget_SaveWalkQuickHabit_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveTotalQuality
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            Quality                        (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SaveTotalQuality(int Quality)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveTotalQuality");

	UUserSettingWidget_SaveTotalQuality_Params params;
	params.Quality = Quality;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveTalkMode
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SaveTalkMode(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveTalkMode");

	UUserSettingWidget_SaveTalkMode_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveSquatHabit
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SaveSquatHabit(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveSquatHabit");

	UUserSettingWidget_SaveSquatHabit_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveSoundEffectVolumn
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SaveSoundEffectVolumn(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveSoundEffectVolumn");

	UUserSettingWidget_SaveSoundEffectVolumn_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveSoundEffectValid
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SaveSoundEffectValid(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveSoundEffectValid");

	UUserSettingWidget_SaveSoundEffectValid_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveScreenScale
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SaveScreenScale(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveScreenScale");

	UUserSettingWidget_SaveScreenScale_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveResolutionMode
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SaveResolutionMode(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveResolutionMode");

	UUserSettingWidget_SaveResolutionMode_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SavePostColorType
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SavePostColorType(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SavePostColorType");

	UUserSettingWidget_SavePostColorType_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveOutputVolumn
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SaveOutputVolumn(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveOutputVolumn");

	UUserSettingWidget_SaveOutputVolumn_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveOutputValid
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SaveOutputValid(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveOutputValid");

	UUserSettingWidget_SaveOutputValid_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveMotionBlurMode
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SaveMotionBlurMode(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveMotionBlurMode");

	UUserSettingWidget_SaveMotionBlurMode_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveMapHabit
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SaveMapHabit(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveMapHabit");

	UUserSettingWidget_SaveMapHabit_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveMainSoundVolumn
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SaveMainSoundVolumn(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveMainSoundVolumn");

	UUserSettingWidget_SaveMainSoundVolumn_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveMainSoundValid
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SaveMainSoundValid(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveMainSoundValid");

	UUserSettingWidget_SaveMainSoundValid_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveLookAroundHabit
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SaveLookAroundHabit(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveLookAroundHabit");

	UUserSettingWidget_SaveLookAroundHabit_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveLanguage
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SaveLanguage(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveLanguage");

	UUserSettingWidget_SaveLanguage_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveKeyStr
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 key_name                       (Parm, ZeroConstructor)
// struct FInputChord             Key                            (ConstParm, Parm, OutParm, ReferenceParm)

void UUserSettingWidget::SaveKeyStr(const struct FString& key_name, const struct FInputChord& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveKeyStr");

	UUserSettingWidget_SaveKeyStr_Params params;
	params.key_name = key_name;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveInterfaceVolumn
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SaveInterfaceVolumn(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveInterfaceVolumn");

	UUserSettingWidget_SaveInterfaceVolumn_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveInterfaceValid
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SaveInterfaceValid(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveInterfaceValid");

	UUserSettingWidget_SaveInterfaceValid_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveInputVolumn
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SaveInputVolumn(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveInputVolumn");

	UUserSettingWidget_SaveInputVolumn_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveInputValid
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SaveInputValid(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveInputValid");

	UUserSettingWidget_SaveInputValid_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveGamma
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            Gamma                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SaveGamma(int Gamma)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveGamma");

	UUserSettingWidget_SaveGamma_Params params;
	params.Gamma = Gamma;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveFoliageQuality
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            Quality                        (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SaveFoliageQuality(int Quality)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveFoliageQuality");

	UUserSettingWidget_SaveFoliageQuality_Params params;
	params.Quality = Quality;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveDressShow
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SaveDressShow(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveDressShow");

	UUserSettingWidget_SaveDressShow_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveCharacterRender
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SaveCharacterRender(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveCharacterRender");

	UUserSettingWidget_SaveCharacterRender_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveCameraChangeMode
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SaveCameraChangeMode(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveCameraChangeMode");

	UUserSettingWidget_SaveCameraChangeMode_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveBgSoundVolumn
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SaveBgSoundVolumn(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveBgSoundVolumn");

	UUserSettingWidget_SaveBgSoundVolumn_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveBgSoundValid
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SaveBgSoundValid(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveBgSoundValid");

	UUserSettingWidget_SaveBgSoundValid_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveAudioChannel
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SaveAudioChannel(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveAudioChannel");

	UUserSettingWidget_SaveAudioChannel_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.SaveAchromatopsiaMode
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::SaveAchromatopsiaMode(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.SaveAchromatopsiaMode");

	UUserSettingWidget_SaveAchromatopsiaMode_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.ResetWindowPosition
// (Final, Native, Public, BlueprintCallable)

void UUserSettingWidget::ResetWindowPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.ResetWindowPosition");

	UUserSettingWidget_ResetWindowPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.GetWeaponShow
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUserSettingWidget::GetWeaponShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetWeaponShow");

	UUserSettingWidget_GetWeaponShow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetWalkSlowHabit
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUserSettingWidget::GetWalkSlowHabit()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetWalkSlowHabit");

	UUserSettingWidget_GetWalkSlowHabit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetWalkQuickHabit
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUserSettingWidget::GetWalkQuickHabit()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetWalkQuickHabit");

	UUserSettingWidget_GetWalkQuickHabit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetTotalQuality
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUserSettingWidget::GetTotalQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetTotalQuality");

	UUserSettingWidget_GetTotalQuality_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetTalkMode
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUserSettingWidget::GetTalkMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetTalkMode");

	UUserSettingWidget_GetTalkMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetSquatHabit
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUserSettingWidget::GetSquatHabit()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetSquatHabit");

	UUserSettingWidget_GetSquatHabit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetSoundEffectVolumn
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUserSettingWidget::GetSoundEffectVolumn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetSoundEffectVolumn");

	UUserSettingWidget_GetSoundEffectVolumn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetSoundEffectValid
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUserSettingWidget::GetSoundEffectValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetSoundEffectValid");

	UUserSettingWidget_GetSoundEffectValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetScreenScale
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUserSettingWidget::GetScreenScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetScreenScale");

	UUserSettingWidget_GetScreenScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetSaveKeyStr
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUserSettingWidget::GetSaveKeyStr(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetSaveKeyStr");

	UUserSettingWidget_GetSaveKeyStr_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetResolutionMode
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUserSettingWidget::GetResolutionMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetResolutionMode");

	UUserSettingWidget_GetResolutionMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetPostColorType
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUserSettingWidget::GetPostColorType()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetPostColorType");

	UUserSettingWidget_GetPostColorType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetOutputVolumn
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUserSettingWidget::GetOutputVolumn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetOutputVolumn");

	UUserSettingWidget_GetOutputVolumn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetOutputValid
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUserSettingWidget::GetOutputValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetOutputValid");

	UUserSettingWidget_GetOutputValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetMotionBlurMode
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUserSettingWidget::GetMotionBlurMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetMotionBlurMode");

	UUserSettingWidget_GetMotionBlurMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetMapHabit
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUserSettingWidget::GetMapHabit()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetMapHabit");

	UUserSettingWidget_GetMapHabit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetMainSoundVolumn
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUserSettingWidget::GetMainSoundVolumn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetMainSoundVolumn");

	UUserSettingWidget_GetMainSoundVolumn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetMainSoundValid
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUserSettingWidget::GetMainSoundValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetMainSoundValid");

	UUserSettingWidget_GetMainSoundValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetMainMonitorResolution
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FIntPoint               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FIntPoint UUserSettingWidget::GetMainMonitorResolution()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetMainMonitorResolution");

	UUserSettingWidget_GetMainMonitorResolution_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetLookAroundHabit
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUserSettingWidget::GetLookAroundHabit()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetLookAroundHabit");

	UUserSettingWidget_GetLookAroundHabit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetLanguage
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUserSettingWidget::GetLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetLanguage");

	UUserSettingWidget_GetLanguage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetKeyString
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputChord             Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUserSettingWidget::GetKeyString(const struct FInputChord& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetKeyString");

	UUserSettingWidget_GetKeyString_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetInterfaceVolumn
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUserSettingWidget::GetInterfaceVolumn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetInterfaceVolumn");

	UUserSettingWidget_GetInterfaceVolumn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetInterfaceValid
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUserSettingWidget::GetInterfaceValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetInterfaceValid");

	UUserSettingWidget_GetInterfaceValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetInputVolumn
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUserSettingWidget::GetInputVolumn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetInputVolumn");

	UUserSettingWidget_GetInputVolumn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetInputValid
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUserSettingWidget::GetInputValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetInputValid");

	UUserSettingWidget_GetInputValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetGamma
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUserSettingWidget::GetGamma()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetGamma");

	UUserSettingWidget_GetGamma_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetFoliageQuality
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUserSettingWidget::GetFoliageQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetFoliageQuality");

	UUserSettingWidget_GetFoliageQuality_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetEasyKeyStr
// (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputChord             Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUserSettingWidget::GetEasyKeyStr(const struct FInputChord& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetEasyKeyStr");

	UUserSettingWidget_GetEasyKeyStr_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetDressShow
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUserSettingWidget::GetDressShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetDressShow");

	UUserSettingWidget_GetDressShow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetCharacterRender
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUserSettingWidget::GetCharacterRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetCharacterRender");

	UUserSettingWidget_GetCharacterRender_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetCameraChangeMode
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUserSettingWidget::GetCameraChangeMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetCameraChangeMode");

	UUserSettingWidget_GetCameraChangeMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetBgSoundVolumn
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUserSettingWidget::GetBgSoundVolumn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetBgSoundVolumn");

	UUserSettingWidget_GetBgSoundVolumn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetBgSoundValid
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUserSettingWidget::GetBgSoundValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetBgSoundValid");

	UUserSettingWidget_GetBgSoundValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetAudioChannel
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUserSettingWidget::GetAudioChannel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetAudioChannel");

	UUserSettingWidget_GetAudioChannel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.GetAchromatopsiaMode
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUserSettingWidget::GetAchromatopsiaMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.GetAchromatopsiaMode");

	UUserSettingWidget_GetAchromatopsiaMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.UserSettingWidget.EffectLanguage
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::EffectLanguage(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.EffectLanguage");

	UUserSettingWidget_EffectLanguage_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.CallWeaponShow
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::CallWeaponShow(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.CallWeaponShow");

	UUserSettingWidget_CallWeaponShow_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.CallTalkMode
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::CallTalkMode(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.CallTalkMode");

	UUserSettingWidget_CallTalkMode_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.CallPostColor
// (Final, Native, Protected, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                  Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::CallPostColor(const struct FColor& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.CallPostColor");

	UUserSettingWidget_CallPostColor_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.CallOutputVolumn
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::CallOutputVolumn(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.CallOutputVolumn");

	UUserSettingWidget_CallOutputVolumn_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.CallInputVolumn
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::CallInputVolumn(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.CallInputVolumn");

	UUserSettingWidget_CallInputVolumn_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.CallDressShow
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::CallDressShow(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.CallDressShow");

	UUserSettingWidget_CallDressShow_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.CallCharacterRender
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::CallCharacterRender(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.CallCharacterRender");

	UUserSettingWidget_CallCharacterRender_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.UserSettingWidget.CallAudioChannel
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUserSettingWidget::CallAudioChannel(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.UserSettingWidget.CallAudioChannel");

	UUserSettingWidget_CallAudioChannel_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXia_AnimInstance.WuXia_Montage_Play
// (Event, Public, BlueprintEvent)
// Parameters:
// class UAnimMontage*            MontageToPlay                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          delay_time                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   section_name                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWuXia_AnimInstance::WuXia_Montage_Play(class UAnimMontage* MontageToPlay, float delay_time, const struct FName& section_name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXia_AnimInstance.WuXia_Montage_Play");

	UWuXia_AnimInstance_WuXia_Montage_Play_Params params;
	params.MontageToPlay = MontageToPlay;
	params.delay_time = delay_time;
	params.section_name = section_name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXia_AnimInstance.CurrentMontageSlotPlay
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 slot_node_name                 (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWuXia_AnimInstance::CurrentMontageSlotPlay(const struct FString& slot_node_name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXia_AnimInstance.CurrentMontageSlotPlay");

	UWuXia_AnimInstance_CurrentMontageSlotPlay_Params params;
	params.slot_node_name = slot_node_name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXia_AnimInstance.CurrentGroupMontageSlotPlay
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 group_name                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWuXia_AnimInstance::CurrentGroupMontageSlotPlay(const struct FString& group_name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXia_AnimInstance.CurrentGroupMontageSlotPlay");

	UWuXia_AnimInstance_CurrentGroupMontageSlotPlay_Params params;
	params.group_name = group_name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXia_Movement_Component.UpdateMovementSpeed_v2
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           walk_flag                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           spring_flag                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           block_flag                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           aim_flag                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           update_server_or_client        (Parm, ZeroConstructor, IsPlainOldData)

void UWuXia_Movement_Component::UpdateMovementSpeed_v2(bool walk_flag, bool spring_flag, bool block_flag, bool aim_flag, float Speed, bool update_server_or_client)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXia_Movement_Component.UpdateMovementSpeed_v2");

	UWuXia_Movement_Component_UpdateMovementSpeed_v2_Params params;
	params.walk_flag = walk_flag;
	params.spring_flag = spring_flag;
	params.block_flag = block_flag;
	params.aim_flag = aim_flag;
	params.Speed = Speed;
	params.update_server_or_client = update_server_or_client;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXia_Movement_Component.UpdateMovementSettingsEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          max_acceleration               (Parm, ZeroConstructor, IsPlainOldData)
// float                          braking_deceleration_walking   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ground_friction                (Parm, ZeroConstructor, IsPlainOldData)
// float                          jump_z_velocity                (Parm, ZeroConstructor, IsPlainOldData)

void UWuXia_Movement_Component::UpdateMovementSettingsEvent(float max_acceleration, float braking_deceleration_walking, float ground_friction, float jump_z_velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXia_Movement_Component.UpdateMovementSettingsEvent");

	UWuXia_Movement_Component_UpdateMovementSettingsEvent_Params params;
	params.max_acceleration = max_acceleration;
	params.braking_deceleration_walking = braking_deceleration_walking;
	params.ground_friction = ground_friction;
	params.jump_z_velocity = jump_z_velocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXia_Movement_Component.UpdateInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPlayerMoveInputState          Type                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UWuXia_Movement_Component::UpdateInput(EPlayerMoveInputState Type, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXia_Movement_Component.UpdateInput");

	UWuXia_Movement_Component_UpdateInput_Params params;
	params.Type = Type;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXia_Movement_Component.SwitchMovementModeEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EMovementMode>     movement_mode                  (Parm, ZeroConstructor, IsPlainOldData)

void UWuXia_Movement_Component::SwitchMovementModeEvent(TEnumAsByte<EMovementMode> movement_mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXia_Movement_Component.SwitchMovementModeEvent");

	UWuXia_Movement_Component_SwitchMovementModeEvent_Params params;
	params.movement_mode = movement_mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXia_Movement_Component.SetReferences
// (Final, Native, Public, BlueprintCallable)

void UWuXia_Movement_Component::SetReferences()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXia_Movement_Component.SetReferences");

	UWuXia_Movement_Component_SetReferences_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXia_Movement_Component.SetPlayerMovementsSwimAxisValues
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          up_axis                        (Parm, ZeroConstructor, IsPlainOldData)

void UWuXia_Movement_Component::SetPlayerMovementsSwimAxisValues(float up_axis)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXia_Movement_Component.SetPlayerMovementsSwimAxisValues");

	UWuXia_Movement_Component_SetPlayerMovementsSwimAxisValues_Params params;
	params.up_axis = up_axis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXia_Movement_Component.SetPlayerMovementAxisValues
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          forward_axis                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          right_axis                     (Parm, ZeroConstructor, IsPlainOldData)

void UWuXia_Movement_Component::SetPlayerMovementAxisValues(float forward_axis, float right_axis)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXia_Movement_Component.SetPlayerMovementAxisValues");

	UWuXia_Movement_Component_SetPlayerMovementAxisValues_Params params;
	params.forward_axis = forward_axis;
	params.right_axis = right_axis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXia_Movement_Component.SetMovementInputVectorOnServer
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, BlueprintCallable, NetValidate)
// Parameters:
// struct FVector                 movment_input_vector           (Parm, ZeroConstructor, IsPlainOldData)

void UWuXia_Movement_Component::SetMovementInputVectorOnServer(const struct FVector& movment_input_vector)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXia_Movement_Component.SetMovementInputVectorOnServer");

	UWuXia_Movement_Component_SetMovementInputVectorOnServer_Params params;
	params.movment_input_vector = movment_input_vector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXia_Movement_Component.SetMovementInputVectorEvent
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 movment_input_vector           (Parm, ZeroConstructor, IsPlainOldData)

void UWuXia_Movement_Component::SetMovementInputVectorEvent(const struct FVector& movment_input_vector)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXia_Movement_Component.SetMovementInputVectorEvent");

	UWuXia_Movement_Component_SetMovementInputVectorEvent_Params params;
	params.movment_input_vector = movment_input_vector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXia_Movement_Component.SetDefaultSettings
// (Final, Native, Public, BlueprintCallable)

void UWuXia_Movement_Component::SetDefaultSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXia_Movement_Component.SetDefaultSettings");

	UWuXia_Movement_Component_SetDefaultSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXia_Movement_Component.Server_WallJump
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void UWuXia_Movement_Component::Server_WallJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXia_Movement_Component.Server_WallJump");

	UWuXia_Movement_Component_Server_WallJump_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXia_Movement_Component.Server_UpdateParachuteInput
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          Right                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Forward                        (Parm, ZeroConstructor, IsPlainOldData)

void UWuXia_Movement_Component::Server_UpdateParachuteInput(float Right, float Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXia_Movement_Component.Server_UpdateParachuteInput");

	UWuXia_Movement_Component_Server_UpdateParachuteInput_Params params;
	params.Right = Right;
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXia_Movement_Component.Server_UpdateMovementSpeed_True
// (Net, NetReliable, Native, Event, Protected, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// bool                           walk_flag                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           spring_flag                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           block_flag                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           aim_flag                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           update_server_or_client        (Parm, ZeroConstructor, IsPlainOldData)

void UWuXia_Movement_Component::Server_UpdateMovementSpeed_True(bool walk_flag, bool spring_flag, bool block_flag, bool aim_flag, bool update_server_or_client)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXia_Movement_Component.Server_UpdateMovementSpeed_True");

	UWuXia_Movement_Component_Server_UpdateMovementSpeed_True_Params params;
	params.walk_flag = walk_flag;
	params.spring_flag = spring_flag;
	params.block_flag = block_flag;
	params.aim_flag = aim_flag;
	params.update_server_or_client = update_server_or_client;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXia_Movement_Component.Server_UpdateFreeview
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// bool                           free_view                      (Parm, ZeroConstructor, IsPlainOldData)

void UWuXia_Movement_Component::Server_UpdateFreeview(bool free_view)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXia_Movement_Component.Server_UpdateFreeview");

	UWuXia_Movement_Component_Server_UpdateFreeview_Params params;
	params.free_view = free_view;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXia_Movement_Component.Server_SetMoveState
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FPlayerMoveState        Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           update_speed                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           update_client_speed            (Parm, ZeroConstructor, IsPlainOldData)

void UWuXia_Movement_Component::Server_SetMoveState(const struct FPlayerMoveState& Value, bool update_speed, bool update_client_speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXia_Movement_Component.Server_SetMoveState");

	UWuXia_Movement_Component_Server_SetMoveState_Params params;
	params.Value = Value;
	params.update_speed = update_speed;
	params.update_client_speed = update_client_speed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXia_Movement_Component.Server_ChangeQingGongState
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// EPlayerMotionState             State                          (Parm, ZeroConstructor, IsPlainOldData)

void UWuXia_Movement_Component::Server_ChangeQingGongState(EPlayerMotionState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXia_Movement_Component.Server_ChangeQingGongState");

	UWuXia_Movement_Component_Server_ChangeQingGongState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXia_Movement_Component.PlayerSwimInputEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          up_axis                        (Parm, ZeroConstructor, IsPlainOldData)

void UWuXia_Movement_Component::PlayerSwimInputEvent(float up_axis)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXia_Movement_Component.PlayerSwimInputEvent");

	UWuXia_Movement_Component_PlayerSwimInputEvent_Params params;
	params.up_axis = up_axis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXia_Movement_Component.PlayerMovementInputEvent
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                          forward_axis                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          right_axis                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotate                         (Parm, ZeroConstructor, IsPlainOldData)

void UWuXia_Movement_Component::PlayerMovementInputEvent(float forward_axis, float right_axis, const struct FRotator& Rotate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXia_Movement_Component.PlayerMovementInputEvent");

	UWuXia_Movement_Component_PlayerMovementInputEvent_Params params;
	params.forward_axis = forward_axis;
	params.right_axis = right_axis;
	params.Rotate = Rotate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXia_Movement_Component.Movement_input_vector_net
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UWuXia_Movement_Component::Movement_input_vector_net()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXia_Movement_Component.Movement_input_vector_net");

	UWuXia_Movement_Component_Movement_input_vector_net_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXia_Movement_Component.LandTimeEnd
// (Final, Native, Public)

void UWuXia_Movement_Component::LandTimeEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXia_Movement_Component.LandTimeEnd");

	UWuXia_Movement_Component_LandTimeEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXia_Movement_Component.LandEvent
// (Final, Native, Public, BlueprintCallable)

void UWuXia_Movement_Component::LandEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXia_Movement_Component.LandEvent");

	UWuXia_Movement_Component_LandEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXia_Movement_Component.Clinet_ChangeJumpPlaneState
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// bool                           CanJump                        (Parm, ZeroConstructor, IsPlainOldData)

void UWuXia_Movement_Component::Clinet_ChangeJumpPlaneState(bool CanJump)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXia_Movement_Component.Clinet_ChangeJumpPlaneState");

	UWuXia_Movement_Component_Clinet_ChangeJumpPlaneState_Params params;
	params.CanJump = CanJump;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXia_Movement_Component.Client_UpdateSpeed
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// int                            change                         (Parm, ZeroConstructor, IsPlainOldData)

void UWuXia_Movement_Component::Client_UpdateSpeed(int change)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXia_Movement_Component.Client_UpdateSpeed");

	UWuXia_Movement_Component_Client_UpdateSpeed_Params params;
	params.change = change;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXia_Movement_Component.Client_UpdateMovementSpeed_v2
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)

void UWuXia_Movement_Component::Client_UpdateMovementSpeed_v2(float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXia_Movement_Component.Client_UpdateMovementSpeed_v2");

	UWuXia_Movement_Component_Client_UpdateMovementSpeed_v2_Params params;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaInteractiveActor.OnStateUpdate
// (Event, Protected, BlueprintEvent)

void AWuXiaInteractiveActor::OnStateUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaInteractiveActor.OnStateUpdate");

	AWuXiaInteractiveActor_OnStateUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaInteractiveActor.InteractiveUITips
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWuXiaXCharacter*        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWuXiaInteractiveActor::InteractiveUITips(class AWuXiaXCharacter* Player, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaInteractiveActor.InteractiveUITips");

	AWuXiaInteractiveActor_InteractiveUITips_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaInteractiveActor.Interactive
// (Event, Protected, BlueprintEvent)

void AWuXiaInteractiveActor::Interactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaInteractiveActor.Interactive");

	AWuXiaInteractiveActor_Interactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaInteractiveActor.GetStandAndLookLocation
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 playerlocation                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 standlocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LookAtLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWuXiaInteractiveActor::GetStandAndLookLocation(const struct FVector& playerlocation, struct FVector* standlocation, struct FVector* LookAtLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaInteractiveActor.GetStandAndLookLocation");

	AWuXiaInteractiveActor_GetStandAndLookLocation_Params params;
	params.playerlocation = playerlocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (standlocation != nullptr)
		*standlocation = params.standlocation;
	if (LookAtLocation != nullptr)
		*LookAtLocation = params.LookAtLocation;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaInteractiveActor.GetSpawnTargetTransform
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform AWuXiaInteractiveActor::GetSpawnTargetTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaInteractiveActor.GetSpawnTargetTransform");

	AWuXiaInteractiveActor_GetSpawnTargetTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaInteractiveActor.GetMovePassInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 playerlocation                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 playervelocity                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 beginlocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 EndLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWuXiaInteractiveActor::GetMovePassInfo(const struct FVector& playerlocation, const struct FVector& playervelocity, struct FVector* beginlocation, struct FVector* EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaInteractiveActor.GetMovePassInfo");

	AWuXiaInteractiveActor_GetMovePassInfo_Params params;
	params.playerlocation = playerlocation;
	params.playervelocity = playervelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (beginlocation != nullptr)
		*beginlocation = params.beginlocation;
	if (EndLocation != nullptr)
		*EndLocation = params.EndLocation;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaInteractiveActor.GetInteractiveType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWuXiaXCharacter*        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// EInteractiveType               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EInteractiveType AWuXiaInteractiveActor::GetInteractiveType(class AWuXiaXCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaInteractiveActor.GetInteractiveType");

	AWuXiaInteractiveActor_GetInteractiveType_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaInteractiveActor.CanInteractive
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWuXiaXCharacter*        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// ETriggerInteractiveType        Trigger                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWuXiaInteractiveActor::CanInteractive(class AWuXiaXCharacter* Player, ETriggerInteractiveType Trigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaInteractiveActor.CanInteractive");

	AWuXiaInteractiveActor_CanInteractive_Params params;
	params.Player = Player;
	params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaInteractiveActor.BreakKeepInteractive
// (Event, Protected, BlueprintEvent)

void AWuXiaInteractiveActor::BreakKeepInteractive()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaInteractiveActor.BreakKeepInteractive");

	AWuXiaInteractiveActor_BreakKeepInteractive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaInteractiveActor.BeginKeepInteractive
// (Event, Protected, BlueprintEvent)

void AWuXiaInteractiveActor::BeginKeepInteractive()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaInteractiveActor.BeginKeepInteractive");

	AWuXiaInteractiveActor_BeginKeepInteractive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaMiniMapWidget.UpdatePlayerRotator
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData)

void UWuXiaMiniMapWidget::UpdatePlayerRotator(int Num, float Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaMiniMapWidget.UpdatePlayerRotator");

	UWuXiaMiniMapWidget_UpdatePlayerRotator_Params params;
	params.Num = Num;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaMiniMapWidget.UpdatePlayerMark3DLocation
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void UWuXiaMiniMapWidget::UpdatePlayerMark3DLocation(int Num, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaMiniMapWidget.UpdatePlayerMark3DLocation");

	UWuXiaMiniMapWidget_UpdatePlayerMark3DLocation_Params params;
	params.Num = Num;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaMiniMapWidget.UpdatePlayerLocation
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void UWuXiaMiniMapWidget::UpdatePlayerLocation(int Num, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaMiniMapWidget.UpdatePlayerLocation");

	UWuXiaMiniMapWidget_UpdatePlayerLocation_Params params;
	params.Num = Num;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaMiniMapWidget.StartFly
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Start                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 End                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UWuXiaMiniMapWidget::StartFly(const struct FVector& Start, const struct FVector& End)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaMiniMapWidget.StartFly");

	UWuXiaMiniMapWidget_StartFly_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaMiniMapWidget.SetBasebackGround
// (Final, Native, Public, BlueprintCallable)

void UWuXiaMiniMapWidget::SetBasebackGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaMiniMapWidget.SetBasebackGround");

	UWuXiaMiniMapWidget_SetBasebackGround_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaMiniMapWidget.ResourceMapElement
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Key                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UWuXiaMiniMapWidget::ResourceMapElement(int Key, const struct FVector& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaMiniMapWidget.ResourceMapElement");

	UWuXiaMiniMapWidget_ResourceMapElement_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaMiniMapWidget.RemoveActorLocation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)

void UWuXiaMiniMapWidget::RemoveActorLocation(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaMiniMapWidget.RemoveActorLocation");

	UWuXiaMiniMapWidget_RemoveActorLocation_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaMiniMapWidget.PrepareForDrawing
// (Final, Native, Public, BlueprintCallable)

void UWuXiaMiniMapWidget::PrepareForDrawing()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaMiniMapWidget.PrepareForDrawing");

	UWuXiaMiniMapWidget_PrepareForDrawing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaMiniMapWidget.InitTeamPlayer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            teammode                       (Parm, ZeroConstructor, IsPlainOldData)

void UWuXiaMiniMapWidget::InitTeamPlayer(int PlayerID, const struct FString& Name, int index, int teammode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaMiniMapWidget.InitTeamPlayer");

	UWuXiaMiniMapWidget_InitTeamPlayer_Params params;
	params.PlayerID = PlayerID;
	params.Name = Name;
	params.index = index;
	params.teammode = teammode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaMiniMapWidget.Init
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               original_level_size            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               original_map_size              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               show_map_size                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Center                         (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              chinese_map                    (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              english_map                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           can_mark                       (Parm, ZeroConstructor, IsPlainOldData)

void UWuXiaMiniMapWidget::Init(const struct FVector2D& original_level_size, const struct FVector2D& original_map_size, const struct FVector2D& show_map_size, const struct FVector& Center, class UTexture2D* chinese_map, class UTexture2D* english_map, bool can_mark)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaMiniMapWidget.Init");

	UWuXiaMiniMapWidget_Init_Params params;
	params.original_level_size = original_level_size;
	params.original_map_size = original_map_size;
	params.show_map_size = show_map_size;
	params.Center = Center;
	params.chinese_map = chinese_map;
	params.english_map = english_map;
	params.can_mark = can_mark;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaMiniMapWidget.GetPositionByVector3
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UWuXiaMiniMapWidget::GetPositionByVector3(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaMiniMapWidget.GetPositionByVector3");

	UWuXiaMiniMapWidget_GetPositionByVector3_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaMiniMapWidget.GetPosition3D
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UWuXiaMiniMapWidget::GetPosition3D(const struct FVector2D& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaMiniMapWidget.GetPosition3D");

	UWuXiaMiniMapWidget_GetPosition3D_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaMiniMapWidget.GetPlayerPositionInMiniMap
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UWuXiaMiniMapWidget::GetPlayerPositionInMiniMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaMiniMapWidget.GetPlayerPositionInMiniMap");

	UWuXiaMiniMapWidget_GetPlayerPositionInMiniMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaMiniMapWidget.GetPlayerPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UWuXiaMiniMapWidget::GetPlayerPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaMiniMapWidget.GetPlayerPosition");

	UWuXiaMiniMapWidget_GetPlayerPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaMiniMapWidget.GetPlaneRotatorYaw
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWuXiaMiniMapWidget::GetPlaneRotatorYaw()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaMiniMapWidget.GetPlaneRotatorYaw");

	UWuXiaMiniMapWidget_GetPlaneRotatorYaw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaMiniMapWidget.GetPlanePosition
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UWuXiaMiniMapWidget::GetPlanePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaMiniMapWidget.GetPlanePosition");

	UWuXiaMiniMapWidget_GetPlanePosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaMiniMapWidget.ForeachResourceMap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TMap<int, struct FVector>      resources                      (ConstParm, Parm, ZeroConstructor)

void UWuXiaMiniMapWidget::ForeachResourceMap(TMap<int, struct FVector> resources)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaMiniMapWidget.ForeachResourceMap");

	UWuXiaMiniMapWidget_ForeachResourceMap_Params params;
	params.resources = resources;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaMiniMapWidget.ForeachBuffInfoMap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TMap<int, struct FBuffPointInfo> buffinfos                      (ConstParm, Parm, ZeroConstructor)

void UWuXiaMiniMapWidget::ForeachBuffInfoMap(TMap<int, struct FBuffPointInfo> buffinfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaMiniMapWidget.ForeachBuffInfoMap");

	UWuXiaMiniMapWidget_ForeachBuffInfoMap_Params params;
	params.buffinfos = buffinfos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaMiniMapWidget.EndFly
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWuXiaMiniMapWidget::EndFly()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaMiniMapWidget.EndFly");

	UWuXiaMiniMapWidget_EndFly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaMiniMapWidget.DeleteTeamPlayerMarkState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UWuXiaMiniMapWidget::DeleteTeamPlayerMarkState(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaMiniMapWidget.DeleteTeamPlayerMarkState");

	UWuXiaMiniMapWidget_DeleteTeamPlayerMarkState_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaMiniMapWidget.ClearTeamPlayer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void UWuXiaMiniMapWidget::ClearTeamPlayer(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaMiniMapWidget.ClearTeamPlayer");

	UWuXiaMiniMapWidget_ClearTeamPlayer_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaMiniMapWidget.CheckActorLocation
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UWuXiaMiniMapWidget::CheckActorLocation(int ID, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaMiniMapWidget.CheckActorLocation");

	UWuXiaMiniMapWidget_CheckActorLocation_Params params;
	params.ID = ID;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaMiniMapWidget.CallDrawCricle
// (Final, Native, Public, BlueprintCallable)

void UWuXiaMiniMapWidget::CallDrawCricle()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaMiniMapWidget.CallDrawCricle");

	UWuXiaMiniMapWidget_CallDrawCricle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaMiniMapWidget.BuffInfoMapElement
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Key                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FBuffPointInfo          Value                          (ConstParm, Parm)

void UWuXiaMiniMapWidget::BuffInfoMapElement(int Key, const struct FBuffPointInfo& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaMiniMapWidget.BuffInfoMapElement");

	UWuXiaMiniMapWidget_BuffInfoMapElement_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaParadrop.StopSound
// (Event, Public, BlueprintEvent)

void AWuXiaParadrop::StopSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaParadrop.StopSound");

	AWuXiaParadrop_StopSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaParadrop.PlaySound
// (Event, Public, BlueprintEvent)

void AWuXiaParadrop::PlaySound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaParadrop.PlaySound");

	AWuXiaParadrop_PlaySound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaParadrop.InteractiveUITips
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWuXiaXCharacter*        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWuXiaParadrop::InteractiveUITips(class AWuXiaXCharacter* Player, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaParadrop.InteractiveUITips");

	AWuXiaParadrop_InteractiveUITips_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaParadrop.GetInteractiveType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWuXiaXCharacter*        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// EInteractiveType               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EInteractiveType AWuXiaParadrop::GetInteractiveType(class AWuXiaXCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaParadrop.GetInteractiveType");

	AWuXiaParadrop_GetInteractiveType_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaParadrop.CanInteractive
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWuXiaXCharacter*        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// ETriggerInteractiveType        Trigger                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWuXiaParadrop::CanInteractive(class AWuXiaXCharacter* Player, ETriggerInteractiveType Trigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaParadrop.CanInteractive");

	AWuXiaParadrop_CanInteractive_Params params;
	params.Player = Player;
	params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaPVPResourcesActor.OnTeamIDUpdate
// (Event, Public, BlueprintEvent)

void AWuXiaPVPResourcesActor::OnTeamIDUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaPVPResourcesActor.OnTeamIDUpdate");

	AWuXiaPVPResourcesActor_OnTeamIDUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaPVPResourcesActor.OnInteractive
// (Final, Native, Protected, BlueprintCallable)

void AWuXiaPVPResourcesActor::OnInteractive()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaPVPResourcesActor.OnInteractive");

	AWuXiaPVPResourcesActor_OnInteractive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaWinActor.ShowWinNumber
// (Event, Public, BlueprintEvent)

void AWuXiaWinActor::ShowWinNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaWinActor.ShowWinNumber");

	AWuXiaWinActor_ShowWinNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaWinActor.OnWinNumberUpdate
// (Final, Native, Public)

void AWuXiaWinActor::OnWinNumberUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaWinActor.OnWinNumberUpdate");

	AWuXiaWinActor_OnWinNumberUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaWinActor.OnInteractive
// (Final, Native, Protected, BlueprintCallable)

void AWuXiaWinActor::OnInteractive()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaWinActor.OnInteractive");

	AWuXiaWinActor_OnInteractive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXBaseCharacter.SetPlayerUniqueId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Val                            (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXBaseCharacter::SetPlayerUniqueId(int Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXBaseCharacter.SetPlayerUniqueId");

	AWuXiaXBaseCharacter_SetPlayerUniqueId_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXBaseCharacter.SetPlayerType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EGameCharactType               Val                            (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXBaseCharacter::SetPlayerType(EGameCharactType Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXBaseCharacter.SetPlayerType");

	AWuXiaXBaseCharacter_SetPlayerType_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXBaseCharacter.OnPlayUNIDNotice
// (Final, Native, Private)

void AWuXiaXBaseCharacter::OnPlayUNIDNotice()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXBaseCharacter.OnPlayUNIDNotice");

	AWuXiaXBaseCharacter_OnPlayUNIDNotice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXBaseCharacter.OnPlayTypeNotice
// (Final, Native, Private)

void AWuXiaXBaseCharacter::OnPlayTypeNotice()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXBaseCharacter.OnPlayTypeNotice");

	AWuXiaXBaseCharacter_OnPlayTypeNotice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXBaseCharacter.GetPlayerUniqueId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AWuXiaXBaseCharacter::GetPlayerUniqueId()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXBaseCharacter.GetPlayerUniqueId");

	AWuXiaXBaseCharacter_GetPlayerUniqueId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXBaseCharacter.GetPlayerType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EGameCharactType               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGameCharactType AWuXiaXBaseCharacter::GetPlayerType()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXBaseCharacter.GetPlayerType");

	AWuXiaXBaseCharacter_GetPlayerType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXBaseCharacter.GetMiddleComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UComponentMiddle*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UComponentMiddle* AWuXiaXBaseCharacter::GetMiddleComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXBaseCharacter.GetMiddleComponent");

	AWuXiaXBaseCharacter_GetMiddleComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXBaseCharacter.GetGameComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EGameComponentType             Type                           (Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UActorComponent* AWuXiaXBaseCharacter::GetGameComponent(EGameComponentType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXBaseCharacter.GetGameComponent");

	AWuXiaXBaseCharacter_GetGameComponent_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXCharacter.TreasureOpenSuccess
// (Net, NetReliable, Native, Event, Public, NetClient)

void AWuXiaXCharacter::TreasureOpenSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.TreasureOpenSuccess");

	AWuXiaXCharacter_TreasureOpenSuccess_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.SwitchStealth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::SwitchStealth(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.SwitchStealth");

	AWuXiaXCharacter_SwitchStealth_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.SwitchSprinting
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXCharacter::SwitchSprinting()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.SwitchSprinting");

	AWuXiaXCharacter_SwitchSprinting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.SwitchSex
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXCharacter::SwitchSex()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.SwitchSex");

	AWuXiaXCharacter_SwitchSex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.SpawnAIPlayerOnServer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::SpawnAIPlayerOnServer(int Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.SpawnAIPlayerOnServer");

	AWuXiaXCharacter_SpawnAIPlayerOnServer_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.SkeletalMeshComponentCreate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPlayerLoadType                Type                           (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::SkeletalMeshComponentCreate(EPlayerLoadType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.SkeletalMeshComponentCreate");

	AWuXiaXCharacter_SkeletalMeshComponentCreate_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.ShowSwordEffect
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXCharacter::ShowSwordEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.ShowSwordEffect");

	AWuXiaXCharacter_ShowSwordEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.ShowLockTargetUI
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::ShowLockTargetUI(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.ShowLockTargetUI");

	AWuXiaXCharacter_ShowLockTargetUI_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.ShowAssassinationTipUI
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::ShowAssassinationTipUI(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.ShowAssassinationTipUI");

	AWuXiaXCharacter_ShowAssassinationTipUI_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.ShowAnimus
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::ShowAnimus(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.ShowAnimus");

	AWuXiaXCharacter_ShowAnimus_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.SetVoiceMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Mode                           (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::SetVoiceMode(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.SetVoiceMode");

	AWuXiaXCharacter_SetVoiceMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.SetKiller
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FDeadlyInfo             Target                         (ConstParm, Parm, OutParm, ReferenceParm)

void AWuXiaXCharacter::SetKiller(const struct FDeadlyInfo& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.SetKiller");

	AWuXiaXCharacter_SetKiller_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.SetInteractive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::SetInteractive(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.SetInteractive");

	AWuXiaXCharacter_SetInteractive_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.SetCollisonMoveEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::SetCollisonMoveEnable(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.SetCollisonMoveEnable");

	AWuXiaXCharacter_SetCollisonMoveEnable_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.SetCameraLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewLocation                    (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::SetCameraLocation(const struct FVector& NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.SetCameraLocation");

	AWuXiaXCharacter_SetCameraLocation_Params params;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.SetBlockState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::SetBlockState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.SetBlockState");

	AWuXiaXCharacter_SetBlockState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.SetBlackScreenState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::SetBlackScreenState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.SetBlackScreenState");

	AWuXiaXCharacter_SetBlackScreenState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.SetAlwaysTalk
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           isalways                       (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::SetAlwaysTalk(bool isalways)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.SetAlwaysTalk");

	AWuXiaXCharacter_SetAlwaysTalk_Params params;
	params.isalways = isalways;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.SetAimState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::SetAimState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.SetAimState");

	AWuXiaXCharacter_SetAimState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.Server_UpdateDamageCircle
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AWuXiaXCharacter::Server_UpdateDamageCircle()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.Server_UpdateDamageCircle");

	AWuXiaXCharacter_Server_UpdateDamageCircle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.Server_SwitchSex
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AWuXiaXCharacter::Server_SwitchSex()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.Server_SwitchSex");

	AWuXiaXCharacter_Server_SwitchSex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.Server_SetResurrectionInfo
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FResurrectionInfo       Info                           (ConstParm, Parm, ReferenceParm)

void AWuXiaXCharacter::Server_SetResurrectionInfo(const struct FResurrectionInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.Server_SetResurrectionInfo");

	AWuXiaXCharacter_Server_SetResurrectionInfo_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.Server_OpenParachute
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)

void AWuXiaXCharacter::Server_OpenParachute()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.Server_OpenParachute");

	AWuXiaXCharacter_Server_OpenParachute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.Server_LianTiao
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           is_in_lian_tiao                (Parm, ZeroConstructor, IsPlainOldData)
// int                            lian_tiao_index                (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::Server_LianTiao(bool is_in_lian_tiao, int lian_tiao_index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.Server_LianTiao");

	AWuXiaXCharacter_Server_LianTiao_Params params;
	params.is_in_lian_tiao = is_in_lian_tiao;
	params.lian_tiao_index = lian_tiao_index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.Server_JumPlane
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)

void AWuXiaXCharacter::Server_JumPlane()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.Server_JumPlane");

	AWuXiaXCharacter_Server_JumPlane_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.Server_ChangeVoiceIgnoreState
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           isbeignore                     (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::Server_ChangeVoiceIgnoreState(bool isbeignore)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.Server_ChangeVoiceIgnoreState");

	AWuXiaXCharacter_Server_ChangeVoiceIgnoreState_Params params;
	params.isbeignore = isbeignore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.SendBuffPointToHUD
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXCharacter::SendBuffPointToHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.SendBuffPointToHUD");

	AWuXiaXCharacter_SendBuffPointToHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.RunServerAI
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWuXiaXCharacter::RunServerAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.RunServerAI");

	AWuXiaXCharacter_RunServerAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.ReconnectUpdate
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AWuXiaXCharacter::ReconnectUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.ReconnectUpdate");

	AWuXiaXCharacter_ReconnectUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.PlayWeakChangeEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           isweak                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::PlayWeakChangeEffect(bool isweak)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.PlayWeakChangeEffect");

	AWuXiaXCharacter_PlayWeakChangeEffect_Params params;
	params.isweak = isweak;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.PlayerInitLocation
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AWuXiaXCharacter::PlayerInitLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.PlayerInitLocation");

	AWuXiaXCharacter_PlayerInitLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.Player_net_id
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Val                            (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::Player_net_id(int Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.Player_net_id");

	AWuXiaXCharacter_Player_net_id_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.PlayClientAttackEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Angle                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::PlayClientAttackEffect(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.PlayClientAttackEffect");

	AWuXiaXCharacter_PlayClientAttackEffect_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.PlayBlockEffect
// (Event, Public, BlueprintEvent)

void AWuXiaXCharacter::PlayBlockEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.PlayBlockEffect");

	AWuXiaXCharacter_PlayBlockEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.PlayBeAttackEffect
// (Event, Public, BlueprintEvent)

void AWuXiaXCharacter::PlayBeAttackEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.PlayBeAttackEffect");

	AWuXiaXCharacter_PlayBeAttackEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.PlayAttackEffect
// (Event, Public, BlueprintEvent)

void AWuXiaXCharacter::PlayAttackEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.PlayAttackEffect");

	AWuXiaXCharacter_PlayAttackEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.OnRepSkinColorIdSelf
// (Final, Native, Private)

void AWuXiaXCharacter::OnRepSkinColorIdSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.OnRepSkinColorIdSelf");

	AWuXiaXCharacter_OnRepSkinColorIdSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.OnRepSkinColorId
// (Final, Native, Private)

void AWuXiaXCharacter::OnRepSkinColorId()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.OnRepSkinColorId");

	AWuXiaXCharacter_OnRepSkinColorId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.OnRepSexTypeSelf
// (Final, Native, Private)

void AWuXiaXCharacter::OnRepSexTypeSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.OnRepSexTypeSelf");

	AWuXiaXCharacter_OnRepSexTypeSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.OnRepSexType
// (Final, Native, Private)

void AWuXiaXCharacter::OnRepSexType()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.OnRepSexType");

	AWuXiaXCharacter_OnRepSexType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.OnRepPlayerName
// (Final, Native, Private)

void AWuXiaXCharacter::OnRepPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.OnRepPlayerName");

	AWuXiaXCharacter_OnRepPlayerName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.OnRepHairIdSelf
// (Final, Native, Private)

void AWuXiaXCharacter::OnRepHairIdSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.OnRepHairIdSelf");

	AWuXiaXCharacter_OnRepHairIdSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.OnRepHairId
// (Final, Native, Private)

void AWuXiaXCharacter::OnRepHairId()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.OnRepHairId");

	AWuXiaXCharacter_OnRepHairId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.OnRepHairColorIdSelf
// (Final, Native, Private)

void AWuXiaXCharacter::OnRepHairColorIdSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.OnRepHairColorIdSelf");

	AWuXiaXCharacter_OnRepHairColorIdSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.OnRepHairColorId
// (Final, Native, Private)

void AWuXiaXCharacter::OnRepHairColorId()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.OnRepHairColorId");

	AWuXiaXCharacter_OnRepHairColorId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.OnRepFaceIdSelf
// (Final, Native, Private)

void AWuXiaXCharacter::OnRepFaceIdSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.OnRepFaceIdSelf");

	AWuXiaXCharacter_OnRepFaceIdSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.OnRepFaceId
// (Final, Native, Private)

void AWuXiaXCharacter::OnRepFaceId()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.OnRepFaceId");

	AWuXiaXCharacter_OnRepFaceId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.OnRepEquipSkinIdSelf
// (Final, Native, Private)

void AWuXiaXCharacter::OnRepEquipSkinIdSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.OnRepEquipSkinIdSelf");

	AWuXiaXCharacter_OnRepEquipSkinIdSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.OnRepEquipSkinId
// (Final, Native, Private)

void AWuXiaXCharacter::OnRepEquipSkinId()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.OnRepEquipSkinId");

	AWuXiaXCharacter_OnRepEquipSkinId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.OnRepEffect
// (Final, Native, Private)

void AWuXiaXCharacter::OnRepEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.OnRepEffect");

	AWuXiaXCharacter_OnRepEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.OnRepAnimusIndexSelf
// (Final, Native, Public)

void AWuXiaXCharacter::OnRepAnimusIndexSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.OnRepAnimusIndexSelf");

	AWuXiaXCharacter_OnRepAnimusIndexSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.OnRepAnimusIndex
// (Final, Native, Public)

void AWuXiaXCharacter::OnRepAnimusIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.OnRepAnimusIndex");

	AWuXiaXCharacter_OnRepAnimusIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.OnPlayNetNotice
// (Final, Native, Private)

void AWuXiaXCharacter::OnPlayNetNotice()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.OnPlayNetNotice");

	AWuXiaXCharacter_OnPlayNetNotice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.OnPlayerTargetSwitchOverlapEnd
// (Final, Native, Public)
// Parameters:
// class UPrimitiveComponent*     OverlappedComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::OnPlayerTargetSwitchOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.OnPlayerTargetSwitchOverlapEnd");

	AWuXiaXCharacter_OnPlayerTargetSwitchOverlapEnd_Params params;
	params.OverlappedComp = OverlappedComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.OnPlayerTargetSwitchOverlapBegin
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AWuXiaXCharacter::OnPlayerTargetSwitchOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.OnPlayerTargetSwitchOverlapBegin");

	AWuXiaXCharacter_OnPlayerTargetSwitchOverlapBegin_Params params;
	params.OverlappedComp = OverlappedComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.OnPlayerStateChange
// (Event, Public, BlueprintEvent)
// Parameters:
// EPlayerGameState               NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::OnPlayerStateChange(EPlayerGameState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.OnPlayerStateChange");

	AWuXiaXCharacter_OnPlayerStateChange_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.OnPlayerAroundOverlapEnd
// (Final, Native, Public)
// Parameters:
// class UPrimitiveComponent*     OverlappedComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::OnPlayerAroundOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.OnPlayerAroundOverlapEnd");

	AWuXiaXCharacter_OnPlayerAroundOverlapEnd_Params params;
	params.OverlappedComp = OverlappedComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.OnPlayerAroundOverlapBegin
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AWuXiaXCharacter::OnPlayerAroundOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.OnPlayerAroundOverlapBegin");

	AWuXiaXCharacter_OnPlayerAroundOverlapBegin_Params params;
	params.OverlappedComp = OverlappedComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.MoveRight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::MoveRight(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.MoveRight");

	AWuXiaXCharacter_MoveRight_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.MoveForward
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::MoveForward(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.MoveForward");

	AWuXiaXCharacter_MoveForward_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.MissileHitTarget
// (Net, NetReliable, Native, Event, Public, NetClient)

void AWuXiaXCharacter::MissileHitTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.MissileHitTarget");

	AWuXiaXCharacter_MissileHitTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.LoadComplete
// (Final, Native, Public)

void AWuXiaXCharacter::LoadComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.LoadComplete");

	AWuXiaXCharacter_LoadComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.LeaveCahnnel
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXCharacter::LeaveCahnnel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.LeaveCahnnel");

	AWuXiaXCharacter_LeaveCahnnel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.JoinChannel
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FString                 lpChannelName                  (Parm, ZeroConstructor)
// TArray<int>                    teams                          (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AWuXiaXCharacter::JoinChannel(const struct FString& lpChannelName, TArray<int> teams)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.JoinChannel");

	AWuXiaXCharacter_JoinChannel_Params params;
	params.lpChannelName = lpChannelName;
	params.teams = teams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.IsPressKeyAction
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   key_name                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           can_input                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWuXiaXCharacter::IsPressKeyAction(const struct FName& key_name, bool* can_input)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.IsPressKeyAction");

	AWuXiaXCharacter_IsPressKeyAction_Params params;
	params.key_name = key_name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (can_input != nullptr)
		*can_input = params.can_input;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXCharacter.IsLaunchingWithAIFlag
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWuXiaXCharacter::IsLaunchingWithAIFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.IsLaunchingWithAIFlag");

	AWuXiaXCharacter_IsLaunchingWithAIFlag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXCharacter.IsDeath
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWuXiaXCharacter::IsDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.IsDeath");

	AWuXiaXCharacter_IsDeath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXCharacter.Is_free_view_net
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWuXiaXCharacter::Is_free_view_net()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.Is_free_view_net");

	AWuXiaXCharacter_Is_free_view_net_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXCharacter.InteractiveUITips
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWuXiaXCharacter*        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWuXiaXCharacter::InteractiveUITips(class AWuXiaXCharacter* Player, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.InteractiveUITips");

	AWuXiaXCharacter_InteractiveUITips_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXCharacter.InteractiveButtonDown
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXCharacter::InteractiveButtonDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.InteractiveButtonDown");

	AWuXiaXCharacter_InteractiveButtonDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.InitBuffPoint
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<int>                    indexs                         (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// TArray<struct FBuffPointInfo>  Info                           (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AWuXiaXCharacter::InitBuffPoint(TArray<int> indexs, TArray<struct FBuffPointInfo> Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.InitBuffPoint");

	AWuXiaXCharacter_InitBuffPoint_Params params;
	params.indexs = indexs;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.HideSwordEffect
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXCharacter::HideSwordEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.HideSwordEffect");

	AWuXiaXCharacter_HideSwordEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.HideLockTargetUI
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWuXiaXCharacter::HideLockTargetUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.HideLockTargetUI");

	AWuXiaXCharacter_HideLockTargetUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.HideAssassinationTipUI
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWuXiaXCharacter::HideAssassinationTipUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.HideAssassinationTipUI");

	AWuXiaXCharacter_HideAssassinationTipUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.HasTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWuXiaXCharacter::HasTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.HasTarget");

	AWuXiaXCharacter_HasTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXCharacter.GetWeaponMeshCompoent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* AWuXiaXCharacter::GetWeaponMeshCompoent(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.GetWeaponMeshCompoent");

	AWuXiaXCharacter_GetWeaponMeshCompoent_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXCharacter.GetWeaponComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Key                            (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* AWuXiaXCharacter::GetWeaponComponent(int Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.GetWeaponComponent");

	AWuXiaXCharacter_GetWeaponComponent_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXCharacter.GetTargetRotator
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator AWuXiaXCharacter::GetTargetRotator()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.GetTargetRotator");

	AWuXiaXCharacter_GetTargetRotator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXCharacter.GetSkillsComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPlayerSkillsComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPlayerSkillsComponent* AWuXiaXCharacter::GetSkillsComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.GetSkillsComponent");

	AWuXiaXCharacter_GetSkillsComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXCharacter.GetNeedPressHabit
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Name                           (ConstParm, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWuXiaXCharacter::GetNeedPressHabit(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.GetNeedPressHabit");

	AWuXiaXCharacter_GetNeedPressHabit_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXCharacter.GetKiller
// (Final, Native, Public)
// Parameters:
// struct FDeadlyInfo             ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FDeadlyInfo AWuXiaXCharacter::GetKiller()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.GetKiller");

	AWuXiaXCharacter_GetKiller_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXCharacter.GetItemCtrlComp
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPlayerItemCtrlComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPlayerItemCtrlComponent* AWuXiaXCharacter::GetItemCtrlComp()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.GetItemCtrlComp");

	AWuXiaXCharacter_GetItemCtrlComp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXCharacter.GetInteractiveType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWuXiaXCharacter*        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// EInteractiveType               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EInteractiveType AWuXiaXCharacter::GetInteractiveType(class AWuXiaXCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.GetInteractiveType");

	AWuXiaXCharacter_GetInteractiveType_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXCharacter.GetHostIP
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AWuXiaXCharacter::GetHostIP()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.GetHostIP");

	AWuXiaXCharacter_GetHostIP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXCharacter.GetBodyMeshCompByType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EPlayerLoadType                Type                           (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* AWuXiaXCharacter::GetBodyMeshCompByType(EPlayerLoadType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.GetBodyMeshCompByType");

	AWuXiaXCharacter_GetBodyMeshCompByType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXCharacter.GetBagMeshComp
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UStaticMeshComponent*    ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UStaticMeshComponent* AWuXiaXCharacter::GetBagMeshComp()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.GetBagMeshComp");

	AWuXiaXCharacter_GetBagMeshComp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXCharacter.FreeViewTurnBack
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWuXiaXCharacter::FreeViewTurnBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.FreeViewTurnBack");

	AWuXiaXCharacter_FreeViewTurnBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.FreeViewStopTurnBack
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWuXiaXCharacter::FreeViewStopTurnBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.FreeViewStopTurnBack");

	AWuXiaXCharacter_FreeViewStopTurnBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.DestroyPlane
// (Net, NetReliable, Native, Event, Public, NetClient)

void AWuXiaXCharacter::DestroyPlane()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.DestroyPlane");

	AWuXiaXCharacter_DestroyPlane_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.CreatePlane
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// struct FVector                 beginlocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 EndLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        begintime                      (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::CreatePlane(const struct FVector& beginlocation, const struct FVector& EndLocation, int64_t begintime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.CreatePlane");

	AWuXiaXCharacter_CreatePlane_Params params;
	params.beginlocation = beginlocation;
	params.EndLocation = EndLocation;
	params.begintime = begintime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.Control_Jump
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXCharacter::Control_Jump()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.Control_Jump");

	AWuXiaXCharacter_Control_Jump_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.Control_Interactive
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXCharacter::Control_Interactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.Control_Interactive");

	AWuXiaXCharacter_Control_Interactive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.Control_ClearTarget
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXCharacter::Control_ClearTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.Control_ClearTarget");

	AWuXiaXCharacter_Control_ClearTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.Control_AutoSprinting
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXCharacter::Control_AutoSprinting()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.Control_AutoSprinting");

	AWuXiaXCharacter_Control_AutoSprinting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.Clinet_RemoveVoiceIgnorePlayer
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::Clinet_RemoveVoiceIgnorePlayer(int PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.Clinet_RemoveVoiceIgnorePlayer");

	AWuXiaXCharacter_Clinet_RemoveVoiceIgnorePlayer_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.Clinet_OffThePlane
// (Net, NetReliable, Native, Event, Public, NetClient)

void AWuXiaXCharacter::Clinet_OffThePlane()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.Clinet_OffThePlane");

	AWuXiaXCharacter_Clinet_OffThePlane_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.Clinet_AddVoiceIgnorePlayer
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::Clinet_AddVoiceIgnorePlayer(int PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.Clinet_AddVoiceIgnorePlayer");

	AWuXiaXCharacter_Clinet_AddVoiceIgnorePlayer_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.Client_UpdateDyingState
// (Net, NetReliable, Native, Event, Public, NetClient)

void AWuXiaXCharacter::Client_UpdateDyingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.Client_UpdateDyingState");

	AWuXiaXCharacter_Client_UpdateDyingState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.Client_UpdateDamageCircle
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        begintime                      (Parm, ZeroConstructor, IsPlainOldData)
// EDamageCircleState             CurrentState                   (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        waittingtime                   (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        shringkingtime                 (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        currentradius                  (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        nextradius                     (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        clocationX                     (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        clocationY                     (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        clocationZ                     (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        nlocationX                     (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        nlocationY                     (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        nlocationZ                     (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::Client_UpdateDamageCircle(int64_t begintime, EDamageCircleState CurrentState, int64_t waittingtime, int64_t shringkingtime, int64_t currentradius, int64_t nextradius, int64_t clocationX, int64_t clocationY, int64_t clocationZ, int64_t nlocationX, int64_t nlocationY, int64_t nlocationZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.Client_UpdateDamageCircle");

	AWuXiaXCharacter_Client_UpdateDamageCircle_Params params;
	params.begintime = begintime;
	params.CurrentState = CurrentState;
	params.waittingtime = waittingtime;
	params.shringkingtime = shringkingtime;
	params.currentradius = currentradius;
	params.nextradius = nextradius;
	params.clocationX = clocationX;
	params.clocationY = clocationY;
	params.clocationZ = clocationZ;
	params.nlocationX = nlocationX;
	params.nlocationY = nlocationY;
	params.nlocationZ = nlocationZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.Client_SortInfo
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// int                            rank                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            kill                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            reward                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            rank_point                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            kill_point                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            damage_point                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            deadly_item_id                 (Parm, ZeroConstructor, IsPlainOldData)
// ECauseDyingType                deadly_reason                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            all_team_number                (Parm, ZeroConstructor, IsPlainOldData)
// EGameSquadMode                 GameMode                       (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::Client_SortInfo(int rank, int kill, int reward, int rank_point, int kill_point, int damage_point, int deadly_item_id, ECauseDyingType deadly_reason, int all_team_number, EGameSquadMode GameMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.Client_SortInfo");

	AWuXiaXCharacter_Client_SortInfo_Params params;
	params.rank = rank;
	params.kill = kill;
	params.reward = reward;
	params.rank_point = rank_point;
	params.kill_point = kill_point;
	params.damage_point = damage_point;
	params.deadly_item_id = deadly_item_id;
	params.deadly_reason = deadly_reason;
	params.all_team_number = all_team_number;
	params.GameMode = GameMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.Client_SetResurrectionInfo
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FResurrectionInfo       Info                           (ConstParm, Parm, ReferenceParm)

void AWuXiaXCharacter::Client_SetResurrectionInfo(const struct FResurrectionInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.Client_SetResurrectionInfo");

	AWuXiaXCharacter_Client_SetResurrectionInfo_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.Client_Record
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// int64_t                        kill_time                      (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::Client_Record(int64_t kill_time)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.Client_Record");

	AWuXiaXCharacter_Client_Record_Params params;
	params.kill_time = kill_time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.Client_ReconnectSpawnParadrop
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<struct FVector>         Locations                      (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Ids                            (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AWuXiaXCharacter::Client_ReconnectSpawnParadrop(TArray<struct FVector> Locations, TArray<int> Ids)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.Client_ReconnectSpawnParadrop");

	AWuXiaXCharacter_Client_ReconnectSpawnParadrop_Params params;
	params.Locations = Locations;
	params.Ids = Ids;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.Client_ClearTarget
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)

void AWuXiaXCharacter::Client_ClearTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.Client_ClearTarget");

	AWuXiaXCharacter_Client_ClearTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.Client_AddLoadMap
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// bool                           isloadmap                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           Maps                           (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AWuXiaXCharacter::Client_AddLoadMap(bool isloadmap, TArray<struct FName> Maps)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.Client_AddLoadMap");

	AWuXiaXCharacter_Client_AddLoadMap_Params params;
	params.isloadmap = isloadmap;
	params.Maps = Maps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.CheckLockPointDeath
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Enemy                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::CheckLockPointDeath(class AActor* Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.CheckLockPointDeath");

	AWuXiaXCharacter_CheckLockPointDeath_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.CharDestroy
// (Final, Native, Public)

void AWuXiaXCharacter::CharDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.CharDestroy");

	AWuXiaXCharacter_CharDestroy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.ChangeEquip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EBagType                       bag_type                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::ChangeEquip(EBagType bag_type, int index, int item_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.ChangeEquip");

	AWuXiaXCharacter_ChangeEquip_Params params;
	params.bag_type = bag_type;
	params.index = index;
	params.item_id = item_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.ChangeBuffState
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            buff_index                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FBuffPointInfo          buff_state                     (Parm)

void AWuXiaXCharacter::ChangeBuffState(int buff_index, const struct FBuffPointInfo& buff_state)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.ChangeBuffState");

	AWuXiaXCharacter_ChangeBuffState_Params params;
	params.buff_index = buff_index;
	params.buff_state = buff_state;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.CanInteractive
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWuXiaXCharacter*        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// ETriggerInteractiveType        Trigger                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWuXiaXCharacter::CanInteractive(class AWuXiaXCharacter* Player, ETriggerInteractiveType Trigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.CanInteractive");

	AWuXiaXCharacter_CanInteractive_Params params;
	params.Player = Player;
	params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXCharacter.CanInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPlayerInputType               input_type                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWuXiaXCharacter::CanInput(EPlayerInputType input_type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.CanInput");

	AWuXiaXCharacter_CanInput_Params params;
	params.input_type = input_type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXCharacter.Bom_Montage_Play
// (Event, Public, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMesh                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAnimMontage*            MontageToPlay                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          delay_time                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   section_name                   (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::Bom_Montage_Play(class USkeletalMeshComponent* SkeletalMesh, class UAnimMontage* MontageToPlay, float delay_time, const struct FName& section_name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.Bom_Montage_Play");

	AWuXiaXCharacter_Bom_Montage_Play_Params params;
	params.SkeletalMesh = SkeletalMesh;
	params.MontageToPlay = MontageToPlay;
	params.delay_time = delay_time;
	params.section_name = section_name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.Anim_EndParachuteGliding
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWuXiaXCharacter::Anim_EndParachuteGliding()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.Anim_EndParachuteGliding");

	AWuXiaXCharacter_Anim_EndParachuteGliding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.Anim_EndEffect
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            effecttype                     (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::Anim_EndEffect(int effecttype)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.Anim_EndEffect");

	AWuXiaXCharacter_Anim_EndEffect_Params params;
	params.effecttype = effecttype;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.Anim_BeginParachuteGliding
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWuXiaXCharacter::Anim_BeginParachuteGliding()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.Anim_BeginParachuteGliding");

	AWuXiaXCharacter_Anim_BeginParachuteGliding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.Anim_BeginParachueJump
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWuXiaXCharacter::Anim_BeginParachueJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.Anim_BeginParachueJump");

	AWuXiaXCharacter_Anim_BeginParachueJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.Anim_BeginEffect
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            effecttype                     (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::Anim_BeginEffect(int effecttype)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.Anim_BeginEffect");

	AWuXiaXCharacter_Anim_BeginEffect_Params params;
	params.effecttype = effecttype;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.AI_MoveTargetCharacter
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Target                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          nearby                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::AI_MoveTargetCharacter(int Target, float nearby)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.AI_MoveTargetCharacter");

	AWuXiaXCharacter_AI_MoveTargetCharacter_Params params;
	params.Target = Target;
	params.nearby = nearby;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.AI_MoveCharacter
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 posc                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          nearby                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::AI_MoveCharacter(const struct FVector& posc, float nearby)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.AI_MoveCharacter");

	AWuXiaXCharacter_AI_MoveCharacter_Params params;
	params.posc = posc;
	params.nearby = nearby;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.AI_LookAt
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 posc                           (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::AI_LookAt(const struct FVector& posc)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.AI_LookAt");

	AWuXiaXCharacter_AI_LookAt_Params params;
	params.posc = posc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.AI_GetAllHorse
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         posc                           (Parm, OutParm, ZeroConstructor)

void AWuXiaXCharacter::AI_GetAllHorse(TArray<struct FVector>* posc)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.AI_GetAllHorse");

	AWuXiaXCharacter_AI_GetAllHorse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (posc != nullptr)
		*posc = params.posc;
}


// Function WuXiaX.WuXiaXCharacter.AI_CancelMove
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWuXiaXCharacter::AI_CancelMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.AI_CancelMove");

	AWuXiaXCharacter_AI_CancelMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXCharacter.AddSkin
// (Net, NetReliable, Native, Event, Protected, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// int                            skin_id                        (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXCharacter::AddSkin(int skin_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXCharacter.AddSkin");

	AWuXiaXCharacter_AddSkin_Params params;
	params.skin_id = skin_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuxiaXCharBaseInterface.PlayerInteractiveComponent
// (Native, Public)
// Parameters:
// class UPlayerInteractiveComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPlayerInteractiveComponent* UWuxiaXCharBaseInterface::PlayerInteractiveComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuxiaXCharBaseInterface.PlayerInteractiveComponent");

	UWuxiaXCharBaseInterface_PlayerInteractiveComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuxiaXCharBaseInterface.Player_broadcast
// (Native, Public)
// Parameters:
// class UPlayerBroadcastComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPlayerBroadcastComponent* UWuxiaXCharBaseInterface::Player_broadcast()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuxiaXCharBaseInterface.Player_broadcast");

	UWuxiaXCharBaseInterface_Player_broadcast_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXHUD.ZeroTextState
// (Final, Native, Public)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::ZeroTextState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.ZeroTextState");

	AWuXiaXHUD_ZeroTextState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.Vertical
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsDown                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::Vertical(bool State, bool IsDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.Vertical");

	AWuXiaXHUD_Vertical_Params params;
	params.State = State;
	params.IsDown = IsDown;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UseWidget
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXHUD::UseWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UseWidget");

	AWuXiaXHUD_UseWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UseItemHotKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::UseItemHotKey(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UseItemHotKey");

	AWuXiaXHUD_UseItemHotKey_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UpdateWeaponStateEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            weaponindex                    (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              effecticon                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::UpdateWeaponStateEffect(int weaponindex, class UTexture2D* effecticon, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UpdateWeaponStateEffect");

	AWuXiaXHUD_UpdateWeaponStateEffect_Params params;
	params.weaponindex = weaponindex;
	params.effecticon = effecticon;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UpdateTeamPointInfo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::UpdateTeamPointInfo(int red, int blue, int green)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UpdateTeamPointInfo");

	AWuXiaXHUD_UpdateTeamPointInfo_Params params;
	params.red = red;
	params.blue = blue;
	params.green = green;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UpdateTeamPlayerState
// (Final, Native, Public)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// ETeamPlayerState               new_state                      (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::UpdateTeamPlayerState(int PlayerID, ETeamPlayerState new_state)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UpdateTeamPlayerState");

	AWuXiaXHUD_UpdateTeamPlayerState_Params params;
	params.PlayerID = PlayerID;
	params.new_state = new_state;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UpdateTeamPlayerHPPercent
// (Final, Native, Public)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::UpdateTeamPlayerHPPercent(int PlayerID, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UpdateTeamPlayerHPPercent");

	AWuXiaXHUD_UpdateTeamPlayerHPPercent_Params params;
	params.PlayerID = PlayerID;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UpdateTeamPlayerDyingHPPercent
// (Final, Native, Public)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::UpdateTeamPlayerDyingHPPercent(int PlayerID, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UpdateTeamPlayerDyingHPPercent");

	AWuXiaXHUD_UpdateTeamPlayerDyingHPPercent_Params params;
	params.PlayerID = PlayerID;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UpdateSortInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            rank                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            kill                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            reward                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            rank_point                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            kill_point                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            damage_point                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            all_team_number                (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::UpdateSortInfo(int rank, int kill, int reward, int rank_point, int kill_point, int damage_point, int all_team_number)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UpdateSortInfo");

	AWuXiaXHUD_UpdateSortInfo_Params params;
	params.rank = rank;
	params.kill = kill;
	params.reward = reward;
	params.rank_point = rank_point;
	params.kill_point = kill_point;
	params.damage_point = damage_point;
	params.all_team_number = all_team_number;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UpdateSkillsGCD
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          cdtime                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::UpdateSkillsGCD(float cdtime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UpdateSkillsGCD");

	AWuXiaXHUD_UpdateSkillsGCD_Params params;
	params.cdtime = cdtime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UpdateSkillHotKeyMaxCD
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          skillcd                        (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::UpdateSkillHotKeyMaxCD(int index, float skillcd)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UpdateSkillHotKeyMaxCD");

	AWuXiaXHUD_UpdateSkillHotKeyMaxCD_Params params;
	params.index = index;
	params.skillcd = skillcd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UpdateSkillHotKeyCurrentCD
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            skill_id                       (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::UpdateSkillHotKeyCurrentCD(int skill_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UpdateSkillHotKeyCurrentCD");

	AWuXiaXHUD_UpdateSkillHotKeyCurrentCD_Params params;
	params.skill_id = skill_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UpdateSatiety
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          satietyvalue                   (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::UpdateSatiety(float satietyvalue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UpdateSatiety");

	AWuXiaXHUD_UpdateSatiety_Params params;
	params.satietyvalue = satietyvalue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UpdatePlayerState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPlayerGameState               new_state                      (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::UpdatePlayerState(EPlayerGameState new_state)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UpdatePlayerState");

	AWuXiaXHUD_UpdatePlayerState_Params params;
	params.new_state = new_state;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UpdatePlayerRotator
// (Final, Native, Public)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::UpdatePlayerRotator(int PlayerID, float Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UpdatePlayerRotator");

	AWuXiaXHUD_UpdatePlayerRotator_Params params;
	params.PlayerID = PlayerID;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UpdatePlayerMark3DLocation
// (Final, Native, Public, HasDefaults)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::UpdatePlayerMark3DLocation(int PlayerID, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UpdatePlayerMark3DLocation");

	AWuXiaXHUD_UpdatePlayerMark3DLocation_Params params;
	params.PlayerID = PlayerID;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UpdatePlayerLocation
// (Final, Native, Public, HasDefaults)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::UpdatePlayerLocation(int PlayerID, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UpdatePlayerLocation");

	AWuXiaXHUD_UpdatePlayerLocation_Params params;
	params.PlayerID = PlayerID;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UpdateOxygen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          oxygen                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::UpdateOxygen(float oxygen)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UpdateOxygen");

	AWuXiaXHUD_UpdateOxygen_Params params;
	params.oxygen = oxygen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UpdateMp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          currentMP                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          currentmaxMP                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          maxMP                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::UpdateMp(float currentMP, float currentmaxMP, float maxMP)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UpdateMp");

	AWuXiaXHUD_UpdateMp_Params params;
	params.currentMP = currentMP;
	params.currentmaxMP = currentmaxMP;
	params.maxMP = maxMP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UpdateMoisture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          moisture                       (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::UpdateMoisture(float moisture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UpdateMoisture");

	AWuXiaXHUD_UpdateMoisture_Params params;
	params.moisture = moisture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UpdateLiveData
// (Native, Public)
// Parameters:
// int                            LIVE                           (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::UpdateLiveData(int LIVE)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UpdateLiveData");

	AWuXiaXHUD_UpdateLiveData_Params params;
	params.LIVE = LIVE;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UpdateKillData
// (Native, Public)
// Parameters:
// int                            allkill                        (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::UpdateKillData(int allkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UpdateKillData");

	AWuXiaXHUD_UpdateKillData_Params params;
	params.allkill = allkill;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UpdateItemNumber
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Number                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::UpdateItemNumber(int index, int Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UpdateItemNumber");

	AWuXiaXHUD_UpdateItemNumber_Params params;
	params.index = index;
	params.Number = Number;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UpdateItemHotKeyNumbers
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXHUD::UpdateItemHotKeyNumbers()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UpdateItemHotKeyNumbers");

	AWuXiaXHUD_UpdateItemHotKeyNumbers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UpdateInjury
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          injury                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::UpdateInjury(float injury)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UpdateInjury");

	AWuXiaXHUD_UpdateInjury_Params params;
	params.injury = injury;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UpdateHorseSpeed
// (Final, Native, Public)
// Parameters:
// float                          current_speed                  (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::UpdateHorseSpeed(float current_speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UpdateHorseSpeed");

	AWuXiaXHUD_UpdateHorseSpeed_Params params;
	params.current_speed = current_speed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UpdateHorsePower
// (Final, Native, Public)
// Parameters:
// float                          current_power                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          max_power                      (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::UpdateHorsePower(float current_power, float max_power)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UpdateHorsePower");

	AWuXiaXHUD_UpdateHorsePower_Params params;
	params.current_power = current_power;
	params.max_power = max_power;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UpdateFightHp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          currentHP                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          maxHP                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::UpdateFightHp(float currentHP, float maxHP)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UpdateFightHp");

	AWuXiaXHUD_UpdateFightHp_Params params;
	params.currentHP = currentHP;
	params.maxHP = maxHP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UpdateDyingHp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          currentHP                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          maxHP                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::UpdateDyingHp(float currentHP, float maxHP)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UpdateDyingHp");

	AWuXiaXHUD_UpdateDyingHp_Params params;
	params.currentHP = currentHP;
	params.maxHP = maxHP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UpdateDrugValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          drugvalue                      (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::UpdateDrugValue(float drugvalue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UpdateDrugValue");

	AWuXiaXHUD_UpdateDrugValue_Params params;
	params.drugvalue = drugvalue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UpdateDrug
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          drugvalue                      (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::UpdateDrug(float drugvalue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UpdateDrug");

	AWuXiaXHUD_UpdateDrug_Params params;
	params.drugvalue = drugvalue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UpdateCompass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Angle                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::UpdateCompass(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UpdateCompass");

	AWuXiaXHUD_UpdateCompass_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.UnBindItemUIEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWuXiaXHUD::UnBindItemUIEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.UnBindItemUIEvent");

	AWuXiaXHUD_UnBindItemUIEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.TryShowInvntoryWidget
// (Native, Public)

void AWuXiaXHUD::TryShowInvntoryWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.TryShowInvntoryWidget");

	AWuXiaXHUD_TryShowInvntoryWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SwitchUserSettingOB
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXHUD::SwitchUserSettingOB()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SwitchUserSettingOB");

	AWuXiaXHUD_SwitchUserSettingOB_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SwitchUserSetting
// (Native, Public, BlueprintCallable)

void AWuXiaXHUD::SwitchUserSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SwitchUserSetting");

	AWuXiaXHUD_SwitchUserSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SwitchUOBStatisticsWidgetUI
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FOBStasticsInfo> result                         (Parm, OutParm, ZeroConstructor)

void AWuXiaXHUD::SwitchUOBStatisticsWidgetUI(TArray<struct FOBStasticsInfo>* result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SwitchUOBStatisticsWidgetUI");

	AWuXiaXHUD_SwitchUOBStatisticsWidgetUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (result != nullptr)
		*result = params.result;
}


// Function WuXiaX.WuXiaXHUD.SwitchToNextWidget
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXHUD::SwitchToNextWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SwitchToNextWidget");

	AWuXiaXHUD_SwitchToNextWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SwitchStastics
// (Native, Public, BlueprintCallable)

void AWuXiaXHUD::SwitchStastics()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SwitchStastics");

	AWuXiaXHUD_SwitchStastics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SwitchSkill
// (Native, Public, BlueprintCallable)

void AWuXiaXHUD::SwitchSkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SwitchSkill");

	AWuXiaXHUD_SwitchSkill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SwitchOBTargetViewUI
// (Native, Public, BlueprintCallable)

void AWuXiaXHUD::SwitchOBTargetViewUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SwitchOBTargetViewUI");

	AWuXiaXHUD_SwitchOBTargetViewUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SwitchOBOverviewUI
// (Native, Public, BlueprintCallable)

void AWuXiaXHUD::SwitchOBOverviewUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SwitchOBOverviewUI");

	AWuXiaXHUD_SwitchOBOverviewUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SwitchOBMap
// (Native, Public, BlueprintCallable)

void AWuXiaXHUD::SwitchOBMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SwitchOBMap");

	AWuXiaXHUD_SwitchOBMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SwitchMap
// (Native, Public, BlueprintCallable)

void AWuXiaXHUD::SwitchMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SwitchMap");

	AWuXiaXHUD_SwitchMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SwitchItemBag
// (Native, Public, BlueprintCallable)

void AWuXiaXHUD::SwitchItemBag()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SwitchItemBag");

	AWuXiaXHUD_SwitchItemBag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SortSoundActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class ACheckSoundActor*> Actors                         (Parm, ZeroConstructor)

void AWuXiaXHUD::SortSoundActor(TArray<class ACheckSoundActor*> Actors)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SortSoundActor");

	AWuXiaXHUD_SortSoundActor_Params params;
	params.Actors = Actors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.ShowWarning
// (Final, Native, Public)
// Parameters:
// struct FString                 Text                           (Parm, ZeroConstructor)

void AWuXiaXHUD::ShowWarning(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.ShowWarning");

	AWuXiaXHUD_ShowWarning_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.ShowWaitResurrection
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::ShowWaitResurrection(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.ShowWaitResurrection");

	AWuXiaXHUD_ShowWaitResurrection_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.ShowSkillDetail
// (Final, Native, Public)
// Parameters:
// int                            skillid                        (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::ShowSkillDetail(int skillid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.ShowSkillDetail");

	AWuXiaXHUD_ShowSkillDetail_Params params;
	params.skillid = skillid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.ShowParachuteUI
// (Final, Native, Public)

void AWuXiaXHUD::ShowParachuteUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.ShowParachuteUI");

	AWuXiaXHUD_ShowParachuteUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.ShowOxygen
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXHUD::ShowOxygen()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.ShowOxygen");

	AWuXiaXHUD_ShowOxygen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.ShowOpenParachuteTips
// (Final, Native, Public)

void AWuXiaXHUD::ShowOpenParachuteTips()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.ShowOpenParachuteTips");

	AWuXiaXHUD_ShowOpenParachuteTips_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.ShowMainInterfaceUI
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWuXiaXHUD::ShowMainInterfaceUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.ShowMainInterfaceUI");

	AWuXiaXHUD_ShowMainInterfaceUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.ShowLowHPEffect
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWuXiaXHUD::ShowLowHPEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.ShowLowHPEffect");

	AWuXiaXHUD_ShowLowHPEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.ShowJumpPlanTips
// (Final, Native, Public)

void AWuXiaXHUD::ShowJumpPlanTips()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.ShowJumpPlanTips");

	AWuXiaXHUD_ShowJumpPlanTips_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.ShowJueKongUI
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            maxnumber                      (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::ShowJueKongUI(int maxnumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.ShowJueKongUI");

	AWuXiaXHUD_ShowJueKongUI_Params params;
	params.maxnumber = maxnumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.ShowJueKongInMap
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::ShowJueKongInMap(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.ShowJueKongInMap");

	AWuXiaXHUD_ShowJueKongInMap_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.ShowItemDetail
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUIItemInfo             UIItemInfo                     (ConstParm, Parm, OutParm, ReferenceParm)

void AWuXiaXHUD::ShowItemDetail(const struct FUIItemInfo& UIItemInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.ShowItemDetail");

	AWuXiaXHUD_ShowItemDetail_Params params;
	params.UIItemInfo = UIItemInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.ShowInteractive
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void AWuXiaXHUD::ShowInteractive(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.ShowInteractive");

	AWuXiaXHUD_ShowInteractive_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.ShowHallWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 player_name                    (Parm, ZeroConstructor)

void AWuXiaXHUD::ShowHallWidget(const struct FString& player_name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.ShowHallWidget");

	AWuXiaXHUD_ShowHallWidget_Params params;
	params.player_name = player_name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.ShowCrossHair
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXHUD::ShowCrossHair()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.ShowCrossHair");

	AWuXiaXHUD_ShowCrossHair_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.ShowCheckSoundLocation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    Ids                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         Locations                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWuXiaXHUD::ShowCheckSoundLocation(TArray<int> Ids, TArray<struct FVector> Locations)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.ShowCheckSoundLocation");

	AWuXiaXHUD_ShowCheckSoundLocation_Params params;
	params.Ids = Ids;
	params.Locations = Locations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetZeroTimer
// (Native, Public)
// Parameters:
// int                            Timer                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::SetZeroTimer(int Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetZeroTimer");

	AWuXiaXHUD_SetZeroTimer_Params params;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetWeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            maxweight                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            Weight                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::SetWeight(int maxweight, int Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetWeight");

	AWuXiaXHUD_SetWeight_Params params;
	params.maxweight = maxweight;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetWeaponState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            weaponindex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              effecticon                     (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              weaponicon                     (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::SetWeaponState(int weaponindex, int Value, class UTexture2D* effecticon, class UTexture2D* weaponicon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetWeaponState");

	AWuXiaXHUD_SetWeaponState_Params params;
	params.weaponindex = weaponindex;
	params.Value = Value;
	params.effecticon = effecticon;
	params.weaponicon = weaponicon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetTeamPlayerShowMode
// (Final, Native, Public)
// Parameters:
// int                            teammode                       (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::SetTeamPlayerShowMode(int teammode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetTeamPlayerShowMode");

	AWuXiaXHUD_SetTeamPlayerShowMode_Params params;
	params.teammode = teammode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetStatisticsItem
// (Final, Native, Public)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 item_name                      (Parm, ZeroConstructor)

void AWuXiaXHUD::SetStatisticsItem(class UTexture2D* Texture, int Level, const struct FString& item_name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetStatisticsItem");

	AWuXiaXHUD_SetStatisticsItem_Params params;
	params.Texture = Texture;
	params.Level = Level;
	params.item_name = item_name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetSplitItemButton
// (Final, Native, Public)
// Parameters:
// bool                           isbottondown                   (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::SetSplitItemButton(bool isbottondown)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetSplitItemButton");

	AWuXiaXHUD_SetSplitItemButton_Params params;
	params.isbottondown = isbottondown;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetSkillHotKey
// (Final, Native, Public)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            skill_id                       (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          skillcd                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canuse                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::SetSkillHotKey(int index, int skill_id, class UTexture2D* icon, float skillcd, bool canuse)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetSkillHotKey");

	AWuXiaXHUD_SetSkillHotKey_Params params;
	params.index = index;
	params.skill_id = skill_id;
	params.icon = icon;
	params.skillcd = skillcd;
	params.canuse = canuse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetSkillEquipState
// (Final, Native, Public)
// Parameters:
// TArray<int>                    skills                         (Parm, ZeroConstructor)

void AWuXiaXHUD::SetSkillEquipState(TArray<int> skills)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetSkillEquipState");

	AWuXiaXHUD_SetSkillEquipState_Params params;
	params.skills = skills;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetSkillBookEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            itemindex                      (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::SetSkillBookEnable(int itemindex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetSkillBookEnable");

	AWuXiaXHUD_SetSkillBookEnable_Params params;
	params.itemindex = itemindex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetSkillBook
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            itemindex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            skillid                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            weapontype                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 Description                    (Parm, ZeroConstructor)
// class UTexture2D*              icon                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isenable                       (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::SetSkillBook(int itemindex, int skillid, int weapontype, int Level, const struct FString& Name, const struct FString& Description, class UTexture2D* icon, bool isenable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetSkillBook");

	AWuXiaXHUD_SetSkillBook_Params params;
	params.itemindex = itemindex;
	params.skillid = skillid;
	params.weapontype = weapontype;
	params.Level = Level;
	params.Name = Name;
	params.Description = Description;
	params.icon = icon;
	params.isenable = isenable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetSkill
// (Final, Native, Public)
// Parameters:
// ESkillEquipType                slottype                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            slotindex                      (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        skillid                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           iscurrentweapon                (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::SetSkill(ESkillEquipType slottype, int slotindex, int64_t skillid, bool IsValid, bool iscurrentweapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetSkill");

	AWuXiaXHUD_SetSkill_Params params;
	params.slottype = slottype;
	params.slotindex = slotindex;
	params.skillid = skillid;
	params.IsValid = IsValid;
	params.iscurrentweapon = iscurrentweapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetSelfContinuousKillNumber
// (Native, Public)
// Parameters:
// int                            Number                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::SetSelfContinuousKillNumber(int Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetSelfContinuousKillNumber");

	AWuXiaXHUD_SetSelfContinuousKillNumber_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetResurrectionInfo
// (Native, Public, HasOutParms)
// Parameters:
// struct FResurrectionInfo       Info                           (ConstParm, Parm, OutParm, ReferenceParm)

void AWuXiaXHUD::SetResurrectionInfo(const struct FResurrectionInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetResurrectionInfo");

	AWuXiaXHUD_SetResurrectionInfo_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetResourceInfo
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::SetResourceInfo(const struct FVector& Location, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetResourceInfo");

	AWuXiaXHUD_SetResourceInfo_Params params;
	params.Location = Location;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetPVPGameTime
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::SetPVPGameTime(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetPVPGameTime");

	AWuXiaXHUD_SetPVPGameTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetPlayerStasticsTeamInfo
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FStasticsInfo>   reds                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FStasticsInfo>   greens                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FStasticsInfo>   blues                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWuXiaXHUD::SetPlayerStasticsTeamInfo(TArray<struct FStasticsInfo> reds, TArray<struct FStasticsInfo> greens, TArray<struct FStasticsInfo> blues)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetPlayerStasticsTeamInfo");

	AWuXiaXHUD_SetPlayerStasticsTeamInfo_Params params;
	params.reds = reds;
	params.greens = greens;
	params.blues = blues;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetPlayerName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)

void AWuXiaXHUD::SetPlayerName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetPlayerName");

	AWuXiaXHUD_SetPlayerName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetPlayerAssist
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Number                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::SetPlayerAssist(int PlayerID, int Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetPlayerAssist");

	AWuXiaXHUD_SetPlayerAssist_Params params;
	params.PlayerID = PlayerID;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetOxygenWidgetState
// (Final, Native, Public)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::SetOxygenWidgetState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetOxygenWidgetState");

	AWuXiaXHUD_SetOxygenWidgetState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetMainInterfaceState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::SetMainInterfaceState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetMainInterfaceState");

	AWuXiaXHUD_SetMainInterfaceState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetMainGameWidgetState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::SetMainGameWidgetState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetMainGameWidgetState");

	AWuXiaXHUD_SetMainGameWidgetState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetLoadingUIState
// (Final, Native, Public)
// Parameters:
// float                          percent                        (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::SetLoadingUIState(float percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetLoadingUIState");

	AWuXiaXHUD_SetLoadingUIState_Params params;
	params.percent = percent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetKeepActionTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          current_time                   (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::SetKeepActionTime(float current_time)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetKeepActionTime");

	AWuXiaXHUD_SetKeepActionTime_Params params;
	params.current_time = current_time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetJueKongWaitTime
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            waittime                       (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::SetJueKongWaitTime(int waittime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetJueKongWaitTime");

	AWuXiaXHUD_SetJueKongWaitTime_Params params;
	params.waittime = waittime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetJueKongCanWinNumber
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            Number                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::SetJueKongCanWinNumber(int Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetJueKongCanWinNumber");

	AWuXiaXHUD_SetJueKongCanWinNumber_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetItemHotKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Number                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::SetItemHotKey(int index, class UTexture2D* icon, int Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetItemHotKey");

	AWuXiaXHUD_SetItemHotKey_Params params;
	params.index = index;
	params.icon = icon;
	params.Number = Number;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EBagType                       bagtype                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// int                            Number                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            itemtype                       (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              dragicon                       (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::SetItem(EBagType bagtype, int index, int Level, const struct FString& Name, int Number, int itemtype, class UTexture2D* icon, class UTexture2D* dragicon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetItem");

	AWuXiaXHUD_SetItem_Params params;
	params.bagtype = bagtype;
	params.index = index;
	params.Level = Level;
	params.Name = Name;
	params.Number = Number;
	params.itemtype = itemtype;
	params.icon = icon;
	params.dragicon = dragicon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetHorseState
// (Final, Native, Public)
// Parameters:
// bool                           NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::SetHorseState(bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetHorseState");

	AWuXiaXHUD_SetHorseState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetDurableValue
// (Final, Native, Public)
// Parameters:
// EBagType                       bag_type                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            armor                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::SetDurableValue(EBagType bag_type, int index, int armor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetDurableValue");

	AWuXiaXHUD_SetDurableValue_Params params;
	params.bag_type = bag_type;
	params.index = index;
	params.armor = armor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetDragItemInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            itemnumber                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            pickid                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::SetDragItemInfo(int itemnumber, int pickid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetDragItemInfo");

	AWuXiaXHUD_SetDragItemInfo_Params params;
	params.itemnumber = itemnumber;
	params.pickid = pickid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetBuffInfo
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<int, struct FBuffPointInfo> buff_info                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWuXiaXHUD::SetBuffInfo(TMap<int, struct FBuffPointInfo> buff_info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetBuffInfo");

	AWuXiaXHUD_SetBuffInfo_Params params;
	params.buff_info = buff_info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.SetBuff
// (Final, Native, Public)
// Parameters:
// int64_t                        buffID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            numberoflayer                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::SetBuff(int64_t buffID, int numberoflayer, float Time, class UTexture2D* icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.SetBuff");

	AWuXiaXHUD_SetBuff_Params params;
	params.buffID = buffID;
	params.numberoflayer = numberoflayer;
	params.Time = Time;
	params.icon = icon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.ResourcesPointTeamChange
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resourcesindex                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::ResourcesPointTeamChange(int resourcesindex, int TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.ResourcesPointTeamChange");

	AWuXiaXHUD_ResourcesPointTeamChange_Params params;
	params.resourcesindex = resourcesindex;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.RemoveWeaponState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            weaponindex                    (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::RemoveWeaponState(int weaponindex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.RemoveWeaponState");

	AWuXiaXHUD_RemoveWeaponState_Params params;
	params.weaponindex = weaponindex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.RemoveSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::RemoveSound(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.RemoveSound");

	AWuXiaXHUD_RemoveSound_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.RemoveSkillBook
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            itemindex                      (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::RemoveSkillBook(int itemindex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.RemoveSkillBook");

	AWuXiaXHUD_RemoveSkillBook_Params params;
	params.itemindex = itemindex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.RemoveItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EBagType                       bagtype                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::RemoveItem(EBagType bagtype, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.RemoveItem");

	AWuXiaXHUD_RemoveItem_Params params;
	params.bagtype = bagtype;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.RemoveBuff
// (Final, Native, Public)
// Parameters:
// int                            buffID                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::RemoveBuff(int buffID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.RemoveBuff");

	AWuXiaXHUD_RemoveBuff_Params params;
	params.buffID = buffID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.ReleaseSwitchMap
// (Native, Public, BlueprintCallable)

void AWuXiaXHUD::ReleaseSwitchMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.ReleaseSwitchMap");

	AWuXiaXHUD_ReleaseSwitchMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.PlayWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWuXiaXHUD::PlayWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.PlayWeapon");

	AWuXiaXHUD_PlayWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.PlayProp
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWuXiaXHUD::PlayProp()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.PlayProp");

	AWuXiaXHUD_PlayProp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.PlayItemSound
// (Final, Native, Public)
// Parameters:
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::PlayItemSound(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.PlayItemSound");

	AWuXiaXHUD_PlayItemSound_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.PlayerLockToOther
// (Final, Native, Public)

void AWuXiaXHUD::PlayerLockToOther()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.PlayerLockToOther");

	AWuXiaXHUD_PlayerLockToOther_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.PlayerDeath
// (Native, Public)

void AWuXiaXHUD::PlayerDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.PlayerDeath");

	AWuXiaXHUD_PlayerDeath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.PlayEquip
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWuXiaXHUD::PlayEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.PlayEquip");

	AWuXiaXHUD_PlayEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.PlayBook
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWuXiaXHUD::PlayBook()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.PlayBook");

	AWuXiaXHUD_PlayBook_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.PickUpSuccess
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWuXiaXHUD::PickUpSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.PickUpSuccess");

	AWuXiaXHUD_PickUpSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.PickUpOverWeight
// (Final, Native, Public)

void AWuXiaXHUD::PickUpOverWeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.PickUpOverWeight");

	AWuXiaXHUD_PickUpOverWeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.PickGetItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            item_id                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           learned                        (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::PickGetItem(int item_id, bool learned)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.PickGetItem");

	AWuXiaXHUD_PickGetItem_Params params;
	params.item_id = item_id;
	params.learned = learned;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.OnSkinsUpdate
// (Native, Public)

void AWuXiaXHUD::OnSkinsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.OnSkinsUpdate");

	AWuXiaXHUD_OnSkinsUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.NextLabel
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXHUD::NextLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.NextLabel");

	AWuXiaXHUD_NextLabel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.MissileHitTarget
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXHUD::MissileHitTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.MissileHitTarget");

	AWuXiaXHUD_MissileHitTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.MarkWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EGamepadMarkType               MarkType                       (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::MarkWidget(EGamepadMarkType MarkType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.MarkWidget");

	AWuXiaXHUD_MarkWidget_Params params;
	params.MarkType = MarkType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.MapShowActorLocation
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AWuXiaXHUD::MapShowActorLocation(int ID, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.MapShowActorLocation");

	AWuXiaXHUD_MapShowActorLocation_Params params;
	params.ID = ID;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.MapScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::MapScale(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.MapScale");

	AWuXiaXHUD_MapScale_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.MapHideActorLocation
// (Final, Native, Public)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::MapHideActorLocation(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.MapHideActorLocation");

	AWuXiaXHUD_MapHideActorLocation_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.LeftMouseButtonRelease
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXHUD::LeftMouseButtonRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.LeftMouseButtonRelease");

	AWuXiaXHUD_LeftMouseButtonRelease_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.LastLabel
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXHUD::LastLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.LastLabel");

	AWuXiaXHUD_LastLabel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.IsInitTeamPlayer
// (Final, Native, Public)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWuXiaXHUD::IsInitTeamPlayer(int PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.IsInitTeamPlayer");

	AWuXiaXHUD_IsInitTeamPlayer_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXHUD.InitTeamPlayer
// (Final, Native, Public)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// int                            teammode                       (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::InitTeamPlayer(int PlayerID, const struct FString& Name, int teammode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.InitTeamPlayer");

	AWuXiaXHUD_InitTeamPlayer_Params params;
	params.PlayerID = PlayerID;
	params.Name = Name;
	params.teammode = teammode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.InitSystemMenuUIEvents
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWuXiaXHUD::InitSystemMenuUIEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.InitSystemMenuUIEvents");

	AWuXiaXHUD_InitSystemMenuUIEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.InitStatisticsUIEvents
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWuXiaXHUD::InitStatisticsUIEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.InitStatisticsUIEvents");

	AWuXiaXHUD_InitStatisticsUIEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.InitSkillUIEvents
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWuXiaXHUD::InitSkillUIEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.InitSkillUIEvents");

	AWuXiaXHUD_InitSkillUIEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.InitMapUIEvents
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWuXiaXHUD::InitMapUIEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.InitMapUIEvents");

	AWuXiaXHUD_InitMapUIEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.InitMainGameUIEvents
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWuXiaXHUD::InitMainGameUIEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.InitMainGameUIEvents");

	AWuXiaXHUD_InitMainGameUIEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.InitBagUIEvents
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWuXiaXHUD::InitBagUIEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.InitBagUIEvents");

	AWuXiaXHUD_InitBagUIEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.Horizontal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsRight                        (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::Horizontal(bool State, bool IsRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.Horizontal");

	AWuXiaXHUD_Horizontal_Params params;
	params.State = State;
	params.IsRight = IsRight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.HideWaitResurrection
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWuXiaXHUD::HideWaitResurrection()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.HideWaitResurrection");

	AWuXiaXHUD_HideWaitResurrection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.HideParachuteUI
// (Final, Native, Public)

void AWuXiaXHUD::HideParachuteUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.HideParachuteUI");

	AWuXiaXHUD_HideParachuteUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.HideOxygen
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXHUD::HideOxygen()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.HideOxygen");

	AWuXiaXHUD_HideOxygen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.HideOpenParachuteTips
// (Final, Native, Public)

void AWuXiaXHUD::HideOpenParachuteTips()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.HideOpenParachuteTips");

	AWuXiaXHUD_HideOpenParachuteTips_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.HideMainInterfaceUI
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWuXiaXHUD::HideMainInterfaceUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.HideMainInterfaceUI");

	AWuXiaXHUD_HideMainInterfaceUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.HideLowHPEffect
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWuXiaXHUD::HideLowHPEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.HideLowHPEffect");

	AWuXiaXHUD_HideLowHPEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.HideJumpPlanTips
// (Final, Native, Public)

void AWuXiaXHUD::HideJumpPlanTips()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.HideJumpPlanTips");

	AWuXiaXHUD_HideJumpPlanTips_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.HideJueKongUI
// (Event, Public, BlueprintEvent)

void AWuXiaXHUD::HideJueKongUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.HideJueKongUI");

	AWuXiaXHUD_HideJueKongUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.HideInteractive
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXHUD::HideInteractive()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.HideInteractive");

	AWuXiaXHUD_HideInteractive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.HideCrossHair
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXHUD::HideCrossHair()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.HideCrossHair");

	AWuXiaXHUD_HideCrossHair_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.GetWeaponSocketName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            weaponindex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   name1                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   name2                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWuXiaXHUD::GetWeaponSocketName(int weaponindex, struct FName* name1, struct FName* name2, int* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.GetWeaponSocketName");

	AWuXiaXHUD_GetWeaponSocketName_Params params;
	params.weaponindex = weaponindex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (name1 != nullptr)
		*name1 = params.name1;
	if (name2 != nullptr)
		*name2 = params.name2;
	if (Type != nullptr)
		*Type = params.Type;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXHUD.GetUOBStatisticsWidgetUI
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOBStatisticsWidget*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UOBStatisticsWidget* AWuXiaXHUD::GetUOBStatisticsWidgetUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.GetUOBStatisticsWidgetUI");

	AWuXiaXHUD_GetUOBStatisticsWidgetUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXHUD.GetSystemMenuWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USystemMenuUI*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USystemMenuUI* AWuXiaXHUD::GetSystemMenuWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.GetSystemMenuWidget");

	AWuXiaXHUD_GetSystemMenuWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXHUD.GetStatisticsWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UStatisticsWidget*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UStatisticsWidget* AWuXiaXHUD::GetStatisticsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.GetStatisticsWidget");

	AWuXiaXHUD_GetStatisticsWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXHUD.GetSkillWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkillUI*                ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkillUI* AWuXiaXHUD::GetSkillWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.GetSkillWidget");

	AWuXiaXHUD_GetSkillWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXHUD.GetPlayerSkinIds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<int>                    ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> AWuXiaXHUD::GetPlayerSkinIds()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.GetPlayerSkinIds");

	AWuXiaXHUD_GetPlayerSkinIds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXHUD.GetPickIdByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AWuXiaXHUD::GetPickIdByIndex(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.GetPickIdByIndex");

	AWuXiaXHUD_GetPickIdByIndex_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXHUD.GetOBTargetViewUI
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOBTargetViewUI*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UOBTargetViewUI* AWuXiaXHUD::GetOBTargetViewUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.GetOBTargetViewUI");

	AWuXiaXHUD_GetOBTargetViewUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXHUD.GetOBOverviewUI
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOBOverviewUI*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UOBOverviewUI* AWuXiaXHUD::GetOBOverviewUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.GetOBOverviewUI");

	AWuXiaXHUD_GetOBOverviewUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXHUD.GetOBMapUI
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOBMapUI*                ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UOBMapUI* AWuXiaXHUD::GetOBMapUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.GetOBMapUI");

	AWuXiaXHUD_GetOBMapUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXHUD.GetMapWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWuXiaMiniMapWidget*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWuXiaMiniMapWidget* AWuXiaXHUD::GetMapWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.GetMapWidget");

	AWuXiaXHUD_GetMapWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXHUD.GetMainGameWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMainGameUI*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMainGameUI* AWuXiaXHUD::GetMainGameWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.GetMainGameWidget");

	AWuXiaXHUD_GetMainGameWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXHUD.GetLocalCharacter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AWuXiaXCharacter*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AWuXiaXCharacter* AWuXiaXHUD::GetLocalCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.GetLocalCharacter");

	AWuXiaXHUD_GetLocalCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXHUD.GetLoadingWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULoadingUI*              ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class ULoadingUI* AWuXiaXHUD::GetLoadingWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.GetLoadingWidget");

	AWuXiaXHUD_GetLoadingWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXHUD.GetKeepActionWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UKeepActionUI*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UKeepActionUI* AWuXiaXHUD::GetKeepActionWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.GetKeepActionWidget");

	AWuXiaXHUD_GetKeepActionWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXHUD.GetIndexByPickId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            pickid                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AWuXiaXHUD::GetIndexByPickId(int pickid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.GetIndexByPickId");

	AWuXiaXHUD_GetIndexByPickId_Params params;
	params.pickid = pickid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXHUD.GetCurUIState
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EPlayerGameUIState             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPlayerGameUIState AWuXiaXHUD::GetCurUIState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.GetCurUIState");

	AWuXiaXHUD_GetCurUIState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXHUD.GetCurrentUIState
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EPlayerGameUIState             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPlayerGameUIState AWuXiaXHUD::GetCurrentUIState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.GetCurrentUIState");

	AWuXiaXHUD_GetCurrentUIState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXHUD.GetCurrentCD
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            skill_id                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWuXiaXHUD::GetCurrentCD(int skill_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.GetCurrentCD");

	AWuXiaXHUD_GetCurrentCD_Params params;
	params.skill_id = skill_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXHUD.GetBagWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBagUI*                  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBagUI* AWuXiaXHUD::GetBagWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.GetBagWidget");

	AWuXiaXHUD_GetBagWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXHUD.GetAllHotKey
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         hotkeys                        (Parm, OutParm, ZeroConstructor)

void AWuXiaXHUD::GetAllHotKey(TArray<struct FString>* hotkeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.GetAllHotKey");

	AWuXiaXHUD_GetAllHotKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (hotkeys != nullptr)
		*hotkeys = params.hotkeys;
}


// Function WuXiaX.WuXiaXHUD.GamePlayerTalk
// (Final, Native, Public)
// Parameters:
// int                            player_id                      (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::GamePlayerTalk(int player_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.GamePlayerTalk");

	AWuXiaXHUD_GamePlayerTalk_Params params;
	params.player_id = player_id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.GamepadIntoWidget
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXHUD::GamepadIntoWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.GamepadIntoWidget");

	AWuXiaXHUD_GamepadIntoWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.EndKeepAction
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXHUD::EndKeepAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.EndKeepAction");

	AWuXiaXHUD_EndKeepAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.EndFly
// (Final, Native, Public)

void AWuXiaXHUD::EndFly()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.EndFly");

	AWuXiaXHUD_EndFly_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.Drop
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXHUD::Drop()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.Drop");

	AWuXiaXHUD_Drop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.DeleteTeamPlayerMarkState
// (Final, Native, Public)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::DeleteTeamPlayerMarkState(int PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.DeleteTeamPlayerMarkState");

	AWuXiaXHUD_DeleteTeamPlayerMarkState_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.CreateStatisticsUI
// (Native, Public, BlueprintCallable)

void AWuXiaXHUD::CreateStatisticsUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.CreateStatisticsUI");

	AWuXiaXHUD_CreateStatisticsUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.CloseWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           is_set                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::CloseWidget(bool is_set)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.CloseWidget");

	AWuXiaXHUD_CloseWidget_Params params;
	params.is_set = is_set;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.ClearTeamPlayerName
// (Final, Native, Public)
// Parameters:
// int                            PlayerID                       (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::ClearTeamPlayerName(int PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.ClearTeamPlayerName");

	AWuXiaXHUD_ClearTeamPlayerName_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.ClearSkillHotKey
// (Final, Native, Public)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::ClearSkillHotKey(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.ClearSkillHotKey");

	AWuXiaXHUD_ClearSkillHotKey_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.ClearItemHotKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::ClearItemHotKey(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.ClearItemHotKey");

	AWuXiaXHUD_ClearItemHotKey_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.ClearInventory
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXHUD::ClearInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.ClearInventory");

	AWuXiaXHUD_ClearInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.ClearBuffs
// (Final, Native, Public)

void AWuXiaXHUD::ClearBuffs()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.ClearBuffs");

	AWuXiaXHUD_ClearBuffs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.ClearBlood
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWuXiaXHUD::ClearBlood()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.ClearBlood");

	AWuXiaXHUD_ClearBlood_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.ClearAllSkill
// (Final, Native, Public)

void AWuXiaXHUD::ClearAllSkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.ClearAllSkill");

	AWuXiaXHUD_ClearAllSkill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.ChangeSkillCurrentWeapon
// (Final, Native, Public)
// Parameters:
// ESkillEquipType                equiptype                      (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::ChangeSkillCurrentWeapon(ESkillEquipType equiptype)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.ChangeSkillCurrentWeapon");

	AWuXiaXHUD_ChangeSkillCurrentWeapon_Params params;
	params.equiptype = equiptype;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.ChangePlayerGameUIState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerGameUIState             NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::ChangePlayerGameUIState(EPlayerGameUIState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.ChangePlayerGameUIState");

	AWuXiaXHUD_ChangePlayerGameUIState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.ChangeGameUIState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPlayerGameUIState             NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::ChangeGameUIState(EPlayerGameUIState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.ChangeGameUIState");

	AWuXiaXHUD_ChangeGameUIState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.ChangeEquipWeapon
// (Final, Native, Public)
// Parameters:
// ESkillEquipType                slottype                       (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        weaponid                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            currentweapontype1             (Parm, ZeroConstructor, IsPlainOldData)
// int                            currentweapontype2             (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::ChangeEquipWeapon(ESkillEquipType slottype, int64_t weaponid, int currentweapontype1, int currentweapontype2)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.ChangeEquipWeapon");

	AWuXiaXHUD_ChangeEquipWeapon_Params params;
	params.slottype = slottype;
	params.weaponid = weaponid;
	params.currentweapontype1 = currentweapontype1;
	params.currentweapontype2 = currentweapontype2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.ChangeCurrentWeapon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            weaponindex                    (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::ChangeCurrentWeapon(int weaponindex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.ChangeCurrentWeapon");

	AWuXiaXHUD_ChangeCurrentWeapon_Params params;
	params.weaponindex = weaponindex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.CanPlayerInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWuXiaXHUD::CanPlayerInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.CanPlayerInput");

	AWuXiaXHUD_CanPlayerInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXHUD.CanNotShooter
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXHUD::CanNotShooter()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.CanNotShooter");

	AWuXiaXHUD_CanNotShooter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.CanNotEquipItem
// (Final, Native, Public)

void AWuXiaXHUD::CanNotEquipItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.CanNotEquipItem");

	AWuXiaXHUD_CanNotEquipItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.BP_ShowDamageCircle
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWuXiaXHUD::BP_ShowDamageCircle()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.BP_ShowDamageCircle");

	AWuXiaXHUD_BP_ShowDamageCircle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.BP_SetShakingCircle
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::BP_SetShakingCircle(const struct FVector& Location, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.BP_SetShakingCircle");

	AWuXiaXHUD_BP_SetShakingCircle_Params params;
	params.Location = Location;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.BP_SetNextCircle
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::BP_SetNextCircle(const struct FVector& Location, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.BP_SetNextCircle");

	AWuXiaXHUD_BP_SetNextCircle_Params params;
	params.Location = Location;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.BP_SetCurrentCircle
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::BP_SetCurrentCircle(const struct FVector& Location, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.BP_SetCurrentCircle");

	AWuXiaXHUD_BP_SetCurrentCircle_Params params;
	params.Location = Location;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.BP_HideDamageCircle
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWuXiaXHUD::BP_HideDamageCircle()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.BP_HideDamageCircle");

	AWuXiaXHUD_BP_HideDamageCircle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.BindItemUIEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerItemCtrlComponent* itemctrl                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AWuXiaXHUD::BindItemUIEvent(class UPlayerItemCtrlComponent* itemctrl)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.BindItemUIEvent");

	AWuXiaXHUD_BindItemUIEvent_Params params;
	params.itemctrl = itemctrl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.BeginKeepAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          actiontime                     (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::BeginKeepAction(float actiontime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.BeginKeepAction");

	AWuXiaXHUD_BeginKeepAction_Params params;
	params.actiontime = actiontime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.BeginFly
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 Start                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 End                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AWuXiaXHUD::BeginFly(const struct FVector& Start, const struct FVector& End)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.BeginFly");

	AWuXiaXHUD_BeginFly_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.AppendShutDown
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 killname                       (Parm, ZeroConstructor)
// struct FString                 deadname                       (Parm, ZeroConstructor)
// int                            kill_num                       (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::AppendShutDown(const struct FString& killname, const struct FString& deadname, int kill_num)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.AppendShutDown");

	AWuXiaXHUD_AppendShutDown_Params params;
	params.killname = killname;
	params.deadname = deadname;
	params.kill_num = kill_num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.AppendFirstBlood
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 playername                     (Parm, ZeroConstructor)
// struct FString                 deadname                       (Parm, ZeroConstructor)

void AWuXiaXHUD::AppendFirstBlood(const struct FString& playername, const struct FString& deadname)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.AppendFirstBlood");

	AWuXiaXHUD_AppendFirstBlood_Params params;
	params.playername = playername;
	params.deadname = deadname;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.AppendContinuousKillInfo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 playername                     (Parm, ZeroConstructor)
// int                            killnumber                     (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::AppendContinuousKillInfo(const struct FString& playername, int killnumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.AppendContinuousKillInfo");

	AWuXiaXHUD_AppendContinuousKillInfo_Params params;
	params.playername = playername;
	params.killnumber = killnumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.AddSkill
// (Final, Native, Public)
// Parameters:
// int                            skillid                        (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::AddSkill(int skillid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.AddSkill");

	AWuXiaXHUD_AddSkill_Params params;
	params.skillid = skillid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHUD.AddBloodByDamage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXHUD::AddBloodByDamage(float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHUD.AddBloodByDamage");

	AWuXiaXHUD_AddBloodByDamage_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXDLDHUD.SetContinuousKillNumber
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXDLDHUD::SetContinuousKillNumber(int Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXDLDHUD.SetContinuousKillNumber");

	AWuXiaXDLDHUD_SetContinuousKillNumber_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXDLDHUD.GetPVPSelectWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPVPSelectUI*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPVPSelectUI* AWuXiaXDLDHUD::GetPVPSelectWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXDLDHUD.GetPVPSelectWidget");

	AWuXiaXDLDHUD_GetPVPSelectWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXDLDHUD.DLD_UpdateKillData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            allkill                        (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXDLDHUD::DLD_UpdateKillData(int allkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXDLDHUD.DLD_UpdateKillData");

	AWuXiaXDLDHUD_DLD_UpdateKillData_Params params;
	params.allkill = allkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXDLDHUD.DLD_PlayerSortInfo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            rank                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            kill                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            reward                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            rank_point                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            kill_point                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            damage_point                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            all_team_number                (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXDLDHUD::DLD_PlayerSortInfo(int rank, int kill, int reward, int rank_point, int kill_point, int damage_point, int all_team_number)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXDLDHUD.DLD_PlayerSortInfo");

	AWuXiaXDLDHUD_DLD_PlayerSortInfo_Params params;
	params.rank = rank;
	params.kill = kill;
	params.reward = reward;
	params.rank_point = rank_point;
	params.kill_point = kill_point;
	params.damage_point = damage_point;
	params.all_team_number = all_team_number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameInstance.ShowReconnectFailed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWuXiaXGameInstance::ShowReconnectFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameInstance.ShowReconnectFailed");

	UWuXiaXGameInstance_ShowReconnectFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameInstance.SendComplainVideo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWuXiaXGameInstance::SendComplainVideo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameInstance.SendComplainVideo");

	UWuXiaXGameInstance_SendComplainVideo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXGameInstance.SendComplainInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 player_name                    (Parm, ZeroConstructor)
// TArray<int>                    select                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 player_text                    (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWuXiaXGameInstance::SendComplainInfo(const struct FString& player_name, TArray<int> select, const struct FString& player_text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameInstance.SendComplainInfo");

	UWuXiaXGameInstance_SendComplainInfo_Params params;
	params.player_name = player_name;
	params.select = select;
	params.player_text = player_text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXGameInstance.ReconnectFailed
// (Final, Native, Public, BlueprintCallable)

void UWuXiaXGameInstance::ReconnectFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameInstance.ReconnectFailed");

	UWuXiaXGameInstance_ReconnectFailed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameInstance.ReConnect
// (Final, Native, Public, BlueprintCallable)

void UWuXiaXGameInstance::ReConnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameInstance.ReConnect");

	UWuXiaXGameInstance_ReConnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameInstance.OutPutPlayerAnimus
// (Final, Native, Public, BlueprintCallable)

void UWuXiaXGameInstance::OutPutPlayerAnimus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameInstance.OutPutPlayerAnimus");

	UWuXiaXGameInstance_OutPutPlayerAnimus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameInstance.OpenGame
// (Final, Exec, Native, Public, BlueprintCallable)

void UWuXiaXGameInstance::OpenGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameInstance.OpenGame");

	UWuXiaXGameInstance_OpenGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameInstance.NetDebugPing
// (Final, Exec, Native, Public, BlueprintCallable)

void UWuXiaXGameInstance::NetDebugPing()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameInstance.NetDebugPing");

	UWuXiaXGameInstance_NetDebugPing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameInstance.NetDebugLoginUser
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 user                           (Parm, ZeroConstructor)
// struct FString                 PassWord                       (Parm, ZeroConstructor)

void UWuXiaXGameInstance::NetDebugLoginUser(const struct FString& user, const struct FString& PassWord)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameInstance.NetDebugLoginUser");

	UWuXiaXGameInstance_NetDebugLoginUser_Params params;
	params.user = user;
	params.PassWord = PassWord;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameInstance.NetDebugConnectIp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Ip                             (Parm, ZeroConstructor)
// int                            Port                           (Parm, ZeroConstructor, IsPlainOldData)

void UWuXiaXGameInstance::NetDebugConnectIp(const struct FString& Ip, int Port)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameInstance.NetDebugConnectIp");

	UWuXiaXGameInstance_NetDebugConnectIp_Params params;
	params.Ip = Ip;
	params.Port = Port;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameInstance.Net_actor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Val                            (Parm, ZeroConstructor, IsPlainOldData)

void UWuXiaXGameInstance::Net_actor(class AActor* Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameInstance.Net_actor");

	UWuXiaXGameInstance_Net_actor_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameInstance.LostConnect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWuXiaXGameInstance::LostConnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameInstance.LostConnect");

	UWuXiaXGameInstance_LostConnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXGameInstance.HandleNetworkFailure
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// class UNetDriver*              NetDriver                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENetworkFailure>   FailureType                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ErrorString                    (Parm, ZeroConstructor)

void UWuXiaXGameInstance::HandleNetworkFailure(class UWorld* World, class UNetDriver* NetDriver, TEnumAsByte<ENetworkFailure> FailureType, const struct FString& ErrorString)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameInstance.HandleNetworkFailure");

	UWuXiaXGameInstance_HandleNetworkFailure_Params params;
	params.World = World;
	params.NetDriver = NetDriver;
	params.FailureType = FailureType;
	params.ErrorString = ErrorString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameInstance.GetVideoSendCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWuXiaXGameInstance::GetVideoSendCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameInstance.GetVideoSendCount");

	UWuXiaXGameInstance_GetVideoSendCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXGameInstance.GetVerNum
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWuXiaXGameInstance::GetVerNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameInstance.GetVerNum");

	UWuXiaXGameInstance_GetVerNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXGameInstance.GetServerLocalName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UWuXiaXGameInstance::GetServerLocalName(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameInstance.GetServerLocalName");

	UWuXiaXGameInstance_GetServerLocalName_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXGameInstance.GetNetActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UWuXiaXGameInstance::GetNetActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameInstance.GetNetActor");

	UWuXiaXGameInstance_GetNetActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXGameInstance.CreateAIPlayer
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// int                            Number                         (Parm, ZeroConstructor, IsPlainOldData)

void UWuXiaXGameInstance::CreateAIPlayer(int Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameInstance.CreateAIPlayer");

	UWuXiaXGameInstance_CreateAIPlayer_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameInstance.CompalinReconnect
// (Final, Native, Public, BlueprintCallable)

void UWuXiaXGameInstance::CompalinReconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameInstance.CompalinReconnect");

	UWuXiaXGameInstance_CompalinReconnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameInstance.CanReconnect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWuXiaXGameInstance::CanReconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameInstance.CanReconnect");

	UWuXiaXGameInstance_CanReconnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXGameModeBase.RegisterPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AWuXiaXCharacter*        avatar                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXGameModeBase::RegisterPlayer(class AWuXiaXCharacter* avatar)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameModeBase.RegisterPlayer");

	AWuXiaXGameModeBase_RegisterPlayer_Params params;
	params.avatar = avatar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameModeBase.RefreshPick
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXGameModeBase::RefreshPick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameModeBase.RefreshPick");

	AWuXiaXGameModeBase_RefreshPick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameModeBase.RefreshHorse
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXGameModeBase::RefreshHorse()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameModeBase.RefreshHorse");

	AWuXiaXGameModeBase_RefreshHorse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameModeBase.KickPlayer
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            player_id                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   KickReason                     (ConstParm, Parm, OutParm, ReferenceParm)

void AWuXiaXGameModeBase::KickPlayer(int player_id, const struct FText& KickReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameModeBase.KickPlayer");

	AWuXiaXGameModeBase_KickPlayer_Params params;
	params.player_id = player_id;
	params.KickReason = KickReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameModeBase.BeginpParadrop
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXGameModeBase::BeginpParadrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameModeBase.BeginpParadrop");

	AWuXiaXGameModeBase_BeginpParadrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameStateBase.SetGameLoginId
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXGameStateBase::SetGameLoginId()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameStateBase.SetGameLoginId");

	AWuXiaXGameStateBase_SetGameLoginId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameStateBase.OnRepLiveNum
// (Final, Native, Private)

void AWuXiaXGameStateBase::OnRepLiveNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameStateBase.OnRepLiveNum");

	AWuXiaXGameStateBase_OnRepLiveNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameStateBase.Mul_WinActorLeave
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AWuXiaXGameStateBase::Mul_WinActorLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameStateBase.Mul_WinActorLeave");

	AWuXiaXGameStateBase_Mul_WinActorLeave_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameStateBase.Mul_UpdateCanWinNumber
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int                            Number                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXGameStateBase::Mul_UpdateCanWinNumber(int Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameStateBase.Mul_UpdateCanWinNumber");

	AWuXiaXGameStateBase_Mul_UpdateCanWinNumber_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameStateBase.Mul_TeamPointInfo
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXGameStateBase::Mul_TeamPointInfo(int red, int blue, int green)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameStateBase.Mul_TeamPointInfo");

	AWuXiaXGameStateBase_Mul_TeamPointInfo_Params params;
	params.red = red;
	params.blue = blue;
	params.green = green;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameStateBase.Mul_SpawnParadrop
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// int64_t                        begintime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 beginlocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 EndLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            globalID                       (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXGameStateBase::Mul_SpawnParadrop(int64_t begintime, const struct FVector& beginlocation, const struct FVector& EndLocation, int globalID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameStateBase.Mul_SpawnParadrop");

	AWuXiaXGameStateBase_Mul_SpawnParadrop_Params params;
	params.begintime = begintime;
	params.beginlocation = beginlocation;
	params.EndLocation = EndLocation;
	params.globalID = globalID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameStateBase.Mul_SetPVPGameTime
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int64_t                        start_time                     (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXGameStateBase::Mul_SetPVPGameTime(int64_t start_time)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameStateBase.Mul_SetPVPGameTime");

	AWuXiaXGameStateBase_Mul_SetPVPGameTime_Params params;
	params.start_time = start_time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameStateBase.Mul_ResourcesPointTeamChange
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int                            resourcesindex                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXGameStateBase::Mul_ResourcesPointTeamChange(int resourcesindex, int TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameStateBase.Mul_ResourcesPointTeamChange");

	AWuXiaXGameStateBase_Mul_ResourcesPointTeamChange_Params params;
	params.resourcesindex = resourcesindex;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameStateBase.Mul_RemovePlayerAnimus
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int64_t                        player_list                    (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXGameStateBase::Mul_RemovePlayerAnimus(int64_t player_list)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameStateBase.Mul_RemovePlayerAnimus");

	AWuXiaXGameStateBase_Mul_RemovePlayerAnimus_Params params;
	params.player_list = player_list;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameStateBase.Mul_PlayerAnimus
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// TArray<int64_t>                player_list_id                 (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// TArray<int64_t>                player_list_pos                (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AWuXiaXGameStateBase::Mul_PlayerAnimus(TArray<int64_t> player_list_id, TArray<int64_t> player_list_pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameStateBase.Mul_PlayerAnimus");

	AWuXiaXGameStateBase_Mul_PlayerAnimus_Params params;
	params.player_list_id = player_list_id;
	params.player_list_pos = player_list_pos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameStateBase.Mul_DC_StartWaitNextCircle
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int64_t                        begintime                      (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        waittingtime                   (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        currentradius                  (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        nextradius                     (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        clocationX                     (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        clocationY                     (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        clocationZ                     (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        nlocationX                     (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        nlocationY                     (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        nlocationZ                     (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXGameStateBase::Mul_DC_StartWaitNextCircle(int64_t begintime, int64_t waittingtime, int64_t currentradius, int64_t nextradius, int64_t clocationX, int64_t clocationY, int64_t clocationZ, int64_t nlocationX, int64_t nlocationY, int64_t nlocationZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameStateBase.Mul_DC_StartWaitNextCircle");

	AWuXiaXGameStateBase_Mul_DC_StartWaitNextCircle_Params params;
	params.begintime = begintime;
	params.waittingtime = waittingtime;
	params.currentradius = currentradius;
	params.nextradius = nextradius;
	params.clocationX = clocationX;
	params.clocationY = clocationY;
	params.clocationZ = clocationZ;
	params.nlocationX = nlocationX;
	params.nlocationY = nlocationY;
	params.nlocationZ = nlocationZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameStateBase.Mul_DC_StartShringk
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int64_t                        begintime                      (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        waittingtime                   (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        shringkingtime                 (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXGameStateBase::Mul_DC_StartShringk(int64_t begintime, int64_t waittingtime, int64_t shringkingtime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameStateBase.Mul_DC_StartShringk");

	AWuXiaXGameStateBase_Mul_DC_StartShringk_Params params;
	params.begintime = begintime;
	params.waittingtime = waittingtime;
	params.shringkingtime = shringkingtime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameStateBase.Mul_DC_StartLastCircle
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int64_t                        StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        waittime                       (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXGameStateBase::Mul_DC_StartLastCircle(int64_t StartTime, int64_t waittime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameStateBase.Mul_DC_StartLastCircle");

	AWuXiaXGameStateBase_Mul_DC_StartLastCircle_Params params;
	params.StartTime = StartTime;
	params.waittime = waittime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameStateBase.Mul_DC_StartDamageAll
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AWuXiaXGameStateBase::Mul_DC_StartDamageAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameStateBase.Mul_DC_StartDamageAll");

	AWuXiaXGameStateBase_Mul_DC_StartDamageAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameStateBase.Mul_DC_Start
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int64_t                        locationX                      (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        locationY                      (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        locationZ                      (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        ScaleX                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        ScaleY                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        ScaleZ                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXGameStateBase::Mul_DC_Start(int64_t locationX, int64_t locationY, int64_t locationZ, int64_t ScaleX, int64_t ScaleY, int64_t ScaleZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameStateBase.Mul_DC_Start");

	AWuXiaXGameStateBase_Mul_DC_Start_Params params;
	params.locationX = locationX;
	params.locationY = locationY;
	params.locationZ = locationZ;
	params.ScaleX = ScaleX;
	params.ScaleY = ScaleY;
	params.ScaleZ = ScaleZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameStateBase.Mul_DC_Close
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AWuXiaXGameStateBase::Mul_DC_Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameStateBase.Mul_DC_Close");

	AWuXiaXGameStateBase_Mul_DC_Close_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameStateBase.Mul_AppendTongZhi
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// struct FText                   Info                           (ConstParm, Parm, ReferenceParm)

void AWuXiaXGameStateBase::Mul_AppendTongZhi(const struct FText& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameStateBase.Mul_AppendTongZhi");

	AWuXiaXGameStateBase_Mul_AppendTongZhi_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameStateBase.Mul_AppendShutDown
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// struct FString                 killname                       (Parm, ZeroConstructor)
// struct FString                 deadname                       (Parm, ZeroConstructor)
// int                            kill_num                       (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXGameStateBase::Mul_AppendShutDown(const struct FString& killname, const struct FString& deadname, int kill_num)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameStateBase.Mul_AppendShutDown");

	AWuXiaXGameStateBase_Mul_AppendShutDown_Params params;
	params.killname = killname;
	params.deadname = deadname;
	params.kill_num = kill_num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameStateBase.Mul_AppendKillInfo
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// struct FString                 attack_player_name             (Parm, ZeroConstructor)
// struct FString                 dead_player_name               (Parm, ZeroConstructor)
// int                            attack_id                      (Parm, ZeroConstructor, IsPlainOldData)
// ECauseDyingType                reason                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXGameStateBase::Mul_AppendKillInfo(const struct FString& attack_player_name, const struct FString& dead_player_name, int attack_id, ECauseDyingType reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameStateBase.Mul_AppendKillInfo");

	AWuXiaXGameStateBase_Mul_AppendKillInfo_Params params;
	params.attack_player_name = attack_player_name;
	params.dead_player_name = dead_player_name;
	params.attack_id = attack_id;
	params.reason = reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameStateBase.Mul_AppendFirstBlood
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// struct FString                 playername                     (Parm, ZeroConstructor)
// struct FString                 deadname                       (Parm, ZeroConstructor)

void AWuXiaXGameStateBase::Mul_AppendFirstBlood(const struct FString& playername, const struct FString& deadname)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameStateBase.Mul_AppendFirstBlood");

	AWuXiaXGameStateBase_Mul_AppendFirstBlood_Params params;
	params.playername = playername;
	params.deadname = deadname;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameStateBase.Mul_AppendContinuousKillInfo
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// struct FString                 playername                     (Parm, ZeroConstructor)
// int                            killnumber                     (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXGameStateBase::Mul_AppendContinuousKillInfo(const struct FString& playername, int killnumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameStateBase.Mul_AppendContinuousKillInfo");

	AWuXiaXGameStateBase_Mul_AppendContinuousKillInfo_Params params;
	params.playername = playername;
	params.killnumber = killnumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameStateBase.GetViewPlayerById
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class AWuXiaXCharacter*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AWuXiaXCharacter* AWuXiaXGameStateBase::GetViewPlayerById(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameStateBase.GetViewPlayerById");

	AWuXiaXGameStateBase_GetViewPlayerById_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXGameStateBase.GetTimeToNxtStage
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWuXiaXGameStateBase::GetTimeToNxtStage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameStateBase.GetTimeToNxtStage");

	AWuXiaXGameStateBase_GetTimeToNxtStage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXGameStateBase.GetNxtStageWaitTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWuXiaXGameStateBase::GetNxtStageWaitTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameStateBase.GetNxtStageWaitTime");

	AWuXiaXGameStateBase_GetNxtStageWaitTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXGameStateBase.GetNxtStageShrinkTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWuXiaXGameStateBase::GetNxtStageShrinkTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameStateBase.GetNxtStageShrinkTime");

	AWuXiaXGameStateBase_GetNxtStageShrinkTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXGameStateBase.GetNetTimeMS32
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AWuXiaXGameStateBase::GetNetTimeMS32()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameStateBase.GetNetTimeMS32");

	AWuXiaXGameStateBase_GetNetTimeMS32_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXGameStateBase.GetNetTimeInSec
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWuXiaXGameStateBase::GetNetTimeInSec()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameStateBase.GetNetTimeInSec");

	AWuXiaXGameStateBase_GetNetTimeInSec_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXGameStateBase.ChangeStateToLogin
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXGameStateBase::ChangeStateToLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameStateBase.ChangeStateToLogin");

	AWuXiaXGameStateBase_ChangeStateToLogin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXGameStateBase.ChangeGameState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EGameState                     game_state                     (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXGameStateBase::ChangeGameState(EGameState game_state)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXGameStateBase.ChangeGameState");

	AWuXiaXGameStateBase_ChangeGameState_Params params;
	params.game_state = game_state;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHorse.Ride
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AWuXiaXCharacter*        Driver                         (Parm, ZeroConstructor, IsPlainOldData)
// EPlayerRideStateType           ridestate                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWuXiaXHorse::Ride(class AWuXiaXCharacter* Driver, int index, EPlayerRideStateType* ridestate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHorse.Ride");

	AWuXiaXHorse_Ride_Params params;
	params.Driver = Driver;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ridestate != nullptr)
		*ridestate = params.ridestate;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXHorse.OnRepRotate
// (Final, Native, Private)

void AWuXiaXHorse::OnRepRotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHorse.OnRepRotate");

	AWuXiaXHorse_OnRepRotate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHorse.OnRepPlayers
// (Final, Native, Private)

void AWuXiaXHorse::OnRepPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHorse.OnRepPlayers");

	AWuXiaXHorse_OnRepPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHorse.OnRepHorseNetID
// (Final, Native, Private)

void AWuXiaXHorse::OnRepHorseNetID()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHorse.OnRepHorseNetID");

	AWuXiaXHorse_OnRepHorseNetID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHorse.OnRepHorseID
// (Final, Native, Private)

void AWuXiaXHorse::OnRepHorseID()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHorse.OnRepHorseID");

	AWuXiaXHorse_OnRepHorseID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHorse.OnRepEndurance
// (Final, Native, Private)

void AWuXiaXHorse::OnRepEndurance()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHorse.OnRepEndurance");

	AWuXiaXHorse_OnRepEndurance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHorse.Mul_PlayFallMontage
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AWuXiaXHorse::Mul_PlayFallMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHorse.Mul_PlayFallMontage");

	AWuXiaXHorse_Mul_PlayFallMontage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXHorse.InteractiveUITips
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWuXiaXCharacter*        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWuXiaXHorse::InteractiveUITips(class AWuXiaXCharacter* Player, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHorse.InteractiveUITips");

	AWuXiaXHorse_InteractiveUITips_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXHorse.GetRotationSpeed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWuXiaXHorse::GetRotationSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHorse.GetRotationSpeed");

	AWuXiaXHorse_GetRotationSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXHorse.GetRider
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AWuXiaXCharacter*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AWuXiaXCharacter* AWuXiaXHorse::GetRider()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHorse.GetRider");

	AWuXiaXHorse_GetRider_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXHorse.GetInteractiveType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWuXiaXCharacter*        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// EInteractiveType               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EInteractiveType AWuXiaXHorse::GetInteractiveType(class AWuXiaXCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHorse.GetInteractiveType");

	AWuXiaXHorse_GetInteractiveType_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXHorse.GetCurrentFSpeed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWuXiaXHorse::GetCurrentFSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHorse.GetCurrentFSpeed");

	AWuXiaXHorse_GetCurrentFSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXHorse.CanInteractive
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWuXiaXCharacter*        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// ETriggerInteractiveType        Trigger                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWuXiaXHorse::CanInteractive(class AWuXiaXCharacter* Player, ETriggerInteractiveType Trigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXHorse.CanInteractive");

	AWuXiaXHorse_CanInteractive_Params params;
	params.Player = Player;
	params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXOBController.TimeSyncStart
// (Final, Native, Public)

void AWuXiaXOBController::TimeSyncStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXOBController.TimeSyncStart");

	AWuXiaXOBController_TimeSyncStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXOBController.Server_StartPing
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int64_t                        index                          (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Time                           (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXOBController::Server_StartPing(int64_t index, int64_t Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXOBController.Server_StartPing");

	AWuXiaXOBController_Server_StartPing_Params params;
	params.index = index;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXOBController.OnRep_SrvNoticedOB
// (Native, Public)

void AWuXiaXOBController::OnRep_SrvNoticedOB()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXOBController.OnRep_SrvNoticedOB");

	AWuXiaXOBController_OnRep_SrvNoticedOB_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXOBController.ClientReportServerTime
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        index                          (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        cTime                          (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        sTime                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXOBController::ClientReportServerTime(int64_t index, int64_t cTime, int64_t sTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXOBController.ClientReportServerTime");

	AWuXiaXOBController_ClientReportServerTime_Params params;
	params.index = index;
	params.cTime = cTime;
	params.sTime = sTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuxiaXOBPawn.SetZeroCounter
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// int64_t                        start_time                     (Parm, ZeroConstructor, IsPlainOldData)

void AWuxiaXOBPawn::SetZeroCounter(int64_t start_time)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuxiaXOBPawn.SetZeroCounter");

	AWuxiaXOBPawn_SetZeroCounter_Params params;
	params.start_time = start_time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuxiaXOBPawn.Server_UpdateOBLocation
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FVector                 pos                            (Parm, ZeroConstructor, IsPlainOldData)

void AWuxiaXOBPawn::Server_UpdateOBLocation(const struct FVector& pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuxiaXOBPawn.Server_UpdateOBLocation");

	AWuxiaXOBPawn_Server_UpdateOBLocation_Params params;
	params.pos = pos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuxiaXOBPawn.PlayerInitLocation
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AWuxiaXOBPawn::PlayerInitLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuxiaXOBPawn.PlayerInitLocation");

	AWuxiaXOBPawn_PlayerInitLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuxiaXOBPawn.OnViewTargetDead
// (Final, Native, Public, BlueprintCallable)

void AWuxiaXOBPawn::OnViewTargetDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuxiaXOBPawn.OnViewTargetDead");

	AWuxiaXOBPawn_OnViewTargetDead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuxiaXOBPawn.OnTargetViewRotUpdated
// (Final, Native, Public, HasDefaults)
// Parameters:
// int                            netID                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                rot                            (Parm, ZeroConstructor, IsPlainOldData)

void AWuxiaXOBPawn::OnTargetViewRotUpdated(int netID, const struct FRotator& rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuxiaXOBPawn.OnTargetViewRotUpdated");

	AWuxiaXOBPawn_OnTargetViewRotUpdated_Params params;
	params.netID = netID;
	params.rot = rot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuxiaXOBPawn.OnSwitchToPrevPlayer
// (Final, Native, Public, BlueprintCallable)

void AWuxiaXOBPawn::OnSwitchToPrevPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuxiaXOBPawn.OnSwitchToPrevPlayer");

	AWuxiaXOBPawn_OnSwitchToPrevPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuxiaXOBPawn.OnSwitchToNextPlayer
// (Final, Native, Public, BlueprintCallable)

void AWuxiaXOBPawn::OnSwitchToNextPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuxiaXOBPawn.OnSwitchToNextPlayer");

	AWuxiaXOBPawn_OnSwitchToNextPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuxiaXOBPawn.OnMoveUpDown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void AWuxiaXOBPawn::OnMoveUpDown(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuxiaXOBPawn.OnMoveUpDown");

	AWuxiaXOBPawn_OnMoveUpDown_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuxiaXOBPawn.OnMoveRight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void AWuxiaXOBPawn::OnMoveRight(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuxiaXOBPawn.OnMoveRight");

	AWuxiaXOBPawn_OnMoveRight_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuxiaXOBPawn.OnMoveForward
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void AWuxiaXOBPawn::OnMoveForward(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuxiaXOBPawn.OnMoveForward");

	AWuxiaXOBPawn_OnMoveForward_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuxiaXOBPawn.OnMouseTurn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void AWuxiaXOBPawn::OnMouseTurn(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuxiaXOBPawn.OnMouseTurn");

	AWuxiaXOBPawn_OnMouseTurn_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuxiaXOBPawn.OnMouseScroll
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuxiaXOBPawn::OnMouseScroll(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuxiaXOBPawn.OnMouseScroll");

	AWuxiaXOBPawn_OnMouseScroll_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuxiaXOBPawn.OnMouseRKeyUp
// (Final, Native, Public, BlueprintCallable)

void AWuxiaXOBPawn::OnMouseRKeyUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuxiaXOBPawn.OnMouseRKeyUp");

	AWuxiaXOBPawn_OnMouseRKeyUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuxiaXOBPawn.OnMouseRKeyDown
// (Final, Native, Public, BlueprintCallable)

void AWuxiaXOBPawn::OnMouseRKeyDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuxiaXOBPawn.OnMouseRKeyDown");

	AWuxiaXOBPawn_OnMouseRKeyDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuxiaXOBPawn.OnMouseLookUp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void AWuxiaXOBPawn::OnMouseLookUp(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuxiaXOBPawn.OnMouseLookUp");

	AWuxiaXOBPawn_OnMouseLookUp_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuxiaXOBPawn.OnMouseLKeyUp
// (Final, Native, Public, BlueprintCallable)

void AWuxiaXOBPawn::OnMouseLKeyUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuxiaXOBPawn.OnMouseLKeyUp");

	AWuxiaXOBPawn_OnMouseLKeyUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuxiaXOBPawn.OnKey_PrevTeam_Released
// (Final, Native, Public, BlueprintCallable)

void AWuxiaXOBPawn::OnKey_PrevTeam_Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuxiaXOBPawn.OnKey_PrevTeam_Released");

	AWuxiaXOBPawn_OnKey_PrevTeam_Released_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuxiaXOBPawn.OnKey_NextTeam_Released
// (Final, Native, Public, BlueprintCallable)

void AWuxiaXOBPawn::OnKey_NextTeam_Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuxiaXOBPawn.OnKey_NextTeam_Released");

	AWuxiaXOBPawn_OnKey_NextTeam_Released_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuxiaXOBPawn.OnKey_C_Released
// (Final, Native, Public, BlueprintCallable)

void AWuxiaXOBPawn::OnKey_C_Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuxiaXOBPawn.OnKey_C_Released");

	AWuxiaXOBPawn_OnKey_C_Released_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuxiaXOBPawn.OnClientInfoGet
// (Final, Native, Private)
// Parameters:
// class AOBClientInfo*           oldClient                      (Parm, ZeroConstructor, IsPlainOldData)

void AWuxiaXOBPawn::OnClientInfoGet(class AOBClientInfo* oldClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuxiaXOBPawn.OnClientInfoGet");

	AWuxiaXOBPawn_OnClientInfoGet_Params params;
	params.oldClient = oldClient;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuxiaXOBPawn.OnCameraViewUpdated
// (Final, Native, Public)
// Parameters:
// EObserveCameraType             oldType                        (Parm, ZeroConstructor, IsPlainOldData)

void AWuxiaXOBPawn::OnCameraViewUpdated(EObserveCameraType oldType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuxiaXOBPawn.OnCameraViewUpdated");

	AWuxiaXOBPawn_OnCameraViewUpdated_Params params;
	params.oldType = oldType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuxiaXOBPawn.GetOBClientInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AOBClientInfo*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AOBClientInfo* AWuxiaXOBPawn::GetOBClientInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuxiaXOBPawn.GetOBClientInfo");

	AWuxiaXOBPawn_GetOBClientInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuxiaXOBPawn.EnterTargteView_Target
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AWuXiaXCharacter*        ViewTarget                     (Parm, ZeroConstructor, IsPlainOldData)

void AWuxiaXOBPawn::EnterTargteView_Target(class AWuXiaXCharacter* ViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuxiaXOBPawn.EnterTargteView_Target");

	AWuxiaXOBPawn_EnterTargteView_Target_Params params;
	params.ViewTarget = ViewTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuxiaXOBPawn.EnterTargetVeiw
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EObserveCameraType             cam_type                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            targetid                       (Parm, ZeroConstructor, IsPlainOldData)

void AWuxiaXOBPawn::EnterTargetVeiw(EObserveCameraType cam_type, int targetid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuxiaXOBPawn.EnterTargetVeiw");

	AWuxiaXOBPawn_EnterTargetVeiw_Params params;
	params.cam_type = cam_type;
	params.targetid = targetid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuxiaXOBPawn.EnterNoneView
// (Final, Native, Public, BlueprintCallable)

void AWuxiaXOBPawn::EnterNoneView()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuxiaXOBPawn.EnterNoneView");

	AWuxiaXOBPawn_EnterNoneView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuxiaXOBPawn.EnterItemView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            itemWorldID                    (Parm, ZeroConstructor, IsPlainOldData)

void AWuxiaXOBPawn::EnterItemView(int itemWorldID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuxiaXOBPawn.EnterItemView");

	AWuxiaXOBPawn_EnterItemView_Params params;
	params.itemWorldID = itemWorldID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuxiaXOBPawn.EnterFreeView
// (Final, Native, Public, BlueprintCallable)

void AWuxiaXOBPawn::EnterFreeView()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuxiaXOBPawn.EnterFreeView");

	AWuxiaXOBPawn_EnterFreeView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuxiaXOBPawn.EnterDownView_Target
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AWuXiaXCharacter*        vierTarget                     (Parm, ZeroConstructor, IsPlainOldData)

void AWuxiaXOBPawn::EnterDownView_Target(class AWuXiaXCharacter* vierTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuxiaXOBPawn.EnterDownView_Target");

	AWuxiaXOBPawn_EnterDownView_Target_Params params;
	params.vierTarget = vierTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXPlayerController.TimeSyncStart
// (Final, Native, Public)

void AWuXiaXPlayerController::TimeSyncStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXPlayerController.TimeSyncStart");

	AWuXiaXPlayerController_TimeSyncStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXPlayerController.SetZeroCounter
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        StartTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXPlayerController::SetZeroCounter(int64_t StartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXPlayerController.SetZeroCounter");

	AWuXiaXPlayerController_SetZeroCounter_Params params;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXPlayerController.SetPVPGameTime
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        StartTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXPlayerController::SetPVPGameTime(int64_t StartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXPlayerController.SetPVPGameTime");

	AWuXiaXPlayerController_SetPVPGameTime_Params params;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXPlayerController.SetPlayerTeamStastics
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<struct FStasticsInfo>   reds                           (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// TArray<struct FStasticsInfo>   greens                         (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// TArray<struct FStasticsInfo>   blues                          (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AWuXiaXPlayerController::SetPlayerTeamStastics(TArray<struct FStasticsInfo> reds, TArray<struct FStasticsInfo> greens, TArray<struct FStasticsInfo> blues)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXPlayerController.SetPlayerTeamStastics");

	AWuXiaXPlayerController_SetPlayerTeamStastics_Params params;
	params.reds = reds;
	params.greens = greens;
	params.blues = blues;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXPlayerController.Server_StartPing
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int64_t                        index                          (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Time                           (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXPlayerController::Server_StartPing(int64_t index, int64_t Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXPlayerController.Server_StartPing");

	AWuXiaXPlayerController_Server_StartPing_Params params;
	params.index = index;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXPlayerController.InputAnyKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                    Key                            (Parm)

void AWuXiaXPlayerController::InputAnyKey(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXPlayerController.InputAnyKey");

	AWuXiaXPlayerController_InputAnyKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXPlayerController.GetKeyText
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AWuXiaXPlayerController::GetKeyText(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXPlayerController.GetKeyText");

	AWuXiaXPlayerController_GetKeyText_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WuXiaX.WuXiaXPlayerController.DeleteMark
// (Final, Native, Public, BlueprintCallable)

void AWuXiaXPlayerController::DeleteMark()
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXPlayerController.DeleteMark");

	AWuXiaXPlayerController_DeleteMark_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXPlayerController.DebugPrintTimeMS
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            sencond                        (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXPlayerController::DebugPrintTimeMS(int sencond)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXPlayerController.DebugPrintTimeMS");

	AWuXiaXPlayerController_DebugPrintTimeMS_Params params;
	params.sencond = sencond;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXPlayerController.ClientReportServerTime
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        index                          (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        cTime                          (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        sTime                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXPlayerController::ClientReportServerTime(int64_t index, int64_t cTime, int64_t sTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXPlayerController.ClientReportServerTime");

	AWuXiaXPlayerController_ClientReportServerTime_Params params;
	params.index = index;
	params.cTime = cTime;
	params.sTime = sTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXPlayerController.Client_UpdateKillLive
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            killnumber                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            livenumber                     (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXPlayerController::Client_UpdateKillLive(int killnumber, int livenumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXPlayerController.Client_UpdateKillLive");

	AWuXiaXPlayerController_Client_UpdateKillLive_Params params;
	params.killnumber = killnumber;
	params.livenumber = livenumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXPlayerController.Client_UpdateKill
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            killnumber                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            itemID                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXPlayerController::Client_UpdateKill(int killnumber, int itemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXPlayerController.Client_UpdateKill");

	AWuXiaXPlayerController_Client_UpdateKill_Params params;
	params.killnumber = killnumber;
	params.itemID = itemID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXPlayerController.Client_TeamPointInfo
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXPlayerController::Client_TeamPointInfo(int red, int blue, int green)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXPlayerController.Client_TeamPointInfo");

	AWuXiaXPlayerController_Client_TeamPointInfo_Params params;
	params.red = red;
	params.blue = blue;
	params.green = green;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXPlayerController.Client_SetResurrectionTime
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int64_t                        Time                           (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXPlayerController::Client_SetResurrectionTime(int64_t Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXPlayerController.Client_SetResurrectionTime");

	AWuXiaXPlayerController_Client_SetResurrectionTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXPlayerController.Client_ResourcesPointTeamChange
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            resourcesindex                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXPlayerController::Client_ResourcesPointTeamChange(int resourcesindex, int TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXPlayerController.Client_ResourcesPointTeamChange");

	AWuXiaXPlayerController_Client_ResourcesPointTeamChange_Params params;
	params.resourcesindex = resourcesindex;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXPlayerState.Mul_RemovePlayerAnimus
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int64_t                        player_list                    (Parm, ZeroConstructor, IsPlainOldData)

void AWuXiaXPlayerState::Mul_RemovePlayerAnimus(int64_t player_list)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXPlayerState.Mul_RemovePlayerAnimus");

	AWuXiaXPlayerState_Mul_RemovePlayerAnimus_Params params;
	params.player_list = player_list;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WuXiaX.WuXiaXPlayerState.Mul_PlayerAnimus
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// TMap<int64_t, int64_t>         player_list                    (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AWuXiaXPlayerState::Mul_PlayerAnimus(TMap<int64_t, int64_t> player_list)
{
	static auto fn = UObject::FindObject<UFunction>("Function WuXiaX.WuXiaXPlayerState.Mul_PlayerAnimus");

	AWuXiaXPlayerState_Mul_PlayerAnimus_Params params;
	params.player_list = player_list;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
