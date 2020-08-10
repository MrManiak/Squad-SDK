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

// Class DatasmithContent.DatasmithObjectTemplate
// 0x0000 (0x0028 - 0x0028)
public class UDatasmithObjectTemplate : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class DatasmithContent.DatasmithActorTemplate
// 0x0008 (0x0030 - 0x0028)
public class UDatasmithActorTemplate : UDatasmithObjectTemplate
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class DatasmithContent.DatasmithAdditionalData
// 0x0000 (0x0028 - 0x0028)
public class UDatasmithAdditionalData : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class DatasmithContent.DatasmithAreaLightActor
// 0x0068 (0x02A0 - 0x0238)
public class ADatasmithAreaLightActor : AActor
{
	#region Offsets
	private ExternalOffset<EDatasmithAreaLightActorType>      _offLightType                                                  = new ExternalOffset<EDatasmithAreaLightActorType>(0x0248, false); // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EDatasmithAreaLightActorShape>     _offLightShape                                                 = new ExternalOffset<EDatasmithAreaLightActorShape>(0x0249, false); // 0x0249(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                         _offDimensions                                                 = new ExternalOffset<FVector2D>(0x024C, false);                // 0x024C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offIntensity                                                  = new ExternalOffset<float>(0x0254);                           // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ELightUnits>                       _offIntensityUnits                                             = new ExternalOffset<ELightUnits>(0x0258, false);              // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offColor                                                      = new ExternalOffset<FLinearColor>(0x025C, false);             // 0x025C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offTemperature                                                = new ExternalOffset<float>(0x026C);                           // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UTextureLightProfile>              _offIESTexture                                                 = new ExternalOffset<UTextureLightProfile>(0x0270, true);      // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbUseIESBrightness                                          = new ExternalOffset<byte/*(bool)*/>(0x0278);                  // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offIESBrightnessScale                                         = new ExternalOffset<float>(0x027C);                           // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FRotator>                          _offRotation                                                   = new ExternalOffset<FRotator>(0x0280, false);                 // 0x0280(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offSourceRadius                                               = new ExternalOffset<float>(0x028C);                           // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offSourceLength                                               = new ExternalOffset<float>(0x0290);                           // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offAttenuationRadius                                          = new ExternalOffset<float>(0x0294);                           // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offSpotlightInnerAngle                                        = new ExternalOffset<float>(0x0298);                           // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offSpotlightOuterAngle                                        = new ExternalOffset<float>(0x029C);                           // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public EDatasmithAreaLightActorType                       LightType                                                      => _offLightType.GetValue();
	public EDatasmithAreaLightActorShape                      LightShape                                                     => _offLightShape.GetValue();
	public FVector2D                                          Dimensions                                                     => _offDimensions.GetValue();
	public float                                              Intensity                                                      => _offIntensity.GetValue();
	public ELightUnits                                        IntensityUnits                                                 => _offIntensityUnits.GetValue();
	public FLinearColor                                       Color                                                          => _offColor.GetValue();
	public float                                              Temperature                                                    => _offTemperature.GetValue();
	public UTextureLightProfile                               IESTexture                                                     => _offIESTexture.GetValue();
	public byte/*(bool)*/                                     bUseIESBrightness                                              => _offbUseIESBrightness.GetValue();
	public float                                              IESBrightnessScale                                             => _offIESBrightnessScale.GetValue();
	public FRotator                                           Rotation                                                       => _offRotation.GetValue();
	public float                                              SourceRadius                                                   => _offSourceRadius.GetValue();
	public float                                              SourceLength                                                   => _offSourceLength.GetValue();
	public float                                              AttenuationRadius                                              => _offAttenuationRadius.GetValue();
	public float                                              SpotlightInnerAngle                                            => _offSpotlightInnerAngle.GetValue();
	public float                                              SpotlightOuterAngle                                            => _offSpotlightOuterAngle.GetValue();
	#endregion


}

