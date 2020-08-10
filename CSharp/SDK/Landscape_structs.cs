// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum Landscape.ELandscapeBlendMode
public enum ELandscapeBlendMode : byte
{
	LSBM_AdditiveBlend             = 0,
	LSBM_AlphaBlend                = 1,
	LSBM_MAX                       = 2
}

// Enum Landscape.ELandscapeSetupErrors
public enum ELandscapeSetupErrors : byte
{
	LSE_None                       = 0,
	LSE_NoLandscapeInfo            = 1,
	LSE_CollsionXY                 = 2,
	LSE_NoLayerInfo                = 3,
	LSE_MAX                        = 4
}

// Enum Landscape.ELandscapeClearMode
public enum ELandscapeClearMode : byte
{
	Clear_Weightmap                = 0,
	Clear_Heightmap                = 1,
	Clear_All                      = 2,
	Clear_MAX                      = 3
}

// Enum Landscape.ELandscapeGizmoType
public enum ELandscapeGizmoType : byte
{
	LGT_None                       = 0,
	LGT_Height                     = 1,
	LGT_Weight                     = 2,
	LGT_MAX                        = 3
}

// Enum Landscape.EGrassScaling
public enum EGrassScaling : byte
{
	EGrassScaling__Uniform         = 0,
	EGrassScaling__Free            = 1,
	EGrassScaling__LockXY          = 2,
	EGrassScaling__EGrassScaling_MAX = 3
}

// Enum Landscape.ELandscapeLODFalloff
public enum ELandscapeLODFalloff : byte
{
	ELandscapeLODFalloff__Linear   = 0,
	ELandscapeLODFalloff__SquareRoot = 1,
	ELandscapeLODFalloff__ELandscapeLODFalloff_MAX = 2
}

// Enum Landscape.ELandscapeLayerDisplayMode
public enum ELandscapeLayerDisplayMode : byte
{
	ELandscapeLayerDisplayMode__Default = 0,
	ELandscapeLayerDisplayMode__Alphabetical = 1,
	ELandscapeLayerDisplayMode__UserSpecific = 2,
	ELandscapeLayerDisplayMode__ELandscapeLayerDisplayMode_MAX = 3
}

// Enum Landscape.ELandscapeLayerPaintingRestriction
public enum ELandscapeLayerPaintingRestriction : byte
{
	ELandscapeLayerPaintingRestriction__None = 0,
	ELandscapeLayerPaintingRestriction__UseMaxLayers = 1,
	ELandscapeLayerPaintingRestriction__ExistingOnly = 2,
	ELandscapeLayerPaintingRestriction__UseComponentWhitelist = 3,
	ELandscapeLayerPaintingRestriction__ELandscapeLayerPaintingRestriction_MAX = 4
}

// Enum Landscape.ELandscapeImportAlphamapType
public enum ELandscapeImportAlphamapType : byte
{
	ELandscapeImportAlphamapType__Additive = 0,
	ELandscapeImportAlphamapType__Layered = 1,
	ELandscapeImportAlphamapType__ELandscapeImportAlphamapType_MAX = 2
}

// Enum Landscape.LandscapeSplineMeshOrientation
public enum ELandscapeSplineMeshOrientation : byte
{
	LSMO_XUp                       = 0,
	LSMO_YUp                       = 1,
	LSMO_MAX                       = 2
}

// Enum Landscape.ELandscapeLayerBlendType
public enum ELandscapeLayerBlendType : byte
{
	LB_WeightBlend                 = 0,
	LB_AlphaBlend                  = 1,
	LB_HeightBlend                 = 2,
	LB_MAX                         = 3
}

// Enum Landscape.ELandscapeCustomizedCoordType
public enum ELandscapeCustomizedCoordType : byte
{
	LCCT_None                      = 0,
	LCCT_CustomUV0                 = 1,
	LCCT_CustomUV1                 = 2,
	LCCT_CustomUV2                 = 3,
	LCCT_WeightMapUV               = 4,
	LCCT_MAX                       = 5
}

