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

// Class Landscape.ControlPointMeshComponent
// 0x0008 (FullSize[0x04A0] - InheritedSize[0x0498])
// LastOffsetWithSize(0x0498)
class UControlPointMeshComponent : public UStaticMeshComponent
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.ControlPointMeshComponent");
		return ptr;
	}


};

// Class Landscape.LandscapeProxy
// 0x0305 (FullSize[0x053D] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_041C - 0x0000 // Minimum to subtract -> (0010)
class ALandscapeProxy : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_041C, class ULandscapeSplinesComponent*,                                     SplineComponent);                                          // 0x0248(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_041C, struct FGuid,                                                          LandscapeGuid);                                            // 0x0250(0x0010)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0028 PADDING_041C, struct FIntPoint,                                                      LandscapeSectionOffset);                                   // 0x0260(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_041C, int,                                                                   MaxLODLevel);                                              // 0x0268(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0034 PADDING_041C, float,                                                                 LODDistanceFactor);                                        // 0x026C(0x0004)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_041C, TEnumAsByte<ELandscapeLODFalloff>,                                     LODFalloff);                                               // 0x0270(0x0001)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003C PADDING_041C, float,                                                                 ComponentScreenSizeToUseSubSections);                      // 0x0274(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_041C, float,                                                                 LOD0ScreenSize);                                           // 0x0278(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0044 PADDING_041C, float,                                                                 LOD0DistributionSetting);                                  // 0x027C(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0048 PADDING_041C, float,                                                                 LODDistributionSetting);                                   // 0x0280(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x004C PADDING_041C, float,                                                                 TessellationComponentScreenSize);                          // 0x0284(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0050 PADDING_041C, bool,                                                                  UseTessellationComponentScreenSizeFalloff);                // 0x0288(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0054 PADDING_041C, float,                                                                 TessellationComponentScreenSizeFalloff);                   // 0x028C(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_041C, int,                                                                   OccluderGeometryLOD);                                      // 0x0290(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x005C PADDING_041C, int,                                                                   StaticLightingLOD);                                        // 0x0294(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0060 PADDING_041C, class UPhysicalMaterial*,                                              DefaultPhysMaterial);                                      // 0x0298(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0068 PADDING_041C, float,                                                                 StreamingDistanceMultiplier);                              // 0x02A0(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0070 PADDING_041C, class UMaterialInterface*,                                             LandscapeMaterial);                                        // 0x02A8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0078 PADDING_041C, class UMaterialInterface*,                                             LandscapeHoleMaterial);                                    // 0x02B0(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0080 PADDING_041C, TArray<struct FLandscapeProxyMaterialOverride>,                        LandscapeMaterialsOverride);                               // 0x02B8(0x0010)  (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0090 PADDING_041C, TArray<class URuntimeVirtualTexture*>,                                 RuntimeVirtualTextures);                                   // 0x02C8(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_041C, int,                                                                   VirtualTextureNumLods);                                    // 0x02D8(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A4 PADDING_041C, int,                                                                   VirtualTextureLodBias);                                    // 0x02DC(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_041C, ERuntimeVirtualTextureMainPassType,                                    VirtualTextureRenderPassType);                             // 0x02E0(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00AC PADDING_041C, float,                                                                 NegativeZBoundsExtension);                                 // 0x02E4(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_041C, float,                                                                 PositiveZBoundsExtension);                                 // 0x02E8(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_041C, TArray<class ULandscapeComponent*>,                                    LandscapeComponents);                                      // 0x02F0(0x0010)  (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_041C, TArray<class ULandscapeHeightfieldCollisionComponent*>,                CollisionComponents);                                      // 0x0300(0x0010)  (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_041C, TArray<class UHierarchicalInstancedStaticMeshComponent*>,              FoliageComponents);                                        // 0x0310(0x0010)  (ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x014C PADDING_041C, bool,                                                                  bHasLandscapeGrass);                                       // 0x0384(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0150 PADDING_041C, float,                                                                 StaticLightingResolution);                                 // 0x0388(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0154 PADDING_041C, unsigned char,                                                         bCastStaticShadow);                                        // 0x038C(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0154 PADDING_041C, unsigned char,                                                         bCastShadowAsTwoSided);                                    // 0x038C(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0154 PADDING_041C, unsigned char,                                                         bCastFarShadow);                                           // 0x038C(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0158 PADDING_041C, unsigned char,                                                         bAffectDistanceFieldLighting);                             // 0x0390(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0159 PADDING_041C, struct FLightingChannels,                                              LightingChannels);                                         // 0x0391(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x015C PADDING_041C, unsigned char,                                                         bUseMaterialPositionOffsetInStaticLighting);               // 0x0394(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x015C PADDING_041C, unsigned char,                                                         bRenderCustomDepth);                                       // 0x0394(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0160 PADDING_041C, int,                                                                   CustomDepthStencilValue);                                  // 0x0398(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0164 PADDING_041C, float,                                                                 LDMaxDrawDistance);                                        // 0x039C(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0168 PADDING_041C, struct FLightmassPrimitiveSettings,                                    LightmassSettings);                                        // 0x03A0(0x0018)  (Edit, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0180 PADDING_041C, int,                                                                   CollisionMipLevel);                                        // 0x03B8(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0184 PADDING_041C, int,                                                                   SimpleCollisionMipLevel);                                  // 0x03BC(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0188 PADDING_041C, float,                                                                 CollisionThickness);                                       // 0x03C0(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0190 PADDING_041C, struct FBodyInstance,                                                  BodyInstance);                                             // 0x03C8(0x0110)  (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02A0 PADDING_041C, unsigned char,                                                         bGenerateOverlapEvents);                                   // 0x04D8(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02A0 PADDING_041C, unsigned char,                                                         bBakeMaterialPositionOffsetIntoCollision);                 // 0x04D8(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02A4 PADDING_041C, int,                                                                   ComponentSizeQuads);                                       // 0x04DC(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02A8 PADDING_041C, int,                                                                   SubsectionSizeQuads);                                      // 0x04E0(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02AC PADDING_041C, int,                                                                   NumSubsections);                                           // 0x04E4(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02B0 PADDING_041C, unsigned char,                                                         bUsedForNavigation);                                       // 0x04E8(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02B4 PADDING_041C, bool,                                                                  bUseDynamicMaterialInstance);                              // 0x04EC(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02B5 PADDING_041C, ENavDataGatheringMode,                                                 NavigationGeometryGatheringMode);                          // 0x04ED(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02B6 PADDING_041C, bool,                                                                  bUseLandscapeForCullingInvisibleHLODVertices);             // 0x04EE(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02B7 PADDING_041C, bool,                                                                  bHasLayersContent);                                        // 0x04EF(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02B8 PADDING_041C, TMap<class UTexture2D* COMMA class ULandscapeWeightmapUsage*>,         WeightmapUsageMap);                                        // 0x04F0(0x0050)  (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeProxy");
		return ptr;
	}


	void SetLandscapeMaterialVectorParameterValue(const struct FName& ParameterName, const struct FLinearColor& Value);
	void SetLandscapeMaterialTextureParameterValue(const struct FName& ParameterName, class UTexture* Value);
	void SetLandscapeMaterialScalarParameterValue(const struct FName& ParameterName, float Value);
	void EditorSetLandscapeMaterial(class UMaterialInterface* NewLandscapeMaterial);
	void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer);
	void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections);
	void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff);
	void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize);
	void ChangeLODDistanceFactor(float InLODDistanceFactor);
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);
};

