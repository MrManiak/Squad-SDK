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

// Class Foliage.FoliageInstancedStaticMeshComponent
// 0x006C (0x0638 - 0x05CC)
public class UFoliageInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnInstanceTakePointDamage                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0618, false); // 0x0618(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnInstanceTakeRadialDamage                                 = new ExternalOffset<FScriptMulticastDelegate>(0x0628, false); // 0x0628(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnInstanceTakePointDamage                                      => _offOnInstanceTakePointDamage.GetValue();
	public FScriptMulticastDelegate                           OnInstanceTakeRadialDamage                                     => _offOnInstanceTakeRadialDamage.GetValue();
	#endregion


}

// Class Foliage.FoliageStatistics
// 0x0000 (0x0028 - 0x0028)
public class UFoliageStatistics : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class Foliage.FoliageType
// 0x0315 (0x033D - 0x0028)
public class UFoliageType : UObject
{
	#region Offsets
	private ExternalOffset<FGuid>                             _offUpdateGuid                                                 = new ExternalOffset<FGuid>(0x0028, false);                    // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDensity                                                    = new ExternalOffset<float>(0x0038);                           // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDensityAdjustmentFactor                                    = new ExternalOffset<float>(0x003C);                           // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offRadius                                                     = new ExternalOffset<float>(0x0040);                           // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EFoliageScaling>                   _offScaling                                                    = new ExternalOffset<EFoliageScaling>(0x0044, false);          // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFloatInterval>                    _offScaleX                                                     = new ExternalOffset<FFloatInterval>(0x0048, false);           // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFloatInterval>                    _offScaleY                                                     = new ExternalOffset<FFloatInterval>(0x0050, false);           // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFloatInterval>                    _offScaleZ                                                     = new ExternalOffset<FFloatInterval>(0x0058, false);           // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<FFoliageVertexColorChannelMask>    _offVertexColorMaskByChannel[0x4]                              = new ExternalOffset<FFoliageVertexColorChannelMask>(0x0060, false); // 0x0060(0x000C) (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EFoliageVertexColorMask>> _offVertexColorMask                                            = new ExternalOffset<TEnumAsByte<EFoliageVertexColorMask>>(0x0090, false); // 0x0090(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offVertexColorMaskThreshold                                   = new ExternalOffset<float>(0x0094);                           // 0x0094(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offVertexColorMaskInvert                                      = new ExternalOffset<char>(0x0098, false);                     // 0x0098(0x0001) BIT_FIELD (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFloatInterval>                    _offZOffset                                                    = new ExternalOffset<FFloatInterval>(0x009C, false);           // 0x009C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offAlignToNormal                                              = new ExternalOffset<char>(0x00A4, false);                     // 0x00A4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offAlignMaxAngle                                              = new ExternalOffset<float>(0x00A8);                           // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offRandomYaw                                                  = new ExternalOffset<char>(0x00AC, false);                     // 0x00AC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offRandomPitchAngle                                           = new ExternalOffset<float>(0x00B0);                           // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFloatInterval>                    _offGroundSlopeAngle                                           = new ExternalOffset<FFloatInterval>(0x00B4, false);           // 0x00B4(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFloatInterval>                    _offHeight                                                     = new ExternalOffset<FFloatInterval>(0x00BC, false);           // 0x00BC(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FName>>                     _offLandscapeLayers                                            = new ExternalOffset<TArray<FName>>(0x00C8, false);            // 0x00C8(0x0010) (Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                             _offLandscapeLayer                                             = new ExternalOffset<FName>(0x00D8, false);                    // 0x00D8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offCollisionWithWorld                                         = new ExternalOffset<char>(0x00E0, false);                     // 0x00E0(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offCollisionScale                                             = new ExternalOffset<FVector>(0x00E4, false);                  // 0x00E4(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMinimumLayerWeight                                         = new ExternalOffset<float>(0x00F0);                           // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FBoxSphereBounds>                  _offMeshBounds                                                 = new ExternalOffset<FBoxSphereBounds>(0x00F4, false);         // 0x00F4(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offLowBoundOriginRadius                                       = new ExternalOffset<FVector>(0x0110, false);                  // 0x0110(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EComponentMobility>>   _offMobility                                                   = new ExternalOffset<TEnumAsByte<EComponentMobility>>(0x011C, false); // 0x011C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FInt32Interval>                    _offCullDistance                                               = new ExternalOffset<FInt32Interval>(0x0120, false);           // 0x0120(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbEnableStaticLighting                                      = new ExternalOffset<char>(0x0128, false);                     // 0x0128(0x0001) BIT_FIELD (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offCastShadow                                                 = new ExternalOffset<char>(0x0128, false);                     // 0x0128(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbAffectDynamicIndirectLighting                             = new ExternalOffset<char>(0x0128, false);                     // 0x0128(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbAffectDistanceFieldLighting                               = new ExternalOffset<char>(0x0128, false);                     // 0x0128(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbCastDynamicShadow                                         = new ExternalOffset<char>(0x0128, false);                     // 0x0128(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbCastStaticShadow                                          = new ExternalOffset<char>(0x0128, false);                     // 0x0128(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbCastShadowAsTwoSided                                      = new ExternalOffset<char>(0x0128, false);                     // 0x0128(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbReceivesDecals                                            = new ExternalOffset<char>(0x0128, false);                     // 0x0128(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbOverrideLightMapRes                                       = new ExternalOffset<char>(0x0129, false);                     // 0x0129(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offOverriddenLightMapRes                                      = new ExternalOffset<int>(0x012C);                             // 0x012C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ELightmapType>                     _offLightmapType                                               = new ExternalOffset<ELightmapType>(0x0130, false);            // 0x0130(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbUseAsOccluder                                             = new ExternalOffset<char>(0x0134, false);                     // 0x0134(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FBodyInstance>                     _offBodyInstance                                               = new ExternalOffset<FBodyInstance>(0x0138, false);            // 0x0138(0x0110) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EHasCustomNavigableGeometry>> _offCustomNavigableGeometry                                    = new ExternalOffset<TEnumAsByte<EHasCustomNavigableGeometry>>(0x0248, false); // 0x0248(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLightingChannels>                 _offLightingChannels                                           = new ExternalOffset<FLightingChannels>(0x0249, false);        // 0x0249(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbRenderCustomDepth                                         = new ExternalOffset<char>(0x024C, false);                     // 0x024C(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offCustomDepthStencilValue                                    = new ExternalOffset<int>(0x0250);                             // 0x0250(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offTranslucencySortPriority                                   = new ExternalOffset<int>(0x0254);                             // 0x0254(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offCollisionRadius                                            = new ExternalOffset<float>(0x0258);                           // 0x0258(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offShadeRadius                                                = new ExternalOffset<float>(0x025C);                           // 0x025C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offNumSteps                                                   = new ExternalOffset<int>(0x0260);                             // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offInitialSeedDensity                                         = new ExternalOffset<float>(0x0264);                           // 0x0264(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offAverageSpreadDistance                                      = new ExternalOffset<float>(0x0268);                           // 0x0268(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offSpreadVariance                                             = new ExternalOffset<float>(0x026C);                           // 0x026C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offSeedsPerStep                                               = new ExternalOffset<int>(0x0270);                             // 0x0270(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offDistributionSeed                                           = new ExternalOffset<int>(0x0274);                             // 0x0274(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMaxInitialSeedOffset                                       = new ExternalOffset<float>(0x0278);                           // 0x0278(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbCanGrowInShade                                            = new ExternalOffset<byte/*(bool)*/>(0x027C);                  // 0x027C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbSpawnsInShade                                             = new ExternalOffset<byte/*(bool)*/>(0x027D);                  // 0x027D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMaxInitialAge                                              = new ExternalOffset<float>(0x0280);                           // 0x0280(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMaxAge                                                     = new ExternalOffset<float>(0x0284);                           // 0x0284(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offOverlapPriority                                            = new ExternalOffset<float>(0x0288);                           // 0x0288(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFloatInterval>                    _offProceduralScale                                            = new ExternalOffset<FFloatInterval>(0x028C, false);           // 0x028C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FRuntimeFloatCurve>                _offScaleCurve                                                 = new ExternalOffset<FRuntimeFloatCurve>(0x0298, false);       // 0x0298(0x0088) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offChangeCount                                                = new ExternalOffset<int>(0x0320);                             // 0x0320(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offReapplyDensity                                             = new ExternalOffset<char>(0x0324, false);                     // 0x0324(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offReapplyRadius                                              = new ExternalOffset<char>(0x0324, false);                     // 0x0324(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offReapplyAlignToNormal                                       = new ExternalOffset<char>(0x0324, false);                     // 0x0324(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offReapplyRandomYaw                                           = new ExternalOffset<char>(0x0324, false);                     // 0x0324(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offReapplyScaling                                             = new ExternalOffset<char>(0x0324, false);                     // 0x0324(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offReapplyScaleX                                              = new ExternalOffset<char>(0x0324, false);                     // 0x0324(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offReapplyScaleY                                              = new ExternalOffset<char>(0x0324, false);                     // 0x0324(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offReapplyScaleZ                                              = new ExternalOffset<char>(0x0324, false);                     // 0x0324(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offReapplyRandomPitchAngle                                    = new ExternalOffset<char>(0x0325, false);                     // 0x0325(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offReapplyGroundSlope                                         = new ExternalOffset<char>(0x0325, false);                     // 0x0325(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offReapplyHeight                                              = new ExternalOffset<char>(0x0325, false);                     // 0x0325(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offReapplyLandscapeLayers                                     = new ExternalOffset<char>(0x0325, false);                     // 0x0325(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offReapplyZOffset                                             = new ExternalOffset<char>(0x0325, false);                     // 0x0325(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offReapplyCollisionWithWorld                                  = new ExternalOffset<char>(0x0325, false);                     // 0x0325(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offReapplyVertexColorMask                                     = new ExternalOffset<char>(0x0325, false);                     // 0x0325(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbEnableDensityScaling                                      = new ExternalOffset<char>(0x0325, false);                     // 0x0325(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<URuntimeVirtualTexture>>    _offRuntimeVirtualTextures                                     = new ExternalOffset<TArray<URuntimeVirtualTexture>>(0x0328, false); // 0x0328(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offVirtualTextureCullMips                                     = new ExternalOffset<int>(0x0338);                             // 0x0338(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ERuntimeVirtualTextureMainPassType> _offVirtualTextureRenderPassType                               = new ExternalOffset<ERuntimeVirtualTextureMainPassType>(0x033C, false); // 0x033C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGuid                                              UpdateGuid                                                     => _offUpdateGuid.GetValue();
	public float                                              Density                                                        => _offDensity.GetValue();
	public float                                              DensityAdjustmentFactor                                        => _offDensityAdjustmentFactor.GetValue();
	public float                                              Radius                                                         => _offRadius.GetValue();
	public EFoliageScaling                                    Scaling                                                        => _offScaling.GetValue();
	public FFloatInterval                                     ScaleX                                                         => _offScaleX.GetValue();
	public FFloatInterval                                     ScaleY                                                         => _offScaleY.GetValue();
	public FFloatInterval                                     ScaleZ                                                         => _offScaleZ.GetValue();
	public TEnumAsByte<EFoliageVertexColorMask>               VertexColorMask                                                => _offVertexColorMask.GetValue();
	public float                                              VertexColorMaskThreshold                                       => _offVertexColorMaskThreshold.GetValue();
	public FFloatInterval                                     ZOffset                                                        => _offZOffset.GetValue();
	public float                                              AlignMaxAngle                                                  => _offAlignMaxAngle.GetValue();
	public float                                              RandomPitchAngle                                               => _offRandomPitchAngle.GetValue();
	public FFloatInterval                                     GroundSlopeAngle                                               => _offGroundSlopeAngle.GetValue();
	public FFloatInterval                                     Height                                                         => _offHeight.GetValue();
	public TArray<FName>                                      LandscapeLayers                                                => _offLandscapeLayers.GetValue();
	public FName                                              LandscapeLayer                                                 => _offLandscapeLayer.GetValue();
	public FVector                                            CollisionScale                                                 => _offCollisionScale.GetValue();
	public float                                              MinimumLayerWeight                                             => _offMinimumLayerWeight.GetValue();
	public FBoxSphereBounds                                   MeshBounds                                                     => _offMeshBounds.GetValue();
	public FVector                                            LowBoundOriginRadius                                           => _offLowBoundOriginRadius.GetValue();
	public TEnumAsByte<EComponentMobility>                    Mobility                                                       => _offMobility.GetValue();
	public FInt32Interval                                     CullDistance                                                   => _offCullDistance.GetValue();
	public int                                                OverriddenLightMapRes                                          => _offOverriddenLightMapRes.GetValue();
	public ELightmapType                                      LightmapType                                                   => _offLightmapType.GetValue();
	public FBodyInstance                                      BodyInstance                                                   => _offBodyInstance.GetValue();
	public TEnumAsByte<EHasCustomNavigableGeometry>           CustomNavigableGeometry                                        => _offCustomNavigableGeometry.GetValue();
	public FLightingChannels                                  LightingChannels                                               => _offLightingChannels.GetValue();
	public int                                                CustomDepthStencilValue                                        => _offCustomDepthStencilValue.GetValue();
	public int                                                TranslucencySortPriority                                       => _offTranslucencySortPriority.GetValue();
	public float                                              CollisionRadius                                                => _offCollisionRadius.GetValue();
	public float                                              ShadeRadius                                                    => _offShadeRadius.GetValue();
	public int                                                NumSteps                                                       => _offNumSteps.GetValue();
	public float                                              InitialSeedDensity                                             => _offInitialSeedDensity.GetValue();
	public float                                              AverageSpreadDistance                                          => _offAverageSpreadDistance.GetValue();
	public float                                              SpreadVariance                                                 => _offSpreadVariance.GetValue();
	public int                                                SeedsPerStep                                                   => _offSeedsPerStep.GetValue();
	public int                                                DistributionSeed                                               => _offDistributionSeed.GetValue();
	public float                                              MaxInitialSeedOffset                                           => _offMaxInitialSeedOffset.GetValue();
	public byte/*(bool)*/                                     bCanGrowInShade                                                => _offbCanGrowInShade.GetValue();
	public byte/*(bool)*/                                     bSpawnsInShade                                                 => _offbSpawnsInShade.GetValue();
	public float                                              MaxInitialAge                                                  => _offMaxInitialAge.GetValue();
	public float                                              MaxAge                                                         => _offMaxAge.GetValue();
	public float                                              OverlapPriority                                                => _offOverlapPriority.GetValue();
	public FFloatInterval                                     ProceduralScale                                                => _offProceduralScale.GetValue();
	public FRuntimeFloatCurve                                 ScaleCurve                                                     => _offScaleCurve.GetValue();
	public int                                                ChangeCount                                                    => _offChangeCount.GetValue();
	public TArray<URuntimeVirtualTexture>                     RuntimeVirtualTextures                                         => _offRuntimeVirtualTextures.GetValue();
	public int                                                VirtualTextureCullMips                                         => _offVirtualTextureCullMips.GetValue();
	public ERuntimeVirtualTextureMainPassType                 VirtualTextureRenderPassType                                   => _offVirtualTextureRenderPassType.GetValue();
	#endregion


}

