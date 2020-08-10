// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class Landscape.ControlPointMeshComponent
// 0x0008 (0x04A0 - 0x0498)
public class UControlPointMeshComponent : UStaticMeshComponent
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class Landscape.LandscapeProxy
// 0x0305 (0x053D - 0x0238)
public class ALandscapeProxy : AActor
{
	#region Offsets
	private ExternalOffset<ULandscapeSplinesComponent>        _offSplineComponent                                            = new ExternalOffset<ULandscapeSplinesComponent>(0x0248, true); // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGuid>                             _offLandscapeGuid                                              = new ExternalOffset<FGuid>(0x0250, false);                    // 0x0250(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FIntPoint>                         _offLandscapeSectionOffset                                     = new ExternalOffset<FIntPoint>(0x0260, false);                // 0x0260(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offMaxLODLevel                                                = new ExternalOffset<int>(0x0268);                             // 0x0268(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offLODDistanceFactor                                          = new ExternalOffset<float>(0x026C);                           // 0x026C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ELandscapeLODFalloff>> _offLODFalloff                                                 = new ExternalOffset<TEnumAsByte<ELandscapeLODFalloff>>(0x0270, false); // 0x0270(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offComponentScreenSizeToUseSubSections                        = new ExternalOffset<float>(0x0274);                           // 0x0274(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offLOD0ScreenSize                                             = new ExternalOffset<float>(0x0278);                           // 0x0278(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offLOD0DistributionSetting                                    = new ExternalOffset<float>(0x027C);                           // 0x027C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offLODDistributionSetting                                     = new ExternalOffset<float>(0x0280);                           // 0x0280(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offTessellationComponentScreenSize                            = new ExternalOffset<float>(0x0284);                           // 0x0284(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offUseTessellationComponentScreenSizeFalloff                  = new ExternalOffset<byte/*(bool)*/>(0x0288);                  // 0x0288(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offTessellationComponentScreenSizeFalloff                     = new ExternalOffset<float>(0x028C);                           // 0x028C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offOccluderGeometryLOD                                        = new ExternalOffset<int>(0x0290);                             // 0x0290(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offStaticLightingLOD                                          = new ExternalOffset<int>(0x0294);                             // 0x0294(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UPhysicalMaterial>                 _offDefaultPhysMaterial                                        = new ExternalOffset<UPhysicalMaterial>(0x0298, true);         // 0x0298(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offStreamingDistanceMultiplier                                = new ExternalOffset<float>(0x02A0);                           // 0x02A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMaterialInterface>                _offLandscapeMaterial                                          = new ExternalOffset<UMaterialInterface>(0x02A8, true);        // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMaterialInterface>                _offLandscapeHoleMaterial                                      = new ExternalOffset<UMaterialInterface>(0x02B0, true);        // 0x02B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FLandscapeProxyMaterialOverride>> _offLandscapeMaterialsOverride                                 = new ExternalOffset<TArray<FLandscapeProxyMaterialOverride>>(0x02B8, false); // 0x02B8(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<URuntimeVirtualTexture>>    _offRuntimeVirtualTextures                                     = new ExternalOffset<TArray<URuntimeVirtualTexture>>(0x02C8, false); // 0x02C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offVirtualTextureNumLods                                      = new ExternalOffset<int>(0x02D8);                             // 0x02D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offVirtualTextureLodBias                                      = new ExternalOffset<int>(0x02DC);                             // 0x02DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ERuntimeVirtualTextureMainPassType> _offVirtualTextureRenderPassType                               = new ExternalOffset<ERuntimeVirtualTextureMainPassType>(0x02E0, false); // 0x02E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offNegativeZBoundsExtension                                   = new ExternalOffset<float>(0x02E4);                           // 0x02E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offPositiveZBoundsExtension                                   = new ExternalOffset<float>(0x02E8);                           // 0x02E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<ULandscapeComponent>>       _offLandscapeComponents                                        = new ExternalOffset<TArray<ULandscapeComponent>>(0x02F0, false); // 0x02F0(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<ULandscapeHeightfieldCollisionComponent>> _offCollisionComponents                                        = new ExternalOffset<TArray<ULandscapeHeightfieldCollisionComponent>>(0x0300, false); // 0x0300(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UHierarchicalInstancedStaticMeshComponent>> _offFoliageComponents                                          = new ExternalOffset<TArray<UHierarchicalInstancedStaticMeshComponent>>(0x0310, false); // 0x0310(0x0010) (ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbHasLandscapeGrass                                         = new ExternalOffset<byte/*(bool)*/>(0x0384);                  // 0x0384(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offStaticLightingResolution                                   = new ExternalOffset<float>(0x0388);                           // 0x0388(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbCastStaticShadow                                          = new ExternalOffset<char>(0x038C, false);                     // 0x038C(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbCastShadowAsTwoSided                                      = new ExternalOffset<char>(0x038C, false);                     // 0x038C(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbCastFarShadow                                             = new ExternalOffset<char>(0x038C, false);                     // 0x038C(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbAffectDistanceFieldLighting                               = new ExternalOffset<char>(0x0390, false);                     // 0x0390(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLightingChannels>                 _offLightingChannels                                           = new ExternalOffset<FLightingChannels>(0x0391, false);        // 0x0391(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbUseMaterialPositionOffsetInStaticLighting                 = new ExternalOffset<char>(0x0394, false);                     // 0x0394(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbRenderCustomDepth                                         = new ExternalOffset<char>(0x0394, false);                     // 0x0394(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offCustomDepthStencilValue                                    = new ExternalOffset<int>(0x0398);                             // 0x0398(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offLDMaxDrawDistance                                          = new ExternalOffset<float>(0x039C);                           // 0x039C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLightmassPrimitiveSettings>       _offLightmassSettings                                          = new ExternalOffset<FLightmassPrimitiveSettings>(0x03A0, false); // 0x03A0(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offCollisionMipLevel                                          = new ExternalOffset<int>(0x03B8);                             // 0x03B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offSimpleCollisionMipLevel                                    = new ExternalOffset<int>(0x03BC);                             // 0x03BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offCollisionThickness                                         = new ExternalOffset<float>(0x03C0);                           // 0x03C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FBodyInstance>                     _offBodyInstance                                               = new ExternalOffset<FBodyInstance>(0x03C8, false);            // 0x03C8(0x0110) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbGenerateOverlapEvents                                     = new ExternalOffset<char>(0x04D8, false);                     // 0x04D8(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbBakeMaterialPositionOffsetIntoCollision                   = new ExternalOffset<char>(0x04D8, false);                     // 0x04D8(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offComponentSizeQuads                                         = new ExternalOffset<int>(0x04DC);                             // 0x04DC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offSubsectionSizeQuads                                        = new ExternalOffset<int>(0x04E0);                             // 0x04E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offNumSubsections                                             = new ExternalOffset<int>(0x04E4);                             // 0x04E4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbUsedForNavigation                                         = new ExternalOffset<char>(0x04E8, false);                     // 0x04E8(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbUseDynamicMaterialInstance                                = new ExternalOffset<byte/*(bool)*/>(0x04EC);                  // 0x04EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ENavDataGatheringMode>             _offNavigationGeometryGatheringMode                            = new ExternalOffset<ENavDataGatheringMode>(0x04ED, false);    // 0x04ED(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbUseLandscapeForCullingInvisibleHLODVertices               = new ExternalOffset<byte/*(bool)*/>(0x04EE);                  // 0x04EE(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbHasLayersContent                                          = new ExternalOffset<byte/*(bool)*/>(0x04EF);                  // 0x04EF(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private TMap<class UTexture2D*, class ULandscapeWeightmapUsage*> _offWeightmapUsageMap                                          = new ExternalOffset<TMap<ULandscapeWeightmapUsage>>(0x04F0, false); // 0x04F0(0x0050) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ULandscapeSplinesComponent                         SplineComponent                                                => _offSplineComponent.GetValue();
	public FGuid                                              LandscapeGuid                                                  => _offLandscapeGuid.GetValue();
	public FIntPoint                                          LandscapeSectionOffset                                         => _offLandscapeSectionOffset.GetValue();
	public int                                                MaxLODLevel                                                    => _offMaxLODLevel.GetValue();
	public float                                              LODDistanceFactor                                              => _offLODDistanceFactor.GetValue();
	public TEnumAsByte<ELandscapeLODFalloff>                  LODFalloff                                                     => _offLODFalloff.GetValue();
	public float                                              ComponentScreenSizeToUseSubSections                            => _offComponentScreenSizeToUseSubSections.GetValue();
	public float                                              LOD0ScreenSize                                                 => _offLOD0ScreenSize.GetValue();
	public float                                              LOD0DistributionSetting                                        => _offLOD0DistributionSetting.GetValue();
	public float                                              LODDistributionSetting                                         => _offLODDistributionSetting.GetValue();
	public float                                              TessellationComponentScreenSize                                => _offTessellationComponentScreenSize.GetValue();
	public byte/*(bool)*/                                     UseTessellationComponentScreenSizeFalloff                      => _offUseTessellationComponentScreenSizeFalloff.GetValue();
	public float                                              TessellationComponentScreenSizeFalloff                         => _offTessellationComponentScreenSizeFalloff.GetValue();
	public int                                                OccluderGeometryLOD                                            => _offOccluderGeometryLOD.GetValue();
	public int                                                StaticLightingLOD                                              => _offStaticLightingLOD.GetValue();
	public UPhysicalMaterial                                  DefaultPhysMaterial                                            => _offDefaultPhysMaterial.GetValue();
	public float                                              StreamingDistanceMultiplier                                    => _offStreamingDistanceMultiplier.GetValue();
	public UMaterialInterface                                 LandscapeMaterial                                              => _offLandscapeMaterial.GetValue();
	public UMaterialInterface                                 LandscapeHoleMaterial                                          => _offLandscapeHoleMaterial.GetValue();
	public TArray<FLandscapeProxyMaterialOverride>            LandscapeMaterialsOverride                                     => _offLandscapeMaterialsOverride.GetValue();
	public TArray<URuntimeVirtualTexture>                     RuntimeVirtualTextures                                         => _offRuntimeVirtualTextures.GetValue();
	public int                                                VirtualTextureNumLods                                          => _offVirtualTextureNumLods.GetValue();
	public int                                                VirtualTextureLodBias                                          => _offVirtualTextureLodBias.GetValue();
	public ERuntimeVirtualTextureMainPassType                 VirtualTextureRenderPassType                                   => _offVirtualTextureRenderPassType.GetValue();
	public float                                              NegativeZBoundsExtension                                       => _offNegativeZBoundsExtension.GetValue();
	public float                                              PositiveZBoundsExtension                                       => _offPositiveZBoundsExtension.GetValue();
	public TArray<ULandscapeComponent>                        LandscapeComponents                                            => _offLandscapeComponents.GetValue();
	public TArray<ULandscapeHeightfieldCollisionComponent>    CollisionComponents                                            => _offCollisionComponents.GetValue();
	public TArray<UHierarchicalInstancedStaticMeshComponent>  FoliageComponents                                              => _offFoliageComponents.GetValue();
	public byte/*(bool)*/                                     bHasLandscapeGrass                                             => _offbHasLandscapeGrass.GetValue();
	public float                                              StaticLightingResolution                                       => _offStaticLightingResolution.GetValue();
	public FLightingChannels                                  LightingChannels                                               => _offLightingChannels.GetValue();
	public int                                                CustomDepthStencilValue                                        => _offCustomDepthStencilValue.GetValue();
	public float                                              LDMaxDrawDistance                                              => _offLDMaxDrawDistance.GetValue();
	public FLightmassPrimitiveSettings                        LightmassSettings                                              => _offLightmassSettings.GetValue();
	public int                                                CollisionMipLevel                                              => _offCollisionMipLevel.GetValue();
	public int                                                SimpleCollisionMipLevel                                        => _offSimpleCollisionMipLevel.GetValue();
	public float                                              CollisionThickness                                             => _offCollisionThickness.GetValue();
	public FBodyInstance                                      BodyInstance                                                   => _offBodyInstance.GetValue();
	public int                                                ComponentSizeQuads                                             => _offComponentSizeQuads.GetValue();
	public int                                                SubsectionSizeQuads                                            => _offSubsectionSizeQuads.GetValue();
	public int                                                NumSubsections                                                 => _offNumSubsections.GetValue();
	public byte/*(bool)*/                                     bUseDynamicMaterialInstance                                    => _offbUseDynamicMaterialInstance.GetValue();
	public ENavDataGatheringMode                              NavigationGeometryGatheringMode                                => _offNavigationGeometryGatheringMode.GetValue();
	public byte/*(bool)*/                                     bUseLandscapeForCullingInvisibleHLODVertices                   => _offbUseLandscapeForCullingInvisibleHLODVertices.GetValue();
	public byte/*(bool)*/                                     bHasLayersContent                                              => _offbHasLayersContent.GetValue();
	#endregion


}

