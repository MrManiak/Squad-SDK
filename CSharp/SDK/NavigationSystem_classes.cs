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

// Class NavigationSystem.NavigationData
// 0x0178 (0x03B0 - 0x0238)
public class ANavigationData : AActor
{
	#region Offsets
	private ExternalOffset<UPrimitiveComponent>               _offRenderingComp                                              = new ExternalOffset<UPrimitiveComponent>(0x0250, true);       // 0x0250(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FNavDataConfig>                    _offNavDataConfig                                              = new ExternalOffset<FNavDataConfig>(0x0258, false);           // 0x0258(0x0068) (Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbEnableDrawing                                             = new ExternalOffset<char>(0x02C0, false);                     // 0x02C0(0x0001) BIT_FIELD (Edit, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbForceRebuildOnLoad                                        = new ExternalOffset<char>(0x02C0, false);                     // 0x02C0(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbCanBeMainNavData                                          = new ExternalOffset<char>(0x02C0, false);                     // 0x02C0(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbCanSpawnOnRebuild                                         = new ExternalOffset<char>(0x02C0, false);                     // 0x02C0(0x0001) BIT_FIELD (Edit, Config, EditConst, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbRebuildAtRuntime                                          = new ExternalOffset<char>(0x02C0, false);                     // 0x02C0(0x0001) BIT_FIELD (Config, Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<ERuntimeGenerationType>            _offRuntimeGeneration                                          = new ExternalOffset<ERuntimeGenerationType>(0x02C4, false);   // 0x02C4(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offObservedPathsTickInterval                                  = new ExternalOffset<float>(0x02C8);                           // 0x02C8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<uint>                              _offDataVersion                                                = new ExternalOffset<uint>(0x02CC);                            // 0x02CC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<FSupportedAreaData>>        _offSupportedAreas                                             = new ExternalOffset<TArray<FSupportedAreaData>>(0x03A0, false); // 0x03A0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public UPrimitiveComponent                                RenderingComp                                                  => _offRenderingComp.GetValue();
	public FNavDataConfig                                     NavDataConfig                                                  => _offNavDataConfig.GetValue();
	public ERuntimeGenerationType                             RuntimeGeneration                                              => _offRuntimeGeneration.GetValue();
	public float                                              ObservedPathsTickInterval                                      => _offObservedPathsTickInterval.GetValue();
	public uint                                               DataVersion                                                    => _offDataVersion.GetValue();
	public TArray<FSupportedAreaData>                         SupportedAreas                                                 => _offSupportedAreas.GetValue();
	#endregion


}

// Class NavigationSystem.AbstractNavData
// 0x0058 (0x0408 - 0x03B0)
public class AAbstractNavData : ANavigationData
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class NavigationSystem.CrowdManagerBase
// 0x0000 (0x0028 - 0x0028)
public class UCrowdManagerBase : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class NavigationSystem.NavArea
// 0x001A (0x0042 - 0x0028)
public class UNavArea : UNavAreaBase
{
	#region Offsets
	private ExternalOffset<float>                             _offDefaultCost                                                = new ExternalOffset<float>(0x0030);                           // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offFixedAreaEnteringCost                                      = new ExternalOffset<float>(0x0034);                           // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FColor>                            _offDrawColor                                                  = new ExternalOffset<FColor>(0x0038, false);                   // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FNavAgentSelector>                 _offSupportedAgents                                            = new ExternalOffset<FNavAgentSelector>(0x003C, false);        // 0x003C(0x0004) (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbSupportsAgent0                                            = new ExternalOffset<char>(0x0040, false);                     // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbSupportsAgent1                                            = new ExternalOffset<char>(0x0040, false);                     // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbSupportsAgent2                                            = new ExternalOffset<char>(0x0040, false);                     // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbSupportsAgent3                                            = new ExternalOffset<char>(0x0040, false);                     // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbSupportsAgent4                                            = new ExternalOffset<char>(0x0040, false);                     // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbSupportsAgent5                                            = new ExternalOffset<char>(0x0040, false);                     // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbSupportsAgent6                                            = new ExternalOffset<char>(0x0040, false);                     // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbSupportsAgent7                                            = new ExternalOffset<char>(0x0040, false);                     // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbSupportsAgent8                                            = new ExternalOffset<char>(0x0041, false);                     // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbSupportsAgent9                                            = new ExternalOffset<char>(0x0041, false);                     // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbSupportsAgent10                                           = new ExternalOffset<char>(0x0041, false);                     // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbSupportsAgent11                                           = new ExternalOffset<char>(0x0041, false);                     // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbSupportsAgent12                                           = new ExternalOffset<char>(0x0041, false);                     // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbSupportsAgent13                                           = new ExternalOffset<char>(0x0041, false);                     // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbSupportsAgent14                                           = new ExternalOffset<char>(0x0041, false);                     // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbSupportsAgent15                                           = new ExternalOffset<char>(0x0041, false);                     // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                              DefaultCost                                                    => _offDefaultCost.GetValue();
	public float                                              FixedAreaEnteringCost                                          => _offFixedAreaEnteringCost.GetValue();
	public FColor                                             DrawColor                                                      => _offDrawColor.GetValue();
	public FNavAgentSelector                                  SupportedAgents                                                => _offSupportedAgents.GetValue();
	#endregion


}