// Enum Landscape.ETerrainCoordMappingType
public enum ETerrainCoordMappingType : byte
{
	TCMT_Auto                      = 0,
	TCMT_XY                        = 1,
	TCMT_XZ                        = 2,
	TCMT_YZ                        = 3,
	TCMT_MAX                       = 4
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Landscape.HeightmapData
// 0x0008
public class FHeightmapData : ExternalClass
{
	#region Offsets
	private ExternalOffset<UTexture2D>                         _offTexture                                                    = new ExternalOffset<UTexture2D>(0x0000, true);                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UTexture2D                                          Texture                                                        => _offTexture.GetValue();
	#endregion

	public FHeightmapData(UTexture2D c_Texture) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTexture.SetValue(c_Texture);
	}
}
// ScriptStruct Landscape.LandscapeLayerStruct
// 0x0008
public class FLandscapeLayerStruct : ExternalClass
{
	#region Offsets
	private ExternalOffset<ULandscapeLayerInfoObject>          _offLayerInfoObj                                               = new ExternalOffset<ULandscapeLayerInfoObject>(0x0000, true); // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ULandscapeLayerInfoObject                           LayerInfoObj                                                   => _offLayerInfoObj.GetValue();
	#endregion

	public FLandscapeLayerStruct(ULandscapeLayerInfoObject c_LayerInfoObj) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLayerInfoObj.SetValue(c_LayerInfoObj);
	}
}
// ScriptStruct Landscape.LandscapeEditorLayerSettings
// 0x0001
public class FLandscapeEditorLayerSettings : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FLandscapeEditorLayerSettings() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Landscape.LandscapeSplineConnection
// 0x0010
public class FLandscapeSplineConnection : ExternalClass
{
	#region Offsets
	private ExternalOffset<ULandscapeSplineSegment>            _offSegment                                                    = new ExternalOffset<ULandscapeSplineSegment>(0x0000, true);   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offEnd                                                        = new ExternalOffset<char>(0x0008, false);                     // 0x0008(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ULandscapeSplineSegment                             Segment                                                        => _offSegment.GetValue();
	#endregion

	public FLandscapeSplineConnection(ULandscapeSplineSegment c_Segment) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSegment.SetValue(c_Segment);
	}
}
// ScriptStruct Landscape.LandscapeProxyMaterialOverride
// 0x0010
public class FLandscapeProxyMaterialOverride : ExternalClass
{
	#region Offsets
	private ExternalOffset<FPerPlatformInt>                    _offLODIndex                                                   = new ExternalOffset<FPerPlatformInt>(0x0000, false);          // 0x0000(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<UMaterialInterface>                 _offMaterial                                                   = new ExternalOffset<UMaterialInterface>(0x0008, true);        // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FPerPlatformInt                                     LODIndex                                                       => _offLODIndex.GetValue();
	public UMaterialInterface                                  Material                                                       => _offMaterial.GetValue();
	#endregion