// Class Landscape.Landscape
// 0x000B (0x0548 - 0x053D)
public class ALandscape : ALandscapeProxy
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class Landscape.LandscapeBlueprintBrushBase
// 0x0010 (0x0248 - 0x0238)
public class ALandscapeBlueprintBrushBase : AActor
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class Landscape.LandscapeComponent
// 0x01B3 (0x05B8 - 0x0405)
public class ULandscapeComponent : UPrimitiveComponent
{
	#region Offsets
	private ExternalOffset<int>                               _offSectionBaseY                                               = new ExternalOffset<int>(0x040C);                             // 0x040C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offComponentSizeQuads                                         = new ExternalOffset<int>(0x0410);                             // 0x0410(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offSubsectionSizeQuads                                        = new ExternalOffset<int>(0x0414);                             // 0x0414(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offNumSubsections                                             = new ExternalOffset<int>(0x0418);                             // 0x0418(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMaterialInterface>                _offOverrideMaterial                                           = new ExternalOffset<UMaterialInterface>(0x0420, true);        // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMaterialInterface>                _offOverrideHoleMaterial                                       = new ExternalOffset<UMaterialInterface>(0x0428, true);        // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FLandscapeComponentMaterialOverride>> _offOverrideMaterials                                          = new ExternalOffset<TArray<FLandscapeComponentMaterialOverride>>(0x0430, false); // 0x0430(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UMaterialInstanceConstant>> _offMaterialInstances                                          = new ExternalOffset<TArray<UMaterialInstanceConstant>>(0x0440, false); // 0x0440(0x0010) (ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UMaterialInstanceDynamic>>  _offMaterialInstancesDynamic                                   = new ExternalOffset<TArray<UMaterialInstanceDynamic>>(0x0450, false); // 0x0450(0x0010) (ZeroConstructor, Transient, TextExportTransient, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<int8_t>>                    _offLODIndexToMaterialIndex                                    = new ExternalOffset<TArray<int8_t>>(0x0460, false);           // 0x0460(0x0010) (ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<int8_t>>                    _offMaterialIndexToDisabledTessellationMaterial                = new ExternalOffset<TArray<int8_t>>(0x0470, false);           // 0x0470(0x0010) (ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic)
	private ExternalOffset<UTexture2D>                        _offXYOffsetmapTexture                                         = new ExternalOffset<UTexture2D>(0x0480, true);                // 0x0480(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector4>                          _offWeightmapScaleBias                                         = new ExternalOffset<FVector4>(0x0490, false);                 // 0x0490(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offWeightmapSubsectionOffset                                  = new ExternalOffset<float>(0x04A0);                           // 0x04A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector4>                          _offHeightmapScaleBias                                         = new ExternalOffset<FVector4>(0x04B0, false);                 // 0x04B0(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FBox>                              _offCachedLocalBox                                             = new ExternalOffset<FBox>(0x04C0, false);                     // 0x04C0(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TLazyObjectPtr<ULandscapeHeightfieldCollisionComponent>> _offCollisionComponent                                         = new ExternalOffset<TLazyObjectPtr<ULandscapeHeightfieldCollisionComponent>>(0x04DC, false); // 0x04DC(0x001C) (ExportObject, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UTexture2D>                        _offHeightmapTexture                                           = new ExternalOffset<UTexture2D>(0x04F8, true);                // 0x04F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FWeightmapLayerAllocationInfo>> _offWeightmapLayerAllocations                                  = new ExternalOffset<TArray<FWeightmapLayerAllocationInfo>>(0x0500, false); // 0x0500(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<UTexture2D>>                _offWeightmapTextures                                          = new ExternalOffset<TArray<UTexture2D>>(0x0510, false);       // 0x0510(0x0010) (ZeroConstructor, TextExportTransient, NativeAccessSpecifierPrivate)
	private ExternalOffset<FGuid>                             _offMapBuildDataId                                             = new ExternalOffset<FGuid>(0x0520, false);                    // 0x0520(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FGuid>>                     _offIrrelevantLights                                           = new ExternalOffset<TArray<FGuid>>(0x0530, false);            // 0x0530(0x0010) (ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offCollisionMipLevel                                          = new ExternalOffset<int>(0x0540);                             // 0x0540(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offSimpleCollisionMipLevel                                    = new ExternalOffset<int>(0x0544);                             // 0x0544(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offNegativeZBoundsExtension                                   = new ExternalOffset<float>(0x0548);                           // 0x0548(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offPositiveZBoundsExtension                                   = new ExternalOffset<float>(0x054C);                           // 0x054C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offStaticLightingResolution                                   = new ExternalOffset<float>(0x0550);                           // 0x0550(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offForcedLOD                                                  = new ExternalOffset<int>(0x0554);                             // 0x0554(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offLODBias                                                    = new ExternalOffset<int>(0x0558);                             // 0x0558(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGuid>                             _offStateId                                                    = new ExternalOffset<FGuid>(0x055C, false);                    // 0x055C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGuid>                             _offBakedTextureMaterialGuid                                   = new ExternalOffset<FGuid>(0x056C, false);                    // 0x056C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UTexture2D>                        _offGIBakedBaseColorTexture                                    = new ExternalOffset<UTexture2D>(0x0580, true);                // 0x0580(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offMobileBlendableLayerMask                                   = new ExternalOffset<char>(0x0588, false);                     // 0x0588(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMaterialInterface>                _offMobileMaterialInterface                                    = new ExternalOffset<UMaterialInterface>(0x0590, true);        // 0x0590(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UMaterialInterface>>        _offMobileMaterialInterfaces                                   = new ExternalOffset<TArray<UMaterialInterface>>(0x0598, false); // 0x0598(0x0010) (ZeroConstructor, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UTexture2D>>                _offMobileWeightmapTextures                                    = new ExternalOffset<TArray<UTexture2D>>(0x05A8, false);       // 0x05A8(0x0010) (ZeroConstructor, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                SectionBaseY                                                   => _offSectionBaseY.GetValue();
	public int                                                ComponentSizeQuads                                             => _offComponentSizeQuads.GetValue();
	public int                                                SubsectionSizeQuads                                            => _offSubsectionSizeQuads.GetValue();
	public int                                                NumSubsections                                                 => _offNumSubsections.GetValue();
	public UMaterialInterface                                 OverrideMaterial                                               => _offOverrideMaterial.GetValue();
	public UMaterialInterface                                 OverrideHoleMaterial                                           => _offOverrideHoleMaterial.GetValue();
	public TArray<FLandscapeComponentMaterialOverride>        OverrideMaterials                                              => _offOverrideMaterials.GetValue();
	public TArray<UMaterialInstanceConstant>                  MaterialInstances                                              => _offMaterialInstances.GetValue();
	public TArray<UMaterialInstanceDynamic>                   MaterialInstancesDynamic                                       => _offMaterialInstancesDynamic.GetValue();
	public TArray<int8_t>                                     LODIndexToMaterialIndex                                        => _offLODIndexToMaterialIndex.GetValue();
	public TArray<int8_t>                                     MaterialIndexToDisabledTessellationMaterial                    => _offMaterialIndexToDisabledTessellationMaterial.GetValue();
	public UTexture2D                                         XYOffsetmapTexture                                             => _offXYOffsetmapTexture.GetValue();
	public FVector4                                           WeightmapScaleBias                                             => _offWeightmapScaleBias.GetValue();
	public float                                              WeightmapSubsectionOffset                                      => _offWeightmapSubsectionOffset.GetValue();
	public FVector4                                           HeightmapScaleBias                                             => _offHeightmapScaleBias.GetValue();
	public FBox                                               CachedLocalBox                                                 => _offCachedLocalBox.GetValue();
	public TLazyObjectPtr<ULandscapeHeightfieldCollisionComponent> CollisionComponent                                             => _offCollisionComponent.GetValue();
	public UTexture2D                                         HeightmapTexture                                               => _offHeightmapTexture.GetValue();
	public TArray<FWeightmapLayerAllocationInfo>              WeightmapLayerAllocations                                      => _offWeightmapLayerAllocations.GetValue();
	public TArray<UTexture2D>                                 WeightmapTextures                                              => _offWeightmapTextures.GetValue();
	public FGuid                                              MapBuildDataId                                                 => _offMapBuildDataId.GetValue();
	public TArray<FGuid>                                      IrrelevantLights                                               => _offIrrelevantLights.GetValue();
	public int                                                CollisionMipLevel                                              => _offCollisionMipLevel.GetValue();
	public int                                                SimpleCollisionMipLevel                                        => _offSimpleCollisionMipLevel.GetValue();
	public float                                              NegativeZBoundsExtension                                       => _offNegativeZBoundsExtension.GetValue();
	public float                                              PositiveZBoundsExtension                                       => _offPositiveZBoundsExtension.GetValue();
	public float                                              StaticLightingResolution                                       => _offStaticLightingResolution.GetValue();
	public int                                                ForcedLOD                                                      => _offForcedLOD.GetValue();
	public int                                                LODBias                                                        => _offLODBias.GetValue();
	public FGuid                                              StateId                                                        => _offStateId.GetValue();
	public FGuid                                              BakedTextureMaterialGuid                                       => _offBakedTextureMaterialGuid.GetValue();
	public UTexture2D                                         GIBakedBaseColorTexture                                        => _offGIBakedBaseColorTexture.GetValue();
	public UMaterialInterface                                 MobileMaterialInterface                                        => _offMobileMaterialInterface.GetValue();
	public TArray<UMaterialInterface>                         MobileMaterialInterfaces                                       => _offMobileMaterialInterfaces.GetValue();
	public TArray<UTexture2D>                                 MobileWeightmapTextures                                        => _offMobileWeightmapTextures.GetValue();
	#endregion


}