// Class NavigationSystem.NavArea_Default
// 0x0006 (0x0048 - 0x0042)
public class UNavArea_Default : UNavArea
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class NavigationSystem.NavArea_LowHeight
// 0x0006 (0x0048 - 0x0042)
public class UNavArea_LowHeight : UNavArea
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class NavigationSystem.NavArea_Null
// 0x0006 (0x0048 - 0x0042)
public class UNavArea_Null : UNavArea
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class NavigationSystem.NavArea_Obstacle
// 0x0006 (0x0048 - 0x0042)
public class UNavArea_Obstacle : UNavArea
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class NavigationSystem.NavAreaMeta
// 0x0006 (0x0048 - 0x0042)
public class UNavAreaMeta : UNavArea
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// 0x0080 (0x00C8 - 0x0048)
public class UNavAreaMeta_SwitchByAgent : UNavAreaMeta
{
	#region Offsets
	private ExternalOffset<UClass>                            _offAgent0Area                                                 = new ExternalOffset<UClass>(0x0048, true);                    // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offAgent1Area                                                 = new ExternalOffset<UClass>(0x0050, true);                    // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offAgent2Area                                                 = new ExternalOffset<UClass>(0x0058, true);                    // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offAgent3Area                                                 = new ExternalOffset<UClass>(0x0060, true);                    // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offAgent4Area                                                 = new ExternalOffset<UClass>(0x0068, true);                    // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offAgent5Area                                                 = new ExternalOffset<UClass>(0x0070, true);                    // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offAgent6Area                                                 = new ExternalOffset<UClass>(0x0078, true);                    // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offAgent7Area                                                 = new ExternalOffset<UClass>(0x0080, true);                    // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offAgent8Area                                                 = new ExternalOffset<UClass>(0x0088, true);                    // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offAgent9Area                                                 = new ExternalOffset<UClass>(0x0090, true);                    // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offAgent10Area                                                = new ExternalOffset<UClass>(0x0098, true);                    // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offAgent11Area                                                = new ExternalOffset<UClass>(0x00A0, true);                    // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offAgent12Area                                                = new ExternalOffset<UClass>(0x00A8, true);                    // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offAgent13Area                                                = new ExternalOffset<UClass>(0x00B0, true);                    // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offAgent14Area                                                = new ExternalOffset<UClass>(0x00B8, true);                    // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offAgent15Area                                                = new ExternalOffset<UClass>(0x00C0, true);                    // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                             Agent0Area                                                     => _offAgent0Area.GetValue();
	public UClass                                             Agent1Area                                                     => _offAgent1Area.GetValue();
	public UClass                                             Agent2Area                                                     => _offAgent2Area.GetValue();
	public UClass                                             Agent3Area                                                     => _offAgent3Area.GetValue();
	public UClass                                             Agent4Area                                                     => _offAgent4Area.GetValue();
	public UClass                                             Agent5Area                                                     => _offAgent5Area.GetValue();
	public UClass                                             Agent6Area                                                     => _offAgent6Area.GetValue();
	public UClass                                             Agent7Area                                                     => _offAgent7Area.GetValue();
	public UClass                                             Agent8Area                                                     => _offAgent8Area.GetValue();
	public UClass                                             Agent9Area                                                     => _offAgent9Area.GetValue();
	public UClass                                             Agent10Area                                                    => _offAgent10Area.GetValue();
	public UClass                                             Agent11Area                                                    => _offAgent11Area.GetValue();
	public UClass                                             Agent12Area                                                    => _offAgent12Area.GetValue();
	public UClass                                             Agent13Area                                                    => _offAgent13Area.GetValue();
	public UClass                                             Agent14Area                                                    => _offAgent14Area.GetValue();
	public UClass                                             Agent15Area                                                    => _offAgent15Area.GetValue();
	#endregion


}

// Class NavigationSystem.NavCollision
// 0x0080 (0x00A9 - 0x0029)
public class UNavCollision : UNavCollisionBase
{
	#region Offsets
	private ExternalOffset<TArray<FNavCollisionCylinder>>     _offCylinderCollision                                          = new ExternalOffset<TArray<FNavCollisionCylinder>>(0x0080, false); // 0x0080(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FNavCollisionBox>>          _offBoxCollision                                               = new ExternalOffset<TArray<FNavCollisionBox>>(0x0090, false); // 0x0090(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offAreaClass                                                  = new ExternalOffset<UClass>(0x00A0, true);                    // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbGatherConvexGeometry                                      = new ExternalOffset<char>(0x00A8, false);                     // 0x00A8(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbCreateOnClient                                            = new ExternalOffset<char>(0x00A8, false);                     // 0x00A8(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FNavCollisionCylinder>                      CylinderCollision                                              => _offCylinderCollision.GetValue();
	public TArray<FNavCollisionBox>                           BoxCollision                                                   => _offBoxCollision.GetValue();
	public UClass                                             AreaClass                                                      => _offAreaClass.GetValue();
	#endregion


}

