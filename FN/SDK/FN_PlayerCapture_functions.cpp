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

// Function PlayerCapture.PlayerCapture_C.UpdateMeshByLoadType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerLoadType                Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APlayerCapture_C::UpdateMeshByLoadType(EPlayerLoadType Type, class USkeletalMeshComponent* MeshComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapture.PlayerCapture_C.UpdateMeshByLoadType");

	APlayerCapture_C_UpdateMeshByLoadType_Params params;
	params.Type = Type;
	params.MeshComp = MeshComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCapture.PlayerCapture_C.SetWeaponMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  PlayerComp                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USkeletalMeshComponent*  SelfComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APlayerCapture_C::SetWeaponMesh(class USkeletalMeshComponent* PlayerComp, class USkeletalMeshComponent* SelfComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapture.PlayerCapture_C.SetWeaponMesh");

	APlayerCapture_C_SetWeaponMesh_Params params;
	params.PlayerComp = PlayerComp;
	params.SelfComp = SelfComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCapture.PlayerCapture_C.HairUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerCapture_C::HairUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapture.PlayerCapture_C.HairUpdate");

	APlayerCapture_C_HairUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCapture.PlayerCapture_C.UpdateColor
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerCapture_C::UpdateColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapture.PlayerCapture_C.UpdateColor");

	APlayerCapture_C_UpdateColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCapture.PlayerCapture_C.HeadUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerCapture_C::HeadUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapture.PlayerCapture_C.HeadUpdate");

	APlayerCapture_C_HeadUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCapture.PlayerCapture_C.ResetMaterials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkinnedMeshComponent*   Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APlayerCapture_C::ResetMaterials(class USkinnedMeshComponent* Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapture.PlayerCapture_C.ResetMaterials");

	APlayerCapture_C_ResetMaterials_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCapture.PlayerCapture_C.UpdateRangeWeapobn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCapture_C::UpdateRangeWeapobn(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapture.PlayerCapture_C.UpdateRangeWeapobn");

	APlayerCapture_C_UpdateRangeWeapobn_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCapture.PlayerCapture_C.SetSkeletalMeshById
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCapture_C::SetSkeletalMeshById(int itemID, class USkeletalMeshComponent* MeshComp, bool* result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapture.PlayerCapture_C.SetSkeletalMeshById");

	APlayerCapture_C_SetSkeletalMeshById_Params params;
	params.itemID = itemID;
	params.MeshComp = MeshComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (result != nullptr)
		*result = params.result;
}


// Function PlayerCapture.PlayerCapture_C.SetStaticMeshById
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMeshComponent*    MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCapture_C::SetStaticMeshById(int itemID, class UStaticMeshComponent* MeshComp, bool* result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapture.PlayerCapture_C.SetStaticMeshById");

	APlayerCapture_C_SetStaticMeshById_Params params;
	params.itemID = itemID;
	params.MeshComp = MeshComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (result != nullptr)
		*result = params.result;
}


// Function PlayerCapture.PlayerCapture_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerCapture_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapture.PlayerCapture_C.Update");

	APlayerCapture_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCapture.PlayerCapture_C.UpdateWeaponMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            weaponindex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCapture_C::UpdateWeaponMesh(int weaponindex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapture.PlayerCapture_C.UpdateWeaponMesh");

	APlayerCapture_C_UpdateWeaponMesh_Params params;
	params.weaponindex = weaponindex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCapture.PlayerCapture_C.UpdateEquipMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemEquipType                 Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCapture_C::UpdateEquipMesh(EItemEquipType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapture.PlayerCapture_C.UpdateEquipMesh");

	APlayerCapture_C_UpdateEquipMesh_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCapture.PlayerCapture_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCapture_C::SetActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapture.PlayerCapture_C.SetActive");

	APlayerCapture_C_SetActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCapture.PlayerCapture_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerCapture_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapture.PlayerCapture_C.Init");

	APlayerCapture_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCapture.PlayerCapture_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerCapture_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapture.PlayerCapture_C.UserConstructionScript");

	APlayerCapture_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCapture.PlayerCapture_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APlayerCapture_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapture.PlayerCapture_C.ReceiveBeginPlay");

	APlayerCapture_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCapture.PlayerCapture_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCapture_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapture.PlayerCapture_C.ReceiveTick");

	APlayerCapture_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCapture.PlayerCapture_C.ItemChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBagType                       bagtype                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCapture_C::ItemChange(int ID, EBagType bagtype, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapture.PlayerCapture_C.ItemChange");

	APlayerCapture_C_ItemChange_Params params;
	params.ID = ID;
	params.bagtype = bagtype;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCapture.PlayerCapture_C.UpdateSex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESexType                       SexType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCapture_C::UpdateSex(ESexType SexType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapture.PlayerCapture_C.UpdateSex");

	APlayerCapture_C_UpdateSex_Params params;
	params.SexType = SexType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCapture.PlayerCapture_C.UpdateHair
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCapture_C::UpdateHair(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapture.PlayerCapture_C.UpdateHair");

	APlayerCapture_C_UpdateHair_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCapture.PlayerCapture_C.UpdateHead
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCapture_C::UpdateHead(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapture.PlayerCapture_C.UpdateHead");

	APlayerCapture_C_UpdateHead_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCapture.PlayerCapture_C.UpdateSkinColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCapture_C::UpdateSkinColor(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapture.PlayerCapture_C.UpdateSkinColor");

	APlayerCapture_C_UpdateSkinColor_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCapture.PlayerCapture_C.UpdateHairColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCapture_C::UpdateHairColor(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapture.PlayerCapture_C.UpdateHairColor");

	APlayerCapture_C_UpdateHairColor_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCapture.PlayerCapture_C.SetName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void APlayerCapture_C::SetName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapture.PlayerCapture_C.SetName");

	APlayerCapture_C_SetName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCapture.PlayerCapture_C.ConfirmMaster
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Master                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCapture_C::ConfirmMaster(int Master)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapture.PlayerCapture_C.ConfirmMaster");

	APlayerCapture_C_ConfirmMaster_Params params;
	params.Master = Master;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCapture.PlayerCapture_C.SetPlayerOnlineState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCapture_C::SetPlayerOnlineState(int State)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapture.PlayerCapture_C.SetPlayerOnlineState");

	APlayerCapture_C_SetPlayerOnlineState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCapture.PlayerCapture_C.SetPlayerReadyState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReadyState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCapture_C::SetPlayerReadyState(int ReadyState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapture.PlayerCapture_C.SetPlayerReadyState");

	APlayerCapture_C_SetPlayerReadyState_Params params;
	params.ReadyState = ReadyState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCapture.PlayerCapture_C.DelayShow
// (BlueprintCallable, BlueprintEvent)

void APlayerCapture_C::DelayShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapture.PlayerCapture_C.DelayShow");

	APlayerCapture_C_DelayShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCapture.PlayerCapture_C.SetTalk
// (BlueprintCallable, BlueprintEvent)

void APlayerCapture_C::SetTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapture.PlayerCapture_C.SetTalk");

	APlayerCapture_C_SetTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCapture.PlayerCapture_C.SetRoomState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCapture_C::SetRoomState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapture.PlayerCapture_C.SetRoomState");

	APlayerCapture_C_SetRoomState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCapture.PlayerCapture_C.ExecuteUbergraph_PlayerCapture
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCapture_C::ExecuteUbergraph_PlayerCapture(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapture.PlayerCapture_C.ExecuteUbergraph_PlayerCapture");

	APlayerCapture_C_ExecuteUbergraph_PlayerCapture_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