// Class Landscape.LandscapeGizmoActor
// 0x0010 (0x0248 - 0x0238)
public class ALandscapeGizmoActor : AActor
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class Landscape.LandscapeGizmoActiveActor
// 0x0000 (0x0248 - 0x0248)
public class ALandscapeGizmoActiveActor : ALandscapeGizmoActor
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class Landscape.LandscapeGizmoRenderComponent
// 0x000B (0x0410 - 0x0405)
public class ULandscapeGizmoRenderComponent : UPrimitiveComponent
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class Landscape.LandscapeGrassType
// 0x0032 (0x005A - 0x0028)
public class ULandscapeGrassType : UObject
{
	#region Offsets
	private ExternalOffset<TArray<FGrassVariety>>             _offGrassVarieties                                             = new ExternalOffset<TArray<FGrassVariety>>(0x0028, false);    // 0x0028(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbEnableDensityScaling                                      = new ExternalOffset<char>(0x0038, false);                     // 0x0038(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UStaticMesh>                       _offGrassMesh                                                  = new ExternalOffset<UStaticMesh>(0x0040, true);               // 0x0040(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offGrassDensity                                               = new ExternalOffset<float>(0x0048);                           // 0x0048(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offPlacementJitter                                            = new ExternalOffset<float>(0x004C);                           // 0x004C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offStartCullDistance                                          = new ExternalOffset<int>(0x0050);                             // 0x0050(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offEndCullDistance                                            = new ExternalOffset<int>(0x0054);                             // 0x0054(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offRandomRotation                                             = new ExternalOffset<byte/*(bool)*/>(0x0058);                  // 0x0058(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offAlignToSurface                                             = new ExternalOffset<byte/*(bool)*/>(0x0059);                  // 0x0059(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FGrassVariety>                              GrassVarieties                                                 => _offGrassVarieties.GetValue();
	public UStaticMesh                                        GrassMesh                                                      => _offGrassMesh.GetValue();
	public float                                              GrassDensity                                                   => _offGrassDensity.GetValue();
	public float                                              PlacementJitter                                                => _offPlacementJitter.GetValue();
	public int                                                StartCullDistance                                              => _offStartCullDistance.GetValue();
	public int                                                EndCullDistance                                                => _offEndCullDistance.GetValue();
	public byte/*(bool)*/                                     RandomRotation                                                 => _offRandomRotation.GetValue();
	public byte/*(bool)*/                                     AlignToSurface                                                 => _offAlignToSurface.GetValue();
	#endregion


}

