#pragma once

// Name: Sq, Version: b21


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum MultiPackerRuntime.EFreeRectChoiceHeuristic
enum class EFreeRectChoiceHeuristic : uint8_t
{
	EFreeRectChoiceHeuristic__EMCE_Option1 = 0,
	EFreeRectChoiceHeuristic__EMCE_Option2 = 1,
	EFreeRectChoiceHeuristic__EMCE_Option3 = 2,
	EFreeRectChoiceHeuristic__EMCE_Option4 = 3,
	EFreeRectChoiceHeuristic__EMCE_Option5 = 4,
	EFreeRectChoiceHeuristic__EMCE_MAX = 5,

};

// Enum MultiPackerRuntime.EChannelOutput
enum class EChannelOutput : uint8_t
{
	EChannelOutput__Channel_RGB    = 0,
	EChannelOutput__Channel_Red    = 1,
	EChannelOutput__Channel_Green  = 2,
	EChannelOutput__Channel_Blue   = 3,
	EChannelOutput__Channel_Alpha  = 4,
	EChannelOutput__Channel_RGBA   = 5,
	EChannelOutput__Channel_Red01  = 6,
	EChannelOutput__Channel_Red02  = 7,
	EChannelOutput__Channel_Red03  = 8,
	EChannelOutput__Channel_Green01 = 9,
	EChannelOutput__Channel_Green02 = 10,
	EChannelOutput__Channel_Green03 = 11,
	EChannelOutput__Channel_Blue01 = 12,
	EChannelOutput__Channel_Blue02 = 13,
	EChannelOutput__Channel_Blue03 = 14,
	EChannelOutput__Channel_Alpha01 = 15,
	EChannelOutput__Channel_Alpha02 = 16,
	EChannelOutput__Channel_Alpha03 = 17,
	EChannelOutput__Channel_MAX    = 18,

};

// Enum MultiPackerRuntime.EChannelTextureSave
enum class EChannelTextureSave : uint8_t
{
	EChannelTextureSave__CS_Multiple = 0,
	EChannelTextureSave__CS_One    = 1,
	EChannelTextureSave__CS_Atlas  = 2,
	EChannelTextureSave__CS_OneSdf = 3,
	EChannelTextureSave__CS_MAX    = 4,

};

// Enum MultiPackerRuntime.EStateButton
enum class EStateButton : uint8_t
{
	EStateButton__EMCE_Option1     = 0,
	EStateButton__EMCE_Option2     = 1,
	EStateButton__EMCE_Option3     = 2,
	EStateButton__EMCE_Option4     = 3,
	EStateButton__EMCE_MAX         = 4,

};

// Enum MultiPackerRuntime.ETextureSizeOutput
enum class ETextureSizeOutput : uint8_t
{
	ETextureSizeOutput__EMCE_Option1 = 0,
	ETextureSizeOutput__EMCE_Option2 = 1,
	ETextureSizeOutput__EMCE_Option3 = 2,
	ETextureSizeOutput__EMCE_Option4 = 3,
	ETextureSizeOutput__EMCE_Option5 = 4,
	ETextureSizeOutput__EMCE_Option6 = 5,
	ETextureSizeOutput__EMCE_MAX   = 6,

};

// Enum MultiPackerRuntime.ENameMaterial
enum class ENameMaterial : uint8_t
{
	ENameMaterial__EMCE_Option1    = 0,
	ENameMaterial__EMCE_Option2    = 1,
	ENameMaterial__EMCE_Option3    = 2,
	ENameMaterial__EMCE_MAX        = 3,

};

// Enum MultiPackerRuntime.ENameTexture
enum class ENameTexture : uint8_t
{
	ENameTexture__EMCE_Option1     = 0,
	ENameTexture__EMCE_Option2     = 1,
	ENameTexture__EMCE_Option3     = 2,
	ENameTexture__EMCE_MAX         = 3,

};

// Enum MultiPackerRuntime.ESizeTexture
enum class ESizeTexture : uint8_t
{
	ESizeTexture__EMCE_Option1     = 0,
	ESizeTexture__EMCE_Option2     = 1,
	ESizeTexture__EMCE_MAX         = 2,

};

// Enum MultiPackerRuntime.EChannelSelectionInput
enum class EChannelSelectionInput : uint8_t
{
	EChannelSelectionInput__CSI_Blue = 0,
	EChannelSelectionInput__CSI_Green = 1,
	EChannelSelectionInput__CSI_Red = 2,
	EChannelSelectionInput__CSI_Alpha = 3,
	EChannelSelectionInput__CSI_RGB = 4,
	EChannelSelectionInput__CSI_RGBA = 5,
	EChannelSelectionInput__CSI_MAX = 6,

};

