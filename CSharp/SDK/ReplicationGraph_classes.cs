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

// Class ReplicationGraph.ReplicationGraphNode
// 0x0010 (0x0038 - 0x0028)
public class UReplicationGraphNode : UObject
{
	#region Offsets
	private ExternalOffset<TArray<UReplicationGraphNode>>     _offAllChildNodes                                              = new ExternalOffset<TArray<UReplicationGraphNode>>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public TArray<UReplicationGraphNode>                      AllChildNodes                                                  => _offAllChildNodes.GetValue();
	#endregion


}

// Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
// 0x0028 (0x0060 - 0x0038)
public class UReplicationGraphNode_TearOff_ForConnection : UReplicationGraphNode
{
	#region Offsets
	private ExternalOffset<TArray<FTearOffActorInfo>>         _offTearOffActors                                              = new ExternalOffset<TArray<FTearOffActorInfo>>(0x0050, false); // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FTearOffActorInfo>                          TearOffActors                                                  => _offTearOffActors.GetValue();
	#endregion


}

// Class ReplicationGraph.ReplicationGraph
// 0x0090 (0x00B8 - 0x0028)
public class UReplicationGraph : UReplicationDriver
{
	#region Offsets
	private ExternalOffset<UClass>                            _offReplicationConnectionManagerClass                          = new ExternalOffset<UClass>(0x0028, true);                    // 0x0028(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UNetDriver>                        _offNetDriver                                                  = new ExternalOffset<UNetDriver>(0x0030, true);                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UNetReplicationGraphConnection>> _offConnections                                                = new ExternalOffset<TArray<UNetReplicationGraphConnection>>(0x0038, false); // 0x0038(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UNetReplicationGraphConnection>> _offPendingConnections                                         = new ExternalOffset<TArray<UNetReplicationGraphConnection>>(0x0048, false); // 0x0048(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UReplicationGraphNode>>     _offGlobalGraphNodes                                           = new ExternalOffset<TArray<UReplicationGraphNode>>(0x0098, false); // 0x0098(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<UReplicationGraphNode>>     _offPrepareForReplicationNodes                                 = new ExternalOffset<TArray<UReplicationGraphNode>>(0x00A8, false); // 0x00A8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public UClass                                             ReplicationConnectionManagerClass                              => _offReplicationConnectionManagerClass.GetValue();
	public UNetDriver                                         NetDriver                                                      => _offNetDriver.GetValue();
	public TArray<UNetReplicationGraphConnection>             Connections                                                    => _offConnections.GetValue();
	public TArray<UNetReplicationGraphConnection>             PendingConnections                                             => _offPendingConnections.GetValue();
	public TArray<UReplicationGraphNode>                      GlobalGraphNodes                                               => _offGlobalGraphNodes.GetValue();
	public TArray<UReplicationGraphNode>                      PrepareForReplicationNodes                                     => _offPrepareForReplicationNodes.GetValue();
	#endregion


}

// Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
// 0x0018 (0x0050 - 0x0038)
public class UReplicationGraphNode_GridSpatialization2D : UReplicationGraphNode
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class ReplicationGraph.NetReplicationGraphConnection
// 0x0198 (0x01C0 - 0x0028)
public class UNetReplicationGraphConnection : UReplicationConnectionDriver
{
	#region Offsets
	private ExternalOffset<UNetConnection>                    _offNetConnection                                              = new ExternalOffset<UNetConnection>(0x0028, true);            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<AReplicationGraphDebugActor>       _offDebugActor                                                 = new ExternalOffset<AReplicationGraphDebugActor>(0x0170, true); // 0x0170(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FLastLocationGatherInfo>>   _offLastGatherLocations                                        = new ExternalOffset<TArray<FLastLocationGatherInfo>>(0x0190, false); // 0x0190(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UReplicationGraphNode>>     _offConnectionGraphNodes                                       = new ExternalOffset<TArray<UReplicationGraphNode>>(0x01A8, false); // 0x01A8(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<UReplicationGraphNode_TearOff_ForConnection> _offTearOffNode                                                = new ExternalOffset<UReplicationGraphNode_TearOff_ForConnection>(0x01B8, true); // 0x01B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UNetConnection                                     NetConnection                                                  => _offNetConnection.GetValue();
	public AReplicationGraphDebugActor                        DebugActor                                                     => _offDebugActor.GetValue();
	public TArray<FLastLocationGatherInfo>                    LastGatherLocations                                            => _offLastGatherLocations.GetValue();
	public TArray<UReplicationGraphNode>                      ConnectionGraphNodes                                           => _offConnectionGraphNodes.GetValue();
	public UReplicationGraphNode_TearOff_ForConnection        TearOffNode                                                    => _offTearOffNode.GetValue();
	#endregion


}