// Class Landscape.LandscapeHeightfieldCollisionComponent
// 0x00A3 (0x04A8 - 0x0405)
public class ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent
{
	#region Offsets
	private ExternalOffset<TArray<ULandscapeLayerInfoObject>> _offComponentLayerInfos                                        = new ExternalOffset<TArray<ULandscapeLayerInfoObject>>(0x0408, false); // 0x0408(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offSectionBaseX                                               = new ExternalOffset<int>(0x0418);                             // 0x0418(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offSectionBaseY                                               = new ExternalOffset<int>(0x041C);                             // 0x041C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offCollisionSizeQuads                                         = new ExternalOffset<int>(0x0420);                             // 0x0420(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offCollisionScale                                             = new ExternalOffset<float>(0x0424);                           // 0x0424(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offSimpleCollisionSizeQuads                                   = new ExternalOffset<int>(0x0428);                             // 0x0428(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<char>>                      _offCollisionQuadFlags                                         = new ExternalOffset<TArray<char>>(0x0430, false);             // 0x0430(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FGuid>                             _offHeightfieldGuid                                            = new ExternalOffset<FGuid>(0x0440, false);                    // 0x0440(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FBox>                              _offCachedLocalBox                                             = new ExternalOffset<FBox>(0x0450, false);                     // 0x0450(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TLazyObjectPtr<ULandscapeComponent>> _offRenderComponent                                            = new ExternalOffset<TLazyObjectPtr<ULandscapeComponent>>(0x046C, false); // 0x046C(0x001C) (ExportObject, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UPhysicalMaterial>>         _offCookedPhysicalMaterials                                    = new ExternalOffset<TArray<UPhysicalMaterial>>(0x0498, false); // 0x0498(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<ULandscapeLayerInfoObject>                  ComponentLayerInfos                                            => _offComponentLayerInfos.GetValue();
	public int                                                SectionBaseX                                                   => _offSectionBaseX.GetValue();
	public int                                                SectionBaseY                                                   => _offSectionBaseY.GetValue();
	public int                                                CollisionSizeQuads                                             => _offCollisionSizeQuads.GetValue();
	public float                                              CollisionScale                                                 => _offCollisionScale.GetValue();
	public int                                                SimpleCollisionSizeQuads                                       => _offSimpleCollisionSizeQuads.GetValue();
	public TArray<char>                                       CollisionQuadFlags                                             => _offCollisionQuadFlags.GetValue();
	public FGuid                                              HeightfieldGuid                                                => _offHeightfieldGuid.GetValue();
	public FBox                                               CachedLocalBox                                                 => _offCachedLocalBox.GetValue();
	public TLazyObjectPtr<ULandscapeComponent>                RenderComponent                                                => _offRenderComponent.GetValue();
	public TArray<UPhysicalMaterial>                          CookedPhysicalMaterials                                        => _offCookedPhysicalMaterials.GetValue();
	#endregion


}