// Class DatasmithContent.DatasmithAreaLightActorTemplate
// 0x0050 (0x0078 - 0x0028)
public class UDatasmithAreaLightActorTemplate : UDatasmithObjectTemplate
{
	#region Offsets
	private ExternalOffset<EDatasmithAreaLightActorType>      _offLightType                                                  = new ExternalOffset<EDatasmithAreaLightActorType>(0x0030, false); // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EDatasmithAreaLightActorShape>     _offLightShape                                                 = new ExternalOffset<EDatasmithAreaLightActorShape>(0x0031, false); // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                         _offDimensions                                                 = new ExternalOffset<FVector2D>(0x0034, false);                // 0x0034(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offColor                                                      = new ExternalOffset<FLinearColor>(0x003C, false);             // 0x003C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offIntensity                                                  = new ExternalOffset<float>(0x004C);                           // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ELightUnits>                       _offIntensityUnits                                             = new ExternalOffset<ELightUnits>(0x0050, false);              // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offTemperature                                                = new ExternalOffset<float>(0x0054);                           // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbUseIESBrightness                                          = new ExternalOffset<byte/*(bool)*/>(0x0080);                  // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offIESBrightnessScale                                         = new ExternalOffset<float>(0x0084);                           // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FRotator>                          _offRotation                                                   = new ExternalOffset<FRotator>(0x0088, false);                 // 0x0088(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offSourceRadius                                               = new ExternalOffset<float>(0x0094);                           // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offSourceLength                                               = new ExternalOffset<float>(0x0098);                           // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offAttenuationRadius                                          = new ExternalOffset<float>(0x009C);                           // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public EDatasmithAreaLightActorType                       LightType                                                      => _offLightType.GetValue();
	public EDatasmithAreaLightActorShape                      LightShape                                                     => _offLightShape.GetValue();
	public FVector2D                                          Dimensions                                                     => _offDimensions.GetValue();
	public FLinearColor                                       Color                                                          => _offColor.GetValue();
	public float                                              Intensity                                                      => _offIntensity.GetValue();
	public ELightUnits                                        IntensityUnits                                                 => _offIntensityUnits.GetValue();
	public float                                              Temperature                                                    => _offTemperature.GetValue();
	public byte/*(bool)*/                                     bUseIESBrightness                                              => _offbUseIESBrightness.GetValue();
	public float                                              IESBrightnessScale                                             => _offIESBrightnessScale.GetValue();
	public FRotator                                           Rotation                                                       => _offRotation.GetValue();
	public float                                              SourceRadius                                                   => _offSourceRadius.GetValue();
	public float                                              SourceLength                                                   => _offSourceLength.GetValue();
	public float                                              AttenuationRadius                                              => _offAttenuationRadius.GetValue();
	#endregion


}

// Class DatasmithContent.DatasmithAssetImportData
// 0x0000 (0x0028 - 0x0028)
public class UDatasmithAssetImportData : UAssetImportData
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class DatasmithContent.DatasmithStaticMeshImportData
// 0x0000 (0x0028 - 0x0028)
public class UDatasmithStaticMeshImportData : UDatasmithAssetImportData
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class DatasmithContent.DatasmithStaticMeshCADImportData
// 0x0000 (0x0028 - 0x0028)
public class UDatasmithStaticMeshCADImportData : UDatasmithStaticMeshImportData
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class DatasmithContent.DatasmithSceneImportData
// 0x0000 (0x0028 - 0x0028)
public class UDatasmithSceneImportData : UAssetImportData
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class DatasmithContent.DatasmithTranslatedSceneImportData
// 0x0000 (0x0028 - 0x0028)
public class UDatasmithTranslatedSceneImportData : UDatasmithSceneImportData
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class DatasmithContent.DatasmithCADImportSceneData
// 0x0000 (0x0028 - 0x0028)
public class UDatasmithCADImportSceneData : UDatasmithSceneImportData
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class DatasmithContent.DatasmithMDLSceneImportData
// 0x0000 (0x0028 - 0x0028)
public class UDatasmithMDLSceneImportData : UDatasmithSceneImportData
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class DatasmithContent.DatasmithGLTFSceneImportData
// 0x0048 (0x0070 - 0x0028)
public class UDatasmithGLTFSceneImportData : UDatasmithSceneImportData
{
	#region Offsets
	private ExternalOffset<FString>                           _offGenerator                                                  = new ExternalOffset<FString>(0x0028, false);                  // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offVersion                                                    = new ExternalOffset<float>(0x0038);                           // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offAuthor                                                     = new ExternalOffset<FString>(0x0040, false);                  // 0x0040(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offLicense                                                    = new ExternalOffset<FString>(0x0050, false);                  // 0x0050(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offSource                                                     = new ExternalOffset<FString>(0x0060, false);                  // 0x0060(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                            Generator                                                      => _offGenerator.GetValue();
	public float                                              Version                                                        => _offVersion.GetValue();
	public FString                                            Author                                                         => _offAuthor.GetValue();
	public FString                                            License                                                        => _offLicense.GetValue();
	public FString                                            Source                                                         => _offSource.GetValue();
	#endregion


}

