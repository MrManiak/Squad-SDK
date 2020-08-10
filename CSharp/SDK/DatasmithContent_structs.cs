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

// Enum DatasmithContent.EDatasmithAreaLightActorType
public enum EDatasmithAreaLightActorType : byte
{
	EDatasmithAreaLightActorType__Point = 0,
	EDatasmithAreaLightActorType__Spot = 1,
	EDatasmithAreaLightActorType__Rect = 2,
	EDatasmithAreaLightActorType__EDatasmithAreaLightActorType_MAX = 3
}

// Enum DatasmithContent.EDatasmithAreaLightActorShape
public enum EDatasmithAreaLightActorShape : byte
{
	EDatasmithAreaLightActorShape__Rectangle = 0,
	EDatasmithAreaLightActorShape__Disc = 1,
	EDatasmithAreaLightActorShape__Sphere = 2,
	EDatasmithAreaLightActorShape__Cylinder = 3,
	EDatasmithAreaLightActorShape__None = 4,
	EDatasmithAreaLightActorShape__EDatasmithAreaLightActorShape_MAX = 5
}

// Enum DatasmithContent.EVREDDataTableType
public enum EVREDDataTableType : byte
{
	EVREDDataTableType__NotDatatable = 0,
	EVREDDataTableType__AnimClips  = 1,
	EVREDDataTableType__AnimNodes  = 2,
	EVREDDataTableType__EVREDDataTableType_MAX = 3
}

// Enum DatasmithContent.EDatasmithCADStitchingTechnique
public enum EDatasmithCADStitchingTechnique : byte
{
	EDatasmithCADStitchingTechnique__StitchingNone = 0,
	EDatasmithCADStitchingTechnique__StitchingHeal = 1,
	EDatasmithCADStitchingTechnique__StitchingSew = 2,
	EDatasmithCADStitchingTechnique__EDatasmithCADStitchingTechnique_MAX = 3
}

// Enum DatasmithContent.EDatasmithImportHierarchy
public enum EDatasmithImportHierarchy : byte
{
	EDatasmithImportHierarchy__UseMultipleActors = 0,
	EDatasmithImportHierarchy__UseSingleActor = 1,
	EDatasmithImportHierarchy__UseOneBlueprint = 2,
	EDatasmithImportHierarchy__EDatasmithImportHierarchy_MAX = 3
}

// Enum DatasmithContent.EDatasmithImportScene
public enum EDatasmithImportScene : byte
{
	EDatasmithImportScene__NewLevel = 0,
	EDatasmithImportScene__CurrentLevel = 1,
	EDatasmithImportScene__AssetsOnly = 2,
	EDatasmithImportScene__EDatasmithImportScene_MAX = 3
}

// Enum DatasmithContent.EDatasmithImportLightmapMax
public enum EDatasmithImportLightmapMax : byte
{
	EDatasmithImportLightmapMax__LIGHTMAP = 0,
	EDatasmithImportLightmapMax__LIGHTMAP01 = 1,
	EDatasmithImportLightmapMax__LIGHTMAP02 = 2,
	EDatasmithImportLightmapMax__LIGHTMAP03 = 3,
	EDatasmithImportLightmapMax__LIGHTMAP04 = 4,
	EDatasmithImportLightmapMax__LIGHTMAP05 = 5,
	EDatasmithImportLightmapMax__LIGHTMAP06 = 6,
	EDatasmithImportLightmapMax__LIGHTMAP_MAX = 7
}

// Enum DatasmithContent.EDatasmithImportLightmapMin
public enum EDatasmithImportLightmapMin : byte
{
	EDatasmithImportLightmapMin__LIGHTMAP = 0,
	EDatasmithImportLightmapMin__LIGHTMAP01 = 1,
	EDatasmithImportLightmapMin__LIGHTMAP02 = 2,
	EDatasmithImportLightmapMin__LIGHTMAP03 = 3,
	EDatasmithImportLightmapMin__LIGHTMAP04 = 4,
	EDatasmithImportLightmapMin__LIGHTMAP05 = 5,
	EDatasmithImportLightmapMin__LIGHTMAP_MAX = 6
}

// Enum DatasmithContent.EDatasmithImportMaterialQuality
public enum EDatasmithImportMaterialQuality : byte
{
	EDatasmithImportMaterialQuality__UseNoFresnelCurves = 0,
	EDatasmithImportMaterialQuality__UseSimplifierFresnelCurves = 1,
	EDatasmithImportMaterialQuality__UseRealFresnelCurves = 2,
	EDatasmithImportMaterialQuality__EDatasmithImportMaterialQuality_MAX = 3
}