// Class Landscape.LandscapeInfo
// 0x0098 (0x00C0 - 0x0028)
public class ULandscapeInfo : UObject
{
	#region Offsets
	private ExternalOffset<TLazyObjectPtr<ALandscape>>        _offLandscapeActor                                             = new ExternalOffset<TLazyObjectPtr<ALandscape>>(0x0028, false); // 0x0028(0x001C) (IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGuid>                             _offLandscapeGuid                                              = new ExternalOffset<FGuid>(0x0044, false);                    // 0x0044(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offComponentSizeQuads                                         = new ExternalOffset<int>(0x0054);                             // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offSubsectionSizeQuads                                        = new ExternalOffset<int>(0x0058);                             // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offComponentNumSubsections                                    = new ExternalOffset<int>(0x005C);                             // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offDrawScale                                                  = new ExternalOffset<FVector>(0x0060, false);                  // 0x0060(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TLazyObjectPtr<ALandscape>                         LandscapeActor                                                 => _offLandscapeActor.GetValue();
	public FGuid                                              LandscapeGuid                                                  => _offLandscapeGuid.GetValue();
	public int                                                ComponentSizeQuads                                             => _offComponentSizeQuads.GetValue();
	public int                                                SubsectionSizeQuads                                            => _offSubsectionSizeQuads.GetValue();
	public int                                                ComponentNumSubsections                                        => _offComponentNumSubsections.GetValue();
	public FVector                                            DrawScale                                                      => _offDrawScale.GetValue();
	#endregion


}