// Class ReplicationGraph.BasicReplicationGraph
// 0x0410 (0x04C8 - 0x00B8)
public class UBasicReplicationGraph : UReplicationGraph
{
	#region Offsets
	private ExternalOffset<UReplicationGraphNode_GridSpatialization2D> _offGridNode                                                   = new ExternalOffset<UReplicationGraphNode_GridSpatialization2D>(0x0498, true); // 0x0498(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UReplicationGraphNode_ActorList>   _offAlwaysRelevantNode                                         = new ExternalOffset<UReplicationGraphNode_ActorList>(0x04A0, true); // 0x04A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FConnectionAlwaysRelevantNodePair>> _offAlwaysRelevantForConnectionList                            = new ExternalOffset<TArray<FConnectionAlwaysRelevantNodePair>>(0x04A8, false); // 0x04A8(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<AActor>>                    _offActorsWithoutNetConnection                                 = new ExternalOffset<TArray<AActor>>(0x04B8, false);           // 0x04B8(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UReplicationGraphNode_GridSpatialization2D         GridNode                                                       => _offGridNode.GetValue();
	public UReplicationGraphNode_ActorList                    AlwaysRelevantNode                                             => _offAlwaysRelevantNode.GetValue();
	public TArray<FConnectionAlwaysRelevantNodePair>          AlwaysRelevantForConnectionList                                => _offAlwaysRelevantForConnectionList.GetValue();
	public TArray<AActor>                                     ActorsWithoutNetConnection                                     => _offActorsWithoutNetConnection.GetValue();
	#endregion


}

// Class ReplicationGraph.ReplicationGraphNode_ActorList
// 0x0018 (0x0050 - 0x0038)
public class UReplicationGraphNode_ActorList : UReplicationGraphNode
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
// 0x0018 (0x0050 - 0x0038)
public class UReplicationGraphNode_ActorListFrequencyBuckets : UReplicationGraphNode
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
// 0x00A8 (0x00F8 - 0x0050)
public class UReplicationGraphNode_DynamicSpatialFrequency : UReplicationGraphNode_ActorList
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
// 0x00A8 (0x00F8 - 0x0050)
public class UReplicationGraphNode_ConnectionDormancyNode : UReplicationGraphNode_ActorList
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class ReplicationGraph.ReplicationGraphNode_DormancyNode
// 0x00A8 (0x00F8 - 0x0050)
public class UReplicationGraphNode_DormancyNode : UReplicationGraphNode_ActorList
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class ReplicationGraph.ReplicationGraphDebugActor
// 0x0020 (0x0258 - 0x0238)
public class AReplicationGraphDebugActor : AActor
{
	#region Offsets
	private ExternalOffset<UReplicationGraph>                 _offReplicationGraph                                           = new ExternalOffset<UReplicationGraph>(0x0248, true);         // 0x0248(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UNetReplicationGraphConnection>    _offConnectionManager                                          = new ExternalOffset<UNetReplicationGraphConnection>(0x0250, true); // 0x0250(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UReplicationGraph                                  ReplicationGraph                                               => _offReplicationGraph.GetValue();
	public UNetReplicationGraphConnection                     ConnectionManager                                              => _offConnectionManager.GetValue();
	#endregion


}

// Class ReplicationGraph.ReplicationGraphNode_GridCell
// 0x0100 (0x0150 - 0x0050)
public class UReplicationGraphNode_GridCell : UReplicationGraphNode_ActorList
{
	#region Offsets
	private ExternalOffset<UReplicationGraphNode>             _offDynamicNode                                                = new ExternalOffset<UReplicationGraphNode>(0x0140, true);     // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UReplicationGraphNode_DormancyNode> _offDormancyNode                                               = new ExternalOffset<UReplicationGraphNode_DormancyNode>(0x0148, true); // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UReplicationGraphNode                              DynamicNode                                                    => _offDynamicNode.GetValue();
	public UReplicationGraphNode_DormancyNode                 DormancyNode                                                   => _offDormancyNode.GetValue();
	#endregion


}

// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
// 0x0020 (0x0058 - 0x0038)
public class UReplicationGraphNode_AlwaysRelevant : UReplicationGraphNode
{
	#region Offsets
	private ExternalOffset<UReplicationGraphNode>             _offChildNode                                                  = new ExternalOffset<UReplicationGraphNode>(0x0050, true);     // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public UReplicationGraphNode                              ChildNode                                                      => _offChildNode.GetValue();
	#endregion


}

// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
// 0x00E0 (0x0130 - 0x0050)
public class UReplicationGraphNode_AlwaysRelevant_ForConnection : UReplicationGraphNode_ActorList
{
	#region Offsets
	private ExternalOffset<TArray<FAlwaysRelevantActorInfo>>  _offPastRelevantActors                                         = new ExternalOffset<TArray<FAlwaysRelevantActorInfo>>(0x0110, false); // 0x0110(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<AActor>                            _offLastViewer                                                 = new ExternalOffset<AActor>(0x0120, true);                    // 0x0120(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<AActor>                            _offLastViewTarget                                             = new ExternalOffset<AActor>(0x0128, true);                    // 0x0128(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FAlwaysRelevantActorInfo>                   PastRelevantActors                                             => _offPastRelevantActors.GetValue();
	public AActor                                             LastViewer                                                     => _offLastViewer.GetValue();
	public AActor                                             LastViewTarget                                                 => _offLastViewTarget.GetValue();
	#endregion


}


}