// Enum DatasmithContent.EDatasmithImportActorPolicy
public enum EDatasmithImportActorPolicy : byte
{
	EDatasmithImportActorPolicy__Update = 0,
	EDatasmithImportActorPolicy__Full = 1,
	EDatasmithImportActorPolicy__Ignore = 2,
	EDatasmithImportActorPolicy__EDatasmithImportActorPolicy_MAX = 3
}

// Enum DatasmithContent.EDatasmithImportAssetConflictPolicy
public enum EDatasmithImportAssetConflictPolicy : byte
{
	EDatasmithImportAssetConflictPolicy__Replace = 0,
	EDatasmithImportAssetConflictPolicy__Update = 1,
	EDatasmithImportAssetConflictPolicy__Use = 2,
	EDatasmithImportAssetConflictPolicy__Ignore = 3,
	EDatasmithImportAssetConflictPolicy__EDatasmithImportAssetConflictPolicy_MAX = 4
}

// Enum DatasmithContent.EDatasmithImportSearchPackagePolicy
public enum EDatasmithImportSearchPackagePolicy : byte
{
	EDatasmithImportSearchPackagePolicy__Current = 0,
	EDatasmithImportSearchPackagePolicy__All = 1,
	EDatasmithImportSearchPackagePolicy__EDatasmithImportSearchPackagePolicy_MAX = 2
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DatasmithContent.DatasmithTessellationOptions
// 0x0010
public class FDatasmithTessellationOptions : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offChordTolerance                                             = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMaxEdgeLength                                              = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offNormalTolerance                                            = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EDatasmithCADStitchingTechnique>    _offStitchingTechnique                                         = new ExternalOffset<EDatasmithCADStitchingTechnique>(0x000C, false); // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               ChordTolerance                                                 => _offChordTolerance.GetValue();
	public float                                               MaxEdgeLength                                                  => _offMaxEdgeLength.GetValue();
	public float                                               NormalTolerance                                                => _offNormalTolerance.GetValue();
	public EDatasmithCADStitchingTechnique                     StitchingTechnique                                             => _offStitchingTechnique.GetValue();
	#endregion

	public FDatasmithTessellationOptions(float c_ChordTolerance, float c_MaxEdgeLength, float c_NormalTolerance, EDatasmithCADStitchingTechnique c_StitchingTechnique) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offChordTolerance.SetValue(c_ChordTolerance);
		_offMaxEdgeLength.SetValue(c_MaxEdgeLength);
		_offNormalTolerance.SetValue(c_NormalTolerance);
		_offStitchingTechnique.SetValue(c_StitchingTechnique);
	}
}
// ScriptStruct DatasmithContent.DatasmithMeshBuildSettingsTemplate
// 0x0010
public class FDatasmithMeshBuildSettingsTemplate : ExternalClass
{
	#region Offsets
//	private ExternalOffset<char>                               _offbUseMikkTSpace                                             = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbRecomputeNormals                                          = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbRecomputeTangents                                         = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbRemoveDegenerates                                         = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbBuildAdjacencyBuffer                                      = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbUseHighPrecisionTangentBasis                              = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbUseFullPrecisionUVs                                       = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbGenerateLightmapUVs                                       = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offMinLightmapResolution                                      = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offSrcLightmapIndex                                           = new ExternalOffset<int>(0x0008);                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offDstLightmapIndex                                           = new ExternalOffset<int>(0x000C);                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 MinLightmapResolution                                          => _offMinLightmapResolution.GetValue();
	public int                                                 SrcLightmapIndex                                               => _offSrcLightmapIndex.GetValue();
	public int                                                 DstLightmapIndex                                               => _offDstLightmapIndex.GetValue();
	#endregion

