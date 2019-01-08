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

// Function RoomWidget.RoomWidget_C.CheckCanJoin
// (Public, BlueprintCallable, BlueprintEvent)

void URoomWidget_C::CheckCanJoin()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomWidget.RoomWidget_C.CheckCanJoin");

	URoomWidget_C_CheckCanJoin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomWidget.RoomWidget_C.GetTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URoomWidget_C::GetTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomWidget.RoomWidget_C.GetTime");

	URoomWidget_C_GetTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomWidget.RoomWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URoomWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomWidget.RoomWidget_C.Tick");

	URoomWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomWidget.RoomWidget_C.ResetLanguage
// (BlueprintCallable, BlueprintEvent)

void URoomWidget_C::ResetLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomWidget.RoomWidget_C.ResetLanguage");

	URoomWidget_C_ResetLanguage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomWidget.RoomWidget_C.SetInfo
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUIRoomInfo*            Info                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void URoomWidget_C::SetInfo(struct FUIRoomInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomWidget.RoomWidget_C.SetInfo");

	URoomWidget_C_SetInfo_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomWidget.RoomWidget_C.BndEvt__Join_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void URoomWidget_C::BndEvt__Join_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomWidget.RoomWidget_C.BndEvt__Join_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	URoomWidget_C_BndEvt__Join_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomWidget.RoomWidget_C.BndEvt__CreateRoom_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void URoomWidget_C::BndEvt__CreateRoom_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomWidget.RoomWidget_C.BndEvt__CreateRoom_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	URoomWidget_C_BndEvt__CreateRoom_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomWidget.RoomWidget_C.ExecuteUbergraph_RoomWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URoomWidget_C::ExecuteUbergraph_RoomWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomWidget.RoomWidget_C.ExecuteUbergraph_RoomWidget");

	URoomWidget_C_ExecuteUbergraph_RoomWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomWidget.RoomWidget_C.JoinRoom__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUIRoomInfo             room                           (BlueprintVisible, BlueprintReadOnly, Parm)

void URoomWidget_C::JoinRoom__DelegateSignature(const struct FUIRoomInfo& room)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomWidget.RoomWidget_C.JoinRoom__DelegateSignature");

	URoomWidget_C_JoinRoom__DelegateSignature_Params params;
	params.room = room;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomWidget.RoomWidget_C.Create__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void URoomWidget_C::Create__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomWidget.RoomWidget_C.Create__DelegateSignature");

	URoomWidget_C_Create__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