// Class NavigationSystem.NavigationGraph
// 0x0058 (0x0408 - 0x03B0)
public class ANavigationGraph : ANavigationData
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class NavigationSystem.NavigationGraphNode
// 0x0010 (0x0248 - 0x0238)
public class ANavigationGraphNode : AActor
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class NavigationSystem.NavigationGraphNodeComponent
// 0x00C0 (0x0240 - 0x0180)
public class UNavigationGraphNodeComponent : USceneComponent
{
	#region Offsets
	private ExternalOffset<FNavGraphNode>                     _offNode                                                       = new ExternalOffset<FNavGraphNode>(0x0218, false);            // 0x0218(0x0018) (NativeAccessSpecifierPublic)
	private ExternalOffset<UNavigationGraphNodeComponent>     _offNextNodeComponent                                          = new ExternalOffset<UNavigationGraphNodeComponent>(0x0230, true); // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UNavigationGraphNodeComponent>     _offPrevNodeComponent                                          = new ExternalOffset<UNavigationGraphNodeComponent>(0x0238, true); // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FNavGraphNode                                      Node                                                           => _offNode.GetValue();
	public UNavigationGraphNodeComponent                      NextNodeComponent                                              => _offNextNodeComponent.GetValue();
	public UNavigationGraphNodeComponent                      PrevNodeComponent                                              => _offPrevNodeComponent.GetValue();
	#endregion


}

// Class NavigationSystem.NavigationInvokerComponent
// 0x0018 (0x00E0 - 0x00C8)
public class UNavigationInvokerComponent : UActorComponent
{
	#region Offsets
	private ExternalOffset<float>                             _offTileGenerationRadius                                       = new ExternalOffset<float>(0x00D8);                           // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offTileRemovalRadius                                          = new ExternalOffset<float>(0x00DC);                           // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public float                                              TileGenerationRadius                                           => _offTileGenerationRadius.GetValue();
	public float                                              TileRemovalRadius                                              => _offTileRemovalRadius.GetValue();
	#endregion


}

// Class NavigationSystem.NavigationPath
// 0x0021 (0x0049 - 0x0028)
public class UNavigationPath : UObject
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offPathUpdatedNotifier                                        = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FVector>>                   _offPathPoints                                                 = new ExternalOffset<TArray<FVector>>(0x0038, false);          // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ENavigationOptionFlag>> _offRecalculateOnInvalidation                                  = new ExternalOffset<TEnumAsByte<ENavigationOptionFlag>>(0x0048, false); // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           PathUpdatedNotifier                                            => _offPathUpdatedNotifier.GetValue();
	public TArray<FVector>                                    PathPoints                                                     => _offPathPoints.GetValue();
	public TEnumAsByte<ENavigationOptionFlag>                 RecalculateOnInvalidation                                      => _offRecalculateOnInvalidation.GetValue();
	#endregion


}

// Class NavigationSystem.NavigationPathGenerator
// 0x0000 (0x0028 - 0x0028)
public class UNavigationPathGenerator : UInterface
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class NavigationSystem.NavigationQueryFilter
// 0x0018 (0x0040 - 0x0028)
public class UNavigationQueryFilter : UObject
{
	#region Offsets
	private ExternalOffset<TArray<FNavigationFilterArea>>     _offAreas                                                      = new ExternalOffset<TArray<FNavigationFilterArea>>(0x0028, false); // 0x0028(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FNavigationFilterFlags>            _offIncludeFlags                                               = new ExternalOffset<FNavigationFilterFlags>(0x0038, false);   // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FNavigationFilterFlags>            _offExcludeFlags                                               = new ExternalOffset<FNavigationFilterFlags>(0x003C, false);   // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FNavigationFilterArea>                      Areas                                                          => _offAreas.GetValue();
	public FNavigationFilterFlags                             IncludeFlags                                                   => _offIncludeFlags.GetValue();
	public FNavigationFilterFlags                             ExcludeFlags                                                   => _offExcludeFlags.GetValue();
	#endregion


}