// Class Landscape.LandscapeInfoMap
// 0x0000 (0x0028 - 0x0028)
public class ULandscapeInfoMap : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class Landscape.LandscapeLayerInfoObject
// 0x0024 (0x004C - 0x0028)
public class ULandscapeLayerInfoObject : UObject
{
	#region Offsets
	private ExternalOffset<FName>                             _offLayerName                                                  = new ExternalOffset<FName>(0x0028, false);                    // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UPhysicalMaterial>                 _offPhysMaterial                                               = new ExternalOffset<UPhysicalMaterial>(0x0030, true);         // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offHardness                                                   = new ExternalOffset<float>(0x0038);                           // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offLayerUsageDebugColor                                       = new ExternalOffset<FLinearColor>(0x003C, false);             // 0x003C(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                              LayerName                                                      => _offLayerName.GetValue();
	public UPhysicalMaterial                                  PhysMaterial                                                   => _offPhysMaterial.GetValue();
	public float                                              Hardness                                                       => _offHardness.GetValue();
	public FLinearColor                                       LayerUsageDebugColor                                           => _offLayerUsageDebugColor.GetValue();
	#endregion


}

// Class Landscape.LandscapeMaterialInstanceConstant
// 0x0001 (0x01C9 - 0x01C8)
public class ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant
{
	#region Offsets
//	private ExternalOffset<char>                              _offbIsLayerThumbnail                                          = new ExternalOffset<char>(0x01C8, false);                     // 0x01C8(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbDisableTessellation                                       = new ExternalOffset<char>(0x01C8, false);                     // 0x01C8(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbMobile                                                    = new ExternalOffset<char>(0x01C8, false);                     // 0x01C8(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbEditorToolUsage                                           = new ExternalOffset<char>(0x01C8, false);                     // 0x01C8(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	#endregion


}

// Class Landscape.LandscapeMeshCollisionComponent
// 0x0050 (0x04F8 - 0x04A8)
public class ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent
{
	#region Offsets
	private ExternalOffset<FGuid>                             _offMeshGuid                                                   = new ExternalOffset<FGuid>(0x04E8, false);                    // 0x04E8(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGuid                                              MeshGuid                                                       => _offMeshGuid.GetValue();
	#endregion


}

// Class Landscape.LandscapeMeshProxyActor
// 0x0018 (0x0250 - 0x0238)
public class ALandscapeMeshProxyActor : AActor
{
	#region Offsets
	private ExternalOffset<ULandscapeMeshProxyComponent>      _offLandscapeMeshProxyComponent                                = new ExternalOffset<ULandscapeMeshProxyComponent>(0x0248, true); // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public ULandscapeMeshProxyComponent                       LandscapeMeshProxyComponent                                    => _offLandscapeMeshProxyComponent.GetValue();
	#endregion


}

// Class Landscape.LandscapeMeshProxyComponent
// 0x0021 (0x04B9 - 0x0498)
public class ULandscapeMeshProxyComponent : UStaticMeshComponent
{
	#region Offsets
	private ExternalOffset<FGuid>                             _offLandscapeGuid                                              = new ExternalOffset<FGuid>(0x0498, false);                    // 0x0498(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FIntPoint>>                 _offProxyComponentBases                                        = new ExternalOffset<TArray<FIntPoint>>(0x04A8, false);        // 0x04A8(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<sbyte>                             _offProxyLOD                                                   = new ExternalOffset<sbyte>(0x04B8);                           // 0x04B8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FGuid                                              LandscapeGuid                                                  => _offLandscapeGuid.GetValue();
	public TArray<FIntPoint>                                  ProxyComponentBases                                            => _offProxyComponentBases.GetValue();
	public sbyte                                              ProxyLOD                                                       => _offProxyLOD.GetValue();
	#endregion


}

// Class Landscape.LandscapeSettings
// 0x0014 (0x003C - 0x0028)
public class ULandscapeSettings : UDeveloperSettings
{
	#region Offsets
	private ExternalOffset<int>                               _offMaxNumberOfLayers                                          = new ExternalOffset<int>(0x0038);                             // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                MaxNumberOfLayers                                              => _offMaxNumberOfLayers.GetValue();
	#endregion


}

// Class Landscape.LandscapeSplinesComponent
// 0x0033 (0x0438 - 0x0405)
public class ULandscapeSplinesComponent : UPrimitiveComponent
{
	#region Offsets
	private ExternalOffset<TArray<ULandscapeSplineControlPoint>> _offControlPoints                                              = new ExternalOffset<TArray<ULandscapeSplineControlPoint>>(0x0408, false); // 0x0408(0x0010) (ZeroConstructor, Protected, TextExportTransient, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<ULandscapeSplineSegment>>   _offSegments                                                   = new ExternalOffset<TArray<ULandscapeSplineSegment>>(0x0418, false); // 0x0418(0x0010) (ZeroConstructor, Protected, TextExportTransient, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<UMeshComponent>>            _offCookedForeignMeshComponents                                = new ExternalOffset<TArray<UMeshComponent>>(0x0428, false);   // 0x0428(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, TextExportTransient, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public TArray<ULandscapeSplineControlPoint>               ControlPoints                                                  => _offControlPoints.GetValue();
	public TArray<ULandscapeSplineSegment>                    Segments                                                       => _offSegments.GetValue();
	public TArray<UMeshComponent>                             CookedForeignMeshComponents                                    => _offCookedForeignMeshComponents.GetValue();
	#endregion


}

