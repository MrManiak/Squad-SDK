#pragma once

// Name: S, Version: b


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

// Class MultiPackerRuntime.TilePointer
// 0x00C0 (FullSize[0x00E8] - InheritedSize[0x0028])
class UTilePointer : public UObject
{
public:
	class UTextureRenderTarget2D*                      TileRT;                                                    // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  TileTexture;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NameUTile;                                                 // 0x0038(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           TileWidth;                                                 // 0x0048(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           TileHeight;                                                // 0x004A(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   TilePadding;                                               // 0x004C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K2V6[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTileDatabase                               TileDatabase;                                              // 0x0058(0x0050) (NoDestructor, NativeAccessSpecifierPublic)
	TArray<class UTilePointer*>                        TileBinPack;                                               // 0x00A8(0x0010) (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FColor>                              TileData;                                                  // 0x00B8(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	uint32_t                                           TileDimension;                                             // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_735Z[0x1C];                                    // 0x00CC(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MultiPackerRuntime.TilePointer");
		return ptr;
	}



};

// Class MultiPackerRuntime.TileCopy
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTileCopy : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MultiPackerRuntime.TileCopy");
		return ptr;
	}



};

// Class MultiPackerRuntime.MultiPackerTextureNode
// 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
class UMultiPackerTextureNode : public UObject
{
public:
	unsigned char                                      UnknownData_GYIN[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture*                                    TextureInput;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SDF;                                                       // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ENYO[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SDF_Radius;                                                // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MSDF;                                                      // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9RC7[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TilesVertical;                                             // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TilesHorizontal;                                           // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RectangleSize;                                             // 0x0054(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESizeTexture                                       AutoSizeFill;                                              // 0x0055(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureSizeOutputPersonal                         SetSizeByParameter;                                        // 0x0056(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M5SM[0x1];                                     // 0x0057(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SizeVertical;                                              // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SizeHorizontal;                                            // 0x005C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENameTexture                                       AutoNameFill;                                              // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4A0J[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTileThumbDatabase>                  ATexTileData;                                              // 0x0068(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UTilePointer*>                        Thumbnails;                                                // 0x0078(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DW57[0x18];                                    // 0x0088(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MultiPackerRuntime.MultiPackerTextureNode");
		return ptr;
	}



};

// Class MultiPackerRuntime.MultiPackerSettings
// 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
class UMultiPackerSettings : public UDeveloperSettings
{
public:
	EChannelTextureSave                                ChannelMethod;                                             // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SaveMaterialCollection;                                    // 0x0039(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               SaveDatabase;                                              // 0x003A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3ZAQ[0x5];                                     // 0x003B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDirectoryPath                              TargetDirectory;                                           // 0x0040(0x0010) (Edit, Config, NativeAccessSpecifierPrivate)
	struct FString                                     TextureChannelName;                                        // 0x0050(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     DatabasePrefix;                                            // 0x0060(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     TexturePrefix;                                             // 0x0070(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     MaterialcollectionPrefix;                                  // 0x0080(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MultiPackerRuntime.MultiPackerSettings");
		return ptr;
	}



};

// Class MultiPackerRuntime.MultiPackerRuntimeMatNode
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UMultiPackerRuntimeMatNode : public UObject
{
public:
	class UMaterialInterface*                          MaterialBaseInput;                                         // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Height;                                                    // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Width;                                                     // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureSizeOutputPersonal                         MaterialSize;                                              // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XM2L[0x1F];                                    // 0x0039(0x001F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MultiPackerRuntime.MultiPackerRuntimeMatNode");
		return ptr;
	}



};