// Class NavigationSystem.NavigationSystemV1
// 0x01B5 (0x01DD - 0x0028)
public class UNavigationSystemV1 : UNavigationSystemBase
{
	#region Offsets
	private ExternalOffset<ANavigationData>                   _offMainNavData                                                = new ExternalOffset<ANavigationData>(0x0028, true);           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ANavigationData>                   _offAbstractNavData                                            = new ExternalOffset<ANavigationData>(0x0030, true);           // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbAutoCreateNavigationData                                  = new ExternalOffset<char>(0x0060, false);                     // 0x0060(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbSpawnNavDataInNavBoundsLevel                              = new ExternalOffset<char>(0x0060, false);                     // 0x0060(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbAllowClientSideNavigation                                 = new ExternalOffset<char>(0x0060, false);                     // 0x0060(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbShouldDiscardSubLevelNavData                              = new ExternalOffset<char>(0x0060, false);                     // 0x0060(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbTickWhilePaused                                           = new ExternalOffset<char>(0x0060, false);                     // 0x0060(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbSupportRebuilding                                         = new ExternalOffset<char>(0x0060, false);                     // 0x0060(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbInitialBuildingLocked                                     = new ExternalOffset<char>(0x0060, false);                     // 0x0060(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbSkipAgentHeightCheckWhenPickingNavData                    = new ExternalOffset<char>(0x0061, false);                     // 0x0061(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ENavDataGatheringModeConfig>       _offDataGatheringMode                                          = new ExternalOffset<ENavDataGatheringModeConfig>(0x0064, false); // 0x0064(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbGenerateNavigationOnlyAroundNavigationInvokers            = new ExternalOffset<char>(0x0068, false);                     // 0x0068(0x0001) BIT_FIELD (Edit, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offActiveTilesUpdateInterval                                  = new ExternalOffset<float>(0x006C);                           // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<FNavDataConfig>>            _offSupportedAgents                                            = new ExternalOffset<TArray<FNavDataConfig>>(0x0070, false);   // 0x0070(0x0010) (Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offDirtyAreasUpdateFreq                                       = new ExternalOffset<float>(0x0080);                           // 0x0080(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<ANavigationData>>           _offNavDataSet                                                 = new ExternalOffset<TArray<ANavigationData>>(0x0088, false);  // 0x0088(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<ANavigationData>>           _offNavDataRegistrationQueue                                   = new ExternalOffset<TArray<ANavigationData>>(0x0098, false);  // 0x0098(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnNavDataRegisteredEvent                                   = new ExternalOffset<FScriptMulticastDelegate>(0x0108, false); // 0x0108(0x0010) (ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnNavigationGenerationFinishedDelegate                     = new ExternalOffset<FScriptMulticastDelegate>(0x0118, false); // 0x0118(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<EFNavigationSystemRunMode>         _offOperationMode                                              = new ExternalOffset<EFNavigationSystemRunMode>(0x0204, false); // 0x0204(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public ANavigationData                                    MainNavData                                                    => _offMainNavData.GetValue();
	public ANavigationData                                    AbstractNavData                                                => _offAbstractNavData.GetValue();
	public ENavDataGatheringModeConfig                        DataGatheringMode                                              => _offDataGatheringMode.GetValue();
	public float                                              ActiveTilesUpdateInterval                                      => _offActiveTilesUpdateInterval.GetValue();
	public TArray<FNavDataConfig>                             SupportedAgents                                                => _offSupportedAgents.GetValue();
	public float                                              DirtyAreasUpdateFreq                                           => _offDirtyAreasUpdateFreq.GetValue();
	public TArray<ANavigationData>                            NavDataSet                                                     => _offNavDataSet.GetValue();
	public TArray<ANavigationData>                            NavDataRegistrationQueue                                       => _offNavDataRegistrationQueue.GetValue();
	public FScriptMulticastDelegate                           OnNavDataRegisteredEvent                                       => _offOnNavDataRegisteredEvent.GetValue();
	public FScriptMulticastDelegate                           OnNavigationGenerationFinishedDelegate                         => _offOnNavigationGenerationFinishedDelegate.GetValue();
	public EFNavigationSystemRunMode                          OperationMode                                                  => _offOperationMode.GetValue();
	#endregion


}

// Class NavigationSystem.NavigationSystemModuleConfig
// 0x0008 (0x0049 - 0x0041)
public class UNavigationSystemModuleConfig : UNavigationSystemConfig
{
	#region Offsets
//	private ExternalOffset<char>                              _offbStrictlyStatic                                            = new ExternalOffset<char>(0x0048, false);                     // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbCreateOnClient                                            = new ExternalOffset<char>(0x0048, false);                     // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbAutoSpawnMissingNavData                                   = new ExternalOffset<char>(0x0048, false);                     // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbSpawnNavDataInNavBoundsLevel                              = new ExternalOffset<char>(0x0048, false);                     // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	#endregion


}

