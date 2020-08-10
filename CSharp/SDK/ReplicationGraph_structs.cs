// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ReplicationGraph.TearOffActorInfo
// 0x0018
public class FTearOffActorInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<AActor>                             _offActor                                                      = new ExternalOffset<AActor>(0x0008, true);                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public AActor                                              Actor                                                          => _offActor.GetValue();
	#endregion

	public FTearOffActorInfo(AActor c_Actor) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offActor.SetValue(c_Actor);
	}
}
// ScriptStruct ReplicationGraph.LastLocationGatherInfo
// 0x0018
public class FLastLocationGatherInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<UNetConnection>                     _offConnection                                                 = new ExternalOffset<UNetConnection>(0x0000, true);            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                            _offLastLocation                                               = new ExternalOffset<FVector>(0x0008, false);                  // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UNetConnection                                      Connection                                                     => _offConnection.GetValue();
	public FVector                                             LastLocation                                                   => _offLastLocation.GetValue();
	#endregion

	public FLastLocationGatherInfo(UNetConnection c_Connection, FVector c_LastLocation) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offConnection.SetValue(c_Connection);
		_offLastLocation.SetValue(c_LastLocation);
	}
}
// ScriptStruct ReplicationGraph.ConnectionAlwaysRelevantNodePair
// 0x0010
public class FConnectionAlwaysRelevantNodePair : ExternalClass
{
	#region Offsets
	private ExternalOffset<UNetConnection>                     _offNetConnection                                              = new ExternalOffset<UNetConnection>(0x0000, true);            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UReplicationGraphNode_AlwaysRelevant_ForConnection> _offNode                                                       = new ExternalOffset<UReplicationGraphNode_AlwaysRelevant_ForConnection>(0x0008, true); // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UNetConnection                                      NetConnection                                                  => _offNetConnection.GetValue();
	public UReplicationGraphNode_AlwaysRelevant_ForConnection  Node                                                           => _offNode.GetValue();
	#endregion

	public FConnectionAlwaysRelevantNodePair(UNetConnection c_NetConnection, UReplicationGraphNode_AlwaysRelevant_ForConnection c_Node) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offNetConnection.SetValue(c_NetConnection);
		_offNode.SetValue(c_Node);
	}
}
// ScriptStruct ReplicationGraph.AlwaysRelevantActorInfo
// 0x0018
public class FAlwaysRelevantActorInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<UNetConnection>                     _offConnection                                                 = new ExternalOffset<UNetConnection>(0x0000, true);            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<AActor>                             _offLastViewer                                                 = new ExternalOffset<AActor>(0x0008, true);                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<AActor>                             _offLastViewTarget                                             = new ExternalOffset<AActor>(0x0010, true);                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UNetConnection                                      Connection                                                     => _offConnection.GetValue();
	public AActor                                              LastViewer                                                     => _offLastViewer.GetValue();
	public AActor                                              LastViewTarget                                                 => _offLastViewTarget.GetValue();
	#endregion

	public FAlwaysRelevantActorInfo(UNetConnection c_Connection, AActor c_LastViewer, AActor c_LastViewTarget) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offConnection.SetValue(c_Connection);
		_offLastViewer.SetValue(c_LastViewer);
		_offLastViewTarget.SetValue(c_LastViewTarget);
	}
}

}