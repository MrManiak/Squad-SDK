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
// Classes
//---------------------------------------------------------------------------

// Class MultiPackerRuntime.MaxRectsBinPack
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UMaxRectsBinPack : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MultiPackerRuntime.MaxRectsBinPack");
		return ptr;
	}


};

// Class MultiPackerRuntime.MultiPacker
// 0x0100 (FullSize[0x0128] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_03AD - 0x0000 // Minimum to subtract -> (0002)
class UMultiPacker : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0002 PADDING_03AD, ETextureSizeOutput,                                                    TextureTileSizeOutput);                                    // 0x002A(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0003 PADDING_03AD, bool,                                                                  RectangleTiles);                                           // 0x002B(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0004 PADDING_03AD, EFreeRectChoiceHeuristic,                                              RectangleMethod);                                          // 0x002C(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0005 PADDING_03AD, ETextureSizeOutputPersonal,                                            OutputSizeX);                                              // 0x002D(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0006 PADDING_03AD, ETextureSizeOutputPersonal,                                            OutputSizeY);                                              // 0x002E(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_03AD, struct FVector2D,                                                      TilePadding);                                              // 0x0030(0x0008)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_03AD, EChannelTextureSave,                                                   ChannelMethod);                                            // 0x0038(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0011 PADDING_03AD, bool,                                                                  Alpha);                                                    // 0x0039(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_03AD, int,                                                                   TileSize);                                                 // 0x003C(0x0004)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_03AD, bool,                                                                  SaveMaterialCollection);                                   // 0x0040(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0019 PADDING_03AD, bool,                                                                  SaveDatabase);                                             // 0x0041(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_03AD, struct FDirectoryPath,                                                 TargetDirectory);                                          // 0x0048(0x0010)  (Edit, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_03AD, struct FString,                                                        TargetName);                                               // 0x0058(0x0010)  (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_03AD, bool,                                                                  EditPrefix);                                               // 0x0068(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0048 PADDING_03AD, struct FString,                                                        DatabasePrefix);                                           // 0x0070(0x0010)  (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_03AD, struct FString,                                                        TexturePrefix);                                            // 0x0080(0x0010)  (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0068 PADDING_03AD, struct FString,                                                        MaterialcollectionPrefix);                                 // 0x0090(0x0010)  (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0078 PADDING_03AD, bool,                                                                  EditTexture);                                              // 0x00A0(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0079 PADDING_03AD, TEnumAsByte<ETextureFilter>,                                           T_TextureFilter);                                          // 0x00A1(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x007A PADDING_03AD, bool,                                                                  Tex_SRGB);                                                 // 0x00A2(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x007B PADDING_03AD, TEnumAsByte<ETextureAddress>,                                          Tex_AddressX);                                             // 0x00A3(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x007C PADDING_03AD, TEnumAsByte<ETextureAddress>,                                          Tex_AddressY);                                             // 0x00A4(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x007D PADDING_03AD, TEnumAsByte<ETexturePowerOfTwoSetting>,                                Tex_Power);                                                // 0x00A5(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0080 PADDING_03AD, TArray<class UTexture2D*>,                                             TextureOutput);                                            // 0x00A8(0x0010)  (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0090 PADDING_03AD, class UMultiPackerDataBase*,                                           Database);                                                 // 0x00B8(0x0008)  (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0098 PADDING_03AD, class UMaterialParameterCollection*,                                   MaterialCollection);                                       // 0x00C0(0x0008)  (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_03AD, TMap<struct FName COMMA struct FTileDatabase>,                         TileMap);                                                  // 0x00C8(0x0050)  (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_03AD, TArray<class UTilePointer*>,                                           TilePointers);                                             // 0x0118(0x0010)  (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MultiPackerRuntime.MultiPacker");
		return ptr;
	}


};

// Class MultiPackerRuntime.MultiPackerBaseEnums
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UMultiPackerBaseEnums : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MultiPackerRuntime.MultiPackerBaseEnums");
		return ptr;
	}


};