// Class DatasmithContent.DatasmithStaticMeshGLTFImportData
// 0x0010 (0x0038 - 0x0028)
public class UDatasmithStaticMeshGLTFImportData : UDatasmithStaticMeshImportData
{
	#region Offsets
	private ExternalOffset<FString>                           _offSourceMeshName                                             = new ExternalOffset<FString>(0x0028, false);                  // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                            SourceMeshName                                                 => _offSourceMeshName.GetValue();
	#endregion


}

// Class DatasmithContent.DatasmithDeltaGenAssetImportData
// 0x0000 (0x0028 - 0x0028)
public class UDatasmithDeltaGenAssetImportData : UDatasmithAssetImportData
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class DatasmithContent.DatasmithDeltaGenSceneImportData
// 0x0000 (0x0028 - 0x0028)
public class UDatasmithDeltaGenSceneImportData : UDatasmithSceneImportData
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class DatasmithContent.DatasmithVREDAssetImportData
// 0x0000 (0x0028 - 0x0028)
public class UDatasmithVREDAssetImportData : UDatasmithAssetImportData
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class DatasmithContent.DatasmithVREDSceneImportData
// 0x0000 (0x0028 - 0x0028)
public class UDatasmithVREDSceneImportData : UDatasmithSceneImportData
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class DatasmithContent.DatasmithIFCSceneImportData
// 0x0000 (0x0028 - 0x0028)
public class UDatasmithIFCSceneImportData : UDatasmithSceneImportData
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class DatasmithContent.DatasmithStaticMeshIFCImportData
// 0x0010 (0x0038 - 0x0028)
public class UDatasmithStaticMeshIFCImportData : UDatasmithStaticMeshImportData
{
	#region Offsets
	private ExternalOffset<FString>                           _offSourceGlobalId                                             = new ExternalOffset<FString>(0x0028, false);                  // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                            SourceGlobalId                                                 => _offSourceGlobalId.GetValue();
	#endregion


}

// Class DatasmithContent.DatasmithAssetUserData
// 0x0050 (0x0078 - 0x0028)
public class UDatasmithAssetUserData : UAssetUserData
{
	#region Offsets
//	private TMap<struct FName, struct FString>                _offMetaData                                                   = new ExternalOffset<TMap<FString>>(0x0028, false);            // 0x0028(0x0050) (Edit, BlueprintVisible, ZeroConstructor, EditConst, AdvancedDisplay, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	#endregion


}

// Class DatasmithContent.DatasmithCineCameraActorTemplate
// 0x0038 (0x0060 - 0x0028)
public class UDatasmithCineCameraActorTemplate : UDatasmithObjectTemplate
{
	#region Offsets
	private ExternalOffset<FDatasmithCameraLookatTrackingSettingsTemplate> _offLookatTrackingSettings                                     = new ExternalOffset<FDatasmithCameraLookatTrackingSettingsTemplate>(0x0030, false); // 0x0030(0x0030) (NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FDatasmithCameraLookatTrackingSettingsTemplate     LookatTrackingSettings                                         => _offLookatTrackingSettings.GetValue();
	#endregion


}

