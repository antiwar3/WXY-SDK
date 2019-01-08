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

// Function PlayerStandLocation.PlayerStandLocation_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerStandLocation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStandLocation.PlayerStandLocation_C.UserConstructionScript");

	APlayerStandLocation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