	public FLandscapeProxyMaterialOverride(FPerPlatformInt c_LODIndex, UMaterialInterface c_Material) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLODIndex.SetValue(c_LODIndex);
		_offMaterial.SetValue(c_Material);
	}
}
// ScriptStruct Landscape.WeightmapLayerAllocationInfo
// 0x0010
public class FWeightmapLayerAllocationInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<ULandscapeLayerInfoObject>          _offLayerInfo                                                  = new ExternalOffset<ULandscapeLayerInfoObject>(0x0000, true); // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offWeightmapTextureIndex                                      = new ExternalOffset<char>(0x0008, false);                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offWeightmapTextureChannel                                    = new ExternalOffset<char>(0x0009, false);                     // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ULandscapeLayerInfoObject                           LayerInfo                                                      => _offLayerInfo.GetValue();
	#endregion

	public FWeightmapLayerAllocationInfo(ULandscapeLayerInfoObject c_LayerInfo) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLayerInfo.SetValue(c_LayerInfo);
	}
}
// ScriptStruct Landscape.ForeignWorldSplineData
// 0x0001
public class FForeignWorldSplineData : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FForeignWorldSplineData() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Landscape.ForeignSplineSegmentData
// 0x0001
public class FForeignSplineSegmentData : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FForeignSplineSegmentData() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Landscape.ForeignControlPointData
// 0x0001
public class FForeignControlPointData : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FForeignControlPointData() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Landscape.WeightmapData
// 0x0030
public class FWeightmapData : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<UTexture2D>>                 _offTextures                                                   = new ExternalOffset<TArray<UTexture2D>>(0x0000, false);       // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FWeightmapLayerAllocationInfo>> _offLayerAllocations                                           = new ExternalOffset<TArray<FWeightmapLayerAllocationInfo>>(0x0010, false); // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<ULandscapeWeightmapUsage>>   _offTextureUsages                                              = new ExternalOffset<TArray<ULandscapeWeightmapUsage>>(0x0020, false); // 0x0020(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<UTexture2D>                                  Textures                                                       => _offTextures.GetValue();
	public TArray<FWeightmapLayerAllocationInfo>               LayerAllocations                                               => _offLayerAllocations.GetValue();
	public TArray<ULandscapeWeightmapUsage>                    TextureUsages                                                  => _offTextureUsages.GetValue();
	#endregion

	public FWeightmapData(TArray<UTexture2D> c_Textures, TArray<FWeightmapLayerAllocationInfo> c_LayerAllocations, TArray<ULandscapeWeightmapUsage> c_TextureUsages) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTextures.SetValue(c_Textures);
		_offLayerAllocations.SetValue(c_LayerAllocations);
		_offTextureUsages.SetValue(c_TextureUsages);
	}
}
// ScriptStruct Landscape.LandscapeLayerComponentData
// 0x0038
public class FLandscapeLayerComponentData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FHeightmapData>                     _offHeightmapData                                              = new ExternalOffset<FHeightmapData>(0x0000, false);           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FWeightmapData>                     _offWeightmapData                                              = new ExternalOffset<FWeightmapData>(0x0008, false);           // 0x0008(0x0030) (NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FHeightmapData                                      HeightmapData                                                  => _offHeightmapData.GetValue();
	public FWeightmapData                                      WeightmapData                                                  => _offWeightmapData.GetValue();
	#endregion

	public FLandscapeLayerComponentData(FHeightmapData c_HeightmapData, FWeightmapData c_WeightmapData) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offHeightmapData.SetValue(c_HeightmapData);
		_offWeightmapData.SetValue(c_WeightmapData);
	}
}
// ScriptStruct Landscape.LandscapeComponentMaterialOverride
// 0x0010
public class FLandscapeComponentMaterialOverride : ExternalClass
{
	#region Offsets
	private ExternalOffset<FPerPlatformInt>                    _offLODIndex                                                   = new ExternalOffset<FPerPlatformInt>(0x0000, false);          // 0x0000(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<UMaterialInterface>                 _offMaterial                                                   = new ExternalOffset<UMaterialInterface>(0x0008, true);        // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FPerPlatformInt                                     LODIndex                                                       => _offLODIndex.GetValue();
	public UMaterialInterface                                  Material                                                       => _offMaterial.GetValue();
	#endregion

	public FLandscapeComponentMaterialOverride(FPerPlatformInt c_LODIndex, UMaterialInterface c_Material) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLODIndex.SetValue(c_LODIndex);
		_offMaterial.SetValue(c_Material);
	}
}
// ScriptStruct Landscape.LandscapeSplineMeshEntry
// 0x0038
public class FLandscapeSplineMeshEntry : ExternalClass
{
	#region Offsets
	private ExternalOffset<UStaticMesh>                        _offMesh                                                       = new ExternalOffset<UStaticMesh>(0x0000, true);               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UMaterialInterface>>         _offMaterialOverrides                                          = new ExternalOffset<TArray<UMaterialInterface>>(0x0008, false); // 0x0008(0x0010) (Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbCenterH                                                   = new ExternalOffset<char>(0x0018, false);                     // 0x0018(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                          _offCenterAdjust                                               = new ExternalOffset<FVector2D>(0x001C, false);                // 0x001C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbScaleToWidth                                              = new ExternalOffset<char>(0x0024, false);                     // 0x0024(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offScale                                                      = new ExternalOffset<FVector>(0x0028, false);                  // 0x0028(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ELandscapeSplineMeshOrientation>> _offOrientation                                                = new ExternalOffset<TEnumAsByte<ELandscapeSplineMeshOrientation>>(0x0034, false); // 0x0034(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ESplineMeshAxis>>       _offForwardAxis                                                = new ExternalOffset<TEnumAsByte<ESplineMeshAxis>>(0x0035, false); // 0x0035(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ESplineMeshAxis>>       _offUpAxis                                                     = new ExternalOffset<TEnumAsByte<ESplineMeshAxis>>(0x0036, false); // 0x0036(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UStaticMesh                                         Mesh                                                           => _offMesh.GetValue();
	public TArray<UMaterialInterface>                          MaterialOverrides                                              => _offMaterialOverrides.GetValue();
	public FVector2D                                           CenterAdjust                                                   => _offCenterAdjust.GetValue();
	public FVector                                             Scale                                                          => _offScale.GetValue();
	public TEnumAsByte<ELandscapeSplineMeshOrientation>        Orientation                                                    => _offOrientation.GetValue();
	public TEnumAsByte<ESplineMeshAxis>                        ForwardAxis                                                    => _offForwardAxis.GetValue();
	public TEnumAsByte<ESplineMeshAxis>                        UpAxis                                                         => _offUpAxis.GetValue();
	#endregion