// Class Foliage.FoliageType_Actor
// 0x000B (0x0348 - 0x033D)
public class UFoliageType_Actor : UFoliageType
{
	#region Offsets
	private ExternalOffset<UClass>                            _offActorClass                                                 = new ExternalOffset<UClass>(0x0340, true);                    // 0x0340(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                             ActorClass                                                     => _offActorClass.GetValue();
	#endregion


}

// Class Foliage.FoliageType_InstancedStaticMesh
// 0x0023 (0x0360 - 0x033D)
public class UFoliageType_InstancedStaticMesh : UFoliageType
{
	#region Offsets
	private ExternalOffset<UStaticMesh>                       _offMesh                                                       = new ExternalOffset<UStaticMesh>(0x0340, true);               // 0x0340(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UMaterialInterface>>        _offOverrideMaterials                                          = new ExternalOffset<TArray<UMaterialInterface>>(0x0348, false); // 0x0348(0x0010) (Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offComponentClass                                             = new ExternalOffset<UClass>(0x0358, true);                    // 0x0358(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UStaticMesh                                        Mesh                                                           => _offMesh.GetValue();
	public TArray<UMaterialInterface>                         OverrideMaterials                                              => _offOverrideMaterials.GetValue();
	public UClass                                             ComponentClass                                                 => _offComponentClass.GetValue();
	#endregion


}