// Class MultiPackerRuntime.MultiPackerButton
// 0x0710 (FullSize[0x0B28] - InheritedSize[0x0418])
// LastOffsetWithSize(0x0418)
#define PADDING_03B0 - 0x0000 // Minimum to subtract -> (0010)
class UMultiPackerButton : public UButton
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_03B0, EMultiPackerImageLayer,                                                TypeLayerNormal);                                          // 0x0428(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0011 PADDING_03B0, bool,                                                                  SetAsImage);                                               // 0x0429(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0012 PADDING_03B0, bool,                                                                  N_layer_2);                                                // 0x042A(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0013 PADDING_03B0, bool,                                                                  N_layer_3);                                                // 0x042B(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_03B0, bool,                                                                  N_layer_4);                                                // 0x042C(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_03B0, struct FLayerDatabase,                                                 N_LayerBase);                                              // 0x0430(0x0058)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0070 PADDING_03B0, struct FLayerDatabase,                                                 N_LayerAddition);                                          // 0x0488(0x0058)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_03B0, struct FLayerDatabase,                                                 N_LayerDetail);                                            // 0x04E0(0x0058)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0120 PADDING_03B0, EMultiPackerImageLayer,                                                TypeLayerHovered);                                         // 0x0538(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0121 PADDING_03B0, bool,                                                                  H_layer_2);                                                // 0x0539(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0122 PADDING_03B0, bool,                                                                  H_layer_3);                                                // 0x053A(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0123 PADDING_03B0, bool,                                                                  H_layer_4);                                                // 0x053B(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0128 PADDING_03B0, struct FLayerDatabase,                                                 H_LayerBase);                                              // 0x0540(0x0058)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0180 PADDING_03B0, struct FLayerDatabase,                                                 H_LayerAddition);                                          // 0x0598(0x0058)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01D8 PADDING_03B0, struct FLayerDatabase,                                                 H_LayerDetail);                                            // 0x05F0(0x0058)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0230 PADDING_03B0, EMultiPackerImageLayer,                                                TypeLayerPressed);                                         // 0x0648(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0231 PADDING_03B0, bool,                                                                  P_layer_2);                                                // 0x0649(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0232 PADDING_03B0, bool,                                                                  P_layer_3);                                                // 0x064A(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0233 PADDING_03B0, bool,                                                                  P_layer_4);                                                // 0x064B(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0238 PADDING_03B0, struct FLayerDatabase,                                                 P_LayerBase);                                              // 0x0650(0x0058)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0290 PADDING_03B0, struct FLayerDatabase,                                                 P_LayerAddition);                                          // 0x06A8(0x0058)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02E8 PADDING_03B0, struct FLayerDatabase,                                                 P_LayerDetail);                                            // 0x0700(0x0058)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0340 PADDING_03B0, bool,                                                                  SetDisabledStyle);                                         // 0x0758(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0341 PADDING_03B0, EMultiPackerImageLayer,                                                TypeLayerDisabled);                                        // 0x0759(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0342 PADDING_03B0, bool,                                                                  D_layer_2);                                                // 0x075A(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0343 PADDING_03B0, bool,                                                                  D_layer_3);                                                // 0x075B(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0344 PADDING_03B0, bool,                                                                  D_layer_4);                                                // 0x075C(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0348 PADDING_03B0, struct FLayerDatabase,                                                 D_LayerBase);                                              // 0x0760(0x0058)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x03A0 PADDING_03B0, struct FLayerDatabase,                                                 D_LayerAddition);                                          // 0x07B8(0x0058)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x03F8 PADDING_03B0, struct FLayerDatabase,                                                 D_LayerDetail);                                            // 0x0810(0x0058)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0470 PADDING_03B0, struct FLinearColor,                                                   NormalBaseColorOutline);                                   // 0x0888(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0480 PADDING_03B0, struct FLinearColor,                                                   NormalBaseColorInterior);                                  // 0x0898(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0490 PADDING_03B0, float,                                                                 NormalBaseOutlineThresold);                                // 0x08A8(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0494 PADDING_03B0, float,                                                                 NormalBaseSDFThresold);                                    // 0x08AC(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0498 PADDING_03B0, bool,                                                                  N_BaseStyleChanged);                                       // 0x08B0(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x04A0 PADDING_03B0, class UMultiPackerLayerDatabase*,                                      LayerNormalBaseStyle);                                     // 0x08B8(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x04A8 PADDING_03B0, struct FLinearColor,                                                   NormalAdditionColorOutline);                               // 0x08C0(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x04B8 PADDING_03B0, struct FLinearColor,                                                   NormalAdditionColorInterior);                              // 0x08D0(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x04C8 PADDING_03B0, float,                                                                 NormalAdditionOutlineThresold);                            // 0x08E0(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x04CC PADDING_03B0, float,                                                                 NormalAdditionSDFThresold);                                // 0x08E4(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x04D0 PADDING_03B0, bool,                                                                  N_AdditionStyleChanged);                                   // 0x08E8(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x04D8 PADDING_03B0, class UMultiPackerLayerDatabase*,                                      LayerNormalAdditionStyle);                                 // 0x08F0(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x04E0 PADDING_03B0, struct FLinearColor,                                                   NormalDetailColorOutline);                                 // 0x08F8(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x04F0 PADDING_03B0, struct FLinearColor,                                                   NormalDetailColorInterior);                                // 0x0908(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0500 PADDING_03B0, float,                                                                 NormalDetailOutlineThresold);                              // 0x0918(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0504 PADDING_03B0, float,                                                                 NormalDetailSDFThresold);                                  // 0x091C(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0508 PADDING_03B0, bool,                                                                  N_DetailStyleChanged);                                     // 0x0920(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0510 PADDING_03B0, class UMultiPackerLayerDatabase*,                                      LayerNormalDetailStyle);                                   // 0x0928(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0518 PADDING_03B0, struct FLinearColor,                                                   HoveredBaseColorOutline);                                  // 0x0930(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0528 PADDING_03B0, struct FLinearColor,                                                   HoveredBaseColorInterior);                                 // 0x0940(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0538 PADDING_03B0, float,                                                                 HoveredBaseOutlineThresold);                               // 0x0950(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x053C PADDING_03B0, float,                                                                 HoveredBaseSDFThresold);                                   // 0x0954(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0540 PADDING_03B0, bool,                                                                  H_BaseStyleChanged);                                       // 0x0958(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0548 PADDING_03B0, class UMultiPackerLayerDatabase*,                                      LayerHoveredBaseStyle);                                    // 0x0960(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0550 PADDING_03B0, struct FLinearColor,                                                   HoveredAdditionColorOutline);                              // 0x0968(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0560 PADDING_03B0, struct FLinearColor,                                                   HoveredAdditionColorInterior);                             // 0x0978(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0570 PADDING_03B0, float,                                                                 HoveredAdditionOutlineThresold);                           // 0x0988(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0574 PADDING_03B0, float,                                                                 HoveredAdditionSDFThresold);                               // 0x098C(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0578 PADDING_03B0, bool,                                                                  H_AdditionStyleChanged);                                   // 0x0990(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0580 PADDING_03B0, class UMultiPackerLayerDatabase*,                                      LayerHoveredAdditionStyle);                                // 0x0998(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0588 PADDING_03B0, struct FLinearColor,                                                   HoveredDetailColorOutline);                                // 0x09A0(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0598 PADDING_03B0, struct FLinearColor,                                                   HoveredDetailColorInterior);                               // 0x09B0(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05A8 PADDING_03B0, float,                                                                 HoveredDetailOutlineThresold);                             // 0x09C0(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05AC PADDING_03B0, float,                                                                 HoveredDetailSDFThresold);                                 // 0x09C4(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05B0 PADDING_03B0, bool,                                                                  H_DetailStyleChanged);                                     // 0x09C8(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05B8 PADDING_03B0, class UMultiPackerLayerDatabase*,                                      LayerHoveredDetailStyle);                                  // 0x09D0(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05C0 PADDING_03B0, struct FLinearColor,                                                   PressedBaseColorOutline);                                  // 0x09D8(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05D0 PADDING_03B0, struct FLinearColor,                                                   PressedBaseColorInterior);                                 // 0x09E8(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05E0 PADDING_03B0, float,                                                                 PressedBaseOutlineThresold);                               // 0x09F8(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05E4 PADDING_03B0, float,                                                                 PressedBaseSDFThresold);                                   // 0x09FC(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05E8 PADDING_03B0, bool,                                                                  P_BaseStyleChanged);                                       // 0x0A00(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05F0 PADDING_03B0, class UMultiPackerLayerDatabase*,                                      LayerPressedBaseStyle);                                    // 0x0A08(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x05F8 PADDING_03B0, struct FLinearColor,                                                   PressedAdditionColorOutline);                              // 0x0A10(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0608 PADDING_03B0, struct FLinearColor,                                                   PressedAdditionColorInterior);                             // 0x0A20(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0618 PADDING_03B0, float,                                                                 PressedAdditionOutlineThresold);                           // 0x0A30(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x061C PADDING_03B0, float,                                                                 PressedAdditionSDFThresold);                               // 0x0A34(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0620 PADDING_03B0, bool,                                                                  P_AdditionStyleChanged);                                   // 0x0A38(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0628 PADDING_03B0, class UMultiPackerLayerDatabase*,                                      LayerPressedAdditionStyle);                                // 0x0A40(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0630 PADDING_03B0, struct FLinearColor,                                                   PressedDetailColorOutline);                                // 0x0A48(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0640 PADDING_03B0, struct FLinearColor,                                                   PressedDetailColorInterior);                               // 0x0A58(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0650 PADDING_03B0, float,                                                                 PressedDetailOutlineThresold);                             // 0x0A68(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0654 PADDING_03B0, float,                                                                 PressedDetailSDFThresold);                                 // 0x0A6C(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0658 PADDING_03B0, bool,                                                                  P_DetailStyleChanged);                                     // 0x0A70(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0660 PADDING_03B0, class UMultiPackerLayerDatabase*,                                      LayerPressedDetailStyle);                                  // 0x0A78(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0668 PADDING_03B0, struct FLinearColor,                                                   DisabledBaseColorOutline);                                 // 0x0A80(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0678 PADDING_03B0, struct FLinearColor,                                                   DisabledBaseColorInterior);                                // 0x0A90(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0688 PADDING_03B0, float,                                                                 DisabledBaseOutlineThresold);                              // 0x0AA0(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x068C PADDING_03B0, float,                                                                 DisabledBaseSDFThresold);                                  // 0x0AA4(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0690 PADDING_03B0, bool,                                                                  D_BaseStyleChanged);                                       // 0x0AA8(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0698 PADDING_03B0, class UMultiPackerLayerDatabase*,                                      LayerDisabledBaseStyle);                                   // 0x0AB0(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x06A0 PADDING_03B0, struct FLinearColor,                                                   DisabledAdditionColorOutline);                             // 0x0AB8(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x06B0 PADDING_03B0, struct FLinearColor,                                                   DisabledAdditionColorInterior);                            // 0x0AC8(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x06C0 PADDING_03B0, float,                                                                 DisabledAdditionOutlineThresold);                          // 0x0AD8(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x06C4 PADDING_03B0, float,                                                                 DisabledAdditionSDFThresold);                              // 0x0ADC(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x06C8 PADDING_03B0, bool,                                                                  D_AdditionStyleChanged);                                   // 0x0AE0(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x06D0 PADDING_03B0, class UMultiPackerLayerDatabase*,                                      LayerDisabledAdditionStyle);                               // 0x0AE8(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x06D8 PADDING_03B0, struct FLinearColor,                                                   DisabledDetailColorOutline);                               // 0x0AF0(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x06E8 PADDING_03B0, struct FLinearColor,                                                   DisabledDetailColorInterior);                              // 0x0B00(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x06F8 PADDING_03B0, float,                                                                 DisabledDetailOutlineThresold);                            // 0x0B10(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x06FC PADDING_03B0, float,                                                                 DisabledDetailSDFThresold);                                // 0x0B14(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0700 PADDING_03B0, bool,                                                                  D_DetailStyleChanged);                                     // 0x0B18(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0708 PADDING_03B0, class UMultiPackerLayerDatabase*,                                      LayerDisabledDetailStyle);                                 // 0x0B20(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MultiPackerRuntime.MultiPackerButton");
		return ptr;
	}


	void SetPressedDetailSDFThresold(float InDetailSDFThresold);
	void SetPressedDetailOutlineThresold(float InDetailOutlineThresold);
	void SetPressedDetailColorOutline(const struct FLinearColor& InDetailColorOutline);
	void SetPressedDetailColorInterior(const struct FLinearColor& InDetailColorInterior);
	void SetPressedBaseSDFThresold(float InBaseSDFThresold);
	void SetPressedBaseOutlineThresold(float InBaseOutlineThresold);
	void SetPressedBaseColorOutline(const struct FLinearColor& InBaseColorOutline);
	void SetPressedBaseColorInterior(const struct FLinearColor& InBaseColorInterior);
	void SetPressedAdditionSDFThresold(float InAdditionSDFThresold);
	void SetPressedAdditionOutlineThresold(float InAdditionOutlineThresold);
	void SetPressedAdditionColorOutline(const struct FLinearColor& InAdditionColorOutline);
	void SetPressedAdditionColorInterior(const struct FLinearColor& InAdditionColorInterior);
	void SetNormalDetailSDFThresold(float InDetailSDFThresold);
	void SetNormalDetailOutlineThresold(float InDetailOutlineThresold);
	void SetNormalDetailColorOutline(const struct FLinearColor& InDetailColorOutline);
	void SetNormalDetailColorInterior(const struct FLinearColor& InDetailColorInterior);
	void SetNormalBaseSDFThresold(float InBaseSDFThresold);
	void SetNormalBaseOutlineThresold(float InBaseOutlineThresold);
	void SetNormalBaseColorOutline(const struct FLinearColor& InBaseColorOutline);
	void SetNormalBaseColorInterior(const struct FLinearColor& InBaseColorInterior);
	void SetNormalAdditionSDFThresold(float InAdditionSDFThresold);
	void SetNormalAdditionOutlineThresold(float InAdditionOutlineThresold);
	void SetNormalAdditionColorOutline(const struct FLinearColor& InAdditionColorOutline);
	void SetNormalAdditionColorInterior(const struct FLinearColor& InAdditionColorInterior);
	void SetHoveredDetailSDFThresold(float InDetailSDFThresold);
	void SetHoveredDetailOutlineThresold(float InDetailOutlineThresold);
	void SetHoveredDetailColorOutline(const struct FLinearColor& InDetailColorOutline);
	void SetHoveredDetailColorInterior(const struct FLinearColor& InDetailColorInterior);
	void SetHoveredBaseSDFThresold(float InBaseSDFThresold);
	void SetHoveredBaseOutlineThresold(float InBaseOutlineThresold);
	void SetHoveredBaseColorOutline(const struct FLinearColor& InBaseColorOutline);
	void SetHoveredBaseColorInterior(const struct FLinearColor& InBaseColorInterior);
	void SetHoveredAdditionSDFThresold(float InAdditionSDFThresold);
	void SetHoveredAdditionOutlineThresold(float InAdditionOutlineThresold);
	void SetHoveredAdditionColorOutline(const struct FLinearColor& InAdditionColorOutline);
	void SetHoveredAdditionColorInterior(const struct FLinearColor& InAdditionColorInterior);
	void SetDisabledDetailSDFThresold(float InDetailSDFThresold);
	void SetDisabledDetailOutlineThresold(float InDetailOutlineThresold);
	void SetDisabledDetailColorOutline(const struct FLinearColor& InDetailColorOutline);
	void SetDisabledDetailColorInterior(const struct FLinearColor& InDetailColorInterior);
	void SetDisabledBaseSDFThresold(float InBaseSDFThresold);
	void SetDisabledBaseOutlineThresold(float InBaseOutlineThresold);
	void SetDisabledBaseColorOutline(const struct FLinearColor& InBaseColorOutline);
	void SetDisabledBaseColorInterior(const struct FLinearColor& InBaseColorInterior);
	void SetDisabledAdditionSDFThresold(float InAdditionSDFThresold);
	void SetDisabledAdditionOutlineThresold(float InAdditionOutlineThresold);
	void SetDisabledAdditionColorOutline(const struct FLinearColor& InAdditionColorOutline);
	void SetDisabledAdditionColorInterior(const struct FLinearColor& InAdditionColorInterior);
};