// Class DatasmithContent.DatasmithCineCameraComponentTemplate
// 0x0068 (0x0090 - 0x0028)
public class UDatasmithCineCameraComponentTemplate : UDatasmithObjectTemplate
{
	#region Offsets
	private ExternalOffset<FDatasmithCameraFilmbackSettingsTemplate> _offFilmbackSettings                                           = new ExternalOffset<FDatasmithCameraFilmbackSettingsTemplate>(0x0030, false); // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FDatasmithCameraLensSettingsTemplate> _offLensSettings                                               = new ExternalOffset<FDatasmithCameraLensSettingsTemplate>(0x0038, false); // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FDatasmithCameraFocusSettingsTemplate> _offFocusSettings                                              = new ExternalOffset<FDatasmithCameraFocusSettingsTemplate>(0x003C, false); // 0x003C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offCurrentFocalLength                                         = new ExternalOffset<float>(0x0044);                           // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offCurrentAperture                                            = new ExternalOffset<float>(0x0048);                           // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FDatasmithPostProcessSettingsTemplate> _offPostProcessSettings                                        = new ExternalOffset<FDatasmithPostProcessSettingsTemplate>(0x0050, false); // 0x0050(0x0040) (NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FDatasmithCameraFilmbackSettingsTemplate           FilmbackSettings                                               => _offFilmbackSettings.GetValue();
	public FDatasmithCameraLensSettingsTemplate               LensSettings                                                   => _offLensSettings.GetValue();
	public FDatasmithCameraFocusSettingsTemplate              FocusSettings                                                  => _offFocusSettings.GetValue();
	public float                                              CurrentFocalLength                                             => _offCurrentFocalLength.GetValue();
	public float                                              CurrentAperture                                                => _offCurrentAperture.GetValue();
	public FDatasmithPostProcessSettingsTemplate              PostProcessSettings                                            => _offPostProcessSettings.GetValue();
	#endregion


}

// Class DatasmithContent.DatasmithContentBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
public class UDatasmithContentBlueprintLibrary : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class DatasmithContent.DatasmithCustomActionBase
// 0x0000 (0x0028 - 0x0028)
public class UDatasmithCustomActionBase : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class DatasmithContent.DatasmithImportedSequencesActor
// 0x0020 (0x0258 - 0x0238)
public class ADatasmithImportedSequencesActor : AActor
{
	#region Offsets
	private ExternalOffset<TArray<ULevelSequence>>            _offImportedSequences                                          = new ExternalOffset<TArray<ULevelSequence>>(0x0248, false);   // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<ULevelSequence>                             ImportedSequences                                              => _offImportedSequences.GetValue();
	#endregion


}

// Class DatasmithContent.DatasmithCommonTessellationOptions
// 0x0010 (0x0038 - 0x0028)
public class UDatasmithCommonTessellationOptions : UObject
{
	#region Offsets
	private ExternalOffset<FDatasmithTessellationOptions>     _offOptions                                                    = new ExternalOffset<FDatasmithTessellationOptions>(0x0028, false); // 0x0028(0x0010) (Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FDatasmithTessellationOptions                      Options                                                        => _offOptions.GetValue();
	#endregion


}

