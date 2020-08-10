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

// Class PrefabAsset.PrefabActor
// 0x0018 (0x0250 - 0x0238)
public class APrefabActor : AActor
{
	#region Offsets
	private ExternalOffset<UPrefabComponent>                  _offPrefabComponent                                            = new ExternalOffset<UPrefabComponent>(0x0248, true);          // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UPrefabComponent                                   PrefabComponent                                                => _offPrefabComponent.GetValue();
	#endregion


}

// Class PrefabAsset.PrefabAsset
// 0x00A8 (0x00D0 - 0x0028)
public class UPrefabAsset : UObject
{
	#region Offsets
//	private TMap<struct FString, struct FSoftObjectPath>      _offAssetReferences                                            = new ExternalOffset<TMap<FSoftObjectPath>>(0x0028, false);    // 0x0028(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FSoftObjectPath>                   _offGeneratedBlueprintAssetReference                           = new ExternalOffset<FSoftObjectPath>(0x0078, false);          // 0x0078(0x0018) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGuid>                             _offPrefabId                                                   = new ExternalOffset<FGuid>(0x0090, false);                    // 0x0090(0x0010) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FString>                           _offPrefabContent                                              = new ExternalOffset<FString>(0x00A0, false);                  // 0x00A0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FString>                           _offPrefabHash                                                 = new ExternalOffset<FString>(0x00B0, false);                  // 0x00B0(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<int>                               _offNumActors                                                  = new ExternalOffset<int>(0x00C0);                             // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FVector>                           _offPrefabPivot                                                = new ExternalOffset<FVector>(0x00C4, false);                  // 0x00C4(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FSoftObjectPath                                    GeneratedBlueprintAssetReference                               => _offGeneratedBlueprintAssetReference.GetValue();
	public FGuid                                              PrefabId                                                       => _offPrefabId.GetValue();
	public FString                                            PrefabContent                                                  => _offPrefabContent.GetValue();
	public FString                                            PrefabHash                                                     => _offPrefabHash.GetValue();
	public int                                                NumActors                                                      => _offNumActors.GetValue();
	public FVector                                            PrefabPivot                                                    => _offPrefabPivot.GetValue();
	#endregion


}

// Class PrefabAsset.PrefabVariantAsset
// 0x0008 (0x00D8 - 0x00D0)
public class UPrefabVariantAsset : UPrefabAsset
{
	#region Offsets
	private ExternalOffset<UPrefabAsset>                      _offParent                                                     = new ExternalOffset<UPrefabAsset>(0x00D0, true);              // 0x00D0(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UPrefabAsset                                       Parent                                                         => _offParent.GetValue();
	#endregion


}

// Class PrefabAsset.PrefabComponent
// 0x007C (0x0481 - 0x0405)
public class UPrefabComponent : UPrimitiveComponent
{
	#region Offsets
	private ExternalOffset<UPrefabAsset>                      _offPrefab                                                     = new ExternalOffset<UPrefabAsset>(0x0410, true);              // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UBlueprint>                        _offGeneratedBlueprint                                         = new ExternalOffset<UBlueprint>(0x0418, true);                // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private TMap<struct FName, class AActor*>                 _offPrefabInstancesMap                                         = new ExternalOffset<TMap<AActor>>(0x0420, false);             // 0x0420(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, AdvancedDisplay, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FPrefabVariantRule>>        _offVariantRulesOverwrite                                      = new ExternalOffset<TArray<FPrefabVariantRule>>(0x0470, false); // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbTransient                                                 = new ExternalOffset<char>(0x0480, false);                     // 0x0480(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UPrefabAsset                                       Prefab                                                         => _offPrefab.GetValue();
	public UBlueprint                                         GeneratedBlueprint                                             => _offGeneratedBlueprint.GetValue();
	public TArray<FPrefabVariantRule>                         VariantRulesOverwrite                                          => _offVariantRulesOverwrite.GetValue();
	#endregion


}