	public FDatasmithMeshBuildSettingsTemplate(int c_MinLightmapResolution, int c_SrcLightmapIndex, int c_DstLightmapIndex) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMinLightmapResolution.SetValue(c_MinLightmapResolution);
		_offSrcLightmapIndex.SetValue(c_SrcLightmapIndex);
		_offDstLightmapIndex.SetValue(c_DstLightmapIndex);
	}
}
// ScriptStruct DatasmithContent.DatasmithAssetImportOptions
// 0x0008
public class FDatasmithAssetImportOptions : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offPackagePath                                                = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               PackagePath                                                    => _offPackagePath.GetValue();
	#endregion

	public FDatasmithAssetImportOptions(FName c_PackagePath) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPackagePath.SetValue(c_PackagePath);
	}
}
// ScriptStruct DatasmithContent.DatasmithStaticMeshImportOptions
// 0x0004
public class FDatasmithStaticMeshImportOptions : ExternalClass
{
	#region Offsets
	private ExternalOffset<EDatasmithImportLightmapMin>        _offMinLightmapResolution                                      = new ExternalOffset<EDatasmithImportLightmapMin>(0x0000, false); // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EDatasmithImportLightmapMax>        _offMaxLightmapResolution                                      = new ExternalOffset<EDatasmithImportLightmapMax>(0x0001, false); // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbGenerateLightmapUVs                                       = new ExternalOffset<byte/*(bool)*/>(0x0002);                  // 0x0002(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbRemoveDegenerates                                         = new ExternalOffset<byte/*(bool)*/>(0x0003);                  // 0x0003(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public EDatasmithImportLightmapMin                         MinLightmapResolution                                          => _offMinLightmapResolution.GetValue();
	public EDatasmithImportLightmapMax                         MaxLightmapResolution                                          => _offMaxLightmapResolution.GetValue();
	public byte/*(bool)*/                                      bGenerateLightmapUVs                                           => _offbGenerateLightmapUVs.GetValue();
	public byte/*(bool)*/                                      bRemoveDegenerates                                             => _offbRemoveDegenerates.GetValue();
	#endregion

	public FDatasmithStaticMeshImportOptions(EDatasmithImportLightmapMin c_MinLightmapResolution, EDatasmithImportLightmapMax c_MaxLightmapResolution, byte/*(bool)*/ c_bGenerateLightmapUVs, byte/*(bool)*/ c_bRemoveDegenerates) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMinLightmapResolution.SetValue(c_MinLightmapResolution);
		_offMaxLightmapResolution.SetValue(c_MaxLightmapResolution);
		_offbGenerateLightmapUVs.SetValue(c_bGenerateLightmapUVs);
		_offbRemoveDegenerates.SetValue(c_bRemoveDegenerates);
	}
}
// ScriptStruct DatasmithContent.DatasmithImportBaseOptions
// 0x0014
public class FDatasmithImportBaseOptions : ExternalClass
{
	#region Offsets
	private ExternalOffset<EDatasmithImportScene>              _offSceneHandling                                              = new ExternalOffset<EDatasmithImportScene>(0x0000, false);    // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIncludeGeometry                                           = new ExternalOffset<byte/*(bool)*/>(0x0001);                  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIncludeMaterial                                           = new ExternalOffset<byte/*(bool)*/>(0x0002);                  // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIncludeLight                                              = new ExternalOffset<byte/*(bool)*/>(0x0003);                  // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIncludeCamera                                             = new ExternalOffset<byte/*(bool)*/>(0x0004);                  // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIncludeAnimation                                          = new ExternalOffset<byte/*(bool)*/>(0x0005);                  // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FDatasmithAssetImportOptions>       _offAssetOptions                                               = new ExternalOffset<FDatasmithAssetImportOptions>(0x0008, false); // 0x0008(0x0008) (BlueprintVisible, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	private ExternalOffset<FDatasmithStaticMeshImportOptions>  _offStaticMeshOptions                                          = new ExternalOffset<FDatasmithStaticMeshImportOptions>(0x0010, false); // 0x0010(0x0004) (Edit, BlueprintVisible, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public EDatasmithImportScene                               SceneHandling                                                  => _offSceneHandling.GetValue();
	public byte/*(bool)*/                                      bIncludeGeometry                                               => _offbIncludeGeometry.GetValue();
	public byte/*(bool)*/                                      bIncludeMaterial                                               => _offbIncludeMaterial.GetValue();
	public byte/*(bool)*/                                      bIncludeLight                                                  => _offbIncludeLight.GetValue();
	public byte/*(bool)*/                                      bIncludeCamera                                                 => _offbIncludeCamera.GetValue();
	public byte/*(bool)*/                                      bIncludeAnimation                                              => _offbIncludeAnimation.GetValue();
	public FDatasmithAssetImportOptions                        AssetOptions                                                   => _offAssetOptions.GetValue();
	public FDatasmithStaticMeshImportOptions                   StaticMeshOptions                                              => _offStaticMeshOptions.GetValue();
	#endregion

