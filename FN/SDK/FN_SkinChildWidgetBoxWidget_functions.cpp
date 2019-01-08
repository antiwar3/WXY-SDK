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

// Function SkinChildWidgetBoxWidget.SkinChildWidgetBoxWidget_C.CreateSkinChildWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SkinId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESexType                       sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkinChildWidget_C*      RetSkin                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USkinChildWidgetBoxWidget_C::CreateSkinChildWidget(int SkinId, int Type, class UTexture2D* icon, int Num, ESexType sex, class USkinChildWidget_C** RetSkin)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinChildWidgetBoxWidget.SkinChildWidgetBoxWidget_C.CreateSkinChildWidget");

	USkinChildWidgetBoxWidget_C_CreateSkinChildWidget_Params params;
	params.SkinId = SkinId;
	params.Type = Type;
	params.icon = icon;
	params.Num = Num;
	params.sex = sex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetSkin != nullptr)
		*RetSkin = params.RetSkin;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
