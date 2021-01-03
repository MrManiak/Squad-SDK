#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function MultiPackerRuntime.MultiPackerRuntimeGraph.ValidationOnRuntime
struct UMultiPackerRuntimeGraph_ValidationOnRuntime_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerRuntimeGraph.SetTextureRuntimeOnMaterial
struct UMultiPackerRuntimeGraph_SetTextureRuntimeOnMaterial_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          Material;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    MaterialToSet;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Texture;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Booleans;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SizePadding;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerRuntimeGraph.RuntimePreProcess
struct UMultiPackerRuntimeGraph_RuntimePreProcess_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerRuntimeGraph.RetrieveMaterialInfo
struct UMultiPackerRuntimeGraph_RetrieveMaterialInfo_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          Material;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                      RT_Output;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMaterialDataBinPack                        Database;                                                  // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerRuntimeGraph.GetTileTexture
struct UMultiPackerRuntimeGraph_GetTileTexture_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          MaterialToGet;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerImage.SetDetailSDFThresold
struct UMultiPackerImage_SetDetailSDFThresold_Params
{
	float                                              InDetailSDFThresold;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerImage.SetDetailOutlineThresold
struct UMultiPackerImage_SetDetailOutlineThresold_Params
{
	float                                              InDetailOutlineThresold;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerImage.SetDetailColorOutline
struct UMultiPackerImage_SetDetailColorOutline_Params
{
	struct FLinearColor                                InDetailColorOutline;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerImage.SetDetailColorInterior
struct UMultiPackerImage_SetDetailColorInterior_Params
{
	struct FLinearColor                                InDetailColorInterior;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerImage.SetBaseSDFThresold
struct UMultiPackerImage_SetBaseSDFThresold_Params
{
	float                                              InBaseSDFThresold;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerImage.SetBaseOutlineThresold
struct UMultiPackerImage_SetBaseOutlineThresold_Params
{
	float                                              InBaseOutlineThresold;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerImage.SetBaseColorOutline
struct UMultiPackerImage_SetBaseColorOutline_Params
{
	struct FLinearColor                                InBaseColorOutline;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerImage.SetBaseColorInterior
struct UMultiPackerImage_SetBaseColorInterior_Params
{
	struct FLinearColor                                InBaseColorInterior;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerImage.SetAdditionSDFThresold
struct UMultiPackerImage_SetAdditionSDFThresold_Params
{
	float                                              InAdditionSDFThresold;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerImage.SetAdditionOutlineThresold
struct UMultiPackerImage_SetAdditionOutlineThresold_Params
{
	float                                              InAdditionOutlineThresold;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerImage.SetAdditionColorOutline
struct UMultiPackerImage_SetAdditionColorOutline_Params
{
	struct FLinearColor                                InAdditionColorOutline;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerImage.SetAdditionColorInterior
struct UMultiPackerImage_SetAdditionColorInterior_Params
{
	struct FLinearColor                                InAdditionColorInterior;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerDataBase.GetTextureTile
struct UMultiPackerDataBase_GetTextureTile_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Key;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Size;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerDataBase.GetMaterialTile
struct UMultiPackerDataBase_GetMaterialTile_Params
{
	struct FName                                       Key;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerDataBase.GetButtonStyle
struct UMultiPackerDataBase_GetButtonStyle_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       KeyIcon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       KeyBase;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       KeySelected;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Size;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color_Base;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color_Icon_Normal;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color_Icon_Press;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color_Ic_Selected;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               selected;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FButtonStyle                                ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerDataBase.GetButtonMaterialState
struct UMultiPackerDataBase_GetButtonMaterialState_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       KeyIcon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       KeyBase;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       KeySelected;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Size;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color_Base;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color_Icon_Normal;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color_Icon_Press;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color_Ic_Selected;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EStateButton                                       EState;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               selected;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetPressedDetailSDFThresold
struct UMultiPackerButton_SetPressedDetailSDFThresold_Params
{
	float                                              InDetailSDFThresold;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetPressedDetailOutlineThresold
struct UMultiPackerButton_SetPressedDetailOutlineThresold_Params
{
	float                                              InDetailOutlineThresold;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetPressedDetailColorOutline
struct UMultiPackerButton_SetPressedDetailColorOutline_Params
{
	struct FLinearColor                                InDetailColorOutline;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetPressedDetailColorInterior
struct UMultiPackerButton_SetPressedDetailColorInterior_Params
{
	struct FLinearColor                                InDetailColorInterior;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetPressedBaseSDFThresold
struct UMultiPackerButton_SetPressedBaseSDFThresold_Params
{
	float                                              InBaseSDFThresold;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetPressedBaseOutlineThresold
struct UMultiPackerButton_SetPressedBaseOutlineThresold_Params
{
	float                                              InBaseOutlineThresold;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetPressedBaseColorOutline
struct UMultiPackerButton_SetPressedBaseColorOutline_Params
{
	struct FLinearColor                                InBaseColorOutline;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetPressedBaseColorInterior
struct UMultiPackerButton_SetPressedBaseColorInterior_Params
{
	struct FLinearColor                                InBaseColorInterior;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetPressedAdditionSDFThresold
struct UMultiPackerButton_SetPressedAdditionSDFThresold_Params
{
	float                                              InAdditionSDFThresold;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetPressedAdditionOutlineThresold
struct UMultiPackerButton_SetPressedAdditionOutlineThresold_Params
{
	float                                              InAdditionOutlineThresold;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetPressedAdditionColorOutline
struct UMultiPackerButton_SetPressedAdditionColorOutline_Params
{
	struct FLinearColor                                InAdditionColorOutline;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetPressedAdditionColorInterior
struct UMultiPackerButton_SetPressedAdditionColorInterior_Params
{
	struct FLinearColor                                InAdditionColorInterior;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetNormalDetailSDFThresold
struct UMultiPackerButton_SetNormalDetailSDFThresold_Params
{
	float                                              InDetailSDFThresold;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetNormalDetailOutlineThresold
struct UMultiPackerButton_SetNormalDetailOutlineThresold_Params
{
	float                                              InDetailOutlineThresold;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetNormalDetailColorOutline
struct UMultiPackerButton_SetNormalDetailColorOutline_Params
{
	struct FLinearColor                                InDetailColorOutline;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetNormalDetailColorInterior
struct UMultiPackerButton_SetNormalDetailColorInterior_Params
{
	struct FLinearColor                                InDetailColorInterior;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetNormalBaseSDFThresold
struct UMultiPackerButton_SetNormalBaseSDFThresold_Params
{
	float                                              InBaseSDFThresold;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetNormalBaseOutlineThresold
struct UMultiPackerButton_SetNormalBaseOutlineThresold_Params
{
	float                                              InBaseOutlineThresold;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetNormalBaseColorOutline
struct UMultiPackerButton_SetNormalBaseColorOutline_Params
{
	struct FLinearColor                                InBaseColorOutline;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetNormalBaseColorInterior
struct UMultiPackerButton_SetNormalBaseColorInterior_Params
{
	struct FLinearColor                                InBaseColorInterior;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetNormalAdditionSDFThresold
struct UMultiPackerButton_SetNormalAdditionSDFThresold_Params
{
	float                                              InAdditionSDFThresold;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetNormalAdditionOutlineThresold
struct UMultiPackerButton_SetNormalAdditionOutlineThresold_Params
{
	float                                              InAdditionOutlineThresold;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetNormalAdditionColorOutline
struct UMultiPackerButton_SetNormalAdditionColorOutline_Params
{
	struct FLinearColor                                InAdditionColorOutline;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetNormalAdditionColorInterior
struct UMultiPackerButton_SetNormalAdditionColorInterior_Params
{
	struct FLinearColor                                InAdditionColorInterior;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetHoveredDetailSDFThresold
struct UMultiPackerButton_SetHoveredDetailSDFThresold_Params
{
	float                                              InDetailSDFThresold;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetHoveredDetailOutlineThresold
struct UMultiPackerButton_SetHoveredDetailOutlineThresold_Params
{
	float                                              InDetailOutlineThresold;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetHoveredDetailColorOutline
struct UMultiPackerButton_SetHoveredDetailColorOutline_Params
{
	struct FLinearColor                                InDetailColorOutline;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetHoveredDetailColorInterior
struct UMultiPackerButton_SetHoveredDetailColorInterior_Params
{
	struct FLinearColor                                InDetailColorInterior;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetHoveredBaseSDFThresold
struct UMultiPackerButton_SetHoveredBaseSDFThresold_Params
{
	float                                              InBaseSDFThresold;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetHoveredBaseOutlineThresold
struct UMultiPackerButton_SetHoveredBaseOutlineThresold_Params
{
	float                                              InBaseOutlineThresold;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetHoveredBaseColorOutline
struct UMultiPackerButton_SetHoveredBaseColorOutline_Params
{
	struct FLinearColor                                InBaseColorOutline;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetHoveredBaseColorInterior
struct UMultiPackerButton_SetHoveredBaseColorInterior_Params
{
	struct FLinearColor                                InBaseColorInterior;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetHoveredAdditionSDFThresold
struct UMultiPackerButton_SetHoveredAdditionSDFThresold_Params
{
	float                                              InAdditionSDFThresold;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetHoveredAdditionOutlineThresold
struct UMultiPackerButton_SetHoveredAdditionOutlineThresold_Params
{
	float                                              InAdditionOutlineThresold;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetHoveredAdditionColorOutline
struct UMultiPackerButton_SetHoveredAdditionColorOutline_Params
{
	struct FLinearColor                                InAdditionColorOutline;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetHoveredAdditionColorInterior
struct UMultiPackerButton_SetHoveredAdditionColorInterior_Params
{
	struct FLinearColor                                InAdditionColorInterior;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetDisabledDetailSDFThresold
struct UMultiPackerButton_SetDisabledDetailSDFThresold_Params
{
	float                                              InDetailSDFThresold;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetDisabledDetailOutlineThresold
struct UMultiPackerButton_SetDisabledDetailOutlineThresold_Params
{
	float                                              InDetailOutlineThresold;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetDisabledDetailColorOutline
struct UMultiPackerButton_SetDisabledDetailColorOutline_Params
{
	struct FLinearColor                                InDetailColorOutline;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetDisabledDetailColorInterior
struct UMultiPackerButton_SetDisabledDetailColorInterior_Params
{
	struct FLinearColor                                InDetailColorInterior;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetDisabledBaseSDFThresold
struct UMultiPackerButton_SetDisabledBaseSDFThresold_Params
{
	float                                              InBaseSDFThresold;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetDisabledBaseOutlineThresold
struct UMultiPackerButton_SetDisabledBaseOutlineThresold_Params
{
	float                                              InBaseOutlineThresold;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetDisabledBaseColorOutline
struct UMultiPackerButton_SetDisabledBaseColorOutline_Params
{
	struct FLinearColor                                InBaseColorOutline;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetDisabledBaseColorInterior
struct UMultiPackerButton_SetDisabledBaseColorInterior_Params
{
	struct FLinearColor                                InBaseColorInterior;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetDisabledAdditionSDFThresold
struct UMultiPackerButton_SetDisabledAdditionSDFThresold_Params
{
	float                                              InAdditionSDFThresold;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetDisabledAdditionOutlineThresold
struct UMultiPackerButton_SetDisabledAdditionOutlineThresold_Params
{
	float                                              InAdditionOutlineThresold;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetDisabledAdditionColorOutline
struct UMultiPackerButton_SetDisabledAdditionColorOutline_Params
{
	struct FLinearColor                                InAdditionColorOutline;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiPackerRuntime.MultiPackerButton.SetDisabledAdditionColorInterior
struct UMultiPackerButton_SetDisabledAdditionColorInterior_Params
{
	struct FLinearColor                                InAdditionColorInterior;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