	public FDatasmithImportBaseOptions(EDatasmithImportScene c_SceneHandling, byte/*(bool)*/ c_bIncludeGeometry, byte/*(bool)*/ c_bIncludeMaterial, byte/*(bool)*/ c_bIncludeLight, byte/*(bool)*/ c_bIncludeCamera, byte/*(bool)*/ c_bIncludeAnimation, FDatasmithAssetImportOptions c_AssetOptions, FDatasmithStaticMeshImportOptions c_StaticMeshOptions) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSceneHandling.SetValue(c_SceneHandling);
		_offbIncludeGeometry.SetValue(c_bIncludeGeometry);
		_offbIncludeMaterial.SetValue(c_bIncludeMaterial);
		_offbIncludeLight.SetValue(c_bIncludeLight);
		_offbIncludeCamera.SetValue(c_bIncludeCamera);
		_offbIncludeAnimation.SetValue(c_bIncludeAnimation);
		_offAssetOptions.SetValue(c_AssetOptions);
		_offStaticMeshOptions.SetValue(c_StaticMeshOptions);
	}
}
// ScriptStruct DatasmithContent.DatasmithReimportOptions
// 0x0002
public class FDatasmithReimportOptions : ExternalClass
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offbUpdateActors                                              = new ExternalOffset<byte/*(bool)*/>(0x0000);                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbRespawnDeletedActors                                      = new ExternalOffset<byte/*(bool)*/>(0x0001);                  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      bUpdateActors                                                  => _offbUpdateActors.GetValue();
	public byte/*(bool)*/                                      bRespawnDeletedActors                                          => _offbRespawnDeletedActors.GetValue();
	#endregion

	public FDatasmithReimportOptions(byte/*(bool)*/ c_bUpdateActors, byte/*(bool)*/ c_bRespawnDeletedActors) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offbUpdateActors.SetValue(c_bUpdateActors);
		_offbRespawnDeletedActors.SetValue(c_bRespawnDeletedActors);
	}
}
// ScriptStruct DatasmithContent.DatasmithStaticParameterSetTemplate
// 0x0050
public class FDatasmithStaticParameterSetTemplate : ExternalClass
{
	#region Offsets
//	private TMap<struct FName, bool>                           _offStaticSwitchParameters                                     = new ExternalOffset<TMap<bool>>(0x0000, false);               // 0x0000(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	#endregion

	public FDatasmithStaticParameterSetTemplate() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoTemplate
// 0x0004
public class FDatasmithMeshSectionInfoTemplate : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offMaterialIndex                                              = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 MaterialIndex                                                  => _offMaterialIndex.GetValue();
	#endregion

	public FDatasmithMeshSectionInfoTemplate(int c_MaterialIndex) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMaterialIndex.SetValue(c_MaterialIndex);
	}
}
// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoMapTemplate
// 0x0050
public class FDatasmithMeshSectionInfoMapTemplate : ExternalClass
{
	#region Offsets
//	private TMap<uint32_t, struct FDatasmithMeshSectionInfoTemplate> _offMap                                                        = new ExternalOffset<TMap<FDatasmithMeshSectionInfoTemplate>>(0x0000, false); // 0x0000(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	#endregion

	public FDatasmithMeshSectionInfoMapTemplate() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct DatasmithContent.DatasmithStaticMaterialTemplate
// 0x0010
public class FDatasmithStaticMaterialTemplate : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offMaterialSlotName                                           = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMaterialInterface>                 _offMaterialInterface                                          = new ExternalOffset<UMaterialInterface>(0x0008, true);        // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               MaterialSlotName                                               => _offMaterialSlotName.GetValue();
	public UMaterialInterface                                  MaterialInterface                                              => _offMaterialInterface.GetValue();
	#endregion

	public FDatasmithStaticMaterialTemplate(FName c_MaterialSlotName, UMaterialInterface c_MaterialInterface) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMaterialSlotName.SetValue(c_MaterialSlotName);
		_offMaterialInterface.SetValue(c_MaterialInterface);
	}
}
// ScriptStruct DatasmithContent.DatasmithCameraLookatTrackingSettingsTemplate
// 0x0030
public class FDatasmithCameraLookatTrackingSettingsTemplate : ExternalClass
{
	#region Offsets
//	private ExternalOffset<char>                               _offbEnableLookAtTracking                                      = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbAllowRoll                                                 = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	#endregion