// Class Foliage.InstancedFoliageActor
// 0x0010 (0x0248 - 0x0238)
public class AInstancedFoliageActor : AActor
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class Foliage.InteractiveFoliageActor
// 0x0062 (0x02B4 - 0x0252)
public class AInteractiveFoliageActor : AStaticMeshActor
{
	#region Offsets
	private ExternalOffset<UCapsuleComponent>                 _offCapsuleComponent                                           = new ExternalOffset<UCapsuleComponent>(0x0258, true);         // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FVector>                           _offTouchingActorEntryPosition                                 = new ExternalOffset<FVector>(0x0260, false);                  // 0x0260(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FVector>                           _offFoliageVelocity                                            = new ExternalOffset<FVector>(0x026C, false);                  // 0x026C(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FVector>                           _offFoliageForce                                               = new ExternalOffset<FVector>(0x0278, false);                  // 0x0278(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FVector>                           _offFoliagePosition                                            = new ExternalOffset<FVector>(0x0284, false);                  // 0x0284(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<float>                             _offFoliageDamageImpulseScale                                  = new ExternalOffset<float>(0x0290);                           // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offFoliageTouchImpulseScale                                   = new ExternalOffset<float>(0x0294);                           // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offFoliageStiffness                                           = new ExternalOffset<float>(0x0298);                           // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offFoliageStiffnessQuadratic                                  = new ExternalOffset<float>(0x029C);                           // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offFoliageDamping                                             = new ExternalOffset<float>(0x02A0);                           // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMaxDamageImpulse                                           = new ExternalOffset<float>(0x02A4);                           // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMaxTouchImpulse                                            = new ExternalOffset<float>(0x02A8);                           // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMaxForce                                                   = new ExternalOffset<float>(0x02AC);                           // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMass                                                       = new ExternalOffset<float>(0x02B0);                           // 0x02B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UCapsuleComponent                                  CapsuleComponent                                               => _offCapsuleComponent.GetValue();
	public FVector                                            TouchingActorEntryPosition                                     => _offTouchingActorEntryPosition.GetValue();
	public FVector                                            FoliageVelocity                                                => _offFoliageVelocity.GetValue();
	public FVector                                            FoliageForce                                                   => _offFoliageForce.GetValue();
	public FVector                                            FoliagePosition                                                => _offFoliagePosition.GetValue();
	public float                                              FoliageDamageImpulseScale                                      => _offFoliageDamageImpulseScale.GetValue();
	public float                                              FoliageTouchImpulseScale                                       => _offFoliageTouchImpulseScale.GetValue();
	public float                                              FoliageStiffness                                               => _offFoliageStiffness.GetValue();
	public float                                              FoliageStiffnessQuadratic                                      => _offFoliageStiffnessQuadratic.GetValue();
	public float                                              FoliageDamping                                                 => _offFoliageDamping.GetValue();
	public float                                              MaxDamageImpulse                                               => _offMaxDamageImpulse.GetValue();
	public float                                              MaxTouchImpulse                                                => _offMaxTouchImpulse.GetValue();
	public float                                              MaxForce                                                       => _offMaxForce.GetValue();
	public float                                              Mass                                                           => _offMass.GetValue();
	#endregion


}

