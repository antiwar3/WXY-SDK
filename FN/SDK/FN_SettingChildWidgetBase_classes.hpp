#pragma once

// Fortnite (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass SettingChildWidgetBase.SettingChildWidgetBase_C
// 0x0050 (0x0258 - 0x0208)
class USettingChildWidgetBase_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               IsEditState;                                              // 0x0210(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0211(0x0007) MISSED OFFSET
	class UPanelWidget*                                Panel;                                                    // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUserSettingWidget*                          Parent;                                                   // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TEnumAsByte<EUserSettingLabel>                     LabelType;                                                // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0229(0x0003) MISSED OFFSET
	int                                                SortIndex;                                                // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    StartIntoWidget;                                          // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SwitchNextWidget;                                         // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               HorizontalState;                                          // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               VerticleState;                                            // 0x0251(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsRight;                                                  // 0x0252(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDown;                                                   // 0x0253(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentEditIndex;                                         // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SettingChildWidgetBase.SettingChildWidgetBase_C");
		return ptr;
	}


	void GetEditDirection(bool* IsForward);
	void SwitchOffset(int Append);
	void OnClick();
	void OutEdit();
	void StartEdit(bool IsForward);
	void SetVerticleState(bool State, bool IsDown);
	void SetHorizontalState(bool State, bool IsRight);
	void SetEditState(bool NewState);
	void ResetSetting();
	void ResetDefaultSetting();
	void SaveSetting();
	void SetParentPanel(class UPanelWidget* ParentPanel, class UUserSettingWidget* Parent);
	void OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void OnMouseLeave(struct FPointerEvent* MouseEvent);
	void ExecuteUbergraph_SettingChildWidgetBase(int EntryPoint);
	void SwitchNextWidget__DelegateSignature(TEnumAsByte<EUserSettingLabel> Label, int NextSortIndex, bool IsForward);
	void StartIntoWidget__DelegateSignature(class USettingChildWidgetBase_C* Widget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
