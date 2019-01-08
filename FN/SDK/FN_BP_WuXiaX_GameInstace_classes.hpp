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

// BlueprintGeneratedClass BP_WuXiaX_GameInstace.BP_WuXiaX_GameInstace_C
// 0x0030 (0x1E70 - 0x1E40)
class UBP_WuXiaX_GameInstace_C : public UWuXiaXGameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1E40(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FString                                     ConnectIp;                                                // 0x1E48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsCheckScreenMode;                                        // 0x1E58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1E59(0x0007) MISSED OFFSET
	TArray<TEnumAsByte<ENetworkFailure>>               Failure;                                                  // 0x1E60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WuXiaX_GameInstace.BP_WuXiaX_GameInstace_C");
		return ptr;
	}


	void HandleNetworkError(TEnumAsByte<ENetworkFailure>* FailureType, bool* bIsServer);
	void ShowReconnectFailed();
	void ExecuteUbergraph_BP_WuXiaX_GameInstace(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