	public FLandscapeSplineMeshEntry(UStaticMesh c_Mesh, TArray<UMaterialInterface> c_MaterialOverrides, FVector2D c_CenterAdjust, FVector c_Scale, TEnumAsByte<ELandscapeSplineMeshOrientation> c_Orientation, TEnumAsByte<ESplineMeshAxis> c_ForwardAxis, TEnumAsByte<ESplineMeshAxis> c_UpAxis) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMesh.SetValue(c_Mesh);
		_offMaterialOverrides.SetValue(c_MaterialOverrides);
		_offCenterAdjust.SetValue(c_CenterAdjust);
		_offScale.SetValue(c_Scale);
		_offOrientation.SetValue(c_Orientation);
		_offForwardAxis.SetValue(c_ForwardAxis);
		_offUpAxis.SetValue(c_UpAxis);
	}
}
// ScriptStruct Landscape.LandscapeEditToolRenderData
// 0x0030
public class FLandscapeEditToolRenderData : ExternalClass
{
	#region Offsets
	private ExternalOffset<UMaterialInterface>                 _offToolMaterial                                               = new ExternalOffset<UMaterialInterface>(0x0000, true);        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMaterialInterface>                 _offGizmoMaterial                                              = new ExternalOffset<UMaterialInterface>(0x0008, true);        // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offSelectedType                                               = new ExternalOffset<int>(0x0010);                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offDebugChannelR                                              = new ExternalOffset<int>(0x0014);                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offDebugChannelG                                              = new ExternalOffset<int>(0x0018);                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offDebugChannelB                                              = new ExternalOffset<int>(0x001C);                             // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UTexture2D>                         _offDataTexture                                                = new ExternalOffset<UTexture2D>(0x0020, true);                // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UTexture2D>                         _offLayerContributionTexture                                   = new ExternalOffset<UTexture2D>(0x0028, true);                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UMaterialInterface                                  ToolMaterial                                                   => _offToolMaterial.GetValue();
	public UMaterialInterface                                  GizmoMaterial                                                  => _offGizmoMaterial.GetValue();
	public int                                                 SelectedType                                                   => _offSelectedType.GetValue();
	public int                                                 DebugChannelR                                                  => _offDebugChannelR.GetValue();
	public int                                                 DebugChannelG                                                  => _offDebugChannelG.GetValue();
	public int                                                 DebugChannelB                                                  => _offDebugChannelB.GetValue();
	public UTexture2D                                          DataTexture                                                    => _offDataTexture.GetValue();
	public UTexture2D                                          LayerContributionTexture                                       => _offLayerContributionTexture.GetValue();
	#endregion