// Class Landscape.LandscapeSplineControlPoint
// 0x0070 (0x0098 - 0x0028)
public class ULandscapeSplineControlPoint : UObject
{
	#region Offsets
	private ExternalOffset<FVector>                           _offLocation                                                   = new ExternalOffset<FVector>(0x0028, false);                  // 0x0028(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FRotator>                          _offRotation                                                   = new ExternalOffset<FRotator>(0x0034, false);                 // 0x0034(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offWidth                                                      = new ExternalOffset<float>(0x0040);                           // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offSideFalloff                                                = new ExternalOffset<float>(0x0044);                           // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offEndFalloff                                                 = new ExternalOffset<float>(0x0048);                           // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FLandscapeSplineConnection>> _offConnectedSegments                                          = new ExternalOffset<TArray<FLandscapeSplineConnection>>(0x0050, false); // 0x0050(0x0010) (ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FLandscapeSplineInterpPoint>> _offPoints                                                     = new ExternalOffset<TArray<FLandscapeSplineInterpPoint>>(0x0060, false); // 0x0060(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FBox>                              _offBounds                                                     = new ExternalOffset<FBox>(0x0070, false);                     // 0x0070(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<UControlPointMeshComponent>        _offLocalMeshComponent                                         = new ExternalOffset<UControlPointMeshComponent>(0x0090, true); // 0x0090(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FVector                                            Location                                                       => _offLocation.GetValue();
	public FRotator                                           Rotation                                                       => _offRotation.GetValue();
	public float                                              Width                                                          => _offWidth.GetValue();
	public float                                              SideFalloff                                                    => _offSideFalloff.GetValue();
	public float                                              EndFalloff                                                     => _offEndFalloff.GetValue();
	public TArray<FLandscapeSplineConnection>                 ConnectedSegments                                              => _offConnectedSegments.GetValue();
	public TArray<FLandscapeSplineInterpPoint>                Points                                                         => _offPoints.GetValue();
	public FBox                                               Bounds                                                         => _offBounds.GetValue();
	public UControlPointMeshComponent                         LocalMeshComponent                                             => _offLocalMeshComponent.GetValue();
	#endregion


}

// Class Landscape.LandscapeSplineSegment
// 0x0088 (0x00B0 - 0x0028)
public class ULandscapeSplineSegment : UObject
{
	#region Offsets
//	private ExternalOffset<FLandscapeSplineSegmentConnection> _offConnections[0x2]                                           = new ExternalOffset<FLandscapeSplineSegmentConnection>(0x0028, false); // 0x0028(0x0018) (Edit, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FInterpCurveVector>                _offSplineInfo                                                 = new ExternalOffset<FInterpCurveVector>(0x0058, false);       // 0x0058(0x0018) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<FLandscapeSplineInterpPoint>> _offPoints                                                     = new ExternalOffset<TArray<FLandscapeSplineInterpPoint>>(0x0070, false); // 0x0070(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FBox>                              _offBounds                                                     = new ExternalOffset<FBox>(0x0080, false);                     // 0x0080(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<USplineMeshComponent>>      _offLocalMeshComponents                                        = new ExternalOffset<TArray<USplineMeshComponent>>(0x00A0, false); // 0x00A0(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, TextExportTransient, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FInterpCurveVector                                 SplineInfo                                                     => _offSplineInfo.GetValue();
	public TArray<FLandscapeSplineInterpPoint>                Points                                                         => _offPoints.GetValue();
	public FBox                                               Bounds                                                         => _offBounds.GetValue();
	public TArray<USplineMeshComponent>                       LocalMeshComponents                                            => _offLocalMeshComponents.GetValue();
	#endregion


}

// Class Landscape.LandscapeStreamingProxy
// 0x0027 (0x0564 - 0x053D)
public class ALandscapeStreamingProxy : ALandscapeProxy
{
	#region Offsets
	private ExternalOffset<TLazyObjectPtr<ALandscape>>        _offLandscapeActor                                             = new ExternalOffset<TLazyObjectPtr<ALandscape>>(0x0548, false); // 0x0548(0x001C) (Edit, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TLazyObjectPtr<ALandscape>                         LandscapeActor                                                 => _offLandscapeActor.GetValue();
	#endregion


}

// Class Landscape.LandscapeWeightmapUsage
// 0x0030 (0x0058 - 0x0028)
public class ULandscapeWeightmapUsage : UObject
{
	#region Offsets
//	private ExternalOffset<ULandscapeComponent>               _offChannelUsage[0x4]                                          = new ExternalOffset<ULandscapeComponent>(0x0028, true);       // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGuid>                             _offLayerGuid                                                  = new ExternalOffset<FGuid>(0x0048, false);                    // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGuid                                              LayerGuid                                                      => _offLayerGuid.GetValue();
	#endregion


}