// Class MultiPackerRuntime.MultiPackerDataBase
// 0x00A4 (FullSize[0x00CC] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_03B2 - 0x0000 // Minimum to subtract -> (0000)
class UMultiPackerDataBase : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_03B2, class UScriptStruct*,                                                  RowStruct);                                                // 0x0028(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_03B2, int,                                                                   VTile);                                                    // 0x0030(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000C PADDING_03B2, int,                                                                   HTile);                                                    // 0x0034(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_03B2, bool,                                                                  Do_SDF);                                                   // 0x0038(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0011 PADDING_03B2, bool,                                                                  BinPack);                                                  // 0x0039(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0012 PADDING_03B2, bool,                                                                  Alpha);                                                    // 0x003A(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0013 PADDING_03B2, EChannelTextureSave,                                                   ChannelMethod);                                            // 0x003B(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_03B2, TArray<class UTexture2D*>,                                             TextureOutput);                                            // 0x0040(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_03B2, class UMaterialParameterCollection*,                                   MaterialCollection);                                       // 0x0050(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_03B2, TMap<struct FName COMMA struct FTileDatabase>,                         TileMap);                                                  // 0x0058(0x0050)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0080 PADDING_03B2, int,                                                                   TileSize);                                                 // 0x00A8(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0084 PADDING_03B2, struct FLinearColor,                                                   layer_bools);                                              // 0x00AC(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0094 PADDING_03B2, struct FLinearColor,                                                   Tiles_Size);                                               // 0x00BC(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MultiPackerRuntime.MultiPackerDataBase");
		return ptr;
	}


	class UTextureRenderTarget2D* GetTextureTile(class UObject* WorldContextObject, const struct FName& Key, int Size);
	class UMaterialInstanceDynamic* GetMaterialTile(const struct FName& Key);
	struct FButtonStyle GetButtonStyle(class UObject* WorldContextObject, const struct FName& KeyIcon, const struct FName& KeyBase, const struct FName& KeySelected, int Size, const struct FLinearColor& Color_Base, const struct FLinearColor& Color_Icon_Normal, const struct FLinearColor& Color_Icon_Press, const struct FLinearColor& Color_Ic_Selected, bool selected);
	class UMaterialInstanceDynamic* GetButtonMaterialState(class UObject* WorldContextObject, const struct FName& KeyIcon, const struct FName& KeyBase, const struct FName& KeySelected, int Size, const struct FLinearColor& Color_Base, const struct FLinearColor& Color_Icon_Normal, const struct FLinearColor& Color_Icon_Press, const struct FLinearColor& Color_Ic_Selected, EStateButton EState, bool selected);
};