	public FLandscapeEditToolRenderData(UMaterialInterface c_ToolMaterial, UMaterialInterface c_GizmoMaterial, int c_SelectedType, int c_DebugChannelR, int c_DebugChannelG, int c_DebugChannelB, UTexture2D c_DataTexture, UTexture2D c_LayerContributionTexture) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offToolMaterial.SetValue(c_ToolMaterial);
		_offGizmoMaterial.SetValue(c_GizmoMaterial);
		_offSelectedType.SetValue(c_SelectedType);
		_offDebugChannelR.SetValue(c_DebugChannelR);
		_offDebugChannelG.SetValue(c_DebugChannelG);
		_offDebugChannelB.SetValue(c_DebugChannelB);
		_offDataTexture.SetValue(c_DataTexture);
		_offLayerContributionTexture.SetValue(c_LayerContributionTexture);
	}
}
// ScriptStruct Landscape.GizmoSelectData
// 0x0050
public class FGizmoSelectData : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FGizmoSelectData() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Landscape.LandscapeSplineSegmentConnection
// 0x0018
public class FLandscapeSplineSegmentConnection : ExternalClass
{
	#region Offsets
	private ExternalOffset<ULandscapeSplineControlPoint>       _offControlPoint                                               = new ExternalOffset<ULandscapeSplineControlPoint>(0x0000, true); // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTangentLen                                                 = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offSocketName                                                 = new ExternalOffset<FName>(0x000C, false);                    // 0x000C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ULandscapeSplineControlPoint                        ControlPoint                                                   => _offControlPoint.GetValue();
	public float                                               TangentLen                                                     => _offTangentLen.GetValue();
	public FName                                               SocketName                                                     => _offSocketName.GetValue();
	#endregion