// Class NavigationSystem.NavigationTestingActor
// 0x00C8 (0x0300 - 0x0238)
public class ANavigationTestingActor : AActor
{
	#region Offsets
	private ExternalOffset<UCapsuleComponent>                 _offCapsuleComponent                                           = new ExternalOffset<UCapsuleComponent>(0x0258, true);         // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UNavigationInvokerComponent>       _offInvokerComponent                                           = new ExternalOffset<UNavigationInvokerComponent>(0x0260, true); // 0x0260(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
//	private ExternalOffset<char>                              _offbActAsNavigationInvoker                                    = new ExternalOffset<char>(0x0268, false);                     // 0x0268(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FNavAgentProperties>               _offNavAgentProps                                              = new ExternalOffset<FNavAgentProperties>(0x0270, false);      // 0x0270(0x0030) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offQueryingExtent                                             = new ExternalOffset<FVector>(0x02A0, false);                  // 0x02A0(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ANavigationData>                   _offMyNavData                                                  = new ExternalOffset<ANavigationData>(0x02B0, true);           // 0x02B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offProjectedLocation                                          = new ExternalOffset<FVector>(0x02B8, false);                  // 0x02B8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbProjectedLocationValid                                    = new ExternalOffset<char>(0x02C4, false);                     // 0x02C4(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbSearchStart                                               = new ExternalOffset<char>(0x02C4, false);                     // 0x02C4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbBacktracking                                              = new ExternalOffset<char>(0x02C4, false);                     // 0x02C4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbUseHierarchicalPathfinding                                = new ExternalOffset<char>(0x02C4, false);                     // 0x02C4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbGatherDetailedInfo                                        = new ExternalOffset<char>(0x02C4, false);                     // 0x02C4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbDrawDistanceToWall                                        = new ExternalOffset<char>(0x02C4, false);                     // 0x02C4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbShowNodePool                                              = new ExternalOffset<char>(0x02C4, false);                     // 0x02C4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbShowBestPath                                              = new ExternalOffset<char>(0x02C4, false);                     // 0x02C4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbShowDiffWithPreviousStep                                  = new ExternalOffset<char>(0x02C5, false);                     // 0x02C5(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbShouldBeVisibleInGame                                     = new ExternalOffset<char>(0x02C5, false);                     // 0x02C5(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ENavCostDisplay>>      _offCostDisplayMode                                            = new ExternalOffset<TEnumAsByte<ENavCostDisplay>>(0x02C8, false); // 0x02C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector2D>                         _offTextCanvasOffset                                           = new ExternalOffset<FVector2D>(0x02CC, false);                // 0x02CC(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbPathExist                                                 = new ExternalOffset<char>(0x02D4, false);                     // 0x02D4(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbPathIsPartial                                             = new ExternalOffset<char>(0x02D4, false);                     // 0x02D4(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbPathSearchOutOfNodes                                      = new ExternalOffset<char>(0x02D4, false);                     // 0x02D4(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offPathfindingTime                                            = new ExternalOffset<float>(0x02D8);                           // 0x02D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offPathCost                                                   = new ExternalOffset<float>(0x02DC);                           // 0x02DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offPathfindingSteps                                           = new ExternalOffset<int>(0x02E0);                             // 0x02E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ANavigationTestingActor>           _offOtherActor                                                 = new ExternalOffset<ANavigationTestingActor>(0x02E8, true);   // 0x02E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offFilterClass                                                = new ExternalOffset<UClass>(0x02F0, true);                    // 0x02F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offShowStepIndex                                              = new ExternalOffset<int>(0x02F8);                             // 0x02F8(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offOffsetFromCornersDistance                                  = new ExternalOffset<float>(0x02FC);                           // 0x02FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UCapsuleComponent                                  CapsuleComponent                                               => _offCapsuleComponent.GetValue();
	public UNavigationInvokerComponent                        InvokerComponent                                               => _offInvokerComponent.GetValue();
	public FNavAgentProperties                                NavAgentProps                                                  => _offNavAgentProps.GetValue();
	public FVector                                            QueryingExtent                                                 => _offQueryingExtent.GetValue();
	public ANavigationData                                    MyNavData                                                      => _offMyNavData.GetValue();
	public FVector                                            ProjectedLocation                                              => _offProjectedLocation.GetValue();
	public TEnumAsByte<ENavCostDisplay>                       CostDisplayMode                                                => _offCostDisplayMode.GetValue();
	public FVector2D                                          TextCanvasOffset                                               => _offTextCanvasOffset.GetValue();
	public float                                              PathfindingTime                                                => _offPathfindingTime.GetValue();
	public float                                              PathCost                                                       => _offPathCost.GetValue();
	public int                                                PathfindingSteps                                               => _offPathfindingSteps.GetValue();
	public ANavigationTestingActor                            OtherActor                                                     => _offOtherActor.GetValue();
	public UClass                                             FilterClass                                                    => _offFilterClass.GetValue();
	public int                                                ShowStepIndex                                                  => _offShowStepIndex.GetValue();
	public float                                              OffsetFromCornersDistance                                      => _offOffsetFromCornersDistance.GetValue();
	#endregion


}

// Class NavigationSystem.NavLinkComponent
// 0x001B (0x0420 - 0x0405)
public class UNavLinkComponent : UPrimitiveComponent
{
	#region Offsets
	private ExternalOffset<TArray<FNavigationLink>>           _offLinks                                                      = new ExternalOffset<TArray<FNavigationLink>>(0x0410, false);  // 0x0410(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FNavigationLink>                            Links                                                          => _offLinks.GetValue();
	#endregion


}

// Class NavigationSystem.NavRelevantComponent
// 0x0040 (0x0108 - 0x00C8)
public class UNavRelevantComponent : UActorComponent
{
	#region Offsets
//	private ExternalOffset<char>                              _offbAttachToOwnersRoot                                        = new ExternalOffset<char>(0x00FC, false);                     // 0x00FC(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UObject>                           _offCachedNavParent                                            = new ExternalOffset<UObject>(0x0100, true);                   // 0x0100(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public UObject                                            CachedNavParent                                                => _offCachedNavParent.GetValue();
	#endregion


}