// Class Foliage.InteractiveFoliageComponent
// 0x0008 (0x04A0 - 0x0498)
public class UInteractiveFoliageComponent : UStaticMeshComponent
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class Foliage.ProceduralFoliageBlockingVolume
// 0x0008 (0x0288 - 0x0280)
public class AProceduralFoliageBlockingVolume : AVolume
{
	#region Offsets
	private ExternalOffset<AProceduralFoliageVolume>          _offProceduralFoliageVolume                                    = new ExternalOffset<AProceduralFoliageVolume>(0x0280, true);  // 0x0280(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public AProceduralFoliageVolume                           ProceduralFoliageVolume                                        => _offProceduralFoliageVolume.GetValue();
	#endregion


}

// Class Foliage.ProceduralFoliageComponent
// 0x0038 (0x0100 - 0x00C8)
public class UProceduralFoliageComponent : UActorComponent
{
	#region Offsets
	private ExternalOffset<UProceduralFoliageSpawner>         _offFoliageSpawner                                             = new ExternalOffset<UProceduralFoliageSpawner>(0x00D8, true); // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offTileOverlap                                                = new ExternalOffset<float>(0x00E0);                           // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<AVolume>                           _offSpawningVolume                                             = new ExternalOffset<AVolume>(0x00E8, true);                   // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FGuid>                             _offProceduralGuid                                             = new ExternalOffset<FGuid>(0x00F0, false);                    // 0x00F0(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UProceduralFoliageSpawner                          FoliageSpawner                                                 => _offFoliageSpawner.GetValue();
	public float                                              TileOverlap                                                    => _offTileOverlap.GetValue();
	public AVolume                                            SpawningVolume                                                 => _offSpawningVolume.GetValue();
	public FGuid                                              ProceduralGuid                                                 => _offProceduralGuid.GetValue();
	#endregion


}