// Class MultiPackerRuntime.MultiPackerImage
// 0x01F4 (FullSize[0x03C8] - InheritedSize[0x01D4])
// LastOffsetWithSize(0x01D4)
#define PADDING_03B3 - 0x0000 // Minimum to subtract -> (003C)
class UMultiPackerImage : public UImage
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x003C PADDING_03B3, EMultiPackerImageLayer,                                                TypeLayer);                                                // 0x0210(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003D PADDING_03B3, bool,                                                                  Layer_2);                                                  // 0x0211(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003E PADDING_03B3, bool,                                                                  Layer_3);                                                  // 0x0212(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003F PADDING_03B3, bool,                                                                  Layer_4);                                                  // 0x0213(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0044 PADDING_03B3, struct FLayerDatabase,                                                 LayerBase);                                                // 0x0218(0x0058)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x009C PADDING_03B3, struct FLayerDatabase,                                                 LayerAddition);                                            // 0x0270(0x0058)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00F4 PADDING_03B3, struct FLayerDatabase,                                                 LayerDetail);                                              // 0x02C8(0x0058)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x014C PADDING_03B3, struct FLinearColor,                                                   BaseColorOutline);                                         // 0x0320(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x015C PADDING_03B3, struct FLinearColor,                                                   BaseColorInterior);                                        // 0x0330(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x016C PADDING_03B3, float,                                                                 BaseOutlineThresold);                                      // 0x0340(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0170 PADDING_03B3, float,                                                                 BaseSDFThresold);                                          // 0x0344(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0174 PADDING_03B3, bool,                                                                  BaseStyleChanged);                                         // 0x0348(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x017C PADDING_03B3, class UMultiPackerLayerDatabase*,                                      LayerBaseStyle);                                           // 0x0350(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0184 PADDING_03B3, struct FLinearColor,                                                   AdditionColorOutline);                                     // 0x0358(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0194 PADDING_03B3, struct FLinearColor,                                                   AdditionColorInterior);                                    // 0x0368(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01A4 PADDING_03B3, float,                                                                 AdditionOutlineThresold);                                  // 0x0378(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01A8 PADDING_03B3, float,                                                                 AdditionSDFThresold);                                      // 0x037C(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01AC PADDING_03B3, bool,                                                                  AdditionStyleChanged);                                     // 0x0380(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01B4 PADDING_03B3, class UMultiPackerLayerDatabase*,                                      LayerAdditionStyle);                                       // 0x0388(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01BC PADDING_03B3, struct FLinearColor,                                                   DetailColorOutline);                                       // 0x0390(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01CC PADDING_03B3, struct FLinearColor,                                                   DetailColorInterior);                                      // 0x03A0(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01DC PADDING_03B3, float,                                                                 DetailOutlineThresold);                                    // 0x03B0(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01E0 PADDING_03B3, float,                                                                 DetailSDFThresold);                                        // 0x03B4(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01E4 PADDING_03B3, bool,                                                                  DetailStyleChanged);                                       // 0x03B8(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01EC PADDING_03B3, class UMultiPackerLayerDatabase*,                                      LayerDetailStyle);                                         // 0x03C0(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MultiPackerRuntime.MultiPackerImage");
		return ptr;
	}


	void SetDetailSDFThresold(float InDetailSDFThresold);
	void SetDetailOutlineThresold(float InDetailOutlineThresold);
	void SetDetailColorOutline(const struct FLinearColor& InDetailColorOutline);
	void SetDetailColorInterior(const struct FLinearColor& InDetailColorInterior);
	void SetBaseSDFThresold(float InBaseSDFThresold);
	void SetBaseOutlineThresold(float InBaseOutlineThresold);
	void SetBaseColorOutline(const struct FLinearColor& InBaseColorOutline);
	void SetBaseColorInterior(const struct FLinearColor& InBaseColorInterior);
	void SetAdditionSDFThresold(float InAdditionSDFThresold);
	void SetAdditionOutlineThresold(float InAdditionOutlineThresold);
	void SetAdditionColorOutline(const struct FLinearColor& InAdditionColorOutline);
	void SetAdditionColorInterior(const struct FLinearColor& InAdditionColorInterior);
};