	public FLandscapeSplineSegmentConnection(ULandscapeSplineControlPoint c_ControlPoint, float c_TangentLen, FName c_SocketName) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offControlPoint.SetValue(c_ControlPoint);
		_offTangentLen.SetValue(c_TangentLen);
		_offSocketName.SetValue(c_SocketName);
	}
}
// ScriptStruct Landscape.LandscapeSplineInterpPoint
// 0x0040
public class FLandscapeSplineInterpPoint : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offCenter                                                     = new ExternalOffset<FVector>(0x0000, false);                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offLeft                                                       = new ExternalOffset<FVector>(0x000C, false);                  // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offRight                                                      = new ExternalOffset<FVector>(0x0018, false);                  // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offFalloffLeft                                                = new ExternalOffset<FVector>(0x0024, false);                  // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offFalloffRight                                               = new ExternalOffset<FVector>(0x0030, false);                  // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offStartEndFalloff                                            = new ExternalOffset<float>(0x003C);                           // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             Center                                                         => _offCenter.GetValue();
	public FVector                                             Left                                                           => _offLeft.GetValue();
	public FVector                                             Right                                                          => _offRight.GetValue();
	public FVector                                             FalloffLeft                                                    => _offFalloffLeft.GetValue();
	public FVector                                             FalloffRight                                                   => _offFalloffRight.GetValue();
	public float                                               StartEndFalloff                                                => _offStartEndFalloff.GetValue();
	#endregion

	public FLandscapeSplineInterpPoint(FVector c_Center, FVector c_Left, FVector c_Right, FVector c_FalloffLeft, FVector c_FalloffRight, float c_StartEndFalloff) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offCenter.SetValue(c_Center);
		_offLeft.SetValue(c_Left);
		_offRight.SetValue(c_Right);
		_offFalloffLeft.SetValue(c_FalloffLeft);
		_offFalloffRight.SetValue(c_FalloffRight);
		_offStartEndFalloff.SetValue(c_StartEndFalloff);
	}
}
// ScriptStruct Landscape.GrassInput
// 0x0028
public class FGrassInput : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offName                                                       = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ULandscapeGrassType>                _offGrassType                                                  = new ExternalOffset<ULandscapeGrassType>(0x0008, true);       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FExpressionInput>                   _offInput                                                      = new ExternalOffset<FExpressionInput>(0x0010, false);         // 0x0010(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               Name                                                           => _offName.GetValue();
	public ULandscapeGrassType                                 GrassType                                                      => _offGrassType.GetValue();
	public FExpressionInput                                    Input                                                          => _offInput.GetValue();
	#endregion

	public FGrassInput(FName c_Name, ULandscapeGrassType c_GrassType, FExpressionInput c_Input) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offName.SetValue(c_Name);
		_offGrassType.SetValue(c_GrassType);
		_offInput.SetValue(c_Input);
	}
}
// ScriptStruct Landscape.LayerBlendInput
// 0x0048
public class FLayerBlendInput : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offLayerName                                                  = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ELandscapeLayerBlendType>> _offBlendType                                                  = new ExternalOffset<TEnumAsByte<ELandscapeLayerBlendType>>(0x0008, false); // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FExpressionInput>                   _offLayerInput                                                 = new ExternalOffset<FExpressionInput>(0x000C, false);         // 0x000C(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FExpressionInput>                   _offHeightInput                                                = new ExternalOffset<FExpressionInput>(0x0020, false);         // 0x0020(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPreviewWeight                                              = new ExternalOffset<float>(0x0034);                           // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offConstLayerInput                                            = new ExternalOffset<FVector>(0x0038, false);                  // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offConstHeightInput                                           = new ExternalOffset<float>(0x0044);                           // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               LayerName                                                      => _offLayerName.GetValue();
	public TEnumAsByte<ELandscapeLayerBlendType>               BlendType                                                      => _offBlendType.GetValue();
	public FExpressionInput                                    LayerInput                                                     => _offLayerInput.GetValue();
	public FExpressionInput                                    HeightInput                                                    => _offHeightInput.GetValue();
	public float                                               PreviewWeight                                                  => _offPreviewWeight.GetValue();
	public FVector                                             ConstLayerInput                                                => _offConstLayerInput.GetValue();
	public float                                               ConstHeightInput                                               => _offConstHeightInput.GetValue();
	#endregion

	public FLayerBlendInput(FName c_LayerName, TEnumAsByte<ELandscapeLayerBlendType> c_BlendType, FExpressionInput c_LayerInput, FExpressionInput c_HeightInput, float c_PreviewWeight, FVector c_ConstLayerInput, float c_ConstHeightInput) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLayerName.SetValue(c_LayerName);
		_offBlendType.SetValue(c_BlendType);
		_offLayerInput.SetValue(c_LayerInput);
		_offHeightInput.SetValue(c_HeightInput);
		_offPreviewWeight.SetValue(c_PreviewWeight);
		_offConstLayerInput.SetValue(c_ConstLayerInput);
		_offConstHeightInput.SetValue(c_ConstHeightInput);
	}
}
// ScriptStruct Landscape.GrassVariety
// 0x0048
public class FGrassVariety : ExternalClass
{
	#region Offsets
	private ExternalOffset<UStaticMesh>                        _offGrassMesh                                                  = new ExternalOffset<UStaticMesh>(0x0000, true);               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FPerPlatformFloat>                  _offGrassDensity                                               = new ExternalOffset<FPerPlatformFloat>(0x0008, false);        // 0x0008(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbUseGrid                                                   = new ExternalOffset<byte/*(bool)*/>(0x000C);                  // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPlacementJitter                                            = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FPerPlatformInt>                    _offStartCullDistance                                          = new ExternalOffset<FPerPlatformInt>(0x0014, false);          // 0x0014(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FPerPlatformInt>                    _offEndCullDistance                                            = new ExternalOffset<FPerPlatformInt>(0x0018, false);          // 0x0018(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMinLOD                                                     = new ExternalOffset<int>(0x001C);                             // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EGrassScaling>                      _offScaling                                                    = new ExternalOffset<EGrassScaling>(0x0020, false);            // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFloatInterval>                     _offScaleX                                                     = new ExternalOffset<FFloatInterval>(0x0024, false);           // 0x0024(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFloatInterval>                     _offScaleY                                                     = new ExternalOffset<FFloatInterval>(0x002C, false);           // 0x002C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FFloatInterval>                     _offScaleZ                                                     = new ExternalOffset<FFloatInterval>(0x0034, false);           // 0x0034(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offRandomRotation                                             = new ExternalOffset<byte/*(bool)*/>(0x003C);                  // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offAlignToSurface                                             = new ExternalOffset<byte/*(bool)*/>(0x003D);                  // 0x003D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbUseLandscapeLightmap                                      = new ExternalOffset<byte/*(bool)*/>(0x003E);                  // 0x003E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLightingChannels>                  _offLightingChannels                                           = new ExternalOffset<FLightingChannels>(0x003F, false);        // 0x003F(0x0001) (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbReceivesDecals                                            = new ExternalOffset<byte/*(bool)*/>(0x0040);                  // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbCastDynamicShadow                                         = new ExternalOffset<byte/*(bool)*/>(0x0041);                  // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbKeepInstanceBufferCPUCopy                                 = new ExternalOffset<byte/*(bool)*/>(0x0042);                  // 0x0042(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UStaticMesh                                         GrassMesh                                                      => _offGrassMesh.GetValue();
	public FPerPlatformFloat                                   GrassDensity                                                   => _offGrassDensity.GetValue();
	public byte/*(bool)*/                                      bUseGrid                                                       => _offbUseGrid.GetValue();
	public float                                               PlacementJitter                                                => _offPlacementJitter.GetValue();
	public FPerPlatformInt                                     StartCullDistance                                              => _offStartCullDistance.GetValue();
	public FPerPlatformInt                                     EndCullDistance                                                => _offEndCullDistance.GetValue();
	public int                                                 MinLOD                                                         => _offMinLOD.GetValue();
	public EGrassScaling                                       Scaling                                                        => _offScaling.GetValue();
	public FFloatInterval                                      ScaleX                                                         => _offScaleX.GetValue();
	public FFloatInterval                                      ScaleY                                                         => _offScaleY.GetValue();
	public FFloatInterval                                      ScaleZ                                                         => _offScaleZ.GetValue();
	public byte/*(bool)*/                                      RandomRotation                                                 => _offRandomRotation.GetValue();
	public byte/*(bool)*/                                      AlignToSurface                                                 => _offAlignToSurface.GetValue();
	public byte/*(bool)*/                                      bUseLandscapeLightmap                                          => _offbUseLandscapeLightmap.GetValue();
	public FLightingChannels                                   LightingChannels                                               => _offLightingChannels.GetValue();
	public byte/*(bool)*/                                      bReceivesDecals                                                => _offbReceivesDecals.GetValue();
	public byte/*(bool)*/                                      bCastDynamicShadow                                             => _offbCastDynamicShadow.GetValue();
	public byte/*(bool)*/                                      bKeepInstanceBufferCPUCopy                                     => _offbKeepInstanceBufferCPUCopy.GetValue();
	#endregion