// Class MultiPackerRuntime.MultiPackerRuntimeGraph
// 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
class UMultiPackerRuntimeGraph : public UObject
{
public:
	ETextureSizeOutputPersonal                         RenderTargetSizeOutput;                                    // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Alpha;                                                     // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YEJJ[0x6];                                     // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMultiPackerRuntimeBinPack*                  RuntimeData;                                               // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Size;                                                      // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Pages;                                                     // 0x003C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FName, struct FMaterialDataBinPack>    MaterialMap;                                               // 0x0040(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<class UTextureRenderTarget2D*>              RenderTargetPages;                                         // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RXW0[0x18];                                    // 0x00A0(0x0018) MISSED OFFSET (PADDING)


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

// Class MultiPackerRuntime.MultiPackerRuntimeBinPack
// 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
class UMultiPackerRuntimeBinPack : public UObject
{
public:
	TArray<class UMaxRectsBinPack*>                    BinPackPages;                                              // 0x0028(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class UTextureRenderTarget2D*>              RenderTargetPages;                                         // 0x0038(0x0010) (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContext;                                              // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Size;                                                      // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Alpha;                                                     // 0x0054(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9X97[0x3];                                     // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FName, struct FMaterialDataBinPack>    MaterialMap;                                               // 0x0058(0x0050) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C24O[0x10];                                    // 0x00A8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MultiPackerRuntime.MultiPackerRuntimeBinPack");
		return ptr;
	}



};

// Class MultiPackerRuntime.MultiPackerMatNode
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class UMultiPackerMatNode : public UObject
{
public:
	class UMaterialInterface*                          MaterialBaseInput;                                         // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SDF;                                                       // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ICSX[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SDF_Radius;                                                // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Atlas;                                                     // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_477V[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TilesVertical;                                             // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TilesHorizontal;                                           // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RectangleSize;                                             // 0x0044(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureSizeOutputPersonal                         SetSizeByParameter;                                        // 0x0045(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KI79[0x2];                                     // 0x0046(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SizeVertical;                                              // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SizeHorizontal;                                            // 0x004C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XXN6[0x20];                                    // 0x0050(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MultiPackerRuntime.MultiPackerMatNode");
		return ptr;
	}



};

// Class MultiPackerRuntime.MultiPackerLayerDatabase
// 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
class UMultiPackerLayerDatabase : public UObject
{
public:
	struct FLayerDatabase                              LayerBase;                                                 // 0x0028(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                ColorOutline;                                              // 0x0080(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ColorInterior;                                             // 0x0090(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutlineThresold;                                           // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SDFThresold;                                               // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTileCopy*                                   Button;                                                    // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    Material;                                                  // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MultiPackerRuntime.MultiPackerLayerDatabase");
		return ptr;
	}



};

// Class MultiPackerRuntime.MultiPackerImageCore
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMultiPackerImageCore : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MultiPackerRuntime.MultiPackerImageCore");
		return ptr;
	}



};