	public FDatasmithCameraLookatTrackingSettingsTemplate() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct DatasmithContent.DatasmithPostProcessSettingsTemplate
// 0x0040
public class FDatasmithPostProcessSettingsTemplate : ExternalClass
{
	#region Offsets
//	private ExternalOffset<char>                               _offbOverride_WhiteTemp                                        = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbOverride_ColorSaturation                                  = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbOverride_VignetteIntensity                                = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbOverride_FilmWhitePoint                                   = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbOverride_AutoExposureMethod                               = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbOverride_CameraISO                                        = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbOverride_CameraShutterSpeed                               = new ExternalOffset<char>(0x0000, false);                     // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbOverride_DepthOfFieldFstop                                = new ExternalOffset<char>(0x0004, false);                     // 0x0004(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offWhiteTemp                                                  = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offVignetteIntensity                                          = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                       _offFilmWhitePoint                                             = new ExternalOffset<FLinearColor>(0x0010, false);             // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector4>                           _offColorSaturation                                            = new ExternalOffset<FVector4>(0x0020, false);                 // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EAutoExposureMethod>>   _offAutoExposureMethod                                         = new ExternalOffset<TEnumAsByte<EAutoExposureMethod>>(0x0030, false); // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offCameraISO                                                  = new ExternalOffset<float>(0x0034);                           // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offCameraShutterSpeed                                         = new ExternalOffset<float>(0x0038);                           // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDepthOfFieldFstop                                          = new ExternalOffset<float>(0x003C);                           // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               WhiteTemp                                                      => _offWhiteTemp.GetValue();
	public float                                               VignetteIntensity                                              => _offVignetteIntensity.GetValue();
	public FLinearColor                                        FilmWhitePoint                                                 => _offFilmWhitePoint.GetValue();
	public FVector4                                            ColorSaturation                                                => _offColorSaturation.GetValue();
	public TEnumAsByte<EAutoExposureMethod>                    AutoExposureMethod                                             => _offAutoExposureMethod.GetValue();
	public float                                               CameraISO                                                      => _offCameraISO.GetValue();
	public float                                               CameraShutterSpeed                                             => _offCameraShutterSpeed.GetValue();
	public float                                               DepthOfFieldFstop                                              => _offDepthOfFieldFstop.GetValue();
	#endregion

	public FDatasmithPostProcessSettingsTemplate(float c_WhiteTemp, float c_VignetteIntensity, FLinearColor c_FilmWhitePoint, FVector4 c_ColorSaturation, TEnumAsByte<EAutoExposureMethod> c_AutoExposureMethod, float c_CameraISO, float c_CameraShutterSpeed, float c_DepthOfFieldFstop) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offWhiteTemp.SetValue(c_WhiteTemp);
		_offVignetteIntensity.SetValue(c_VignetteIntensity);
		_offFilmWhitePoint.SetValue(c_FilmWhitePoint);
		_offColorSaturation.SetValue(c_ColorSaturation);
		_offAutoExposureMethod.SetValue(c_AutoExposureMethod);
		_offCameraISO.SetValue(c_CameraISO);
		_offCameraShutterSpeed.SetValue(c_CameraShutterSpeed);
		_offDepthOfFieldFstop.SetValue(c_DepthOfFieldFstop);
	}
}
// ScriptStruct DatasmithContent.DatasmithCameraFilmbackSettingsTemplate
// 0x0008
public class FDatasmithCameraFilmbackSettingsTemplate : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offSensorWidth                                                = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offSensorHeight                                               = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               SensorWidth                                                    => _offSensorWidth.GetValue();
	public float                                               SensorHeight                                                   => _offSensorHeight.GetValue();
	#endregion

	public FDatasmithCameraFilmbackSettingsTemplate(float c_SensorWidth, float c_SensorHeight) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSensorWidth.SetValue(c_SensorWidth);
		_offSensorHeight.SetValue(c_SensorHeight);
	}
}
// ScriptStruct DatasmithContent.DatasmithCameraFocusSettingsTemplate
// 0x0008
public class FDatasmithCameraFocusSettingsTemplate : ExternalClass
{
	#region Offsets
	private ExternalOffset<ECameraFocusMethod>                 _offFocusMethod                                                = new ExternalOffset<ECameraFocusMethod>(0x0000, false);       // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offManualFocusDistance                                        = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ECameraFocusMethod                                  FocusMethod                                                    => _offFocusMethod.GetValue();
	public float                                               ManualFocusDistance                                            => _offManualFocusDistance.GetValue();
	#endregion

	public FDatasmithCameraFocusSettingsTemplate(ECameraFocusMethod c_FocusMethod, float c_ManualFocusDistance) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offFocusMethod.SetValue(c_FocusMethod);
		_offManualFocusDistance.SetValue(c_ManualFocusDistance);
	}
}
// ScriptStruct DatasmithContent.DatasmithCameraLensSettingsTemplate
// 0x0004
public class FDatasmithCameraLensSettingsTemplate : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offMaxFStop                                                   = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               MaxFStop                                                       => _offMaxFStop.GetValue();
	#endregion

	public FDatasmithCameraLensSettingsTemplate(float c_MaxFStop) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMaxFStop.SetValue(c_MaxFStop);
	}
}

}