// Class DatasmithContent.DatasmithImportOptions
// 0x0048 (0x0070 - 0x0028)
public class UDatasmithImportOptions : UObject
{
	#region Offsets
	private ExternalOffset<EDatasmithImportSearchPackagePolicy> _offSearchPackagePolicy                                        = new ExternalOffset<EDatasmithImportSearchPackagePolicy>(0x0028, false); // 0x0028(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EDatasmithImportAssetConflictPolicy> _offMaterialConflictPolicy                                     = new ExternalOffset<EDatasmithImportAssetConflictPolicy>(0x0029, false); // 0x0029(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EDatasmithImportAssetConflictPolicy> _offTextureConflictPolicy                                      = new ExternalOffset<EDatasmithImportAssetConflictPolicy>(0x002A, false); // 0x002A(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EDatasmithImportActorPolicy>       _offStaticMeshActorImportPolicy                                = new ExternalOffset<EDatasmithImportActorPolicy>(0x002B, false); // 0x002B(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EDatasmithImportActorPolicy>       _offLightImportPolicy                                          = new ExternalOffset<EDatasmithImportActorPolicy>(0x002C, false); // 0x002C(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EDatasmithImportActorPolicy>       _offCameraImportPolicy                                         = new ExternalOffset<EDatasmithImportActorPolicy>(0x002D, false); // 0x002D(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EDatasmithImportActorPolicy>       _offOtherActorImportPolicy                                     = new ExternalOffset<EDatasmithImportActorPolicy>(0x002E, false); // 0x002E(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EDatasmithImportMaterialQuality>   _offMaterialQuality                                            = new ExternalOffset<EDatasmithImportMaterialQuality>(0x002F, false); // 0x002F(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FDatasmithImportBaseOptions>       _offBaseOptions                                                = new ExternalOffset<FDatasmithImportBaseOptions>(0x0034, false); // 0x0034(0x0014) (Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FDatasmithReimportOptions>         _offReimportOptions                                            = new ExternalOffset<FDatasmithReimportOptions>(0x0048, false); // 0x0048(0x0002) (Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offFilename                                                   = new ExternalOffset<FString>(0x0050, false);                  // 0x0050(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offFilePath                                                   = new ExternalOffset<FString>(0x0060, false);                  // 0x0060(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public EDatasmithImportSearchPackagePolicy                SearchPackagePolicy                                            => _offSearchPackagePolicy.GetValue();
	public EDatasmithImportAssetConflictPolicy                MaterialConflictPolicy                                         => _offMaterialConflictPolicy.GetValue();
	public EDatasmithImportAssetConflictPolicy                TextureConflictPolicy                                          => _offTextureConflictPolicy.GetValue();
	public EDatasmithImportActorPolicy                        StaticMeshActorImportPolicy                                    => _offStaticMeshActorImportPolicy.GetValue();
	public EDatasmithImportActorPolicy                        LightImportPolicy                                              => _offLightImportPolicy.GetValue();
	public EDatasmithImportActorPolicy                        CameraImportPolicy                                             => _offCameraImportPolicy.GetValue();
	public EDatasmithImportActorPolicy                        OtherActorImportPolicy                                         => _offOtherActorImportPolicy.GetValue();
	public EDatasmithImportMaterialQuality                    MaterialQuality                                                => _offMaterialQuality.GetValue();
	public FDatasmithImportBaseOptions                        BaseOptions                                                    => _offBaseOptions.GetValue();
	public FDatasmithReimportOptions                          ReimportOptions                                                => _offReimportOptions.GetValue();
	public FString                                            Filename                                                       => _offFilename.GetValue();
	public FString                                            FilePath                                                       => _offFilePath.GetValue();
	#endregion


}

// Class DatasmithContent.DatasmithLandscapeTemplate
// 0x0014 (0x003C - 0x0028)
public class UDatasmithLandscapeTemplate : UDatasmithObjectTemplate
{
	#region Offsets
	private ExternalOffset<UMaterialInterface>                _offLandscapeMaterial                                          = new ExternalOffset<UMaterialInterface>(0x0030, true);        // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offStaticLightingLOD                                          = new ExternalOffset<int>(0x0038);                             // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UMaterialInterface                                 LandscapeMaterial                                              => _offLandscapeMaterial.GetValue();
	public int                                                StaticLightingLOD                                              => _offStaticLightingLOD.GetValue();
	#endregion


}

// Class DatasmithContent.DatasmithLightComponentTemplate
// 0x0040 (0x0068 - 0x0028)
public class UDatasmithLightComponentTemplate : UDatasmithObjectTemplate
{
	#region Offsets
//	private ExternalOffset<char>                              _offbVisible                                                   = new ExternalOffset<char>(0x0030, false);                     // 0x0030(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offCastShadows                                                = new ExternalOffset<char>(0x0034, false);                     // 0x0034(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbUseTemperature                                            = new ExternalOffset<char>(0x0034, false);                     // 0x0034(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbUseIESBrightness                                          = new ExternalOffset<char>(0x0034, false);                     // 0x0034(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offIntensity                                                  = new ExternalOffset<float>(0x0038);                           // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offTemperature                                                = new ExternalOffset<float>(0x003C);                           // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offIESBrightnessScale                                         = new ExternalOffset<float>(0x0040);                           // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FLinearColor>                      _offLightColor                                                 = new ExternalOffset<FLinearColor>(0x0044, false);             // 0x0044(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMaterialInterface>                _offLightFunctionMaterial                                      = new ExternalOffset<UMaterialInterface>(0x0058, true);        // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UTextureLightProfile>              _offIESTexture                                                 = new ExternalOffset<UTextureLightProfile>(0x0060, true);      // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                              Intensity                                                      => _offIntensity.GetValue();
	public float                                              Temperature                                                    => _offTemperature.GetValue();
	public float                                              IESBrightnessScale                                             => _offIESBrightnessScale.GetValue();
	public FLinearColor                                       LightColor                                                     => _offLightColor.GetValue();
	public UMaterialInterface                                 LightFunctionMaterial                                          => _offLightFunctionMaterial.GetValue();
	public UTextureLightProfile                               IESTexture                                                     => _offIESTexture.GetValue();
	#endregion


}