// Class MultiPackerRuntime.MultiPackerImageCore
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UMultiPackerImageCore : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MultiPackerRuntime.MultiPackerImageCore");
		return ptr;
	}


};

// Class MultiPackerRuntime.MultiPackerLayerDatabase
// 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_03B5 - 0x0000 // Minimum to subtract -> (0000)
class UMultiPackerLayerDatabase : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_03B5, struct FLayerDatabase,                                                 LayerBase);                                                // 0x0028(0x0058)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_03B5, struct FLinearColor,                                                   ColorOutline);                                             // 0x0080(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0068 PADDING_03B5, struct FLinearColor,                                                   ColorInterior);                                            // 0x0090(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0078 PADDING_03B5, float,                                                                 OutlineThresold);                                          // 0x00A0(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x007C PADDING_03B5, float,                                                                 SDFThresold);                                              // 0x00A4(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0080 PADDING_03B5, class UTileCopy*,                                                      Button);                                                   // 0x00A8(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0088 PADDING_03B5, class UMaterialInstanceDynamic*,                                       Material);                                                 // 0x00B0(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MultiPackerRuntime.MultiPackerLayerDatabase");
		return ptr;
	}


};

// Class MultiPackerRuntime.MultiPackerMatNode
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_03B7 - 0x0000 // Minimum to subtract -> (0000)
class UMultiPackerMatNode : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_03B7, class UMaterialInterface*,                                             MaterialBaseInput);                                        // 0x0028(0x0008)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_03B7, bool,                                                                  SDF);                                                      // 0x0030(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000C PADDING_03B7, int,                                                                   SDF_Radius);                                               // 0x0034(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_03B7, bool,                                                                  Atlas);                                                    // 0x0038(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_03B7, int,                                                                   TilesVertical);                                            // 0x003C(0x0004)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_03B7, int,                                                                   TilesHorizontal);                                          // 0x0040(0x0004)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_03B7, bool,                                                                  RectangleSize);                                            // 0x0044(0x0001)  (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001D PADDING_03B7, ETextureSizeOutputPersonal,                                            SetSizeByParameter);                                       // 0x0045(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_03B7, int,                                                                   SizeVertical);                                             // 0x0048(0x0004)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0024 PADDING_03B7, int,                                                                   SizeHorizontal);                                           // 0x004C(0x0004)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MultiPackerRuntime.MultiPackerMatNode");
		return ptr;
	}


};