// Class Foliage.ProceduralFoliageSpawner
// 0x0029 (0x0051 - 0x0028)
public class UProceduralFoliageSpawner : UObject
{
	#region Offsets
	private ExternalOffset<int>                               _offRandomSeed                                                 = new ExternalOffset<int>(0x0028);                             // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offTileSize                                                   = new ExternalOffset<float>(0x002C);                           // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offNumUniqueTiles                                             = new ExternalOffset<int>(0x0030);                             // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMinimumQuadTreeSize                                        = new ExternalOffset<float>(0x0034);                           // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FFoliageTypeObject>>        _offFoliageTypes                                               = new ExternalOffset<TArray<FFoliageTypeObject>>(0x0040, false); // 0x0040(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                    _offbNeedsSimulation                                           = new ExternalOffset<byte/*(bool)*/>(0x0050);                  // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public int                                                RandomSeed                                                     => _offRandomSeed.GetValue();
	public float                                              TileSize                                                       => _offTileSize.GetValue();
	public int                                                NumUniqueTiles                                                 => _offNumUniqueTiles.GetValue();
	public float                                              MinimumQuadTreeSize                                            => _offMinimumQuadTreeSize.GetValue();
	public TArray<FFoliageTypeObject>                         FoliageTypes                                                   => _offFoliageTypes.GetValue();
	public byte/*(bool)*/                                     bNeedsSimulation                                               => _offbNeedsSimulation.GetValue();
	#endregion


}

