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

// Function HallGongGaoListBox.HallGongGaoListBox_C.AppendGongGao
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Info                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UHallGongGaoListBox_C::AppendGongGao(const struct FText& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function HallGongGaoListBox.HallGongGaoListBox_C.AppendGongGao");

	UHallGongGaoListBox_C_AppendGongGao_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HallGongGaoListBox.HallGongGaoListBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHallGongGaoListBox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HallGongGaoListBox.HallGongGaoListBox_C.Construct");

	UHallGongGaoListBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HallGongGaoListBox.HallGongGaoListBox_C.ExecuteUbergraph_HallGongGaoListBox
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHallGongGaoListBox_C::ExecuteUbergraph_HallGongGaoListBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HallGongGaoListBox.HallGongGaoListBox_C.ExecuteUbergraph_HallGongGaoListBox");

	UHallGongGaoListBox_C_ExecuteUbergraph_HallGongGaoListBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