// Class MultiPackerRuntime.MultiPackerRuntimeBinPack
// 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_03B9 - 0x0000 // Minimum to subtract -> (0000)
class UMultiPackerRuntimeBinPack : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_03B9, TArray<class UMaxRectsBinPack*>,                                       BinPackPages);                                             // 0x0028(0x0010)  (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_03B9, TArray<class UTextureRenderTarget2D*>,                                 RenderTargetPages);                                        // 0x0038(0x0010)  (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_03B9, class UObject*,                                                        WorldContext);                                             // 0x0048(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_03B9, int,                                                                   Size);                                                     // 0x0050(0x0004)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x002C PADDING_03B9, bool,                                                                  Alpha);                                                    // 0x0054(0x0001)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_03B9, TMap<struct FName COMMA struct FMaterialDataBinPack>,                  MaterialMap);                                              // 0x0058(0x0050)  (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MultiPackerRuntime.MultiPackerRuntimeBinPack");
		return ptr;
	}


};

// Class MultiPackerRuntime.MultiPackerRuntimeGraph
// 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_03BA - 0x0000 // Minimum to subtract -> (0000)
class UMultiPackerRuntimeGraph : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_03BA, ETextureSizeOutputPersonal,                                            RenderTargetSizeOutput);                                   // 0x0028(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0001 PADDING_03BA, bool,                                                                  Alpha);                                                    // 0x0029(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_03BA, class UMultiPackerRuntimeBinPack*,                                     RuntimeData);                                              // 0x0030(0x0008)  (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_03BA, int,                                                                   Size);                                                     // 0x0038(0x0004)  (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_03BA, int,                                                                   Pages);                                                    // 0x003C(0x0004)  (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_03BA, TMap<struct FName COMMA struct FMaterialDataBinPack>,                  MaterialMap);                                              // 0x0040(0x0050)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0068 PADDING_03BA, TArray<class UTextureRenderTarget2D*>,                                 RenderTargetPages);                                        // 0x0090(0x0010)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MultiPackerRuntime.MultiPackerRuntimeGraph");
		return ptr;
	}


	void ValidationOnRuntime(class UObject* WorldContextObject);
	void SetTextureRuntimeOnMaterial(class UObject* WorldContextObject, class UMaterialInterface* Material, class UMaterialInstanceDynamic* MaterialToSet, const struct FName& Texture, const struct FName& Booleans, const struct FName& SizePadding);
	void RuntimePreProcess(class UObject* WorldContextObject);
	void RetrieveMaterialInfo(class UObject* WorldContextObject, class UMaterialInterface* Material, class UTextureRenderTarget2D** RT_Output, struct FMaterialDataBinPack* Database);
	class UTexture2D* GetTileTexture(class UObject* WorldContextObject, class UMaterialInterface* MaterialToGet);
};

