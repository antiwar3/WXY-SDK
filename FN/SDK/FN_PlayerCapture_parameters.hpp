#pragma once

// Fortnite (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerCapture.PlayerCapture_C.UpdateMeshByLoadType
struct APlayerCapture_C_UpdateMeshByLoadType_Params
{
	EPlayerLoadType                                    Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      MeshComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerCapture.PlayerCapture_C.SetWeaponMesh
struct APlayerCapture_C_SetWeaponMesh_Params
{
	class USkeletalMeshComponent*                      PlayerComp;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SelfComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerCapture.PlayerCapture_C.HairUpdate
struct APlayerCapture_C_HairUpdate_Params
{
};

// Function PlayerCapture.PlayerCapture_C.UpdateColor
struct APlayerCapture_C_UpdateColor_Params
{
};

// Function PlayerCapture.PlayerCapture_C.HeadUpdate
struct APlayerCapture_C_HeadUpdate_Params
{
};

// Function PlayerCapture.PlayerCapture_C.ResetMaterials
struct APlayerCapture_C_ResetMaterials_Params
{
	class USkinnedMeshComponent*                       Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerCapture.PlayerCapture_C.UpdateRangeWeapobn
struct APlayerCapture_C_UpdateRangeWeapobn_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCapture.PlayerCapture_C.SetSkeletalMeshById
struct APlayerCapture_C_SetSkeletalMeshById_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      MeshComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCapture.PlayerCapture_C.SetStaticMeshById
struct APlayerCapture_C_SetStaticMeshById_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        MeshComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCapture.PlayerCapture_C.Update
struct APlayerCapture_C_Update_Params
{
};

// Function PlayerCapture.PlayerCapture_C.UpdateWeaponMesh
struct APlayerCapture_C_UpdateWeaponMesh_Params
{
	int                                                weaponindex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCapture.PlayerCapture_C.UpdateEquipMesh
struct APlayerCapture_C_UpdateEquipMesh_Params
{
	EItemEquipType                                     Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCapture.PlayerCapture_C.SetActive
struct APlayerCapture_C_SetActive_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCapture.PlayerCapture_C.Init
struct APlayerCapture_C_Init_Params
{
};

// Function PlayerCapture.PlayerCapture_C.UserConstructionScript
struct APlayerCapture_C_UserConstructionScript_Params
{
};

// Function PlayerCapture.PlayerCapture_C.ReceiveBeginPlay
struct APlayerCapture_C_ReceiveBeginPlay_Params
{
};

// Function PlayerCapture.PlayerCapture_C.ReceiveTick
struct APlayerCapture_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCapture.PlayerCapture_C.ItemChange
struct APlayerCapture_C_ItemChange_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBagType                                           bagtype;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCapture.PlayerCapture_C.UpdateSex
struct APlayerCapture_C_UpdateSex_Params
{
	ESexType                                           SexType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCapture.PlayerCapture_C.UpdateHair
struct APlayerCapture_C_UpdateHair_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCapture.PlayerCapture_C.UpdateHead
struct APlayerCapture_C_UpdateHead_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCapture.PlayerCapture_C.UpdateSkinColor
struct APlayerCapture_C_UpdateSkinColor_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCapture.PlayerCapture_C.UpdateHairColor
struct APlayerCapture_C_UpdateHairColor_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCapture.PlayerCapture_C.SetName
struct APlayerCapture_C_SetName_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PlayerCapture.PlayerCapture_C.ConfirmMaster
struct APlayerCapture_C_ConfirmMaster_Params
{
	int                                                Master;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCapture.PlayerCapture_C.SetPlayerOnlineState
struct APlayerCapture_C_SetPlayerOnlineState_Params
{
	int                                                State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCapture.PlayerCapture_C.SetPlayerReadyState
struct APlayerCapture_C_SetPlayerReadyState_Params
{
	int                                                ReadyState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCapture.PlayerCapture_C.DelayShow
struct APlayerCapture_C_DelayShow_Params
{
};

// Function PlayerCapture.PlayerCapture_C.SetTalk
struct APlayerCapture_C_SetTalk_Params
{
};

// Function PlayerCapture.PlayerCapture_C.SetRoomState
struct APlayerCapture_C_SetRoomState_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCapture.PlayerCapture_C.ExecuteUbergraph_PlayerCapture
struct APlayerCapture_C_ExecuteUbergraph_PlayerCapture_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