// Enum MultiPackerRuntime.EApplyMaterial
enum class EApplyMaterial : uint8_t
{
	EApplyMaterial__EMCE_Option1   = 0,
	EApplyMaterial__EMCE_Option2   = 1,
	EApplyMaterial__EMCE_Option3   = 2,
	EApplyMaterial__EMCE_MAX       = 3,

};

// Enum MultiPackerRuntime.ETextureSizeOutputPersonal
enum class ETextureSizeOutputPersonal : uint8_t
{
	ETextureSizeOutputPersonal__EMCE_Option1 = 0,
	ETextureSizeOutputPersonal__EMCE_Option2 = 1,
	ETextureSizeOutputPersonal__EMCE_Option3 = 2,
	ETextureSizeOutputPersonal__EMCE_Option4 = 3,
	ETextureSizeOutputPersonal__EMCE_Option5 = 4,
	ETextureSizeOutputPersonal__EMCE_Option6 = 5,
	ETextureSizeOutputPersonal__EMCE_Option7 = 6,
	ETextureSizeOutputPersonal__EMCE_Option8 = 7,
	ETextureSizeOutputPersonal__EMCE_Option9 = 8,
	ETextureSizeOutputPersonal__EMCE_MAX = 9,

};

// Enum MultiPackerRuntime.EMultiPackerImageLayer
enum class EMultiPackerImageLayer : uint8_t
{
	EMultiPackerImageLayer__EMCE_Option1 = 0,
	EMultiPackerImageLayer__EMCE_Option2 = 1,
	EMultiPackerImageLayer__EMCE_Option3 = 2,
	EMultiPackerImageLayer__EMCE_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MultiPackerRuntime.ChannelDatabase
// 0x0010
struct FChannelDatabase
{
	class UMultiPackerDataBase*                        Database;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Name;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct MultiPackerRuntime.RectSizePadding
// 0x0008
struct FRectSizePadding
{
	uint16_t                                           X;                                                         // 0x0000(0x0002) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           Y;                                                         // 0x0002(0x0002) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           Width;                                                     // 0x0004(0x0002) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           Height;                                                    // 0x0006(0x0002) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct MultiPackerRuntime.MaterialDataBinPack
// 0x0028
struct FMaterialDataBinPack
{
	int                                                Width;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Height;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                      RT_Material;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          Material;                                                  // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumPage;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRectSizePadding                            MaterialRect;                                              // 0x001C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct MultiPackerRuntime.TileDatabase
// 0x0050
struct FTileDatabase
{
	class UTexture*                                    TileTexture;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TileName;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Frame;                                                     // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EChannelOutput                                     ChannelTexture;                                            // 0x0014(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRectSizePadding                            SizeAndPadding;                                            // 0x0016(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               SDFNode;                                                   // 0x001E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MSDFNode;                                                  // 0x001F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Channel_vec;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Layer_vec;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                SizePadding_vec;                                           // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct MultiPackerRuntime.LayerDatabase
// 0x0058
struct FLayerDatabase
{
	struct FChannelDatabase                            Color;                                                     // 0x0000(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FChannelDatabase                            Alpha;                                                     // 0x0010(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               SDF;                                                       // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MSDF;                                                      // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Multiple;                                                  // 0x0022(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SDF_Interior;                                              // 0x0023(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SDF_Alpha;                                                 // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CanProcess_Interior;                                       // 0x0025(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CanProcess_Alpha;                                          // 0x0026(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseColor;                                                  // 0x0027(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Outline;                                                   // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ColorOutline;                                              // 0x002C(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ColorInterior;                                             // 0x003C(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EdgeSoftness;                                              // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutlineThresold;                                           // 0x0050(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SDFThresold;                                               // 0x0054(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct MultiPackerRuntime.TileThumbDatabase
// 0x0010
struct FTileThumbDatabase
{
	class UTexture*                                    TileTexture;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TileName;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct MultiPackerRuntime.TextureScalar
// 0x0014
struct FTextureScalar
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DefaultValue;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ValueChangesOnTime;                                        // 0x000C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxValue;                                                  // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct MultiPackerRuntime.TextureMaterial
// 0x0010
struct FTextureMaterial
{
	struct FName                                       TileName;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                                    TileTexture;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct MultiPackerRuntime.VectorMaterial
// 0x002C
struct FVectorMaterial
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                DefaultVectorValue;                                        // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ValueChangesOnTime;                                        // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                MaxVectorValue;                                            // 0x001C(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct MultiPackerRuntime.RectSize
// 0x0004
struct FRectSize
{
	uint16_t                                           Width;                                                     // 0x0000(0x0002) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           Height;                                                    // 0x0002(0x0002) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
