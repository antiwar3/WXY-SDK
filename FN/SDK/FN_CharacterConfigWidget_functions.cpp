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

// Function CharacterConfigWidget.CharacterConfigWidget_C.CheckNameValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCharacterConfigWidget_C::CheckNameValid(const struct FString& Name, bool* result)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.CheckNameValid");

	UCharacterConfigWidget_C_CheckNameValid_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (result != nullptr)
		*result = params.result;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.CreateColor
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EModelType*                    Type                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FLinearColor*           Color                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCharacterConfigWidget_C::CreateColor(int* ID, EModelType* Type, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.CreateColor");

	UCharacterConfigWidget_C_CreateColor_Params params;
	params.ID = ID;
	params.Type = Type;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.CreateModel
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESexType*                      sex_type                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// EModelType*                    model_type                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTexture2D**             normal_texture                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterConfigWidget_C::CreateModel(int* ID, ESexType* sex_type, EModelType* model_type, class UTexture2D** normal_texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.CreateModel");

	UCharacterConfigWidget_C_CreateModel_Params params;
	params.ID = ID;
	params.sex_type = sex_type;
	params.model_type = model_type;
	params.normal_texture = normal_texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__Male_Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCharacterConfigWidget_C::BndEvt__Male_Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__Male_Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");

	UCharacterConfigWidget_C_BndEvt__Male_Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__Female_Button_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCharacterConfigWidget_C::BndEvt__Female_Button_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__Female_Button_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");

	UCharacterConfigWidget_C_BndEvt__Female_Button_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.InitCharacterData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESexType                       sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FaceId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SkinColorId                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HiarId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HairColorId                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterConfigWidget_C::InitCharacterData(ESexType sex, int FaceId, int SkinColorId, int HiarId, int HairColorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.InitCharacterData");

	UCharacterConfigWidget_C_InitCharacterData_Params params;
	params.sex = sex;
	params.FaceId = FaceId;
	params.SkinColorId = SkinColorId;
	params.HiarId = HiarId;
	params.HairColorId = HairColorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCharacterConfigWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.Construct");

	UCharacterConfigWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.SetModelId
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESexType                       SexType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EModelType                     ModelType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterConfigWidget_C::SetModelId(ESexType SexType, EModelType ModelType, int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.SetModelId");

	UCharacterConfigWidget_C_SetModelId_Params params;
	params.SexType = SexType;
	params.ModelType = ModelType;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.SetColorId
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EModelType                     ModelType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterConfigWidget_C::SetColorId(EModelType ModelType, int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.SetColorId");

	UCharacterConfigWidget_C_SetColorId_Params params;
	params.ModelType = ModelType;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__ComeBackToHall_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCharacterConfigWidget_C::BndEvt__ComeBackToHall_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__ComeBackToHall_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");

	UCharacterConfigWidget_C_BndEvt__ComeBackToHall_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__PayToSurre_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCharacterConfigWidget_C::BndEvt__PayToSurre_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__PayToSurre_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UCharacterConfigWidget_C_BndEvt__PayToSurre_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.SwitchFace
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterConfigWidget_C::SwitchFace(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.SwitchFace");

	UCharacterConfigWidget_C_SwitchFace_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.SwitchHair
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterConfigWidget_C::SwitchHair(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.SwitchHair");

	UCharacterConfigWidget_C_SwitchHair_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__QuitGame_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCharacterConfigWidget_C::BndEvt__QuitGame_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__QuitGame_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature");

	UCharacterConfigWidget_C_BndEvt__QuitGame_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__SkinColorBoxWidget_K2Node_ComponentBoundEvent_481_SetColorId__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EModelType                     Model                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterConfigWidget_C::BndEvt__SkinColorBoxWidget_K2Node_ComponentBoundEvent_481_SetColorId__DelegateSignature(EModelType Model, int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__SkinColorBoxWidget_K2Node_ComponentBoundEvent_481_SetColorId__DelegateSignature");

	UCharacterConfigWidget_C_BndEvt__SkinColorBoxWidget_K2Node_ComponentBoundEvent_481_SetColorId__DelegateSignature_Params params;
	params.Model = Model;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__SkinColorBoxWidget_K2Node_ComponentBoundEvent_488_SkinColorIndex__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterConfigWidget_C::BndEvt__SkinColorBoxWidget_K2Node_ComponentBoundEvent_488_SkinColorIndex__DelegateSignature(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__SkinColorBoxWidget_K2Node_ComponentBoundEvent_488_SkinColorIndex__DelegateSignature");

	UCharacterConfigWidget_C_BndEvt__SkinColorBoxWidget_K2Node_ComponentBoundEvent_488_SkinColorIndex__DelegateSignature_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__HairColorBoxWidget_K2Node_ComponentBoundEvent_538_SetColorId__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EModelType                     Model                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterConfigWidget_C::BndEvt__HairColorBoxWidget_K2Node_ComponentBoundEvent_538_SetColorId__DelegateSignature(EModelType Model, int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__HairColorBoxWidget_K2Node_ComponentBoundEvent_538_SetColorId__DelegateSignature");

	UCharacterConfigWidget_C_BndEvt__HairColorBoxWidget_K2Node_ComponentBoundEvent_538_SetColorId__DelegateSignature_Params params;
	params.Model = Model;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__HairColorBoxWidget_K2Node_ComponentBoundEvent_566_HairColorIndex__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterConfigWidget_C::BndEvt__HairColorBoxWidget_K2Node_ComponentBoundEvent_566_HairColorIndex__DelegateSignature(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__HairColorBoxWidget_K2Node_ComponentBoundEvent_566_HairColorIndex__DelegateSignature");

	UCharacterConfigWidget_C_BndEvt__HairColorBoxWidget_K2Node_ComponentBoundEvent_566_HairColorIndex__DelegateSignature_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__MaleFaceModelBoxWidget_K2Node_ComponentBoundEvent_604_SetModelId__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESexType                       sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EModelType                     Model                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterConfigWidget_C::BndEvt__MaleFaceModelBoxWidget_K2Node_ComponentBoundEvent_604_SetModelId__DelegateSignature(ESexType sex, EModelType Model, int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__MaleFaceModelBoxWidget_K2Node_ComponentBoundEvent_604_SetModelId__DelegateSignature");

	UCharacterConfigWidget_C_BndEvt__MaleFaceModelBoxWidget_K2Node_ComponentBoundEvent_604_SetModelId__DelegateSignature_Params params;
	params.sex = sex;
	params.Model = Model;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__FemaleFaceModelBoxWidget_K2Node_ComponentBoundEvent_632_SetModelId__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESexType                       sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EModelType                     Model                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterConfigWidget_C::BndEvt__FemaleFaceModelBoxWidget_K2Node_ComponentBoundEvent_632_SetModelId__DelegateSignature(ESexType sex, EModelType Model, int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__FemaleFaceModelBoxWidget_K2Node_ComponentBoundEvent_632_SetModelId__DelegateSignature");

	UCharacterConfigWidget_C_BndEvt__FemaleFaceModelBoxWidget_K2Node_ComponentBoundEvent_632_SetModelId__DelegateSignature_Params params;
	params.sex = sex;
	params.Model = Model;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__MaleHairModelBoxWidget_K2Node_ComponentBoundEvent_661_SetModelId__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESexType                       sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EModelType                     Model                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterConfigWidget_C::BndEvt__MaleHairModelBoxWidget_K2Node_ComponentBoundEvent_661_SetModelId__DelegateSignature(ESexType sex, EModelType Model, int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__MaleHairModelBoxWidget_K2Node_ComponentBoundEvent_661_SetModelId__DelegateSignature");

	UCharacterConfigWidget_C_BndEvt__MaleHairModelBoxWidget_K2Node_ComponentBoundEvent_661_SetModelId__DelegateSignature_Params params;
	params.sex = sex;
	params.Model = Model;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__FemaleHairModelBoxWidget_K2Node_ComponentBoundEvent_691_SetModelId__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESexType                       sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EModelType                     Model                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterConfigWidget_C::BndEvt__FemaleHairModelBoxWidget_K2Node_ComponentBoundEvent_691_SetModelId__DelegateSignature(ESexType sex, EModelType Model, int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__FemaleHairModelBoxWidget_K2Node_ComponentBoundEvent_691_SetModelId__DelegateSignature");

	UCharacterConfigWidget_C_BndEvt__FemaleHairModelBoxWidget_K2Node_ComponentBoundEvent_691_SetModelId__DelegateSignature_Params params;
	params.sex = sex;
	params.Model = Model;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__MaleFaceModelBoxWidget_K2Node_ComponentBoundEvent_745_FaceIndex__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterConfigWidget_C::BndEvt__MaleFaceModelBoxWidget_K2Node_ComponentBoundEvent_745_FaceIndex__DelegateSignature(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__MaleFaceModelBoxWidget_K2Node_ComponentBoundEvent_745_FaceIndex__DelegateSignature");

	UCharacterConfigWidget_C_BndEvt__MaleFaceModelBoxWidget_K2Node_ComponentBoundEvent_745_FaceIndex__DelegateSignature_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__FemaleFaceModelBoxWidget_K2Node_ComponentBoundEvent_750_FaceIndex__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterConfigWidget_C::BndEvt__FemaleFaceModelBoxWidget_K2Node_ComponentBoundEvent_750_FaceIndex__DelegateSignature(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__FemaleFaceModelBoxWidget_K2Node_ComponentBoundEvent_750_FaceIndex__DelegateSignature");

	UCharacterConfigWidget_C_BndEvt__FemaleFaceModelBoxWidget_K2Node_ComponentBoundEvent_750_FaceIndex__DelegateSignature_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__MaleHairModelBoxWidget_K2Node_ComponentBoundEvent_780_HairIndex__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterConfigWidget_C::BndEvt__MaleHairModelBoxWidget_K2Node_ComponentBoundEvent_780_HairIndex__DelegateSignature(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__MaleHairModelBoxWidget_K2Node_ComponentBoundEvent_780_HairIndex__DelegateSignature");

	UCharacterConfigWidget_C_BndEvt__MaleHairModelBoxWidget_K2Node_ComponentBoundEvent_780_HairIndex__DelegateSignature_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__FemaleHairModelBoxWidget_K2Node_ComponentBoundEvent_810_HairIndex__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterConfigWidget_C::BndEvt__FemaleHairModelBoxWidget_K2Node_ComponentBoundEvent_810_HairIndex__DelegateSignature(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__FemaleHairModelBoxWidget_K2Node_ComponentBoundEvent_810_HairIndex__DelegateSignature");

	UCharacterConfigWidget_C_BndEvt__FemaleHairModelBoxWidget_K2Node_ComponentBoundEvent_810_HairIndex__DelegateSignature_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterConfigWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.PreConstruct");

	UCharacterConfigWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__ReverseName_K2Node_ComponentBoundEvent_1314_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCharacterConfigWidget_C::BndEvt__ReverseName_K2Node_ComponentBoundEvent_1314_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__ReverseName_K2Node_ComponentBoundEvent_1314_OnButtonClickedEvent__DelegateSignature");

	UCharacterConfigWidget_C_BndEvt__ReverseName_K2Node_ComponentBoundEvent_1314_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.InitName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UCharacterConfigWidget_C::InitName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.InitName");

	UCharacterConfigWidget_C_InitName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.UpdateMoney
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            money                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterConfigWidget_C::UpdateMoney(int money)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.UpdateMoney");

	UCharacterConfigWidget_C_UpdateMoney_Params params;
	params.money = money;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.CheckPlayerChange
// (BlueprintCallable, BlueprintEvent)

void UCharacterConfigWidget_C::CheckPlayerChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.CheckPlayerChange");

	UCharacterConfigWidget_C_CheckPlayerChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__NameTextBox_K2Node_ComponentBoundEvent_217_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCharacterConfigWidget_C::BndEvt__NameTextBox_K2Node_ComponentBoundEvent_217_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.BndEvt__NameTextBox_K2Node_ComponentBoundEvent_217_OnEditableTextBoxChangedEvent__DelegateSignature");

	UCharacterConfigWidget_C_BndEvt__NameTextBox_K2Node_ComponentBoundEvent_217_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.ResetCharShow
// (BlueprintCallable, BlueprintEvent)

void UCharacterConfigWidget_C::ResetCharShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.ResetCharShow");

	UCharacterConfigWidget_C_ResetCharShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.ReversePlayerName
// (BlueprintCallable, BlueprintEvent)

void UCharacterConfigWidget_C::ReversePlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.ReversePlayerName");

	UCharacterConfigWidget_C_ReversePlayerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.ExecuteUbergraph_CharacterConfigWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterConfigWidget_C::ExecuteUbergraph_CharacterConfigWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.ExecuteUbergraph_CharacterConfigWidget");

	UCharacterConfigWidget_C_ExecuteUbergraph_CharacterConfigWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.SendRemind__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Info                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UCharacterConfigWidget_C::SendRemind__DelegateSignature(const struct FText& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.SendRemind__DelegateSignature");

	UCharacterConfigWidget_C_SendRemind__DelegateSignature_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.UpdateHairColor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ColorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterConfigWidget_C::UpdateHairColor__DelegateSignature(int ColorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.UpdateHairColor__DelegateSignature");

	UCharacterConfigWidget_C_UpdateHairColor__DelegateSignature_Params params;
	params.ColorId = ColorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.UpdateSkinColor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ColorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterConfigWidget_C::UpdateSkinColor__DelegateSignature(int ColorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.UpdateSkinColor__DelegateSignature");

	UCharacterConfigWidget_C_UpdateSkinColor__DelegateSignature_Params params;
	params.ColorId = ColorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.UpdateHair__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            HairId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterConfigWidget_C::UpdateHair__DelegateSignature(int HairId)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.UpdateHair__DelegateSignature");

	UCharacterConfigWidget_C_UpdateHair__DelegateSignature_Params params;
	params.HairId = HairId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.UpdateHead__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FaceId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterConfigWidget_C::UpdateHead__DelegateSignature(int FaceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.UpdateHead__DelegateSignature");

	UCharacterConfigWidget_C_UpdateHead__DelegateSignature_Params params;
	params.FaceId = FaceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterConfigWidget.CharacterConfigWidget_C.UpdateSex__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESexType                       sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterConfigWidget_C::UpdateSex__DelegateSignature(ESexType sex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterConfigWidget.CharacterConfigWidget_C.UpdateSex__DelegateSignature");

	UCharacterConfigWidget_C_UpdateSex__DelegateSignature_Params params;
	params.sex = sex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