// Class Landscape.Landscape
// 0x000B (FullSize[0x0548] - InheritedSize[0x053D])
// LastOffsetWithSize(0x0540)
class ALandscape : public ALandscapeProxy
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.Landscape");
		return ptr;
	}


};

// Class Landscape.LandscapeBlueprintBrushBase
// 0x0010 (FullSize[0x0248] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
class ALandscapeBlueprintBrushBase : public AActor
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeBlueprintBrushBase");
		return ptr;
	}


	void RequestLandscapeUpdate();
	class UTextureRenderTarget2D* Render(bool InIsHeightmap, class UTextureRenderTarget2D* InCombinedResult, const struct FName& InWeightmapLayerName);
	void Initialize(const struct FTransform& InLandscapeTransform, const struct FIntPoint& InLandscapeSize, const struct FIntPoint& InLandscapeRenderTargetSize);
};

// Class Landscape.LandscapeComponent
// 0x01B3 (FullSize[0x05B8] - InheritedSize[0x0405])
// LastOffsetWithSize(0x0408)
#define PADDING_041F - 0x0000 // Minimum to subtract -> (0004)
class ULandscapeComponent : public UPrimitiveComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_041F, int,                                                                   SectionBaseY);                                             // 0x040C(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_041F, int,                                                                   ComponentSizeQuads);                                       // 0x0410(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000C PADDING_041F, int,                                                                   SubsectionSizeQuads);                                      // 0x0414(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_041F, int,                                                                   NumSubsections);                                           // 0x0418(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_041F, class UMaterialInterface*,                                             OverrideMaterial);                                         // 0x0420(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_041F, class UMaterialInterface*,                                             OverrideHoleMaterial);                                     // 0x0428(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_041F, TArray<struct FLandscapeComponentMaterialOverride>,                    OverrideMaterials);                                        // 0x0430(0x0010)  (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_041F, TArray<class UMaterialInstanceConstant*>,                              MaterialInstances);                                        // 0x0440(0x0010)  (ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0048 PADDING_041F, TArray<class UMaterialInstanceDynamic*>,                               MaterialInstancesDynamic);                                 // 0x0450(0x0010)  (ZeroConstructor, Transient, TextExportTransient, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_041F, TArray<int8_t>,                                                        LODIndexToMaterialIndex);                                  // 0x0460(0x0010)  (ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0068 PADDING_041F, TArray<int8_t>,                                                        MaterialIndexToDisabledTessellationMaterial);              // 0x0470(0x0010)  (ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0078 PADDING_041F, class UTexture2D*,                                                     XYOffsetmapTexture);                                       // 0x0480(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0088 PADDING_041F, struct FVector4,                                                       WeightmapScaleBias);                                       // 0x0490(0x0010)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0098 PADDING_041F, float,                                                                 WeightmapSubsectionOffset);                                // 0x04A0(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_041F, struct FVector4,                                                       HeightmapScaleBias);                                       // 0x04B0(0x0010)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_041F, struct FBox,                                                           CachedLocalBox);                                           // 0x04C0(0x001C)  (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00D4 PADDING_041F, TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent>,         CollisionComponent);                                       // 0x04DC(0x001C)  (ExportObject, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_041F, class UTexture2D*,                                                     HeightmapTexture);                                         // 0x04F8(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_041F, TArray<struct FWeightmapLayerAllocationInfo>,                          WeightmapLayerAllocations);                                // 0x0500(0x0010)  (ZeroConstructor, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0108 PADDING_041F, TArray<class UTexture2D*>,                                             WeightmapTextures);                                        // 0x0510(0x0010)  (ZeroConstructor, TextExportTransient, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0118 PADDING_041F, struct FGuid,                                                          MapBuildDataId);                                           // 0x0520(0x0010)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0128 PADDING_041F, TArray<struct FGuid>,                                                  IrrelevantLights);                                         // 0x0530(0x0010)  (ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0138 PADDING_041F, int,                                                                   CollisionMipLevel);                                        // 0x0540(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x013C PADDING_041F, int,                                                                   SimpleCollisionMipLevel);                                  // 0x0544(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0140 PADDING_041F, float,                                                                 NegativeZBoundsExtension);                                 // 0x0548(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0144 PADDING_041F, float,                                                                 PositiveZBoundsExtension);                                 // 0x054C(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0148 PADDING_041F, float,                                                                 StaticLightingResolution);                                 // 0x0550(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x014C PADDING_041F, int,                                                                   ForcedLOD);                                                // 0x0554(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0150 PADDING_041F, int,                                                                   LODBias);                                                  // 0x0558(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0154 PADDING_041F, struct FGuid,                                                          StateId);                                                  // 0x055C(0x0010)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0164 PADDING_041F, struct FGuid,                                                          BakedTextureMaterialGuid);                                 // 0x056C(0x0010)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0178 PADDING_041F, class UTexture2D*,                                                     GIBakedBaseColorTexture);                                  // 0x0580(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0180 PADDING_041F, unsigned char,                                                         MobileBlendableLayerMask);                                 // 0x0588(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0188 PADDING_041F, class UMaterialInterface*,                                             MobileMaterialInterface);                                  // 0x0590(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0190 PADDING_041F, TArray<class UMaterialInterface*>,                                     MobileMaterialInterfaces);                                 // 0x0598(0x0010)  (ZeroConstructor, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x01A0 PADDING_041F, TArray<class UTexture2D*>,                                             MobileWeightmapTextures);                                  // 0x05A8(0x0010)  (ZeroConstructor, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeComponent");
		return ptr;
	}


	class UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int InIndex);
};