	public FGrassVariety(UStaticMesh c_GrassMesh, FPerPlatformFloat c_GrassDensity, byte/*(bool)*/ c_bUseGrid, float c_PlacementJitter, FPerPlatformInt c_StartCullDistance, FPerPlatformInt c_EndCullDistance, int c_MinLOD, EGrassScaling c_Scaling, FFloatInterval c_ScaleX, FFloatInterval c_ScaleY, FFloatInterval c_ScaleZ, byte/*(bool)*/ c_RandomRotation, byte/*(bool)*/ c_AlignToSurface, byte/*(bool)*/ c_bUseLandscapeLightmap, FLightingChannels c_LightingChannels, byte/*(bool)*/ c_bReceivesDecals, byte/*(bool)*/ c_bCastDynamicShadow, byte/*(bool)*/ c_bKeepInstanceBufferCPUCopy) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offGrassMesh.SetValue(c_GrassMesh);
		_offGrassDensity.SetValue(c_GrassDensity);
		_offbUseGrid.SetValue(c_bUseGrid);
		_offPlacementJitter.SetValue(c_PlacementJitter);
		_offStartCullDistance.SetValue(c_StartCullDistance);
		_offEndCullDistance.SetValue(c_EndCullDistance);
		_offMinLOD.SetValue(c_MinLOD);
		_offScaling.SetValue(c_Scaling);
		_offScaleX.SetValue(c_ScaleX);
		_offScaleY.SetValue(c_ScaleY);
		_offScaleZ.SetValue(c_ScaleZ);
		_offRandomRotation.SetValue(c_RandomRotation);
		_offAlignToSurface.SetValue(c_AlignToSurface);
		_offbUseLandscapeLightmap.SetValue(c_bUseLandscapeLightmap);
		_offLightingChannels.SetValue(c_LightingChannels);
		_offbReceivesDecals.SetValue(c_bReceivesDecals);
		_offbCastDynamicShadow.SetValue(c_bCastDynamicShadow);
		_offbKeepInstanceBufferCPUCopy.SetValue(c_bKeepInstanceBufferCPUCopy);
	}
}
// ScriptStruct Landscape.LandscapeInfoLayerSettings
// 0x0010
public class FLandscapeInfoLayerSettings : ExternalClass
{
	#region Offsets
	private ExternalOffset<ULandscapeLayerInfoObject>          _offLayerInfoObj                                               = new ExternalOffset<ULandscapeLayerInfoObject>(0x0000, true); // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offLayerName                                                  = new ExternalOffset<FName>(0x0008, false);                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ULandscapeLayerInfoObject                           LayerInfoObj                                                   => _offLayerInfoObj.GetValue();
	public FName                                               LayerName                                                      => _offLayerName.GetValue();
	#endregion

