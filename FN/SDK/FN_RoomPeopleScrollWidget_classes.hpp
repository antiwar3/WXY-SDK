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

// WidgetBlueprintGeneratedClass RoomPeopleScrollWidget.RoomPeopleScrollWidget_C
// 0x0030 (0x0248 - 0x0218)
class URoomPeopleScrollWidget_C : public URoomTeamUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                                  ScrollBox_1;                                              // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    UserSelect;                                               // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OperatePlayer;                                            // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RoomPeopleScrollWidget.RoomPeopleScrollWidget_C");
		return ptr;
	}


	void ClearAll();
	void GetPlayerNum(int* Num);
	void RemovePlayer(const struct FRoomUser& user);
	void CreatePlayer(const struct FRoomUser& user, int MasterId, bool IsMaster, class URoomPeoplePlayerWidget_C** OutPlayer);
	void RightClickPlayer(const struct FRoomUser& Player);
	void RoomUserOnclick(class URoomPeoplePlayerWidget_C* user);
	void ExecuteUbergraph_RoomPeopleScrollWidget(int EntryPoint);
	void OperatePlayer__DelegateSignature(const struct FRoomUser& user);
	void UserSelect__DelegateSignature(class URoomPeoplePlayerWidget_C* user);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