// Class Landscape.LandscapeGizmoActor
// 0x0010 (FullSize[0x0248] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
class ALandscapeGizmoActor : public AActor
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGizmoActor");
		return ptr;
	}


};

// Class Landscape.LandscapeGizmoActiveActor
// 0x0000 (FullSize[0x0248] - InheritedSize[0x0248])
// LastOffsetWithSize(0x0238)
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGizmoActiveActor");
		return ptr;
	}


};

// Class Landscape.LandscapeGizmoRenderComponent
// 0x000B (FullSize[0x0410] - InheritedSize[0x0405])
// LastOffsetWithSize(0x0408)
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGizmoRenderComponent");
		return ptr;
	}


};

// Class Landscape.LandscapeGrassType
// 0x0032 (FullSize[0x005A] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0423 - 0x0000 // Minimum to subtract -> (0000)
class ULandscapeGrassType : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0423, TArray<struct FGrassVariety>,                                          GrassVarieties);                                           // 0x0028(0x0010)  (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0423, unsigned char,                                                         bEnableDensityScaling);                                    // 0x0038(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0423, class UStaticMesh*,                                                    GrassMesh);                                                // 0x0040(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0423, float,                                                                 GrassDensity);                                             // 0x0048(0x0004)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0024 PADDING_0423, float,                                                                 PlacementJitter);                                          // 0x004C(0x0004)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0423, int,                                                                   StartCullDistance);                                        // 0x0050(0x0004)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x002C PADDING_0423, int,                                                                   EndCullDistance);                                          // 0x0054(0x0004)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0423, bool,                                                                  RandomRotation);                                           // 0x0058(0x0001)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0031 PADDING_0423, bool,                                                                  AlignToSurface);                                           // 0x0059(0x0001)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGrassType");
		return ptr;
	}


};

