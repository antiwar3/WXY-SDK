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

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ResetPreviewState
struct UPlayerConfigItemWidget_C_ResetPreviewState_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SetSkinFunc
struct UPlayerConfigItemWidget_C_SetSkinFunc_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkinId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture2D;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SingleEquipItemToggle
struct UPlayerConfigItemWidget_C_SingleEquipItemToggle_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBagType                                           bagtype;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.GetSkinBox
struct UPlayerConfigItemWidget_C_GetSkinBox_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UScrollBox*                                  RetBox;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SkinRemove
struct UPlayerConfigItemWidget_C_SkinRemove_Params
{
	int                                                SkinId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.AppendSkin
struct UPlayerConfigItemWidget_C_AppendSkin_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.AppendItem
struct UPlayerConfigItemWidget_C_AppendItem_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.CheckPreview
struct UPlayerConfigItemWidget_C_CheckPreview_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.GetPreviewArray
struct UPlayerConfigItemWidget_C_GetPreviewArray_Params
{
	TArray<int>                                        RetArray;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ResetPreview
struct UPlayerConfigItemWidget_C_ResetPreview_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Preview;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SetSkinToggle
struct UPlayerConfigItemWidget_C_SetSkinToggle_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkinId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.CreateSkin
struct UPlayerConfigItemWidget_C_CreateSkin_Params
{
	int                                                SkinId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESexType                                           sex;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.GetSkinWidgetByType
struct UPlayerConfigItemWidget_C_GetSkinWidgetByType_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkinWidget_C*                               SkinWidget;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ResetEquipToNet
struct UPlayerConfigItemWidget_C_ResetEquipToNet_Params
{
	EBagType                                           bagtype;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                newID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.EquipTypeToDistribution
struct UPlayerConfigItemWidget_C_EquipTypeToDistribution_Params
{
	EItemEquipType                                     equiptype;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESexType                                           sex;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UTexture2D*                                  Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__AllItemButton_K2Node_ComponentBoundEvent_495_OnButtonHoverEvent__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__AllItemButton_K2Node_ComponentBoundEvent_495_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__AllItemButton_K2Node_ComponentBoundEvent_508_OnButtonHoverEvent__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__AllItemButton_K2Node_ComponentBoundEvent_508_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__AllItemButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__AllItemButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.Construct
struct UPlayerConfigItemWidget_C_Construct_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__VeilItemButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__VeilItemButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__VeilItemButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__VeilItemButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__VeilItemButton_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__VeilItemButton_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__JacketItemButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__JacketItemButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__JacketItemButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__JacketItemButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__JacketItemButton_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__JacketItemButton_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ShawlItemButton_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__ShawlItemButton_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ShawlItemButton_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__ShawlItemButton_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ShawlItemButton_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__ShawlItemButton_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__TrousersItemButton_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__TrousersItemButton_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__TrousersItemButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__TrousersItemButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__TrousersItemButton_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__TrousersItemButton_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__BootsItemButton_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__BootsItemButton_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__BootsItemButton_K2Node_ComponentBoundEvent_43_OnButtonHoverEvent__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__BootsItemButton_K2Node_ComponentBoundEvent_43_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__BootsItemButton_K2Node_ComponentBoundEvent_44_OnButtonHoverEvent__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__BootsItemButton_K2Node_ComponentBoundEvent_44_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ResetAllEquipItemToggle
struct UPlayerConfigItemWidget_C_ResetAllEquipItemToggle_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__SkinButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__WeaponButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__WeaponButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.CreateItem
struct UPlayerConfigItemWidget_C_CreateItem_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESexType                                           sex;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ItemChange
struct UPlayerConfigItemWidget_C_ItemChange_Params
{
	int                                                item_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBagType                                           bag_type;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.EquipDetailShow
struct UPlayerConfigItemWidget_C_EquipDetailShow_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     detail;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ItemLevel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.InitEquip
struct UPlayerConfigItemWidget_C_InitEquip_Params
{
	TArray<int>                                        equips;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ClearAllItem
struct UPlayerConfigItemWidget_C_ClearAllItem_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ResetLanguageName
struct UPlayerConfigItemWidget_C_ResetLanguageName_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__Hat1SkinWidget_K2Node_ComponentBoundEvent_0_Onclick__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__Hat1SkinWidget_K2Node_ComponentBoundEvent_0_Onclick__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__Hat2SkinWidget_K2Node_ComponentBoundEvent_1_Onclick__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__Hat2SkinWidget_K2Node_ComponentBoundEvent_1_Onclick__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__Hat3SkinWidget_K2Node_ComponentBoundEvent_99_Onclick__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__Hat3SkinWidget_K2Node_ComponentBoundEvent_99_Onclick__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__BowSkinWidget_K2Node_ComponentBoundEvent_100_Onclick__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__BowSkinWidget_K2Node_ComponentBoundEvent_100_Onclick__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__CrossSkinWidget_K2Node_ComponentBoundEvent_137_Onclick__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__CrossSkinWidget_K2Node_ComponentBoundEvent_137_Onclick__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__HuoChongSkinWidget_K2Node_ComponentBoundEvent_174_Onclick__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__HuoChongSkinWidget_K2Node_ComponentBoundEvent_174_Onclick__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__SanYanChongSkinWidget_K2Node_ComponentBoundEvent_212_Onclick__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__SanYanChongSkinWidget_K2Node_ComponentBoundEvent_212_Onclick__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__DanDaoSkinWidget_K2Node_ComponentBoundEvent_251_Onclick__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__DanDaoSkinWidget_K2Node_ComponentBoundEvent_251_Onclick__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__DanJianSkinWidget_K2Node_ComponentBoundEvent_291_Onclick__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__DanJianSkinWidget_K2Node_ComponentBoundEvent_291_Onclick__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ShuangCiSkinWidget_K2Node_ComponentBoundEvent_332_Onclick__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__ShuangCiSkinWidget_K2Node_ComponentBoundEvent_332_Onclick__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ShuangJianSkinWidget_K2Node_ComponentBoundEvent_374_Onclick__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__ShuangJianSkinWidget_K2Node_ComponentBoundEvent_374_Onclick__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ChangDaoSkinWidget_K2Node_ComponentBoundEvent_417_Onclick__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__ChangDaoSkinWidget_K2Node_ComponentBoundEvent_417_Onclick__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ChangJianSkinWidget_K2Node_ComponentBoundEvent_461_Onclick__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__ChangJianSkinWidget_K2Node_ComponentBoundEvent_461_Onclick__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ZhongJianSkinWidget_K2Node_ComponentBoundEvent_507_Onclick__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__ZhongJianSkinWidget_K2Node_ComponentBoundEvent_507_Onclick__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ChangQiangSkinWidget_K2Node_ComponentBoundEvent_554_Onclick__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__ChangQiangSkinWidget_K2Node_ComponentBoundEvent_554_Onclick__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SetSkinByPlayer
struct UPlayerConfigItemWidget_C_SetSkinByPlayer_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkinId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.OnclickSkinChild
struct UPlayerConfigItemWidget_C_OnclickSkinChild_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SetSkinTypePreviewState
struct UPlayerConfigItemWidget_C_SetSkinTypePreviewState_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ShowSkinDetail
struct UPlayerConfigItemWidget_C_ShowSkinDetail_Params
{
	int                                                SkinId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.RemoveItem
struct UPlayerConfigItemWidget_C_RemoveItem_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SkinRemind
struct UPlayerConfigItemWidget_C_SkinRemind_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__AllEquipBoxWidget_K2Node_ComponentBoundEvent_0_TextRemind__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__AllEquipBoxWidget_K2Node_ComponentBoundEvent_0_TextRemind__DelegateSignature_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__VeilBoxWidget_K2Node_ComponentBoundEvent_98_TextRemind__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__VeilBoxWidget_K2Node_ComponentBoundEvent_98_TextRemind__DelegateSignature_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__JacketBoxWidget_K2Node_ComponentBoundEvent_166_TextRemind__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__JacketBoxWidget_K2Node_ComponentBoundEvent_166_TextRemind__DelegateSignature_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ShawlBoxWidget_K2Node_ComponentBoundEvent_235_TextRemind__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__ShawlBoxWidget_K2Node_ComponentBoundEvent_235_TextRemind__DelegateSignature_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__TrousersBoxWidget_K2Node_ComponentBoundEvent_304_TextRemind__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__TrousersBoxWidget_K2Node_ComponentBoundEvent_304_TextRemind__DelegateSignature_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__BootsBoxWidget_K2Node_ComponentBoundEvent_444_TextRemind__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__BootsBoxWidget_K2Node_ComponentBoundEvent_444_TextRemind__DelegateSignature_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SetSkinByServer
struct UPlayerConfigItemWidget_C_SetSkinByServer_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkinId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.PreviewSkin
struct UPlayerConfigItemWidget_C_PreviewSkin_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsPreview;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ShowSkinTypeDetail
struct UPlayerConfigItemWidget_C_ShowSkinTypeDetail_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.PanelSwitch
struct UPlayerConfigItemWidget_C_PanelSwitch_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.GetNewSkin
struct UPlayerConfigItemWidget_C_GetNewSkin_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ShowButton_K2Node_ComponentBoundEvent_726_OnButtonClickedEvent__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__ShowButton_K2Node_ComponentBoundEvent_726_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ClearAllEquip
struct UPlayerConfigItemWidget_C_ClearAllEquip_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__AllEquipBoxWidget_K2Node_ComponentBoundEvent_2_EventSellItem__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__AllEquipBoxWidget_K2Node_ComponentBoundEvent_2_EventSellItem__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__VeilBoxWidget_K2Node_ComponentBoundEvent_12_EventSellItem__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__VeilBoxWidget_K2Node_ComponentBoundEvent_12_EventSellItem__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__JacketBoxWidget_K2Node_ComponentBoundEvent_88_EventSellItem__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__JacketBoxWidget_K2Node_ComponentBoundEvent_88_EventSellItem__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ShawlBoxWidget_K2Node_ComponentBoundEvent_151_EventSellItem__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__ShawlBoxWidget_K2Node_ComponentBoundEvent_151_EventSellItem__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__TrousersBoxWidget_K2Node_ComponentBoundEvent_213_EventSellItem__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__TrousersBoxWidget_K2Node_ComponentBoundEvent_213_EventSellItem__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__BootsBoxWidget_K2Node_ComponentBoundEvent_276_EventSellItem__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__BootsBoxWidget_K2Node_ComponentBoundEvent_276_EventSellItem__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SellSkin
struct UPlayerConfigItemWidget_C_SellSkin_Params
{
	int                                                SkinId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__BootsBoxWidget_K2Node_ComponentBoundEvent_842_TotalEquipItemChange__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__BootsBoxWidget_K2Node_ComponentBoundEvent_842_TotalEquipItemChange__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBagType                                           bagtype;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__TrousersBoxWidget_K2Node_ComponentBoundEvent_677_TotalEquipItemChange__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__TrousersBoxWidget_K2Node_ComponentBoundEvent_677_TotalEquipItemChange__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBagType                                           bagtype;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__ShawlBoxWidget_K2Node_ComponentBoundEvent_596_TotalEquipItemChange__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__ShawlBoxWidget_K2Node_ComponentBoundEvent_596_TotalEquipItemChange__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBagType                                           bagtype;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__JacketBoxWidget_K2Node_ComponentBoundEvent_513_TotalEquipItemChange__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__JacketBoxWidget_K2Node_ComponentBoundEvent_513_TotalEquipItemChange__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBagType                                           bagtype;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__VeilBoxWidget_K2Node_ComponentBoundEvent_429_TotalEquipItemChange__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__VeilBoxWidget_K2Node_ComponentBoundEvent_429_TotalEquipItemChange__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBagType                                           bagtype;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.BndEvt__AllEquipBoxWidget_K2Node_ComponentBoundEvent_1_SingleEquipItemChange__DelegateSignature
struct UPlayerConfigItemWidget_C_BndEvt__AllEquipBoxWidget_K2Node_ComponentBoundEvent_1_SingleEquipItemChange__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBagType                                           bagtype;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.ExecuteUbergraph_PlayerConfigItemWidget
struct UPlayerConfigItemWidget_C_ExecuteUbergraph_PlayerConfigItemWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.EventSellItem__DelegateSignature
struct UPlayerConfigItemWidget_C_EventSellItem__DelegateSignature_Params
{
	bool                                               IsItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SetReConstructCharState__DelegateSignature
struct UPlayerConfigItemWidget_C_SetReConstructCharState__DelegateSignature_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SetPlayerCapturePreview__DelegateSignature
struct UPlayerConfigItemWidget_C_SetPlayerCapturePreview__DelegateSignature_Params
{
	EPreviewType                                       Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkinId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.PreviewIndexChange__DelegateSignature
struct UPlayerConfigItemWidget_C_PreviewIndexChange__DelegateSignature_Params
{
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.NewSkinChange__DelegateSignature
struct UPlayerConfigItemWidget_C_NewSkinChange__DelegateSignature_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkinId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.OldSkinChange__DelegateSignature
struct UPlayerConfigItemWidget_C_OldSkinChange__DelegateSignature_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkinId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.EquipItemChange__DelegateSignature
struct UPlayerConfigItemWidget_C_EquipItemChange__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerConfigItemWidget.PlayerConfigItemWidget_C.SendRemind__DelegateSignature
struct UPlayerConfigItemWidget_C_SendRemind__DelegateSignature_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