// Class Landscape.MaterialExpressionLandscapeGrassOutput
// 0x0010 (0x0050 - 0x0040)
public class UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput
{
	#region Offsets
	private ExternalOffset<TArray<FGrassInput>>               _offGrassTypes                                                 = new ExternalOffset<TArray<FGrassInput>>(0x0040, false);      // 0x0040(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FGrassInput>                                GrassTypes                                                     => _offGrassTypes.GetValue();
	#endregion


}

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// 0x0027 (0x0060 - 0x0039)
public class UMaterialExpressionLandscapeLayerBlend : UMaterialExpression
{
	#region Offsets
	private ExternalOffset<TArray<FLayerBlendInput>>          _offLayers                                                     = new ExternalOffset<TArray<FLayerBlendInput>>(0x0040, false); // 0x0040(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FGuid>                             _offExpressionGUID                                             = new ExternalOffset<FGuid>(0x0050, false);                    // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FLayerBlendInput>                           Layers                                                         => _offLayers.GetValue();
	public FGuid                                              ExpressionGUID                                                 => _offExpressionGUID.GetValue();
	#endregion


}

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// 0x001B (0x0054 - 0x0039)
public class UMaterialExpressionLandscapeLayerCoords : UMaterialExpression
{
	#region Offsets
	private ExternalOffset<TEnumAsByte<ETerrainCoordMappingType>> _offMappingType                                                = new ExternalOffset<TEnumAsByte<ETerrainCoordMappingType>>(0x0040, false); // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ELandscapeCustomizedCoordType>> _offCustomUVType                                               = new ExternalOffset<TEnumAsByte<ELandscapeCustomizedCoordType>>(0x0041, false); // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMappingScale                                               = new ExternalOffset<float>(0x0044);                           // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMappingRotation                                            = new ExternalOffset<float>(0x0048);                           // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMappingPanU                                                = new ExternalOffset<float>(0x004C);                           // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMappingPanV                                                = new ExternalOffset<float>(0x0050);                           // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TEnumAsByte<ETerrainCoordMappingType>              MappingType                                                    => _offMappingType.GetValue();
	public TEnumAsByte<ELandscapeCustomizedCoordType>         CustomUVType                                                   => _offCustomUVType.GetValue();
	public float                                              MappingScale                                                   => _offMappingScale.GetValue();
	public float                                              MappingRotation                                                => _offMappingRotation.GetValue();
	public float                                              MappingPanU                                                    => _offMappingPanU.GetValue();
	public float                                              MappingPanV                                                    => _offMappingPanV.GetValue();
	#endregion


}

// Class Landscape.MaterialExpressionLandscapeLayerSample
// 0x0023 (0x005C - 0x0039)
public class UMaterialExpressionLandscapeLayerSample : UMaterialExpression
{
	#region Offsets
	private ExternalOffset<FName>                             _offParameterName                                              = new ExternalOffset<FName>(0x0040, false);                    // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offPreviewWeight                                              = new ExternalOffset<float>(0x0048);                           // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGuid>                             _offExpressionGUID                                             = new ExternalOffset<FGuid>(0x004C, false);                    // 0x004C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                              ParameterName                                                  => _offParameterName.GetValue();
	public float                                              PreviewWeight                                                  => _offPreviewWeight.GetValue();
	public FGuid                                              ExpressionGUID                                                 => _offExpressionGUID.GetValue();
	#endregion


}

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// 0x004B (0x0084 - 0x0039)
public class UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression
{
	#region Offsets
	private ExternalOffset<FExpressionInput>                  _offLayerUsed                                                  = new ExternalOffset<FExpressionInput>(0x0040, false);         // 0x0040(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FExpressionInput>                  _offLayerNotUsed                                               = new ExternalOffset<FExpressionInput>(0x0054, false);         // 0x0054(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                             _offParameterName                                              = new ExternalOffset<FName>(0x0068, false);                    // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offPreviewUsed                                                = new ExternalOffset<char>(0x0070, false);                     // 0x0070(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGuid>                             _offExpressionGUID                                             = new ExternalOffset<FGuid>(0x0074, false);                    // 0x0074(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FExpressionInput                                   LayerUsed                                                      => _offLayerUsed.GetValue();
	public FExpressionInput                                   LayerNotUsed                                                   => _offLayerNotUsed.GetValue();
	public FName                                              ParameterName                                                  => _offParameterName.GetValue();
	public FGuid                                              ExpressionGUID                                                 => _offExpressionGUID.GetValue();
	#endregion


}

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// 0x0057 (0x0090 - 0x0039)
public class UMaterialExpressionLandscapeLayerWeight : UMaterialExpression
{
	#region Offsets
	private ExternalOffset<FExpressionInput>                  _offBase                                                       = new ExternalOffset<FExpressionInput>(0x0040, false);         // 0x0040(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FExpressionInput>                  _offLayer                                                      = new ExternalOffset<FExpressionInput>(0x0054, false);         // 0x0054(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                             _offParameterName                                              = new ExternalOffset<FName>(0x0068, false);                    // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offPreviewWeight                                              = new ExternalOffset<float>(0x0070);                           // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offConstBase                                                  = new ExternalOffset<FVector>(0x0074, false);                  // 0x0074(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGuid>                             _offExpressionGUID                                             = new ExternalOffset<FGuid>(0x0080, false);                    // 0x0080(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FExpressionInput                                   Base                                                           => _offBase.GetValue();
	public FExpressionInput                                   Layer                                                          => _offLayer.GetValue();
	public FName                                              ParameterName                                                  => _offParameterName.GetValue();
	public float                                              PreviewWeight                                                  => _offPreviewWeight.GetValue();
	public FVector                                            ConstBase                                                      => _offConstBase.GetValue();
	public FGuid                                              ExpressionGUID                                                 => _offExpressionGUID.GetValue();
	#endregion


}

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// 0x0017 (0x0050 - 0x0039)
public class UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression
{
	#region Offsets
	private ExternalOffset<FGuid>                             _offExpressionGUID                                             = new ExternalOffset<FGuid>(0x0040, false);                    // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGuid                                              ExpressionGUID                                                 => _offExpressionGUID.GetValue();
	#endregion


}


}