// Class Landscape.LandscapeHeightfieldCollisionComponent
// 0x00A3 (FullSize[0x04A8] - InheritedSize[0x0405])
// LastOffsetWithSize(0x0408)
#define PADDING_0424 - 0x0000 // Minimum to subtract -> (0000)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0424, TArray<class ULandscapeLayerInfoObject*>,                              ComponentLayerInfos);                                      // 0x0408(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0424, int,                                                                   SectionBaseX);                                             // 0x0418(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0424, int,                                                                   SectionBaseY);                                             // 0x041C(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0424, int,                                                                   CollisionSizeQuads);                                       // 0x0420(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_0424, float,                                                                 CollisionScale);                                           // 0x0424(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0424, int,                                                                   SimpleCollisionSizeQuads);                                 // 0x0428(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0424, TArray<unsigned char>,                                                 CollisionQuadFlags);                                       // 0x0430(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0424, struct FGuid,                                                          HeightfieldGuid);                                          // 0x0440(0x0010)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0424, struct FBox,                                                           CachedLocalBox);                                           // 0x0450(0x001C)  (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0064 PADDING_0424, TLazyObjectPtr<class ULandscapeComponent>,                             RenderComponent);                                          // 0x046C(0x001C)  (ExportObject, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0424, TArray<class UPhysicalMaterial*>,                                      CookedPhysicalMaterials);                                  // 0x0498(0x0010)  (ZeroConstructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeHeightfieldCollisionComponent");
		return ptr;
	}


};