// Class PrefabAsset.PrefabFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
public class UPrefabFunctionLibrary : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class PrefabAsset.PrefabExporter
// 0x0008 (0x0078 - 0x0070)
public class UPrefabExporter : UExporter
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class PrefabAsset.PrefabLevelExporter
// 0x0000 (0x0078 - 0x0078)
public class UPrefabLevelExporter : UPrefabExporter
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class PrefabAsset.PrefabObjectExporterT3D
// 0x0000 (0x0078 - 0x0078)
public class UPrefabObjectExporterT3D : UPrefabExporter
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class PrefabAsset.PrefabToolSettings
// 0x00D2 (0x00FA - 0x0028)
public class UPrefabToolSettings : UObject
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offbReplaceActorsWithCreatedPrefab                            = new ExternalOffset<byte/*(bool)*/>(0x0028);                  // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbAutoIncludeAttachedActorsWhenCreateNewPrefab              = new ExternalOffset<byte/*(bool)*/>(0x0029);                  // 0x0029(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbNestedPrefabSupport                                       = new ExternalOffset<byte/*(bool)*/>(0x002A);                  // 0x002A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbRestorePrefabActorCollapseStatusAfterPIE                  = new ExternalOffset<byte/*(bool)*/>(0x002B);                  // 0x002B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbCollapseAllPrefabActorsAfterMapOpened                     = new ExternalOffset<byte/*(bool)*/>(0x002C);                  // 0x002C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbMoveActorsInWorldAfterSetPrefabPivot                      = new ExternalOffset<byte/*(bool)*/>(0x002D);                  // 0x002D(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbDuplicateNoRevertWithOffset                               = new ExternalOffset<byte/*(bool)*/>(0x002E);                  // 0x002E(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offNewPrefabNamePattern                                       = new ExternalOffset<FString>(0x0030, false);                  // 0x0030(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EPTUITheme>                        _offUITheme                                                    = new ExternalOffset<EPTUITheme>(0x0040, false);               // 0x0040(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbUpdateAllPrefabActorsWhenOpenMap                          = new ExternalOffset<byte/*(bool)*/>(0x0044);                  // 0x0044(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbCheckPrefabChangeBeforeUpdateAllPrefabActorsWhenOpenMap   = new ExternalOffset<byte/*(bool)*/>(0x0045);                  // 0x0045(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbUpdateAllPrefabActorsWhenApply                            = new ExternalOffset<byte/*(bool)*/>(0x0046);                  // 0x0046(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbApplyToNestedPrefab                                       = new ExternalOffset<byte/*(bool)*/>(0x0047);                  // 0x0047(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbEnableApplyFromDisconnectedPrefabActor                    = new ExternalOffset<byte/*(bool)*/>(0x0048);                  // 0x0048(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbAutoAddRemoveVariantActorPrefix                           = new ExternalOffset<byte/*(bool)*/>(0x0049);                  // 0x0049(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offVariantActorPrefix                                         = new ExternalOffset<FString>(0x0050, false);                  // 0x0050(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbEnablePrefabComponentVisualizer                           = new ExternalOffset<byte/*(bool)*/>(0x0060);                  // 0x0060(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EPrefabVisualizerType>             _offPrefabComponentVisualizerType                              = new ExternalOffset<EPrefabVisualizerType>(0x0061, false);    // 0x0061(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbDisplayPrefabComponentVisualizerEvenNotSelected           = new ExternalOffset<byte/*(bool)*/>(0x0062);                  // 0x0062(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                            _offPrefabViewVisualizerColor                                  = new ExternalOffset<FColor>(0x0064, false);                   // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                            _offTargetActorColor                                           = new ExternalOffset<FColor>(0x0068, false);                   // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                            _offUnLockedConnectedColor                                     = new ExternalOffset<FColor>(0x006C, false);                   // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                            _offLockedConnectedColor                                       = new ExternalOffset<FColor>(0x0070, false);                   // 0x0070(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                            _offUnLockedDisConnectedColor                                  = new ExternalOffset<FColor>(0x0074, false);                   // 0x0074(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                            _offLockedDisConnectedColor                                    = new ExternalOffset<FColor>(0x0078, false);                   // 0x0078(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                            _offUnLockedNoPrefabAssignedColor                              = new ExternalOffset<FColor>(0x007C, false);                   // 0x007C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                            _offLockedNoPrefabAssignedColor                                = new ExternalOffset<FColor>(0x0080, false);                   // 0x0080(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSoftObjectPath>                   _offPrefabMaterialPath                                         = new ExternalOffset<FSoftObjectPath>(0x0088, false);          // 0x0088(0x0018) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbShadedPrefabViewVisualizer                                = new ExternalOffset<byte/*(bool)*/>(0x00C8);                  // 0x00C8(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbLockPrefabSelectionByDefault                              = new ExternalOffset<byte/*(bool)*/>(0x00C9);                  // 0x00C9(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbDisableLockPrefabSelectionFeature                         = new ExternalOffset<byte/*(bool)*/>(0x00CA);                  // 0x00CA(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbForceApplyPerInstanceVertexColor                          = new ExternalOffset<byte/*(bool)*/>(0x00CB);                  // 0x00CB(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbSupportGenerateBlueprint                                  = new ExternalOffset<byte/*(bool)*/>(0x00CD);                  // 0x00CD(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbHarvestComponentsWhenGeneratingBlueprint                  = new ExternalOffset<byte/*(bool)*/>(0x00CE);                  // 0x00CE(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbForceMobilityToMovableWhenGeneratingBlueprint             = new ExternalOffset<byte/*(bool)*/>(0x00CF);                  // 0x00CF(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UClass>>                    _offIgnoreActorClassesWhenGeneratingBlueprint                  = new ExternalOffset<TArray<UClass>>(0x00D8, false);           // 0x00D8(0x0010) (Edit, ZeroConstructor, Config, UObjectWrapper, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FName>>                     _offIgnoreActorTagsWhenGeneratingBlueprint                     = new ExternalOffset<TArray<FName>>(0x00E8, false);            // 0x00E8(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbFlashPrefabWindowForTargetPrefabActor                     = new ExternalOffset<byte/*(bool)*/>(0x00F8);                  // 0x00F8(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbEnablePrefabTextEditor                                    = new ExternalOffset<byte/*(bool)*/>(0x00F9);                  // 0x00F9(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbDebugMode                                                 = new ExternalOffset<byte/*(bool)*/>(0x00FA);                  // 0x00FA(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbDisableThumbnailRender                                    = new ExternalOffset<byte/*(bool)*/>(0x00FB);                  // 0x00FB(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbShowPrefabInstanceTagInPrefabToolWindow                   = new ExternalOffset<byte/*(bool)*/>(0x00FC);                  // 0x00FC(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                     bReplaceActorsWithCreatedPrefab                                => _offbReplaceActorsWithCreatedPrefab.GetValue();
	public byte/*(bool)*/                                     bAutoIncludeAttachedActorsWhenCreateNewPrefab                  => _offbAutoIncludeAttachedActorsWhenCreateNewPrefab.GetValue();
	public byte/*(bool)*/                                     bNestedPrefabSupport                                           => _offbNestedPrefabSupport.GetValue();
	public byte/*(bool)*/                                     bRestorePrefabActorCollapseStatusAfterPIE                      => _offbRestorePrefabActorCollapseStatusAfterPIE.GetValue();
	public byte/*(bool)*/                                     bCollapseAllPrefabActorsAfterMapOpened                         => _offbCollapseAllPrefabActorsAfterMapOpened.GetValue();
	public byte/*(bool)*/                                     bMoveActorsInWorldAfterSetPrefabPivot                          => _offbMoveActorsInWorldAfterSetPrefabPivot.GetValue();
	public byte/*(bool)*/                                     bDuplicateNoRevertWithOffset                                   => _offbDuplicateNoRevertWithOffset.GetValue();
	public FString                                            NewPrefabNamePattern                                           => _offNewPrefabNamePattern.GetValue();
	public EPTUITheme                                         UITheme                                                        => _offUITheme.GetValue();
	public byte/*(bool)*/                                     bUpdateAllPrefabActorsWhenOpenMap                              => _offbUpdateAllPrefabActorsWhenOpenMap.GetValue();
	public byte/*(bool)*/                                     bCheckPrefabChangeBeforeUpdateAllPrefabActorsWhenOpenMap       => _offbCheckPrefabChangeBeforeUpdateAllPrefabActorsWhenOpenMap.GetValue();
	public byte/*(bool)*/                                     bUpdateAllPrefabActorsWhenApply                                => _offbUpdateAllPrefabActorsWhenApply.GetValue();
	public byte/*(bool)*/                                     bApplyToNestedPrefab                                           => _offbApplyToNestedPrefab.GetValue();
	public byte/*(bool)*/                                     bEnableApplyFromDisconnectedPrefabActor                        => _offbEnableApplyFromDisconnectedPrefabActor.GetValue();
	public byte/*(bool)*/                                     bAutoAddRemoveVariantActorPrefix                               => _offbAutoAddRemoveVariantActorPrefix.GetValue();
	public FString                                            VariantActorPrefix                                             => _offVariantActorPrefix.GetValue();
	public byte/*(bool)*/                                     bEnablePrefabComponentVisualizer                               => _offbEnablePrefabComponentVisualizer.GetValue();
	public EPrefabVisualizerType                              PrefabComponentVisualizerType                                  => _offPrefabComponentVisualizerType.GetValue();
	public byte/*(bool)*/                                     bDisplayPrefabComponentVisualizerEvenNotSelected               => _offbDisplayPrefabComponentVisualizerEvenNotSelected.GetValue();
	public FColor                                             PrefabViewVisualizerColor                                      => _offPrefabViewVisualizerColor.GetValue();
	public FColor                                             TargetActorColor                                               => _offTargetActorColor.GetValue();
	public FColor                                             UnLockedConnectedColor                                         => _offUnLockedConnectedColor.GetValue();
	public FColor                                             LockedConnectedColor                                           => _offLockedConnectedColor.GetValue();
	public FColor                                             UnLockedDisConnectedColor                                      => _offUnLockedDisConnectedColor.GetValue();
	public FColor                                             LockedDisConnectedColor                                        => _offLockedDisConnectedColor.GetValue();
	public FColor                                             UnLockedNoPrefabAssignedColor                                  => _offUnLockedNoPrefabAssignedColor.GetValue();
	public FColor                                             LockedNoPrefabAssignedColor                                    => _offLockedNoPrefabAssignedColor.GetValue();
	public FSoftObjectPath                                    PrefabMaterialPath                                             => _offPrefabMaterialPath.GetValue();
	public byte/*(bool)*/                                     bShadedPrefabViewVisualizer                                    => _offbShadedPrefabViewVisualizer.GetValue();
	public byte/*(bool)*/                                     bLockPrefabSelectionByDefault                                  => _offbLockPrefabSelectionByDefault.GetValue();
	public byte/*(bool)*/                                     bDisableLockPrefabSelectionFeature                             => _offbDisableLockPrefabSelectionFeature.GetValue();
	public byte/*(bool)*/                                     bForceApplyPerInstanceVertexColor                              => _offbForceApplyPerInstanceVertexColor.GetValue();
	public byte/*(bool)*/                                     bSupportGenerateBlueprint                                      => _offbSupportGenerateBlueprint.GetValue();
	public byte/*(bool)*/                                     bHarvestComponentsWhenGeneratingBlueprint                      => _offbHarvestComponentsWhenGeneratingBlueprint.GetValue();
	public byte/*(bool)*/                                     bForceMobilityToMovableWhenGeneratingBlueprint                 => _offbForceMobilityToMovableWhenGeneratingBlueprint.GetValue();
	public TArray<UClass>                                     IgnoreActorClassesWhenGeneratingBlueprint                      => _offIgnoreActorClassesWhenGeneratingBlueprint.GetValue();
	public TArray<FName>                                      IgnoreActorTagsWhenGeneratingBlueprint                         => _offIgnoreActorTagsWhenGeneratingBlueprint.GetValue();
	public byte/*(bool)*/                                     bFlashPrefabWindowForTargetPrefabActor                         => _offbFlashPrefabWindowForTargetPrefabActor.GetValue();
	public byte/*(bool)*/                                     bEnablePrefabTextEditor                                        => _offbEnablePrefabTextEditor.GetValue();
	public byte/*(bool)*/                                     bDebugMode                                                     => _offbDebugMode.GetValue();
	public byte/*(bool)*/                                     bDisableThumbnailRender                                        => _offbDisableThumbnailRender.GetValue();
	public byte/*(bool)*/                                     bShowPrefabInstanceTagInPrefabToolWindow                       => _offbShowPrefabInstanceTagInPrefabToolWindow.GetValue();
	#endregion


}


}