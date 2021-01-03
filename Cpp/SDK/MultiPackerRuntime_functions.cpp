// Name: S, Version: b

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function MultiPackerRuntime.MultiPackerRuntimeGraph.ValidationOnRuntime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerRuntimeGraph::ValidationOnRuntime(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerRuntimeGraph.ValidationOnRuntime");

	UMultiPackerRuntimeGraph_ValidationOnRuntime_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerRuntimeGraph.SetTextureRuntimeOnMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInstanceDynamic* MaterialToSet                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   Texture                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   Booleans                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SizePadding                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerRuntimeGraph::SetTextureRuntimeOnMaterial(class UObject* WorldContextObject, class UMaterialInterface* Material, class UMaterialInstanceDynamic* MaterialToSet, const struct FName& Texture, const struct FName& Booleans, const struct FName& SizePadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerRuntimeGraph.SetTextureRuntimeOnMaterial");

	UMultiPackerRuntimeGraph_SetTextureRuntimeOnMaterial_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Material = Material;
	params.MaterialToSet = MaterialToSet;
	params.Texture = Texture;
	params.Booleans = Booleans;
	params.SizePadding = SizePadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerRuntimeGraph.RuntimePreProcess
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerRuntimeGraph::RuntimePreProcess(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerRuntimeGraph.RuntimePreProcess");

	UMultiPackerRuntimeGraph_RuntimePreProcess_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerRuntimeGraph.RetrieveMaterialInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*  RT_Output                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMaterialDataBinPack    Database                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
void UMultiPackerRuntimeGraph::RetrieveMaterialInfo(class UObject* WorldContextObject, class UMaterialInterface* Material, class UTextureRenderTarget2D** RT_Output, struct FMaterialDataBinPack* Database)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerRuntimeGraph.RetrieveMaterialInfo");

	UMultiPackerRuntimeGraph_RetrieveMaterialInfo_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RT_Output != nullptr)
		*RT_Output = params.RT_Output;
	if (Database != nullptr)
		*Database = params.Database;

}


// Function MultiPackerRuntime.MultiPackerRuntimeGraph.GetTileTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*      MaterialToGet                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UMultiPackerRuntimeGraph::GetTileTexture(class UObject* WorldContextObject, class UMaterialInterface* MaterialToGet)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerRuntimeGraph.GetTileTexture");

	UMultiPackerRuntimeGraph_GetTileTexture_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MaterialToGet = MaterialToGet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MultiPackerRuntime.MultiPackerImage.SetDetailSDFThresold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InDetailSDFThresold            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerImage::SetDetailSDFThresold(float InDetailSDFThresold)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerImage.SetDetailSDFThresold");

	UMultiPackerImage_SetDetailSDFThresold_Params params;
	params.InDetailSDFThresold = InDetailSDFThresold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerImage.SetDetailOutlineThresold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InDetailOutlineThresold        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerImage::SetDetailOutlineThresold(float InDetailOutlineThresold)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerImage.SetDetailOutlineThresold");

	UMultiPackerImage_SetDetailOutlineThresold_Params params;
	params.InDetailOutlineThresold = InDetailOutlineThresold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerImage.SetDetailColorOutline
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InDetailColorOutline           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerImage::SetDetailColorOutline(const struct FLinearColor& InDetailColorOutline)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerImage.SetDetailColorOutline");

	UMultiPackerImage_SetDetailColorOutline_Params params;
	params.InDetailColorOutline = InDetailColorOutline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerImage.SetDetailColorInterior
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InDetailColorInterior          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerImage::SetDetailColorInterior(const struct FLinearColor& InDetailColorInterior)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerImage.SetDetailColorInterior");

	UMultiPackerImage_SetDetailColorInterior_Params params;
	params.InDetailColorInterior = InDetailColorInterior;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerImage.SetBaseSDFThresold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InBaseSDFThresold              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerImage::SetBaseSDFThresold(float InBaseSDFThresold)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerImage.SetBaseSDFThresold");

	UMultiPackerImage_SetBaseSDFThresold_Params params;
	params.InBaseSDFThresold = InBaseSDFThresold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerImage.SetBaseOutlineThresold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InBaseOutlineThresold          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerImage::SetBaseOutlineThresold(float InBaseOutlineThresold)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerImage.SetBaseOutlineThresold");

	UMultiPackerImage_SetBaseOutlineThresold_Params params;
	params.InBaseOutlineThresold = InBaseOutlineThresold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerImage.SetBaseColorOutline
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InBaseColorOutline             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerImage::SetBaseColorOutline(const struct FLinearColor& InBaseColorOutline)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerImage.SetBaseColorOutline");

	UMultiPackerImage_SetBaseColorOutline_Params params;
	params.InBaseColorOutline = InBaseColorOutline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerImage.SetBaseColorInterior
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InBaseColorInterior            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerImage::SetBaseColorInterior(const struct FLinearColor& InBaseColorInterior)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerImage.SetBaseColorInterior");

	UMultiPackerImage_SetBaseColorInterior_Params params;
	params.InBaseColorInterior = InBaseColorInterior;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerImage.SetAdditionSDFThresold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InAdditionSDFThresold          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerImage::SetAdditionSDFThresold(float InAdditionSDFThresold)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerImage.SetAdditionSDFThresold");

	UMultiPackerImage_SetAdditionSDFThresold_Params params;
	params.InAdditionSDFThresold = InAdditionSDFThresold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerImage.SetAdditionOutlineThresold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InAdditionOutlineThresold      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerImage::SetAdditionOutlineThresold(float InAdditionOutlineThresold)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerImage.SetAdditionOutlineThresold");

	UMultiPackerImage_SetAdditionOutlineThresold_Params params;
	params.InAdditionOutlineThresold = InAdditionOutlineThresold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerImage.SetAdditionColorOutline
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InAdditionColorOutline         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerImage::SetAdditionColorOutline(const struct FLinearColor& InAdditionColorOutline)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerImage.SetAdditionColorOutline");

	UMultiPackerImage_SetAdditionColorOutline_Params params;
	params.InAdditionColorOutline = InAdditionColorOutline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerImage.SetAdditionColorInterior
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InAdditionColorInterior        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerImage::SetAdditionColorInterior(const struct FLinearColor& InAdditionColorInterior)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerImage.SetAdditionColorInterior");

	UMultiPackerImage_SetAdditionColorInterior_Params params;
	params.InAdditionColorInterior = InAdditionColorInterior;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerDataBase.GetTextureTile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   Key                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Size                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTextureRenderTarget2D* UMultiPackerDataBase::GetTextureTile(class UObject* WorldContextObject, const struct FName& Key, int Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerDataBase.GetTextureTile");

	UMultiPackerDataBase_GetTextureTile_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MultiPackerRuntime.MultiPackerDataBase.GetMaterialTile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Key                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceDynamic* UMultiPackerDataBase::GetMaterialTile(const struct FName& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerDataBase.GetMaterialTile");

	UMultiPackerDataBase_GetMaterialTile_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MultiPackerRuntime.MultiPackerDataBase.GetButtonStyle
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   KeyIcon                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   KeyBase                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   KeySelected                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Size                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            Color_Base                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            Color_Icon_Normal              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            Color_Icon_Press               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            Color_Ic_Selected              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           selected                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FButtonStyle            ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FButtonStyle UMultiPackerDataBase::GetButtonStyle(class UObject* WorldContextObject, const struct FName& KeyIcon, const struct FName& KeyBase, const struct FName& KeySelected, int Size, const struct FLinearColor& Color_Base, const struct FLinearColor& Color_Icon_Normal, const struct FLinearColor& Color_Icon_Press, const struct FLinearColor& Color_Ic_Selected, bool selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerDataBase.GetButtonStyle");

	UMultiPackerDataBase_GetButtonStyle_Params params;
	params.WorldContextObject = WorldContextObject;
	params.KeyIcon = KeyIcon;
	params.KeyBase = KeyBase;
	params.KeySelected = KeySelected;
	params.Size = Size;
	params.Color_Base = Color_Base;
	params.Color_Icon_Normal = Color_Icon_Normal;
	params.Color_Icon_Press = Color_Icon_Press;
	params.Color_Ic_Selected = Color_Ic_Selected;
	params.selected = selected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MultiPackerRuntime.MultiPackerDataBase.GetButtonMaterialState
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   KeyIcon                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   KeyBase                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   KeySelected                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Size                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            Color_Base                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            Color_Icon_Normal              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            Color_Icon_Press               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            Color_Ic_Selected              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EStateButton                   EState                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           selected                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceDynamic* UMultiPackerDataBase::GetButtonMaterialState(class UObject* WorldContextObject, const struct FName& KeyIcon, const struct FName& KeyBase, const struct FName& KeySelected, int Size, const struct FLinearColor& Color_Base, const struct FLinearColor& Color_Icon_Normal, const struct FLinearColor& Color_Icon_Press, const struct FLinearColor& Color_Ic_Selected, EStateButton EState, bool selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerDataBase.GetButtonMaterialState");

	UMultiPackerDataBase_GetButtonMaterialState_Params params;
	params.WorldContextObject = WorldContextObject;
	params.KeyIcon = KeyIcon;
	params.KeyBase = KeyBase;
	params.KeySelected = KeySelected;
	params.Size = Size;
	params.Color_Base = Color_Base;
	params.Color_Icon_Normal = Color_Icon_Normal;
	params.Color_Icon_Press = Color_Icon_Press;
	params.Color_Ic_Selected = Color_Ic_Selected;
	params.EState = EState;
	params.selected = selected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MultiPackerRuntime.MultiPackerButton.SetPressedDetailSDFThresold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InDetailSDFThresold            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetPressedDetailSDFThresold(float InDetailSDFThresold)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetPressedDetailSDFThresold");

	UMultiPackerButton_SetPressedDetailSDFThresold_Params params;
	params.InDetailSDFThresold = InDetailSDFThresold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetPressedDetailOutlineThresold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InDetailOutlineThresold        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetPressedDetailOutlineThresold(float InDetailOutlineThresold)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetPressedDetailOutlineThresold");

	UMultiPackerButton_SetPressedDetailOutlineThresold_Params params;
	params.InDetailOutlineThresold = InDetailOutlineThresold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetPressedDetailColorOutline
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InDetailColorOutline           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetPressedDetailColorOutline(const struct FLinearColor& InDetailColorOutline)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetPressedDetailColorOutline");

	UMultiPackerButton_SetPressedDetailColorOutline_Params params;
	params.InDetailColorOutline = InDetailColorOutline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetPressedDetailColorInterior
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InDetailColorInterior          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetPressedDetailColorInterior(const struct FLinearColor& InDetailColorInterior)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetPressedDetailColorInterior");

	UMultiPackerButton_SetPressedDetailColorInterior_Params params;
	params.InDetailColorInterior = InDetailColorInterior;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetPressedBaseSDFThresold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InBaseSDFThresold              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetPressedBaseSDFThresold(float InBaseSDFThresold)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetPressedBaseSDFThresold");

	UMultiPackerButton_SetPressedBaseSDFThresold_Params params;
	params.InBaseSDFThresold = InBaseSDFThresold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetPressedBaseOutlineThresold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InBaseOutlineThresold          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetPressedBaseOutlineThresold(float InBaseOutlineThresold)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetPressedBaseOutlineThresold");

	UMultiPackerButton_SetPressedBaseOutlineThresold_Params params;
	params.InBaseOutlineThresold = InBaseOutlineThresold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetPressedBaseColorOutline
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InBaseColorOutline             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetPressedBaseColorOutline(const struct FLinearColor& InBaseColorOutline)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetPressedBaseColorOutline");

	UMultiPackerButton_SetPressedBaseColorOutline_Params params;
	params.InBaseColorOutline = InBaseColorOutline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetPressedBaseColorInterior
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InBaseColorInterior            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetPressedBaseColorInterior(const struct FLinearColor& InBaseColorInterior)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetPressedBaseColorInterior");

	UMultiPackerButton_SetPressedBaseColorInterior_Params params;
	params.InBaseColorInterior = InBaseColorInterior;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetPressedAdditionSDFThresold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InAdditionSDFThresold          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetPressedAdditionSDFThresold(float InAdditionSDFThresold)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetPressedAdditionSDFThresold");

	UMultiPackerButton_SetPressedAdditionSDFThresold_Params params;
	params.InAdditionSDFThresold = InAdditionSDFThresold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetPressedAdditionOutlineThresold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InAdditionOutlineThresold      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetPressedAdditionOutlineThresold(float InAdditionOutlineThresold)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetPressedAdditionOutlineThresold");

	UMultiPackerButton_SetPressedAdditionOutlineThresold_Params params;
	params.InAdditionOutlineThresold = InAdditionOutlineThresold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetPressedAdditionColorOutline
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InAdditionColorOutline         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetPressedAdditionColorOutline(const struct FLinearColor& InAdditionColorOutline)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetPressedAdditionColorOutline");

	UMultiPackerButton_SetPressedAdditionColorOutline_Params params;
	params.InAdditionColorOutline = InAdditionColorOutline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetPressedAdditionColorInterior
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InAdditionColorInterior        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetPressedAdditionColorInterior(const struct FLinearColor& InAdditionColorInterior)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetPressedAdditionColorInterior");

	UMultiPackerButton_SetPressedAdditionColorInterior_Params params;
	params.InAdditionColorInterior = InAdditionColorInterior;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetNormalDetailSDFThresold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InDetailSDFThresold            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetNormalDetailSDFThresold(float InDetailSDFThresold)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetNormalDetailSDFThresold");

	UMultiPackerButton_SetNormalDetailSDFThresold_Params params;
	params.InDetailSDFThresold = InDetailSDFThresold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetNormalDetailOutlineThresold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InDetailOutlineThresold        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetNormalDetailOutlineThresold(float InDetailOutlineThresold)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetNormalDetailOutlineThresold");

	UMultiPackerButton_SetNormalDetailOutlineThresold_Params params;
	params.InDetailOutlineThresold = InDetailOutlineThresold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetNormalDetailColorOutline
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InDetailColorOutline           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetNormalDetailColorOutline(const struct FLinearColor& InDetailColorOutline)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetNormalDetailColorOutline");

	UMultiPackerButton_SetNormalDetailColorOutline_Params params;
	params.InDetailColorOutline = InDetailColorOutline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetNormalDetailColorInterior
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InDetailColorInterior          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetNormalDetailColorInterior(const struct FLinearColor& InDetailColorInterior)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetNormalDetailColorInterior");

	UMultiPackerButton_SetNormalDetailColorInterior_Params params;
	params.InDetailColorInterior = InDetailColorInterior;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetNormalBaseSDFThresold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InBaseSDFThresold              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetNormalBaseSDFThresold(float InBaseSDFThresold)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetNormalBaseSDFThresold");

	UMultiPackerButton_SetNormalBaseSDFThresold_Params params;
	params.InBaseSDFThresold = InBaseSDFThresold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetNormalBaseOutlineThresold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InBaseOutlineThresold          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetNormalBaseOutlineThresold(float InBaseOutlineThresold)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetNormalBaseOutlineThresold");

	UMultiPackerButton_SetNormalBaseOutlineThresold_Params params;
	params.InBaseOutlineThresold = InBaseOutlineThresold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetNormalBaseColorOutline
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InBaseColorOutline             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetNormalBaseColorOutline(const struct FLinearColor& InBaseColorOutline)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetNormalBaseColorOutline");

	UMultiPackerButton_SetNormalBaseColorOutline_Params params;
	params.InBaseColorOutline = InBaseColorOutline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetNormalBaseColorInterior
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InBaseColorInterior            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetNormalBaseColorInterior(const struct FLinearColor& InBaseColorInterior)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetNormalBaseColorInterior");

	UMultiPackerButton_SetNormalBaseColorInterior_Params params;
	params.InBaseColorInterior = InBaseColorInterior;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetNormalAdditionSDFThresold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InAdditionSDFThresold          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetNormalAdditionSDFThresold(float InAdditionSDFThresold)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetNormalAdditionSDFThresold");

	UMultiPackerButton_SetNormalAdditionSDFThresold_Params params;
	params.InAdditionSDFThresold = InAdditionSDFThresold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetNormalAdditionOutlineThresold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InAdditionOutlineThresold      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetNormalAdditionOutlineThresold(float InAdditionOutlineThresold)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetNormalAdditionOutlineThresold");

	UMultiPackerButton_SetNormalAdditionOutlineThresold_Params params;
	params.InAdditionOutlineThresold = InAdditionOutlineThresold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetNormalAdditionColorOutline
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InAdditionColorOutline         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetNormalAdditionColorOutline(const struct FLinearColor& InAdditionColorOutline)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetNormalAdditionColorOutline");

	UMultiPackerButton_SetNormalAdditionColorOutline_Params params;
	params.InAdditionColorOutline = InAdditionColorOutline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetNormalAdditionColorInterior
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InAdditionColorInterior        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetNormalAdditionColorInterior(const struct FLinearColor& InAdditionColorInterior)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetNormalAdditionColorInterior");

	UMultiPackerButton_SetNormalAdditionColorInterior_Params params;
	params.InAdditionColorInterior = InAdditionColorInterior;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetHoveredDetailSDFThresold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InDetailSDFThresold            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetHoveredDetailSDFThresold(float InDetailSDFThresold)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetHoveredDetailSDFThresold");

	UMultiPackerButton_SetHoveredDetailSDFThresold_Params params;
	params.InDetailSDFThresold = InDetailSDFThresold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetHoveredDetailOutlineThresold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InDetailOutlineThresold        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetHoveredDetailOutlineThresold(float InDetailOutlineThresold)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetHoveredDetailOutlineThresold");

	UMultiPackerButton_SetHoveredDetailOutlineThresold_Params params;
	params.InDetailOutlineThresold = InDetailOutlineThresold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetHoveredDetailColorOutline
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InDetailColorOutline           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetHoveredDetailColorOutline(const struct FLinearColor& InDetailColorOutline)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetHoveredDetailColorOutline");

	UMultiPackerButton_SetHoveredDetailColorOutline_Params params;
	params.InDetailColorOutline = InDetailColorOutline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetHoveredDetailColorInterior
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InDetailColorInterior          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetHoveredDetailColorInterior(const struct FLinearColor& InDetailColorInterior)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetHoveredDetailColorInterior");

	UMultiPackerButton_SetHoveredDetailColorInterior_Params params;
	params.InDetailColorInterior = InDetailColorInterior;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetHoveredBaseSDFThresold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InBaseSDFThresold              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetHoveredBaseSDFThresold(float InBaseSDFThresold)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetHoveredBaseSDFThresold");

	UMultiPackerButton_SetHoveredBaseSDFThresold_Params params;
	params.InBaseSDFThresold = InBaseSDFThresold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetHoveredBaseOutlineThresold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InBaseOutlineThresold          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetHoveredBaseOutlineThresold(float InBaseOutlineThresold)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetHoveredBaseOutlineThresold");

	UMultiPackerButton_SetHoveredBaseOutlineThresold_Params params;
	params.InBaseOutlineThresold = InBaseOutlineThresold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetHoveredBaseColorOutline
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InBaseColorOutline             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetHoveredBaseColorOutline(const struct FLinearColor& InBaseColorOutline)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetHoveredBaseColorOutline");

	UMultiPackerButton_SetHoveredBaseColorOutline_Params params;
	params.InBaseColorOutline = InBaseColorOutline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetHoveredBaseColorInterior
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InBaseColorInterior            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetHoveredBaseColorInterior(const struct FLinearColor& InBaseColorInterior)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetHoveredBaseColorInterior");

	UMultiPackerButton_SetHoveredBaseColorInterior_Params params;
	params.InBaseColorInterior = InBaseColorInterior;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetHoveredAdditionSDFThresold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InAdditionSDFThresold          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetHoveredAdditionSDFThresold(float InAdditionSDFThresold)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetHoveredAdditionSDFThresold");

	UMultiPackerButton_SetHoveredAdditionSDFThresold_Params params;
	params.InAdditionSDFThresold = InAdditionSDFThresold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetHoveredAdditionOutlineThresold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InAdditionOutlineThresold      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetHoveredAdditionOutlineThresold(float InAdditionOutlineThresold)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetHoveredAdditionOutlineThresold");

	UMultiPackerButton_SetHoveredAdditionOutlineThresold_Params params;
	params.InAdditionOutlineThresold = InAdditionOutlineThresold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetHoveredAdditionColorOutline
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InAdditionColorOutline         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetHoveredAdditionColorOutline(const struct FLinearColor& InAdditionColorOutline)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetHoveredAdditionColorOutline");

	UMultiPackerButton_SetHoveredAdditionColorOutline_Params params;
	params.InAdditionColorOutline = InAdditionColorOutline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetHoveredAdditionColorInterior
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InAdditionColorInterior        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetHoveredAdditionColorInterior(const struct FLinearColor& InAdditionColorInterior)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetHoveredAdditionColorInterior");

	UMultiPackerButton_SetHoveredAdditionColorInterior_Params params;
	params.InAdditionColorInterior = InAdditionColorInterior;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetDisabledDetailSDFThresold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InDetailSDFThresold            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetDisabledDetailSDFThresold(float InDetailSDFThresold)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetDisabledDetailSDFThresold");

	UMultiPackerButton_SetDisabledDetailSDFThresold_Params params;
	params.InDetailSDFThresold = InDetailSDFThresold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetDisabledDetailOutlineThresold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InDetailOutlineThresold        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetDisabledDetailOutlineThresold(float InDetailOutlineThresold)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetDisabledDetailOutlineThresold");

	UMultiPackerButton_SetDisabledDetailOutlineThresold_Params params;
	params.InDetailOutlineThresold = InDetailOutlineThresold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetDisabledDetailColorOutline
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InDetailColorOutline           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetDisabledDetailColorOutline(const struct FLinearColor& InDetailColorOutline)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetDisabledDetailColorOutline");

	UMultiPackerButton_SetDisabledDetailColorOutline_Params params;
	params.InDetailColorOutline = InDetailColorOutline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetDisabledDetailColorInterior
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InDetailColorInterior          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetDisabledDetailColorInterior(const struct FLinearColor& InDetailColorInterior)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetDisabledDetailColorInterior");

	UMultiPackerButton_SetDisabledDetailColorInterior_Params params;
	params.InDetailColorInterior = InDetailColorInterior;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetDisabledBaseSDFThresold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InBaseSDFThresold              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetDisabledBaseSDFThresold(float InBaseSDFThresold)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetDisabledBaseSDFThresold");

	UMultiPackerButton_SetDisabledBaseSDFThresold_Params params;
	params.InBaseSDFThresold = InBaseSDFThresold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetDisabledBaseOutlineThresold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InBaseOutlineThresold          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetDisabledBaseOutlineThresold(float InBaseOutlineThresold)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetDisabledBaseOutlineThresold");

	UMultiPackerButton_SetDisabledBaseOutlineThresold_Params params;
	params.InBaseOutlineThresold = InBaseOutlineThresold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetDisabledBaseColorOutline
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InBaseColorOutline             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetDisabledBaseColorOutline(const struct FLinearColor& InBaseColorOutline)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetDisabledBaseColorOutline");

	UMultiPackerButton_SetDisabledBaseColorOutline_Params params;
	params.InBaseColorOutline = InBaseColorOutline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetDisabledBaseColorInterior
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InBaseColorInterior            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetDisabledBaseColorInterior(const struct FLinearColor& InBaseColorInterior)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetDisabledBaseColorInterior");

	UMultiPackerButton_SetDisabledBaseColorInterior_Params params;
	params.InBaseColorInterior = InBaseColorInterior;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetDisabledAdditionSDFThresold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InAdditionSDFThresold          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetDisabledAdditionSDFThresold(float InAdditionSDFThresold)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetDisabledAdditionSDFThresold");

	UMultiPackerButton_SetDisabledAdditionSDFThresold_Params params;
	params.InAdditionSDFThresold = InAdditionSDFThresold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetDisabledAdditionOutlineThresold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InAdditionOutlineThresold      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetDisabledAdditionOutlineThresold(float InAdditionOutlineThresold)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetDisabledAdditionOutlineThresold");

	UMultiPackerButton_SetDisabledAdditionOutlineThresold_Params params;
	params.InAdditionOutlineThresold = InAdditionOutlineThresold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetDisabledAdditionColorOutline
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InAdditionColorOutline         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetDisabledAdditionColorOutline(const struct FLinearColor& InAdditionColorOutline)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetDisabledAdditionColorOutline");

	UMultiPackerButton_SetDisabledAdditionColorOutline_Params params;
	params.InAdditionColorOutline = InAdditionColorOutline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MultiPackerRuntime.MultiPackerButton.SetDisabledAdditionColorInterior
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InAdditionColorInterior        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiPackerButton::SetDisabledAdditionColorInterior(const struct FLinearColor& InAdditionColorInterior)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiPackerRuntime.MultiPackerButton.SetDisabledAdditionColorInterior");

	UMultiPackerButton_SetDisabledAdditionColorInterior_Params params;
	params.InAdditionColorInterior = InAdditionColorInterior;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