// Class NavigationSystem.NavLinkCustomComponent
// 0x0071 (0x0179 - 0x0108)
public class UNavLinkCustomComponent : UNavRelevantComponent
{
	#region Offsets
	private ExternalOffset<uint>                              _offNavLinkUserId                                              = new ExternalOffset<uint>(0x0110);                            // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UClass>                            _offEnabledAreaClass                                           = new ExternalOffset<UClass>(0x0118, true);                    // 0x0118(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UClass>                            _offDisabledAreaClass                                          = new ExternalOffset<UClass>(0x0120, true);                    // 0x0120(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FNavAgentSelector>                 _offSupportedAgents                                            = new ExternalOffset<FNavAgentSelector>(0x0128, false);        // 0x0128(0x0004) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FVector>                           _offLinkRelativeStart                                          = new ExternalOffset<FVector>(0x012C, false);                  // 0x012C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FVector>                           _offLinkRelativeEnd                                            = new ExternalOffset<FVector>(0x0138, false);                  // 0x0138(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TEnumAsByte<ENavLinkDirection>>    _offLinkDirection                                              = new ExternalOffset<TEnumAsByte<ENavLinkDirection>>(0x0144, false); // 0x0144(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbLinkEnabled                                               = new ExternalOffset<char>(0x0148, false);                     // 0x0148(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbNotifyWhenEnabled                                         = new ExternalOffset<char>(0x0148, false);                     // 0x0148(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbNotifyWhenDisabled                                        = new ExternalOffset<char>(0x0148, false);                     // 0x0148(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbCreateBoxObstacle                                         = new ExternalOffset<char>(0x0148, false);                     // 0x0148(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FVector>                           _offObstacleOffset                                             = new ExternalOffset<FVector>(0x014C, false);                  // 0x014C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FVector>                           _offObstacleExtent                                             = new ExternalOffset<FVector>(0x0158, false);                  // 0x0158(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UClass>                            _offObstacleAreaClass                                          = new ExternalOffset<UClass>(0x0168, true);                    // 0x0168(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offBroadcastRadius                                            = new ExternalOffset<float>(0x0170);                           // 0x0170(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offBroadcastInterval                                          = new ExternalOffset<float>(0x0174);                           // 0x0174(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TEnumAsByte<ECollisionChannel>>    _offBroadcastChannel                                           = new ExternalOffset<TEnumAsByte<ECollisionChannel>>(0x0178, false); // 0x0178(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public uint                                               NavLinkUserId                                                  => _offNavLinkUserId.GetValue();
	public UClass                                             EnabledAreaClass                                               => _offEnabledAreaClass.GetValue();
	public UClass                                             DisabledAreaClass                                              => _offDisabledAreaClass.GetValue();
	public FNavAgentSelector                                  SupportedAgents                                                => _offSupportedAgents.GetValue();
	public FVector                                            LinkRelativeStart                                              => _offLinkRelativeStart.GetValue();
	public FVector                                            LinkRelativeEnd                                                => _offLinkRelativeEnd.GetValue();
	public TEnumAsByte<ENavLinkDirection>                     LinkDirection                                                  => _offLinkDirection.GetValue();
	public FVector                                            ObstacleOffset                                                 => _offObstacleOffset.GetValue();
	public FVector                                            ObstacleExtent                                                 => _offObstacleExtent.GetValue();
	public UClass                                             ObstacleAreaClass                                              => _offObstacleAreaClass.GetValue();
	public float                                              BroadcastRadius                                                => _offBroadcastRadius.GetValue();
	public float                                              BroadcastInterval                                              => _offBroadcastInterval.GetValue();
	public TEnumAsByte<ECollisionChannel>                     BroadcastChannel                                               => _offBroadcastChannel.GetValue();
	#endregion


}

// Class NavigationSystem.NavLinkCustomInterface
// 0x0000 (0x0028 - 0x0028)
public class UNavLinkCustomInterface : UInterface
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class NavigationSystem.NavLinkHostInterface
// 0x0000 (0x0028 - 0x0028)
public class UNavLinkHostInterface : UInterface
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class NavigationSystem.NavLinkRenderingComponent
// 0x000B (0x0410 - 0x0405)
public class UNavLinkRenderingComponent : UPrimitiveComponent
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class NavigationSystem.NavLinkTrivial
// 0x0008 (0x0050 - 0x0048)
public class UNavLinkTrivial : UNavLinkDefinition
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class NavigationSystem.NavMeshBoundsVolume
// 0x0004 (0x0284 - 0x0280)
public class ANavMeshBoundsVolume : AVolume
{
	#region Offsets
	private ExternalOffset<FNavAgentSelector>                 _offSupportedAgents                                            = new ExternalOffset<FNavAgentSelector>(0x0280, false);        // 0x0280(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FNavAgentSelector                                  SupportedAgents                                                => _offSupportedAgents.GetValue();
	#endregion


}

// Class NavigationSystem.NavMeshRenderingComponent
// 0x000B (0x0410 - 0x0405)
public class UNavMeshRenderingComponent : UPrimitiveComponent
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class NavigationSystem.NavModifierComponent
// 0x0015 (0x011D - 0x0108)
public class UNavModifierComponent : UNavRelevantComponent
{
	#region Offsets
	private ExternalOffset<UClass>                            _offAreaClass                                                  = new ExternalOffset<UClass>(0x0108, true);                    // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offFailsafeExtent                                             = new ExternalOffset<FVector>(0x0110, false);                  // 0x0110(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbIncludeAgentHeight                                        = new ExternalOffset<char>(0x011C, false);                     // 0x011C(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                             AreaClass                                                      => _offAreaClass.GetValue();
	public FVector                                            FailsafeExtent                                                 => _offFailsafeExtent.GetValue();
	#endregion


}

// Class NavigationSystem.NavModifierVolume
// 0x0010 (0x0290 - 0x0280)
public class ANavModifierVolume : AVolume
{
	#region Offsets
	private ExternalOffset<UClass>                            _offAreaClass                                                  = new ExternalOffset<UClass>(0x0288, true);                    // 0x0288(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public UClass                                             AreaClass                                                      => _offAreaClass.GetValue();
	#endregion


}