// Class MultiPackerRuntime.MultiPackerImage
// 0x01C0 (FullSize[0x03D0] - InheritedSize[0x0210])
class UMultiPackerImage : public UImage
{
public:
	EMultiPackerImageLayer                             TypeLayer;                                                 // 0x0210(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Layer_2;                                                   // 0x0211(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Layer_3;                                                   // 0x0212(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Layer_4;                                                   // 0x0213(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HHEX[0x4];                                     // 0x0214(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLayerDatabase                              LayerBase;                                                 // 0x0218(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FLayerDatabase                              LayerAddition;                                             // 0x0270(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FLayerDatabase                              LayerDetail;                                               // 0x02C8(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                BaseColorOutline;                                          // 0x0320(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                BaseColorInterior;                                         // 0x0330(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BaseOutlineThresold;                                       // 0x0340(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BaseSDFThresold;                                           // 0x0344(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               BaseStyleChanged;                                          // 0x0348(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ALY9[0x7];                                     // 0x0349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMultiPackerLayerDatabase*                   LayerBaseStyle;                                            // 0x0350(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                AdditionColorOutline;                                      // 0x0358(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                AdditionColorInterior;                                     // 0x0368(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AdditionOutlineThresold;                                   // 0x0378(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AdditionSDFThresold;                                       // 0x037C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AdditionStyleChanged;                                      // 0x0380(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VIU5[0x7];                                     // 0x0381(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMultiPackerLayerDatabase*                   LayerAdditionStyle;                                        // 0x0388(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                DetailColorOutline;                                        // 0x0390(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                DetailColorInterior;                                       // 0x03A0(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DetailOutlineThresold;                                     // 0x03B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DetailSDFThresold;                                         // 0x03B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DetailStyleChanged;                                        // 0x03B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ODX5[0x7];                                     // 0x03B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMultiPackerLayerDatabase*                   LayerDetailStyle;                                          // 0x03C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1B8D[0x8];                                     // 0x03C8(0x0008) MISSED OFFSET (PADDING)


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

// Class MultiPackerRuntime.MultiPackerDataBase
// 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
class UMultiPackerDataBase : public UObject
{
public:
	class UScriptStruct*                               RowStruct;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VTile;                                                     // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HTile;                                                     // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Do_SDF;                                                    // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               BinPack;                                                   // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Alpha;                                                     // 0x003A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EChannelTextureSave                                ChannelMethod;                                             // 0x003B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VPMG[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UTexture2D*>                          TextureOutput;                                             // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	class UMaterialParameterCollection*                MaterialCollection;                                        // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FName, struct FTileDatabase>           TileMap;                                                   // 0x0058(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                TileSize;                                                  // 0x00A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                layer_bools;                                               // 0x00AC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Tiles_Size;                                                // 0x00BC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JFRQ[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (PADDING)


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

// Class MultiPackerRuntime.MultiPackerButton
// 0x0700 (FullSize[0x0B28] - InheritedSize[0x0428])
class UMultiPackerButton : public UButton
{
public:
	EMultiPackerImageLayer                             TypeLayerNormal;                                           // 0x0428(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SetAsImage;                                                // 0x0429(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               N_layer_2;                                                 // 0x042A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               N_layer_3;                                                 // 0x042B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               N_layer_4;                                                 // 0x042C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BGF2[0x3];                                     // 0x042D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLayerDatabase                              N_LayerBase;                                               // 0x0430(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FLayerDatabase                              N_LayerAddition;                                           // 0x0488(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FLayerDatabase                              N_LayerDetail;                                             // 0x04E0(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	EMultiPackerImageLayer                             TypeLayerHovered;                                          // 0x0538(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               H_layer_2;                                                 // 0x0539(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               H_layer_3;                                                 // 0x053A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               H_layer_4;                                                 // 0x053B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CTHR[0x4];                                     // 0x053C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLayerDatabase                              H_LayerBase;                                               // 0x0540(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FLayerDatabase                              H_LayerAddition;                                           // 0x0598(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FLayerDatabase                              H_LayerDetail;                                             // 0x05F0(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	EMultiPackerImageLayer                             TypeLayerPressed;                                          // 0x0648(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               P_layer_2;                                                 // 0x0649(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               P_layer_3;                                                 // 0x064A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               P_layer_4;                                                 // 0x064B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D8P1[0x4];                                     // 0x064C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLayerDatabase                              P_LayerBase;                                               // 0x0650(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FLayerDatabase                              P_LayerAddition;                                           // 0x06A8(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FLayerDatabase                              P_LayerDetail;                                             // 0x0700(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               SetDisabledStyle;                                          // 0x0758(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMultiPackerImageLayer                             TypeLayerDisabled;                                         // 0x0759(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               D_layer_2;                                                 // 0x075A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               D_layer_3;                                                 // 0x075B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               D_layer_4;                                                 // 0x075C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QYI7[0x3];                                     // 0x075D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLayerDatabase                              D_LayerBase;                                               // 0x0760(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FLayerDatabase                              D_LayerAddition;                                           // 0x07B8(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FLayerDatabase                              D_LayerDetail;                                             // 0x0810(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R6XL[0x20];                                    // 0x0868(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                NormalBaseColorOutline;                                    // 0x0888(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                NormalBaseColorInterior;                                   // 0x0898(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NormalBaseOutlineThresold;                                 // 0x08A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NormalBaseSDFThresold;                                     // 0x08AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               N_BaseStyleChanged;                                        // 0x08B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_97MQ[0x7];                                     // 0x08B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMultiPackerLayerDatabase*                   LayerNormalBaseStyle;                                      // 0x08B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                NormalAdditionColorOutline;                                // 0x08C0(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                NormalAdditionColorInterior;                               // 0x08D0(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NormalAdditionOutlineThresold;                             // 0x08E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NormalAdditionSDFThresold;                                 // 0x08E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               N_AdditionStyleChanged;                                    // 0x08E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WPIK[0x7];                                     // 0x08E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMultiPackerLayerDatabase*                   LayerNormalAdditionStyle;                                  // 0x08F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                NormalDetailColorOutline;                                  // 0x08F8(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                NormalDetailColorInterior;                                 // 0x0908(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NormalDetailOutlineThresold;                               // 0x0918(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NormalDetailSDFThresold;                                   // 0x091C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               N_DetailStyleChanged;                                      // 0x0920(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5J5S[0x7];                                     // 0x0921(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMultiPackerLayerDatabase*                   LayerNormalDetailStyle;                                    // 0x0928(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                HoveredBaseColorOutline;                                   // 0x0930(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                HoveredBaseColorInterior;                                  // 0x0940(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HoveredBaseOutlineThresold;                                // 0x0950(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HoveredBaseSDFThresold;                                    // 0x0954(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               H_BaseStyleChanged;                                        // 0x0958(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3UYV[0x7];                                     // 0x0959(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMultiPackerLayerDatabase*                   LayerHoveredBaseStyle;                                     // 0x0960(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                HoveredAdditionColorOutline;                               // 0x0968(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                HoveredAdditionColorInterior;                              // 0x0978(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HoveredAdditionOutlineThresold;                            // 0x0988(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HoveredAdditionSDFThresold;                                // 0x098C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               H_AdditionStyleChanged;                                    // 0x0990(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VHFN[0x7];                                     // 0x0991(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMultiPackerLayerDatabase*                   LayerHoveredAdditionStyle;                                 // 0x0998(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                HoveredDetailColorOutline;                                 // 0x09A0(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                HoveredDetailColorInterior;                                // 0x09B0(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HoveredDetailOutlineThresold;                              // 0x09C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HoveredDetailSDFThresold;                                  // 0x09C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               H_DetailStyleChanged;                                      // 0x09C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8IKO[0x7];                                     // 0x09C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMultiPackerLayerDatabase*                   LayerHoveredDetailStyle;                                   // 0x09D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                PressedBaseColorOutline;                                   // 0x09D8(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                PressedBaseColorInterior;                                  // 0x09E8(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PressedBaseOutlineThresold;                                // 0x09F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PressedBaseSDFThresold;                                    // 0x09FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               P_BaseStyleChanged;                                        // 0x0A00(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_483F[0x7];                                     // 0x0A01(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMultiPackerLayerDatabase*                   LayerPressedBaseStyle;                                     // 0x0A08(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                PressedAdditionColorOutline;                               // 0x0A10(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                PressedAdditionColorInterior;                              // 0x0A20(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PressedAdditionOutlineThresold;                            // 0x0A30(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PressedAdditionSDFThresold;                                // 0x0A34(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               P_AdditionStyleChanged;                                    // 0x0A38(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5CFX[0x7];                                     // 0x0A39(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMultiPackerLayerDatabase*                   LayerPressedAdditionStyle;                                 // 0x0A40(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                PressedDetailColorOutline;                                 // 0x0A48(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                PressedDetailColorInterior;                                // 0x0A58(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PressedDetailOutlineThresold;                              // 0x0A68(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PressedDetailSDFThresold;                                  // 0x0A6C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               P_DetailStyleChanged;                                      // 0x0A70(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K6W3[0x7];                                     // 0x0A71(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMultiPackerLayerDatabase*                   LayerPressedDetailStyle;                                   // 0x0A78(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                DisabledBaseColorOutline;                                  // 0x0A80(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                DisabledBaseColorInterior;                                 // 0x0A90(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DisabledBaseOutlineThresold;                               // 0x0AA0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DisabledBaseSDFThresold;                                   // 0x0AA4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               D_BaseStyleChanged;                                        // 0x0AA8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D776[0x7];                                     // 0x0AA9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMultiPackerLayerDatabase*                   LayerDisabledBaseStyle;                                    // 0x0AB0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                DisabledAdditionColorOutline;                              // 0x0AB8(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                DisabledAdditionColorInterior;                             // 0x0AC8(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DisabledAdditionOutlineThresold;                           // 0x0AD8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DisabledAdditionSDFThresold;                               // 0x0ADC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               D_AdditionStyleChanged;                                    // 0x0AE0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9X9X[0x7];                                     // 0x0AE1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMultiPackerLayerDatabase*                   LayerDisabledAdditionStyle;                                // 0x0AE8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                DisabledDetailColorOutline;                                // 0x0AF0(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                DisabledDetailColorInterior;                               // 0x0B00(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DisabledDetailOutlineThresold;                             // 0x0B10(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DisabledDetailSDFThresold;                                 // 0x0B14(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               D_DetailStyleChanged;                                      // 0x0B18(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BA2J[0x7];                                     // 0x0B19(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMultiPackerLayerDatabase*                   LayerDisabledDetailStyle;                                  // 0x0B20(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


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

// Class MultiPackerRuntime.MultiPackerBaseEnums
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMultiPackerBaseEnums : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MultiPackerRuntime.MultiPackerBaseEnums");
		return ptr;
	}



};

// Class MultiPackerRuntime.MultiPacker
// 0x0148 (FullSize[0x0170] - InheritedSize[0x0028])
class UMultiPacker : public UObject
{
public:
	unsigned char                                      UnknownData_OAYD[0x2];                                     // 0x0028(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	ETextureSizeOutput                                 TextureTileSizeOutput;                                     // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RectangleTiles;                                            // 0x002B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFreeRectChoiceHeuristic                           RectangleMethod;                                           // 0x002C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureSizeOutputPersonal                         OutputSizeX;                                               // 0x002D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureSizeOutputPersonal                         OutputSizeY;                                               // 0x002E(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6O4S[0x1];                                     // 0x002F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   TilePadding;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EChannelTextureSave                                ChannelMethod;                                             // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Alpha;                                                     // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VBV9[0x2];                                     // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TileSize;                                                  // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SaveMaterialCollection;                                    // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SaveDatabase;                                              // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZTIN[0x6];                                     // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDirectoryPath                              TargetDirectory;                                           // 0x0048(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FString                                     TargetName;                                                // 0x0058(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EditPrefix;                                                // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NLTQ[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DatabasePrefix;                                            // 0x0070(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TexturePrefix;                                             // 0x0080(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MaterialcollectionPrefix;                                  // 0x0090(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EditTexture;                                               // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ETextureFilter>                        T_TextureFilter;                                           // 0x00A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Tex_SRGB;                                                  // 0x00A2(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ETextureAddress>                       Tex_AddressX;                                              // 0x00A3(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ETextureAddress>                       Tex_AddressY;                                              // 0x00A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ETexturePowerOfTwoSetting>             Tex_Power;                                                 // 0x00A5(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5NB0[0x2];                                     // 0x00A6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UTexture2D*>                          TextureOutput;                                             // 0x00A8(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	class UMultiPackerDataBase*                        Database;                                                  // 0x00B8(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialParameterCollection*                MaterialCollection;                                        // 0x00C0(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FName, struct FTileDatabase>           TileMap;                                                   // 0x00C8(0x0050) (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
	TArray<class UTilePointer*>                        TilePointers;                                              // 0x0118(0x0010) (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8NWT[0x48];                                    // 0x0128(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MultiPackerRuntime.MultiPacker");
		return ptr;
	}



};

// Class MultiPackerRuntime.MaxRectsBinPack
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UMaxRectsBinPack : public UObject
{
public:
	unsigned char                                      UnknownData_Z5W6[0x28];                                    // 0x0028(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MultiPackerRuntime.MaxRectsBinPack");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
