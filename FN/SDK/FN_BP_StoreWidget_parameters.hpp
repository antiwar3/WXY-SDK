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

// Function BP_StoreWidget.BP_StoreWidget_C.CheckOpenBoxStill
struct UBP_StoreWidget_C_CheckOpenBoxStill_Params
{
};

// Function BP_StoreWidget.BP_StoreWidget_C.CheckHasBuyKey
struct UBP_StoreWidget_C_CheckHasBuyKey_Params
{
};

// Function BP_StoreWidget.BP_StoreWidget_C.SwitchToPreview
struct UBP_StoreWidget_C_SwitchToPreview_Params
{
};

// Function BP_StoreWidget.BP_StoreWidget_C.BuyBox
struct UBP_StoreWidget_C_BuyBox_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                price;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StoreWidget.BP_StoreWidget_C.GetKeyIcon
struct UBP_StoreWidget_C_GetKeyIcon_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StoreWidget.BP_StoreWidget_C.Construct
struct UBP_StoreWidget_C_Construct_Params
{
};

// Function BP_StoreWidget.BP_StoreWidget_C.CreateRandomBox
struct UBP_StoreWidget_C_CreateRandomBox_Params
{
	int*                                               item_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StoreWidget.BP_StoreWidget_C.CreateRandomBoxItem
struct UBP_StoreWidget_C_CreateRandomBoxItem_Params
{
	int*                                               ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               parent_id;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__Box_K2Node_ComponentBoundEvent_132_OnButtonClickedEvent__DelegateSignature
struct UBP_StoreWidget_C_BndEvt__Box_K2Node_ComponentBoundEvent_132_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__MyItem_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature
struct UBP_StoreWidget_C_BndEvt__MyItem_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__FixedLevel1Box_K2Node_ComponentBoundEvent_1_PreviewBox__DelegateSignature
struct UBP_StoreWidget_C_BndEvt__FixedLevel1Box_K2Node_ComponentBoundEvent_1_PreviewBox__DelegateSignature_Params
{
};

// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__FixedLevel2Box_K2Node_ComponentBoundEvent_2_BuyBox__DelegateSignature
struct UBP_StoreWidget_C_BndEvt__FixedLevel2Box_K2Node_ComponentBoundEvent_2_BuyBox__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                price;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__FixedLevel1Box_K2Node_ComponentBoundEvent_3_BuyBox__DelegateSignature
struct UBP_StoreWidget_C_BndEvt__FixedLevel1Box_K2Node_ComponentBoundEvent_3_BuyBox__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                price;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__RandomLevel1Box_K2Node_ComponentBoundEvent_5_PreviewBox__DelegateSignature
struct UBP_StoreWidget_C_BndEvt__RandomLevel1Box_K2Node_ComponentBoundEvent_5_PreviewBox__DelegateSignature_Params
{
};

// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__RandomLevel2Box_K2Node_ComponentBoundEvent_6_BuyBox__DelegateSignature
struct UBP_StoreWidget_C_BndEvt__RandomLevel2Box_K2Node_ComponentBoundEvent_6_BuyBox__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                price;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__RandomLevel1Box_K2Node_ComponentBoundEvent_7_BuyBox__DelegateSignature
struct UBP_StoreWidget_C_BndEvt__RandomLevel1Box_K2Node_ComponentBoundEvent_7_BuyBox__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                price;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__RandomLevel2Box_K2Node_ComponentBoundEvent_8_OnClose__DelegateSignature
struct UBP_StoreWidget_C_BndEvt__RandomLevel2Box_K2Node_ComponentBoundEvent_8_OnClose__DelegateSignature_Params
{
};

// Function BP_StoreWidget.BP_StoreWidget_C.SelectRandomBox
struct UBP_StoreWidget_C_SelectRandomBox_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StoreWidget.BP_StoreWidget_C.CreateOwnerItem
struct UBP_StoreWidget_C_CreateOwnerItem_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNeedKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StoreWidget.BP_StoreWidget_C.SelectOpenBox
struct UBP_StoreWidget_C_SelectOpenBox_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__OpenBoxBackGroundButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UBP_StoreWidget_C_BndEvt__OpenBoxBackGroundButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__Preview_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UBP_StoreWidget_C_BndEvt__Preview_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__ClosePreview_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UBP_StoreWidget_C_BndEvt__ClosePreview_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_StoreWidget.BP_StoreWidget_C.CreatePreviewBoxItem
struct UBP_StoreWidget_C_CreatePreviewBoxItem_Params
{
	int*                                               ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__SelfItemHorizontalBox_K2Node_ComponentBoundEvent_1_NoBoxItem__DelegateSignature
struct UBP_StoreWidget_C_BndEvt__SelfItemHorizontalBox_K2Node_ComponentBoundEvent_1_NoBoxItem__DelegateSignature_Params
{
};

// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__SelfItemHorizontalBox_K2Node_ComponentBoundEvent_2_RemoveBoxItem__DelegateSignature
struct UBP_StoreWidget_C_BndEvt__SelfItemHorizontalBox_K2Node_ComponentBoundEvent_2_RemoveBoxItem__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StoreWidget.BP_StoreWidget_C.UpdateMoney
struct UBP_StoreWidget_C_UpdateMoney_Params
{
	int                                                money;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StoreWidget.BP_StoreWidget_C.ClearGoods
struct UBP_StoreWidget_C_ClearGoods_Params
{
};

// Function BP_StoreWidget.BP_StoreWidget_C.CreateOwnerKey
struct UBP_StoreWidget_C_CreateOwnerKey_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__OpenBox_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UBP_StoreWidget_C_BndEvt__OpenBox_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_StoreWidget.BP_StoreWidget_C.InitBox
struct UBP_StoreWidget_C_InitBox_Params
{
	int                                                RandomBox;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FixedBox;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StoreWidget.BP_StoreWidget_C.ReCalculatePrice
struct UBP_StoreWidget_C_ReCalculatePrice_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Times;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StoreWidget.BP_StoreWidget_C.ResetLanguage
struct UBP_StoreWidget_C_ResetLanguage_Params
{
};

// Function BP_StoreWidget.BP_StoreWidget_C.ShowItemTips
struct UBP_StoreWidget_C_ShowItemTips_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StoreWidget.BP_StoreWidget_C.HideItemTips
struct UBP_StoreWidget_C_HideItemTips_Params
{
};

// Function BP_StoreWidget.BP_StoreWidget_C.Tick
struct UBP_StoreWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StoreWidget.BP_StoreWidget_C.CreateOwnerItemComplete
struct UBP_StoreWidget_C_CreateOwnerItemComplete_Params
{
};

// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__RandomLevel1Box_K2Node_ComponentBoundEvent_44_RemindText__DelegateSignature
struct UBP_StoreWidget_C_BndEvt__RandomLevel1Box_K2Node_ComponentBoundEvent_44_RemindText__DelegateSignature_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__FixedLevel1Box_K2Node_ComponentBoundEvent_45_RemindText__DelegateSignature
struct UBP_StoreWidget_C_BndEvt__FixedLevel1Box_K2Node_ComponentBoundEvent_45_RemindText__DelegateSignature_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__Level2Box_K2Node_ComponentBoundEvent_1_RemindText__DelegateSignature
struct UBP_StoreWidget_C_BndEvt__Level2Box_K2Node_ComponentBoundEvent_1_RemindText__DelegateSignature_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__Key_K2Node_ComponentBoundEvent_357_OnButtonClickedEvent__DelegateSignature
struct UBP_StoreWidget_C_BndEvt__Key_K2Node_ComponentBoundEvent_357_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_StoreWidget.BP_StoreWidget_C.CreateBuyKey
struct UBP_StoreWidget_C_CreateBuyKey_Params
{
	int*                                               ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               price_type;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             price;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StoreWidget.BP_StoreWidget_C.BuyKey
struct UBP_StoreWidget_C_BuyKey_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__JiHuoMa_K2Node_ComponentBoundEvent_407_OnButtonClickedEvent__DelegateSignature
struct UBP_StoreWidget_C_BndEvt__JiHuoMa_K2Node_ComponentBoundEvent_407_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__DuiHuan_K2Node_ComponentBoundEvent_94_OnButtonClickedEvent__DelegateSignature
struct UBP_StoreWidget_C_BndEvt__DuiHuan_K2Node_ComponentBoundEvent_94_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_StoreWidget.BP_StoreWidget_C.PanelSwitch
struct UBP_StoreWidget_C_PanelSwitch_Params
{
	int                                                index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__JiHuoMaInput_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UBP_StoreWidget_C_BndEvt__JiHuoMaInput_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StoreWidget.BP_StoreWidget_C.BndEvt__BoxDescript_K2Node_ComponentBoundEvent_1_MouseState__DelegateSignature
struct UBP_StoreWidget_C_BndEvt__BoxDescript_K2Node_ComponentBoundEvent_1_MouseState__DelegateSignature_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StoreWidget.BP_StoreWidget_C.ExecuteUbergraph_BP_StoreWidget
struct UBP_StoreWidget_C_ExecuteUbergraph_BP_StoreWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StoreWidget.BP_StoreWidget_C.JiHuoMaDuiHuan__DelegateSignature
struct UBP_StoreWidget_C_JiHuoMaDuiHuan__DelegateSignature_Params
{
};

// Function BP_StoreWidget.BP_StoreWidget_C.BuySelectKey__DelegateSignature
struct UBP_StoreWidget_C_BuySelectKey__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     descript;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UTexture2D*                                  icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StoreWidget.BP_StoreWidget_C.BuyKeyInfo__DelegateSignature
struct UBP_StoreWidget_C_BuyKeyInfo__DelegateSignature_Params
{
	class UTexture2D*                                  icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  OpenBoxIcon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  KeyIcon;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                KeyId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BoxId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StoreWidget.BP_StoreWidget_C.OpenBoxInfo__DelegateSignature
struct UBP_StoreWidget_C_OpenBoxInfo__DelegateSignature_Params
{
	class UTexture2D*                                  icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  OpenBoxIcon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  KeyIcon;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                KeyNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BoxId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNeedKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StoreWidget.BP_StoreWidget_C.BuyNewBox__DelegateSignature
struct UBP_StoreWidget_C_BuyNewBox__DelegateSignature_Params
{
	int                                                itemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StoreWidget.BP_StoreWidget_C.SendRemindText__DelegateSignature
struct UBP_StoreWidget_C_SendRemindText__DelegateSignature_Params
{
	struct FText                                       remind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