// Class Landscape.LandscapeInfo
// 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0425 - 0x0000 // Minimum to subtract -> (0000)
class ULandscapeInfo : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0425, TLazyObjectPtr<class ALandscape>,                                      LandscapeActor);                                           // 0x0028(0x001C)  (IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_0425, struct FGuid,                                                          LandscapeGuid);                                            // 0x0044(0x0010)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x002C PADDING_0425, int,                                                                   ComponentSizeQuads);                                       // 0x0054(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0425, int,                                                                   SubsectionSizeQuads);                                      // 0x0058(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0034 PADDING_0425, int,                                                                   ComponentNumSubsections);                                  // 0x005C(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0425, struct FVector,                                                        DrawScale);                                                // 0x0060(0x000C)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeInfo");
		return ptr;
	}


};

// Class Landscape.LandscapeInfoMap
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class ULandscapeInfoMap : public UObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeInfoMap");
		return ptr;
	}


};

// Class Landscape.LandscapeLayerInfoObject
// 0x0024 (FullSize[0x004C] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0428 - 0x0000 // Minimum to subtract -> (0000)
class ULandscapeLayerInfoObject : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0428, struct FName,                                                          LayerName);                                                // 0x0028(0x0008)  (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0428, class UPhysicalMaterial*,                                              PhysMaterial);                                             // 0x0030(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0428, float,                                                                 Hardness);                                                 // 0x0038(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_0428, struct FLinearColor,                                                   LayerUsageDebugColor);                                     // 0x003C(0x0010)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeLayerInfoObject");
		return ptr;
	}


};

// Class Landscape.LandscapeMaterialInstanceConstant
// 0x0001 (FullSize[0x01C9] - InheritedSize[0x01C8])
// LastOffsetWithSize(0x0148)
#define PADDING_0429 - 0x0000 // Minimum to subtract -> (0080)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0080 PADDING_0429, unsigned char,                                                         bIsLayerThumbnail);                                        // 0x01C8(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0429, unsigned char,                                                         bDisableTessellation);                                     // 0x01C8(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0429, unsigned char,                                                         bMobile);                                                  // 0x01C8(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0429, unsigned char,                                                         bEditorToolUsage);                                         // 0x01C8(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMaterialInstanceConstant");
		return ptr;
	}


};

// Class Landscape.LandscapeMeshCollisionComponent
// 0x0050 (FullSize[0x04F8] - InheritedSize[0x04A8])
// LastOffsetWithSize(0x04A8)
#define PADDING_042A - 0x0000 // Minimum to subtract -> (0040)
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0040 PADDING_042A, struct FGuid,                                                          MeshGuid);                                                 // 0x04E8(0x0010)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMeshCollisionComponent");
		return ptr;
	}


};

// Class Landscape.LandscapeMeshProxyActor
// 0x0018 (FullSize[0x0250] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_042B - 0x0000 // Minimum to subtract -> (0010)
class ALandscapeMeshProxyActor : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_042B, class ULandscapeMeshProxyComponent*,                                   LandscapeMeshProxyComponent);                              // 0x0248(0x0008)  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMeshProxyActor");
		return ptr;
	}


};

// Class Landscape.LandscapeMeshProxyComponent
// 0x0021 (FullSize[0x04B9] - InheritedSize[0x0498])
// LastOffsetWithSize(0x0498)
#define PADDING_042C - 0x0000 // Minimum to subtract -> (0000)
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_042C, struct FGuid,                                                          LandscapeGuid);                                            // 0x0498(0x0010)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0010 PADDING_042C, TArray<struct FIntPoint>,                                              ProxyComponentBases);                                      // 0x04A8(0x0010)  (ZeroConstructor, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0020 PADDING_042C, int8_t,                                                                ProxyLOD);                                                 // 0x04B8(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMeshProxyComponent");
		return ptr;
	}


};

// Class Landscape.LandscapeSettings
// 0x0014 (FullSize[0x003C] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_042D - 0x0000 // Minimum to subtract -> (0010)
class ULandscapeSettings : public UDeveloperSettings
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_042D, int,                                                                   MaxNumberOfLayers);                                        // 0x0038(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSettings");
		return ptr;
	}


};