// Class DatasmithContent.DatasmithMaterialInstanceTemplate
// 0x00F8 (0x0120 - 0x0028)
public class UDatasmithMaterialInstanceTemplate : UDatasmithObjectTemplate
{
	#region Offsets
//	private TMap<struct FName, float>                         _offScalarParameterValues                                      = new ExternalOffset<TMap<float>>(0x0030, false);              // 0x0030(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
//	private TMap<struct FName, struct FLinearColor>           _offVectorParameterValues                                      = new ExternalOffset<TMap<FLinearColor>>(0x0080, false);       // 0x0080(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FDatasmithStaticParameterSetTemplate> _offStaticParameters                                           = new ExternalOffset<FDatasmithStaticParameterSetTemplate>(0x0120, false); // 0x0120(0x0050) (NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FDatasmithStaticParameterSetTemplate               StaticParameters                                               => _offStaticParameters.GetValue();
	#endregion


}

// Class DatasmithContent.DatasmithPointLightComponentTemplate
// 0x0018 (0x0040 - 0x0028)
public class UDatasmithPointLightComponentTemplate : UDatasmithObjectTemplate
{
	#region Offsets
	private ExternalOffset<ELightUnits>                       _offIntensityUnits                                             = new ExternalOffset<ELightUnits>(0x0030, false);              // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offSourceRadius                                               = new ExternalOffset<float>(0x0034);                           // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offSourceLength                                               = new ExternalOffset<float>(0x0038);                           // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offAttenuationRadius                                          = new ExternalOffset<float>(0x003C);                           // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public ELightUnits                                        IntensityUnits                                                 => _offIntensityUnits.GetValue();
	public float                                              SourceRadius                                                   => _offSourceRadius.GetValue();
	public float                                              SourceLength                                                   => _offSourceLength.GetValue();
	public float                                              AttenuationRadius                                              => _offAttenuationRadius.GetValue();
	#endregion


}

// Class DatasmithContent.DatasmithPostProcessVolumeTemplate
// 0x0049 (0x0071 - 0x0028)
public class UDatasmithPostProcessVolumeTemplate : UDatasmithObjectTemplate
{
	#region Offsets
	private ExternalOffset<FDatasmithPostProcessSettingsTemplate> _offSettings                                                   = new ExternalOffset<FDatasmithPostProcessSettingsTemplate>(0x0030, false); // 0x0030(0x0040) (NoDestructor, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbEnabled                                                   = new ExternalOffset<char>(0x0070, false);                     // 0x0070(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbUnbound                                                   = new ExternalOffset<char>(0x0070, false);                     // 0x0070(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FDatasmithPostProcessSettingsTemplate              Settings                                                       => _offSettings.GetValue();
	#endregion


}

// Class DatasmithContent.DatasmithScene
// 0x0000 (0x0028 - 0x0028)
public class UDatasmithScene : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class DatasmithContent.DatasmithSceneActor
// 0x0018 (0x0250 - 0x0238)
public class ADatasmithSceneActor : AActor
{
	#region Offsets
	private ExternalOffset<UDatasmithScene>                   _offScene                                                      = new ExternalOffset<UDatasmithScene>(0x0248, true);           // 0x0248(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UDatasmithScene                                    Scene                                                          => _offScene.GetValue();
	#endregion


}

// Class DatasmithContent.DatasmithSceneComponentTemplate
// 0x0040 (0x0068 - 0x0028)
public class UDatasmithSceneComponentTemplate : UDatasmithObjectTemplate
{
	#region Offsets
	private ExternalOffset<FTransform>                        _offRelativeTransform                                          = new ExternalOffset<FTransform>(0x0030, false);               // 0x0030(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EComponentMobility>>   _offMobility                                                   = new ExternalOffset<TEnumAsByte<EComponentMobility>>(0x0060, false); // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FTransform                                         RelativeTransform                                              => _offRelativeTransform.GetValue();
	public TEnumAsByte<EComponentMobility>                    Mobility                                                       => _offMobility.GetValue();
	#endregion


}