	public FLandscapeInfoLayerSettings(ULandscapeLayerInfoObject c_LayerInfoObj, FName c_LayerName) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLayerInfoObj.SetValue(c_LayerInfoObj);
		_offLayerName.SetValue(c_LayerName);
	}
}
// ScriptStruct Landscape.LandscapeImportLayerInfo
// 0x0001
public class FLandscapeImportLayerInfo : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FLandscapeImportLayerInfo() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Landscape.LandscapeLayerBrush
// 0x0001
public class FLandscapeLayerBrush : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FLandscapeLayerBrush() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct Landscape.LandscapeLayer
// 0x0088
public class FLandscapeLayer : ExternalClass
{
	#region Offsets
	private ExternalOffset<FGuid>                              _offGuid                                                       = new ExternalOffset<FGuid>(0x0000, false);                    // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offName                                                       = new ExternalOffset<FName>(0x0010, false);                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbVisible                                                   = new ExternalOffset<byte/*(bool)*/>(0x0018);                  // 0x0018(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbLocked                                                    = new ExternalOffset<byte/*(bool)*/>(0x0019);                  // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offHeightmapAlpha                                             = new ExternalOffset<float>(0x001C);                           // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offWeightmapAlpha                                             = new ExternalOffset<float>(0x0020);                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ELandscapeBlendMode>>   _offBlendMode                                                  = new ExternalOffset<TEnumAsByte<ELandscapeBlendMode>>(0x0024, false); // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FLandscapeLayerBrush>>       _offBrushes                                                    = new ExternalOffset<TArray<FLandscapeLayerBrush>>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
//	private TMap<class ULandscapeLayerInfoObject*, bool>       _offWeightmapLayerAllocationBlend                              = new ExternalOffset<TMap<bool>>(0x0038, false);               // 0x0038(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGuid                                               Guid                                                           => _offGuid.GetValue();
	public FName                                               Name                                                           => _offName.GetValue();
	public byte/*(bool)*/                                      bVisible                                                       => _offbVisible.GetValue();
	public byte/*(bool)*/                                      bLocked                                                        => _offbLocked.GetValue();
	public float                                               HeightmapAlpha                                                 => _offHeightmapAlpha.GetValue();
	public float                                               WeightmapAlpha                                                 => _offWeightmapAlpha.GetValue();
	public TEnumAsByte<ELandscapeBlendMode>                    BlendMode                                                      => _offBlendMode.GetValue();
	public TArray<FLandscapeLayerBrush>                        Brushes                                                        => _offBrushes.GetValue();
	#endregion

	public FLandscapeLayer(FGuid c_Guid, FName c_Name, byte/*(bool)*/ c_bVisible, byte/*(bool)*/ c_bLocked, float c_HeightmapAlpha, float c_WeightmapAlpha, TEnumAsByte<ELandscapeBlendMode> c_BlendMode, TArray<FLandscapeLayerBrush> c_Brushes) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offGuid.SetValue(c_Guid);
		_offName.SetValue(c_Name);
		_offbVisible.SetValue(c_bVisible);
		_offbLocked.SetValue(c_bLocked);
		_offHeightmapAlpha.SetValue(c_HeightmapAlpha);
		_offWeightmapAlpha.SetValue(c_WeightmapAlpha);
		_offBlendMode.SetValue(c_BlendMode);
		_offBrushes.SetValue(c_Brushes);
	}
}

}