// Class Landscape.LandscapeSplinesComponent
// 0x0033 (FullSize[0x0438] - InheritedSize[0x0405])
// LastOffsetWithSize(0x0408)
#define PADDING_042F - 0x0000 // Minimum to subtract -> (0000)
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_042F, TArray<class ULandscapeSplineControlPoint*>,                           ControlPoints);                                            // 0x0408(0x0010)  (ZeroConstructor, Protected, TextExportTransient, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0010 PADDING_042F, TArray<class ULandscapeSplineSegment*>,                                Segments);                                                 // 0x0418(0x0010)  (ZeroConstructor, Protected, TextExportTransient, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0020 PADDING_042F, TArray<class UMeshComponent*>,                                         CookedForeignMeshComponents);                              // 0x0428(0x0010)  (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, TextExportTransient, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSplinesComponent");
		return ptr;
	}


	TArray<class USplineMeshComponent*> GetSplineMeshComponents();
};

// Class Landscape.LandscapeSplineControlPoint
// 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0430 - 0x0000 // Minimum to subtract -> (0000)
class ULandscapeSplineControlPoint : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0430, struct FVector,                                                        Location);                                                 // 0x0028(0x000C)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000C PADDING_0430, struct FRotator,                                                       Rotation);                                                 // 0x0034(0x000C)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0430, float,                                                                 Width);                                                    // 0x0040(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_0430, float,                                                                 SideFalloff);                                              // 0x0044(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0430, float,                                                                 EndFalloff);                                               // 0x0048(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0430, TArray<struct FLandscapeSplineConnection>,                             ConnectedSegments);                                        // 0x0050(0x0010)  (ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0430, TArray<struct FLandscapeSplineInterpPoint>,                            Points);                                                   // 0x0060(0x0010)  (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0430, struct FBox,                                                           Bounds);                                                   // 0x0070(0x001C)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0430, class UControlPointMeshComponent*,                                     LocalMeshComponent);                                       // 0x0090(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSplineControlPoint");
		return ptr;
	}


};

// Class Landscape.LandscapeSplineSegment
// 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0431 - 0x0000 // Minimum to subtract -> (0000)
class ULandscapeSplineSegment : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0431, struct FLandscapeSplineSegmentConnection,                              Connections[0x2]);                                         // 0x0028(0x0018)  (Edit, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0431, struct FInterpCurveVector,                                             SplineInfo);                                               // 0x0058(0x0018)  (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0431, TArray<struct FLandscapeSplineInterpPoint>,                            Points);                                                   // 0x0070(0x0010)  (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0431, struct FBox,                                                           Bounds);                                                   // 0x0080(0x001C)  (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0431, TArray<class USplineMeshComponent*>,                                   LocalMeshComponents);                                      // 0x00A0(0x0010)  (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, TextExportTransient, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSplineSegment");
		return ptr;
	}


};

// Class Landscape.LandscapeStreamingProxy
// 0x0027 (FullSize[0x0564] - InheritedSize[0x053D])
// LastOffsetWithSize(0x0540)
#define PADDING_0432 - 0x0000 // Minimum to subtract -> (0008)
class ALandscapeStreamingProxy : public ALandscapeProxy
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_0432, TLazyObjectPtr<class ALandscape>,                                      LandscapeActor);                                           // 0x0548(0x001C)  (Edit, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeStreamingProxy");
		return ptr;
	}


};

// Class Landscape.LandscapeWeightmapUsage
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0434 - 0x0000 // Minimum to subtract -> (0000)
class ULandscapeWeightmapUsage : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0434, class ULandscapeComponent*,                                            ChannelUsage[0x4]);                                        // 0x0028(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0434, struct FGuid,                                                          LayerGuid);                                                // 0x0048(0x0010)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeWeightmapUsage");
		return ptr;
	}


};