// Class NavigationSystem.NavNodeInterface
// 0x0000 (0x0028 - 0x0028)
public class UNavNodeInterface : UInterface
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class NavigationSystem.NavSystemConfigOverride
// 0x0019 (0x0251 - 0x0238)
public class ANavSystemConfigOverride : AActor
{
	#region Offsets
	private ExternalOffset<UNavigationSystemConfig>           _offNavigationSystemConfig                                     = new ExternalOffset<UNavigationSystemConfig>(0x0248, true);   // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbLoadOnClient                                              = new ExternalOffset<char>(0x0250, false);                     // 0x0250(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public UNavigationSystemConfig                            NavigationSystemConfig                                         => _offNavigationSystemConfig.GetValue();
	#endregion


}

// Class NavigationSystem.NavTestRenderingComponent
// 0x000B (0x0410 - 0x0405)
public class UNavTestRenderingComponent : UPrimitiveComponent
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class NavigationSystem.RecastFilter_UseDefaultArea
// 0x0008 (0x0048 - 0x0040)
public class URecastFilter_UseDefaultArea : UNavigationQueryFilter
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class NavigationSystem.RecastNavMesh
// 0x00DC (0x048C - 0x03B0)
public class ARecastNavMesh : ANavigationData
{
	#region Offsets
//	private ExternalOffset<char>                              _offbDrawTriangleEdges                                         = new ExternalOffset<char>(0x0408, false);                     // 0x0408(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbDrawPolyEdges                                             = new ExternalOffset<char>(0x0408, false);                     // 0x0408(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbDrawFilledPolys                                           = new ExternalOffset<char>(0x0408, false);                     // 0x0408(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbDrawNavMeshEdges                                          = new ExternalOffset<char>(0x0408, false);                     // 0x0408(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbDrawTileBounds                                            = new ExternalOffset<char>(0x0408, false);                     // 0x0408(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbDrawPathCollidingGeometry                                 = new ExternalOffset<char>(0x0408, false);                     // 0x0408(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbDrawTileLabels                                            = new ExternalOffset<char>(0x0408, false);                     // 0x0408(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbDrawPolygonLabels                                         = new ExternalOffset<char>(0x0408, false);                     // 0x0408(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbDrawDefaultPolygonCost                                    = new ExternalOffset<char>(0x0409, false);                     // 0x0409(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbDrawLabelsOnPathNodes                                     = new ExternalOffset<char>(0x0409, false);                     // 0x0409(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbDrawNavLinks                                              = new ExternalOffset<char>(0x0409, false);                     // 0x0409(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbDrawFailedNavLinks                                        = new ExternalOffset<char>(0x0409, false);                     // 0x0409(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbDrawClusters                                              = new ExternalOffset<char>(0x0409, false);                     // 0x0409(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbDrawOctree                                                = new ExternalOffset<char>(0x0409, false);                     // 0x0409(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbDrawOctreeDetails                                         = new ExternalOffset<char>(0x0409, false);                     // 0x0409(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbDrawMarkedForbiddenPolys                                  = new ExternalOffset<char>(0x0409, false);                     // 0x0409(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbDistinctlyDrawTilesBeingBuilt                             = new ExternalOffset<char>(0x040A, false);                     // 0x040A(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbDrawNavMesh                                               = new ExternalOffset<char>(0x040A, false);                     // 0x040A(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDrawOffset                                                 = new ExternalOffset<float>(0x040C);                           // 0x040C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbFixedTilePoolSize                                         = new ExternalOffset<char>(0x0410, false);                     // 0x0410(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offTilePoolSize                                               = new ExternalOffset<int>(0x0414);                             // 0x0414(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offTileSizeUU                                                 = new ExternalOffset<float>(0x0418);                           // 0x0418(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offCellSize                                                   = new ExternalOffset<float>(0x041C);                           // 0x041C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offCellHeight                                                 = new ExternalOffset<float>(0x0420);                           // 0x0420(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offAgentRadius                                                = new ExternalOffset<float>(0x0424);                           // 0x0424(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offAgentHeight                                                = new ExternalOffset<float>(0x0428);                           // 0x0428(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offAgentMaxHeight                                             = new ExternalOffset<float>(0x042C);                           // 0x042C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offAgentMaxSlope                                              = new ExternalOffset<float>(0x0430);                           // 0x0430(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offAgentMaxStepHeight                                         = new ExternalOffset<float>(0x0434);                           // 0x0434(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMinRegionArea                                              = new ExternalOffset<float>(0x0438);                           // 0x0438(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMergeRegionSize                                            = new ExternalOffset<float>(0x043C);                           // 0x043C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMaxSimplificationError                                     = new ExternalOffset<float>(0x0440);                           // 0x0440(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offMaxSimultaneousTileGenerationJobsCount                     = new ExternalOffset<int>(0x0444);                             // 0x0444(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offTileNumberHardLimit                                        = new ExternalOffset<int>(0x0448);                             // 0x0448(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offPolyRefTileBits                                            = new ExternalOffset<int>(0x044C);                             // 0x044C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offPolyRefNavPolyBits                                         = new ExternalOffset<int>(0x0450);                             // 0x0450(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offPolyRefSaltBits                                            = new ExternalOffset<int>(0x0454);                             // 0x0454(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offNavMeshOriginOffset                                        = new ExternalOffset<FVector>(0x0458, false);                  // 0x0458(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDefaultDrawDistance                                        = new ExternalOffset<float>(0x0464);                           // 0x0464(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDefaultMaxSearchNodes                                      = new ExternalOffset<float>(0x0468);                           // 0x0468(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDefaultMaxHierarchicalSearchNodes                          = new ExternalOffset<float>(0x046C);                           // 0x046C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ERecastPartitioning>>  _offRegionPartitioning                                         = new ExternalOffset<TEnumAsByte<ERecastPartitioning>>(0x0470, false); // 0x0470(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ERecastPartitioning>>  _offLayerPartitioning                                          = new ExternalOffset<TEnumAsByte<ERecastPartitioning>>(0x0471, false); // 0x0471(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offRegionChunkSplits                                          = new ExternalOffset<int>(0x0474);                             // 0x0474(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offLayerChunkSplits                                           = new ExternalOffset<int>(0x0478);                             // 0x0478(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbSortNavigationAreasByCost                                 = new ExternalOffset<char>(0x047C, false);                     // 0x047C(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbPerformVoxelFiltering                                     = new ExternalOffset<char>(0x047C, false);                     // 0x047C(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbMarkLowHeightAreas                                        = new ExternalOffset<char>(0x047C, false);                     // 0x047C(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbFilterLowSpanSequences                                    = new ExternalOffset<char>(0x047C, false);                     // 0x047C(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbFilterLowSpanFromTileCache                                = new ExternalOffset<char>(0x047C, false);                     // 0x047C(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbDoFullyAsyncNavDataGathering                              = new ExternalOffset<char>(0x047C, false);                     // 0x047C(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbUseBetterOffsetsFromCorners                               = new ExternalOffset<char>(0x047C, false);                     // 0x047C(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbStoreEmptyTileLayers                                      = new ExternalOffset<char>(0x047C, false);                     // 0x047C(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbUseVirtualFilters                                         = new ExternalOffset<char>(0x047D, false);                     // 0x047D(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbAllowNavLinkAsPathEnd                                     = new ExternalOffset<char>(0x047D, false);                     // 0x047D(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbUseVoxelCache                                             = new ExternalOffset<char>(0x047D, false);                     // 0x047D(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<float>                             _offTileSetUpdateInterval                                      = new ExternalOffset<float>(0x0480);                           // 0x0480(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<float>                             _offHeuristicScale                                             = new ExternalOffset<float>(0x0484);                           // 0x0484(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offVerticalDeviationFromGroundCompensation                    = new ExternalOffset<float>(0x0488);                           // 0x0488(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                              DrawOffset                                                     => _offDrawOffset.GetValue();
	public int                                                TilePoolSize                                                   => _offTilePoolSize.GetValue();
	public float                                              TileSizeUU                                                     => _offTileSizeUU.GetValue();
	public float                                              CellSize                                                       => _offCellSize.GetValue();
	public float                                              CellHeight                                                     => _offCellHeight.GetValue();
	public float                                              AgentRadius                                                    => _offAgentRadius.GetValue();
	public float                                              AgentHeight                                                    => _offAgentHeight.GetValue();
	public float                                              AgentMaxHeight                                                 => _offAgentMaxHeight.GetValue();
	public float                                              AgentMaxSlope                                                  => _offAgentMaxSlope.GetValue();
	public float                                              AgentMaxStepHeight                                             => _offAgentMaxStepHeight.GetValue();
	public float                                              MinRegionArea                                                  => _offMinRegionArea.GetValue();
	public float                                              MergeRegionSize                                                => _offMergeRegionSize.GetValue();
	public float                                              MaxSimplificationError                                         => _offMaxSimplificationError.GetValue();
	public int                                                MaxSimultaneousTileGenerationJobsCount                         => _offMaxSimultaneousTileGenerationJobsCount.GetValue();
	public int                                                TileNumberHardLimit                                            => _offTileNumberHardLimit.GetValue();
	public int                                                PolyRefTileBits                                                => _offPolyRefTileBits.GetValue();
	public int                                                PolyRefNavPolyBits                                             => _offPolyRefNavPolyBits.GetValue();
	public int                                                PolyRefSaltBits                                                => _offPolyRefSaltBits.GetValue();
	public FVector                                            NavMeshOriginOffset                                            => _offNavMeshOriginOffset.GetValue();
	public float                                              DefaultDrawDistance                                            => _offDefaultDrawDistance.GetValue();
	public float                                              DefaultMaxSearchNodes                                          => _offDefaultMaxSearchNodes.GetValue();
	public float                                              DefaultMaxHierarchicalSearchNodes                              => _offDefaultMaxHierarchicalSearchNodes.GetValue();
	public TEnumAsByte<ERecastPartitioning>                   RegionPartitioning                                             => _offRegionPartitioning.GetValue();
	public TEnumAsByte<ERecastPartitioning>                   LayerPartitioning                                              => _offLayerPartitioning.GetValue();
	public int                                                RegionChunkSplits                                              => _offRegionChunkSplits.GetValue();
	public int                                                LayerChunkSplits                                               => _offLayerChunkSplits.GetValue();
	public float                                              TileSetUpdateInterval                                          => _offTileSetUpdateInterval.GetValue();
	public float                                              HeuristicScale                                                 => _offHeuristicScale.GetValue();
	public float                                              VerticalDeviationFromGroundCompensation                        => _offVerticalDeviationFromGroundCompensation.GetValue();
	#endregion


}

// Class NavigationSystem.RecastNavMeshDataChunk
// 0x0000 (0x0030 - 0x0030)
public class URecastNavMeshDataChunk : UNavigationDataChunk
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}


}