// Class MultiPackerRuntime.MultiPackerRuntimeMatNode
// 0x0011 (FullSize[0x0039] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_03BC - 0x0000 // Minimum to subtract -> (0000)
class UMultiPackerRuntimeMatNode : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_03BC, class UMaterialInterface*,                                             MaterialBaseInput);                                        // 0x0028(0x0008)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_03BC, int,                                                                   Height);                                                   // 0x0030(0x0004)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000C PADDING_03BC, int,                                                                   Width);                                                    // 0x0034(0x0004)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_03BC, ETextureSizeOutputPersonal,                                            MaterialSize);                                             // 0x0038(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MultiPackerRuntime.MultiPackerRuntimeMatNode");
		return ptr;
	}


};

// Class MultiPackerRuntime.MultiPackerSettings
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_03BD - 0x0000 // Minimum to subtract -> (0010)
class UMultiPackerSettings : public UDeveloperSettings
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_03BD, EChannelTextureSave,                                                   ChannelMethod);                                            // 0x0038(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0011 PADDING_03BD, bool,                                                                  SaveMaterialCollection);                                   // 0x0039(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0012 PADDING_03BD, bool,                                                                  SaveDatabase);                                             // 0x003A(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0018 PADDING_03BD, struct FDirectoryPath,                                                 TargetDirectory);                                          // 0x0040(0x0010)  (Edit, Config, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0028 PADDING_03BD, struct FString,                                                        TextureChannelName);                                       // 0x0050(0x0010)  (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0038 PADDING_03BD, struct FString,                                                        DatabasePrefix);                                           // 0x0060(0x0010)  (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0048 PADDING_03BD, struct FString,                                                        TexturePrefix);                                            // 0x0070(0x0010)  (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0058 PADDING_03BD, struct FString,                                                        MaterialcollectionPrefix);                                 // 0x0080(0x0010)  (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MultiPackerRuntime.MultiPackerSettings");
		return ptr;
	}


};