// Class Landscape.MaterialExpressionLandscapeGrassOutput
// 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
// LastOffsetWithSize(0x0039)
#define PADDING_0435 - 0x0000 // Minimum to subtract -> (0007)
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0435, TArray<struct FGrassInput>,                                            GrassTypes);                                               // 0x0040(0x0010)  (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeGrassOutput");
		return ptr;
	}


};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// 0x0027 (FullSize[0x0060] - InheritedSize[0x0039])
// LastOffsetWithSize(0x0039)
#define PADDING_0436 - 0x0000 // Minimum to subtract -> (0007)
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0436, TArray<struct FLayerBlendInput>,                                       Layers);                                                   // 0x0040(0x0010)  (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0017 PADDING_0436, struct FGuid,                                                          ExpressionGUID);                                           // 0x0050(0x0010)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerBlend");
		return ptr;
	}


};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// 0x001B (FullSize[0x0054] - InheritedSize[0x0039])
// LastOffsetWithSize(0x0039)
#define PADDING_0437 - 0x0000 // Minimum to subtract -> (0007)
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0437, TEnumAsByte<ETerrainCoordMappingType>,                                 MappingType);                                              // 0x0040(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0437, TEnumAsByte<ELandscapeCustomizedCoordType>,                            CustomUVType);                                             // 0x0041(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000B PADDING_0437, float,                                                                 MappingScale);                                             // 0x0044(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000F PADDING_0437, float,                                                                 MappingRotation);                                          // 0x0048(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0013 PADDING_0437, float,                                                                 MappingPanU);                                              // 0x004C(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0017 PADDING_0437, float,                                                                 MappingPanV);                                              // 0x0050(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerCoords");
		return ptr;
	}


};

// Class Landscape.MaterialExpressionLandscapeLayerSample
// 0x0023 (FullSize[0x005C] - InheritedSize[0x0039])
// LastOffsetWithSize(0x0039)
#define PADDING_0438 - 0x0000 // Minimum to subtract -> (0007)
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0438, struct FName,                                                          ParameterName);                                            // 0x0040(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000F PADDING_0438, float,                                                                 PreviewWeight);                                            // 0x0048(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0013 PADDING_0438, struct FGuid,                                                          ExpressionGUID);                                           // 0x004C(0x0010)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSample");
		return ptr;
	}


};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// 0x004B (FullSize[0x0084] - InheritedSize[0x0039])
// LastOffsetWithSize(0x0039)
#define PADDING_0439 - 0x0000 // Minimum to subtract -> (0007)
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_0439, struct FExpressionInput,                                               LayerUsed);                                                // 0x0040(0x000C)  (NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001B PADDING_0439, struct FExpressionInput,                                               LayerNotUsed);                                             // 0x0054(0x000C)  (NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x002F PADDING_0439, struct FName,                                                          ParameterName);                                            // 0x0068(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0037 PADDING_0439, unsigned char,                                                         PreviewUsed);                                              // 0x0070(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003B PADDING_0439, struct FGuid,                                                          ExpressionGUID);                                           // 0x0074(0x0010)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSwitch");
		return ptr;
	}


};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// 0x0057 (FullSize[0x0090] - InheritedSize[0x0039])
// LastOffsetWithSize(0x0039)
#define PADDING_043B - 0x0000 // Minimum to subtract -> (0007)
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_043B, struct FExpressionInput,                                               Base);                                                     // 0x0040(0x000C)  (NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001B PADDING_043B, struct FExpressionInput,                                               Layer);                                                    // 0x0054(0x000C)  (NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x002F PADDING_043B, struct FName,                                                          ParameterName);                                            // 0x0068(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0037 PADDING_043B, float,                                                                 PreviewWeight);                                            // 0x0070(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003B PADDING_043B, struct FVector,                                                        ConstBase);                                                // 0x0074(0x000C)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0047 PADDING_043B, struct FGuid,                                                          ExpressionGUID);                                           // 0x0080(0x0010)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerWeight");
		return ptr;
	}


};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// 0x0017 (FullSize[0x0050] - InheritedSize[0x0039])
// LastOffsetWithSize(0x0039)
#define PADDING_043C - 0x0000 // Minimum to subtract -> (0007)
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_043C, struct FGuid,                                                          ExpressionGUID);                                           // 0x0040(0x0010)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeVisibilityMask");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