// Class DatasmithContent.DatasmithSkyLightComponentTemplate
// 0x0018 (0x0040 - 0x0028)
public class UDatasmithSkyLightComponentTemplate : UDatasmithObjectTemplate
{
	#region Offsets
	private ExternalOffset<TEnumAsByte<ESkyLightSourceType>>  _offSourceType                                                 = new ExternalOffset<TEnumAsByte<ESkyLightSourceType>>(0x0030, false); // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offCubemapResolution                                          = new ExternalOffset<int>(0x0034);                             // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UTextureCube>                      _offCubemap                                                    = new ExternalOffset<UTextureCube>(0x0038, true);              // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TEnumAsByte<ESkyLightSourceType>                   SourceType                                                     => _offSourceType.GetValue();
	public int                                                CubemapResolution                                              => _offCubemapResolution.GetValue();
	public UTextureCube                                       Cubemap                                                        => _offCubemap.GetValue();
	#endregion


}

// Class DatasmithContent.DatasmithSpotLightComponentTemplate
// 0x0010 (0x0038 - 0x0028)
public class UDatasmithSpotLightComponentTemplate : UDatasmithObjectTemplate
{
	#region Offsets
	private ExternalOffset<float>                             _offInnerConeAngle                                             = new ExternalOffset<float>(0x0030);                           // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offOuterConeAngle                                             = new ExternalOffset<float>(0x0034);                           // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                              InnerConeAngle                                                 => _offInnerConeAngle.GetValue();
	public float                                              OuterConeAngle                                                 => _offOuterConeAngle.GetValue();
	#endregion


}

// Class DatasmithContent.DatasmithStaticMeshComponentTemplate
// 0x0020 (0x0048 - 0x0028)
public class UDatasmithStaticMeshComponentTemplate : UDatasmithObjectTemplate
{
	#region Offsets
	private ExternalOffset<UStaticMesh>                       _offStaticMesh                                                 = new ExternalOffset<UStaticMesh>(0x0030, true);               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UMaterialInterface>>        _offOverrideMaterials                                          = new ExternalOffset<TArray<UMaterialInterface>>(0x0038, false); // 0x0038(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UStaticMesh                                        StaticMesh                                                     => _offStaticMesh.GetValue();
	public TArray<UMaterialInterface>                         OverrideMaterials                                              => _offOverrideMaterials.GetValue();
	#endregion


}

// Class DatasmithContent.DatasmithStaticMeshTemplate
// 0x0080 (0x00A8 - 0x0028)
public class UDatasmithStaticMeshTemplate : UDatasmithObjectTemplate
{
	#region Offsets
	private ExternalOffset<FDatasmithMeshSectionInfoMapTemplate> _offSectionInfoMap                                             = new ExternalOffset<FDatasmithMeshSectionInfoMapTemplate>(0x0030, false); // 0x0030(0x0050) (Edit, EditConst, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offLightMapCoordinateIndex                                    = new ExternalOffset<int>(0x0080);                             // 0x0080(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offLightMapResolution                                         = new ExternalOffset<int>(0x0084);                             // 0x0084(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FDatasmithMeshBuildSettingsTemplate>> _offBuildSettings                                              = new ExternalOffset<TArray<FDatasmithMeshBuildSettingsTemplate>>(0x0088, false); // 0x0088(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FDatasmithStaticMaterialTemplate>> _offStaticMaterials                                            = new ExternalOffset<TArray<FDatasmithStaticMaterialTemplate>>(0x0098, false); // 0x0098(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FDatasmithMeshSectionInfoMapTemplate               SectionInfoMap                                                 => _offSectionInfoMap.GetValue();
	public int                                                LightMapCoordinateIndex                                        => _offLightMapCoordinateIndex.GetValue();
	public int                                                LightMapResolution                                             => _offLightMapResolution.GetValue();
	public TArray<FDatasmithMeshBuildSettingsTemplate>        BuildSettings                                                  => _offBuildSettings.GetValue();
	public TArray<FDatasmithStaticMaterialTemplate>           StaticMaterials                                                => _offStaticMaterials.GetValue();
	#endregion


}


}