// Class MultiPackerRuntime.MultiPackerTextureNode
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_03BE - 0x0000 // Minimum to subtract -> (0010)
class UMultiPackerTextureNode : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_03BE, class UTexture*,                                                       TextureInput);                                             // 0x0038(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_03BE, bool,                                                                  SDF);                                                      // 0x0040(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_03BE, int,                                                                   SDF_Radius);                                               // 0x0044(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_03BE, bool,                                                                  MSDF);                                                     // 0x0048(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0024 PADDING_03BE, int,                                                                   TilesVertical);                                            // 0x004C(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_03BE, int,                                                                   TilesHorizontal);                                          // 0x0050(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x002C PADDING_03BE, bool,                                                                  RectangleSize);                                            // 0x0054(0x0001)  (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x002D PADDING_03BE, ESizeTexture,                                                          AutoSizeFill);                                             // 0x0055(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x002E PADDING_03BE, ETextureSizeOutputPersonal,                                            SetSizeByParameter);                                       // 0x0056(0x0001)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_03BE, int,                                                                   SizeVertical);                                             // 0x0058(0x0004)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0034 PADDING_03BE, int,                                                                   SizeHorizontal);                                           // 0x005C(0x0004)  (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_03BE, ENameTexture,                                                          AutoNameFill);                                             // 0x0060(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_03BE, TArray<struct FTileThumbDatabase>,                                     ATexTileData);                                             // 0x0068(0x0010)  (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0050 PADDING_03BE, TArray<class UTilePointer*>,                                           Thumbnails);                                               // 0x0078(0x0010)  (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MultiPackerRuntime.MultiPackerTextureNode");
		return ptr;
	}


};

// Class MultiPackerRuntime.TileCopy
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UTileCopy : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MultiPackerRuntime.TileCopy");
		return ptr;
	}


};

// Class MultiPackerRuntime.TilePointer
// 0x00A4 (FullSize[0x00CC] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_03C0 - 0x0000 // Minimum to subtract -> (0000)
class UTilePointer : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_03C0, class UTextureRenderTarget2D*,                                         TileRT);                                                   // 0x0028(0x0008)  (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_03C0, class UTexture2D*,                                                     TileTexture);                                              // 0x0030(0x0008)  (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_03C0, struct FString,                                                        NameUTile);                                                // 0x0038(0x0010)  (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_03C0, uint16_t,                                                              TileWidth);                                                // 0x0048(0x0002)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0022 PADDING_03C0, uint16_t,                                                              TileHeight);                                               // 0x004A(0x0002)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0024 PADDING_03C0, struct FVector2D,                                                      TilePadding);                                              // 0x004C(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_03C0, struct FTileDatabase,                                                  TileDatabase);                                             // 0x0058(0x0050)  (NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0080 PADDING_03C0, TArray<class UTilePointer*>,                                           TileBinPack);                                              // 0x00A8(0x0010)  (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0090 PADDING_03C0, TArray<struct FColor>,                                                 TileData);                                                 // 0x00B8(0x0010)  (ZeroConstructor, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_03C0, uint32_t,                                                              TileDimension);                                            // 0x00C8(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MultiPackerRuntime.TilePointer");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