// Class Foliage.ProceduralFoliageTile
// 0x00B8 (0x00E0 - 0x0028)
public class UProceduralFoliageTile : UObject
{
	#region Offsets
	private ExternalOffset<UProceduralFoliageSpawner>         _offFoliageSpawner                                             = new ExternalOffset<UProceduralFoliageSpawner>(0x0028, true); // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FProceduralFoliageInstance>> _offInstancesArray                                             = new ExternalOffset<TArray<FProceduralFoliageInstance>>(0x00D0, false); // 0x00D0(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UProceduralFoliageSpawner                          FoliageSpawner                                                 => _offFoliageSpawner.GetValue();
	public TArray<FProceduralFoliageInstance>                 InstancesArray                                                 => _offInstancesArray.GetValue();
	#endregion


}

// Class Foliage.ProceduralFoliageVolume
// 0x0008 (0x0288 - 0x0280)
public class AProceduralFoliageVolume : AVolume
{
	#region Offsets
	private ExternalOffset<UProceduralFoliageComponent>       _offProceduralComponent                                        = new ExternalOffset<UProceduralFoliageComponent>(0x0280, true); // 0x0280(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UProceduralFoliageComponent                        ProceduralComponent                                            => _offProceduralComponent.GetValue();
	#endregion


}


}