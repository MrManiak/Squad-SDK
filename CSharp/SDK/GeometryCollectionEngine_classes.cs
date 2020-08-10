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

// Class GeometryCollectionEngine.ChaosDestructionListener
// 0x0118 (0x0298 - 0x0180)
public class UChaosDestructionListener : USceneComponent
{
	#region Offsets
	private ExternalOffset<FChaosCollisionEventRequestSettings> _offCollisionEventRequestSettings                              = new ExternalOffset<FChaosCollisionEventRequestSettings>(0x021C, false); // 0x021C(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FChaosBreakingEventRequestSettings> _offBreakingEventRequestSettings                               = new ExternalOffset<FChaosBreakingEventRequestSettings>(0x0234, false); // 0x0234(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FChaosTrailingEventRequestSettings> _offTrailingEventRequestSettings                               = new ExternalOffset<FChaosTrailingEventRequestSettings>(0x024C, false); // 0x024C(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnCollisionEvents                                          = new ExternalOffset<FScriptMulticastDelegate>(0x0308, false); // 0x0308(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnBreakingEvents                                           = new ExternalOffset<FScriptMulticastDelegate>(0x0318, false); // 0x0318(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnTrailingEvents                                           = new ExternalOffset<FScriptMulticastDelegate>(0x0328, false); // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FChaosCollisionEventRequestSettings                CollisionEventRequestSettings                                  => _offCollisionEventRequestSettings.GetValue();
	public FChaosBreakingEventRequestSettings                 BreakingEventRequestSettings                                   => _offBreakingEventRequestSettings.GetValue();
	public FChaosTrailingEventRequestSettings                 TrailingEventRequestSettings                                   => _offTrailingEventRequestSettings.GetValue();
	public FScriptMulticastDelegate                           OnCollisionEvents                                              => _offOnCollisionEvents.GetValue();
	public FScriptMulticastDelegate                           OnBreakingEvents                                               => _offOnBreakingEvents.GetValue();
	public FScriptMulticastDelegate                           OnTrailingEvents                                               => _offOnTrailingEvents.GetValue();
	#endregion


}

// Class GeometryCollectionEngine.GeometryCollectionActor
// 0x0020 (0x0258 - 0x0238)
public class AGeometryCollectionActor : AActor
{
	#region Offsets
	private ExternalOffset<UGeometryCollectionComponent>      _offGeometryCollectionComponent                                = new ExternalOffset<UGeometryCollectionComponent>(0x0248, true); // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UGeometryCollectionDebugDrawComponent> _offGeometryCollectionDebugDrawComponent                       = new ExternalOffset<UGeometryCollectionDebugDrawComponent>(0x0250, true); // 0x0250(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UGeometryCollectionComponent                       GeometryCollectionComponent                                    => _offGeometryCollectionComponent.GetValue();
	public UGeometryCollectionDebugDrawComponent              GeometryCollectionDebugDrawComponent                           => _offGeometryCollectionDebugDrawComponent.GetValue();
	#endregion


}

// Class GeometryCollectionEngine.GeometryCollectionCache
// 0x0028 (0x0050 - 0x0028)
public class UGeometryCollectionCache : UObject
{
	#region Offsets
	private ExternalOffset<FRecordedTransformTrack>           _offRecordedData                                               = new ExternalOffset<FRecordedTransformTrack>(0x0028, false);  // 0x0028(0x0010) (NativeAccessSpecifierPrivate)
	private ExternalOffset<UGeometryCollection>               _offSupportedCollection                                        = new ExternalOffset<UGeometryCollection>(0x0038, true);       // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FGuid>                             _offCompatibleCollectionState                                  = new ExternalOffset<FGuid>(0x0040, false);                    // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FRecordedTransformTrack                            RecordedData                                                   => _offRecordedData.GetValue();
	public UGeometryCollection                                SupportedCollection                                            => _offSupportedCollection.GetValue();
	public FGuid                                              CompatibleCollectionState                                      => _offCompatibleCollectionState.GetValue();
	#endregion


}

// Class GeometryCollectionEngine.GeometryCollectionComponent
// 0x03EF (0x0818 - 0x0429)
public class UGeometryCollectionComponent : UMeshComponent
{
	#region Offsets
	private ExternalOffset<AChaosSolverActor>                 _offChaosSolverActor                                           = new ExternalOffset<AChaosSolverActor>(0x0438, true);         // 0x0438(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UGeometryCollection>               _offRestCollection                                             = new ExternalOffset<UGeometryCollection>(0x0520, true);       // 0x0520(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<AFieldSystemActor>>         _offInitializationFields                                       = new ExternalOffset<TArray<AFieldSystemActor>>(0x0528, false); // 0x0528(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offSimulating                                                 = new ExternalOffset<byte/*(bool)*/>(0x0538);                  // 0x0538(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EObjectStateTypeEnum>              _offObjectType                                                 = new ExternalOffset<EObjectStateTypeEnum>(0x0540, false);     // 0x0540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offEnableClustering                                           = new ExternalOffset<byte/*(bool)*/>(0x0541);                  // 0x0541(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offClusterGroupIndex                                          = new ExternalOffset<int>(0x0544);                             // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offMaxClusterLevel                                            = new ExternalOffset<int>(0x0548);                             // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<float>>                     _offDamageThreshold                                            = new ExternalOffset<TArray<float>>(0x0550, false);            // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<EClusterConnectionTypeEnum>        _offClusterConnectionType                                      = new ExternalOffset<EClusterConnectionTypeEnum>(0x0560, false); // 0x0560(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offCollisionGroup                                             = new ExternalOffset<int>(0x0564);                             // 0x0564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offCollisionSampleFraction                                    = new ExternalOffset<float>(0x0568);                           // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UChaosPhysicalMaterial>            _offPhysicalMaterial                                           = new ExternalOffset<UChaosPhysicalMaterial>(0x0570, true);    // 0x0570(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EInitialVelocityTypeEnum>          _offInitialVelocityType                                        = new ExternalOffset<EInitialVelocityTypeEnum>(0x0578, false); // 0x0578(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offInitialLinearVelocity                                      = new ExternalOffset<FVector>(0x057C, false);                  // 0x057C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offInitialAngularVelocity                                     = new ExternalOffset<FVector>(0x0588, false);                  // 0x0588(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGeomComponentCacheParameters>     _offCacheParameters                                            = new ExternalOffset<FGeomComponentCacheParameters>(0x0598, false); // 0x0598(0x0050) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offNotifyGeometryCollectionPhysicsStateChange                 = new ExternalOffset<FScriptMulticastDelegate>(0x05E8, false); // 0x05E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offNotifyGeometryCollectionPhysicsLoadingStateChange          = new ExternalOffset<FScriptMulticastDelegate>(0x05F8, false); // 0x05F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnChaosBreakEvent                                          = new ExternalOffset<FScriptMulticastDelegate>(0x0638, false); // 0x0638(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDesiredCacheTime                                           = new ExternalOffset<float>(0x0648);                           // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offCachePlayback                                              = new ExternalOffset<byte/*(bool)*/>(0x064C);                  // 0x064C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnChaosPhysicsCollision                                    = new ExternalOffset<FScriptMulticastDelegate>(0x0650, false); // 0x0650(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbNotifyBreaks                                              = new ExternalOffset<byte/*(bool)*/>(0x0660);                  // 0x0660(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbNotifyCollisions                                          = new ExternalOffset<byte/*(bool)*/>(0x0661);                  // 0x0661(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UBodySetup>                        _offDummyBodySetup                                             = new ExternalOffset<UBodySetup>(0x0810, true);                // 0x0810(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public AChaosSolverActor                                  ChaosSolverActor                                               => _offChaosSolverActor.GetValue();
	public UGeometryCollection                                RestCollection                                                 => _offRestCollection.GetValue();
	public TArray<AFieldSystemActor>                          InitializationFields                                           => _offInitializationFields.GetValue();
	public byte/*(bool)*/                                     Simulating                                                     => _offSimulating.GetValue();
	public EObjectStateTypeEnum                               ObjectType                                                     => _offObjectType.GetValue();
	public byte/*(bool)*/                                     EnableClustering                                               => _offEnableClustering.GetValue();
	public int                                                ClusterGroupIndex                                              => _offClusterGroupIndex.GetValue();
	public int                                                MaxClusterLevel                                                => _offMaxClusterLevel.GetValue();
	public TArray<float>                                      DamageThreshold                                                => _offDamageThreshold.GetValue();
	public EClusterConnectionTypeEnum                         ClusterConnectionType                                          => _offClusterConnectionType.GetValue();
	public int                                                CollisionGroup                                                 => _offCollisionGroup.GetValue();
	public float                                              CollisionSampleFraction                                        => _offCollisionSampleFraction.GetValue();
	public UChaosPhysicalMaterial                             PhysicalMaterial                                               => _offPhysicalMaterial.GetValue();
	public EInitialVelocityTypeEnum                           InitialVelocityType                                            => _offInitialVelocityType.GetValue();
	public FVector                                            InitialLinearVelocity                                          => _offInitialLinearVelocity.GetValue();
	public FVector                                            InitialAngularVelocity                                         => _offInitialAngularVelocity.GetValue();
	public FGeomComponentCacheParameters                      CacheParameters                                                => _offCacheParameters.GetValue();
	public FScriptMulticastDelegate                           NotifyGeometryCollectionPhysicsStateChange                     => _offNotifyGeometryCollectionPhysicsStateChange.GetValue();
	public FScriptMulticastDelegate                           NotifyGeometryCollectionPhysicsLoadingStateChange              => _offNotifyGeometryCollectionPhysicsLoadingStateChange.GetValue();
	public FScriptMulticastDelegate                           OnChaosBreakEvent                                              => _offOnChaosBreakEvent.GetValue();
	public float                                              DesiredCacheTime                                               => _offDesiredCacheTime.GetValue();
	public byte/*(bool)*/                                     CachePlayback                                                  => _offCachePlayback.GetValue();
	public FScriptMulticastDelegate                           OnChaosPhysicsCollision                                        => _offOnChaosPhysicsCollision.GetValue();
	public byte/*(bool)*/                                     bNotifyBreaks                                                  => _offbNotifyBreaks.GetValue();
	public byte/*(bool)*/                                     bNotifyCollisions                                              => _offbNotifyCollisions.GetValue();
	public UBodySetup                                         DummyBodySetup                                                 => _offDummyBodySetup.GetValue();
	#endregion


}

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// 0x00D0 (0x0308 - 0x0238)
public class AGeometryCollectionDebugDrawActor : AActor
{
	#region Offsets
	private ExternalOffset<FGeometryCollectionDebugDrawWarningMessage> _offWarningMessage                                             = new ExternalOffset<FGeometryCollectionDebugDrawWarningMessage>(0x0248, false); // 0x0248(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FGeometryCollectionDebugDrawActorSelectedRigidBody> _offSelectedRigidBody                                          = new ExternalOffset<FGeometryCollectionDebugDrawActorSelectedRigidBody>(0x0250, false); // 0x0250(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbDebugDrawWholeCollection                                  = new ExternalOffset<byte/*(bool)*/>(0x0268);                  // 0x0268(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbDebugDrawHierarchy                                        = new ExternalOffset<byte/*(bool)*/>(0x0269);                  // 0x0269(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbDebugDrawClustering                                       = new ExternalOffset<byte/*(bool)*/>(0x026A);                  // 0x026A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EGeometryCollectionDebugDrawActorHideGeometry> _offHideGeometry                                               = new ExternalOffset<EGeometryCollectionDebugDrawActorHideGeometry>(0x026B, false); // 0x026B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbShowRigidBodyId                                           = new ExternalOffset<byte/*(bool)*/>(0x026C);                  // 0x026C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbShowRigidBodyCollision                                    = new ExternalOffset<byte/*(bool)*/>(0x026D);                  // 0x026D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbCollisionAtOrigin                                         = new ExternalOffset<byte/*(bool)*/>(0x026E);                  // 0x026E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbShowRigidBodyTransform                                    = new ExternalOffset<byte/*(bool)*/>(0x026F);                  // 0x026F(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbShowRigidBodyInertia                                      = new ExternalOffset<byte/*(bool)*/>(0x0270);                  // 0x0270(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbShowRigidBodyVelocity                                     = new ExternalOffset<byte/*(bool)*/>(0x0271);                  // 0x0271(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbShowRigidBodyForce                                        = new ExternalOffset<byte/*(bool)*/>(0x0272);                  // 0x0272(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbShowRigidBodyInfos                                        = new ExternalOffset<byte/*(bool)*/>(0x0273);                  // 0x0273(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbShowTransformIndex                                        = new ExternalOffset<byte/*(bool)*/>(0x0274);                  // 0x0274(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbShowTransform                                             = new ExternalOffset<byte/*(bool)*/>(0x0275);                  // 0x0275(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbShowParent                                                = new ExternalOffset<byte/*(bool)*/>(0x0276);                  // 0x0276(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbShowLevel                                                 = new ExternalOffset<byte/*(bool)*/>(0x0277);                  // 0x0277(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbShowConnectivityEdges                                     = new ExternalOffset<byte/*(bool)*/>(0x0278);                  // 0x0278(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbShowGeometryIndex                                         = new ExternalOffset<byte/*(bool)*/>(0x0279);                  // 0x0279(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbShowGeometryTransform                                     = new ExternalOffset<byte/*(bool)*/>(0x027A);                  // 0x027A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbShowBoundingBox                                           = new ExternalOffset<byte/*(bool)*/>(0x027B);                  // 0x027B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbShowFaces                                                 = new ExternalOffset<byte/*(bool)*/>(0x027C);                  // 0x027C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbShowFaceIndices                                           = new ExternalOffset<byte/*(bool)*/>(0x027D);                  // 0x027D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbShowFaceNormals                                           = new ExternalOffset<byte/*(bool)*/>(0x027E);                  // 0x027E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbShowSingleFace                                            = new ExternalOffset<byte/*(bool)*/>(0x027F);                  // 0x027F(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offSingleFaceIndex                                            = new ExternalOffset<int>(0x0280);                             // 0x0280(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbShowVertices                                              = new ExternalOffset<byte/*(bool)*/>(0x0284);                  // 0x0284(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbShowVertexIndices                                         = new ExternalOffset<byte/*(bool)*/>(0x0285);                  // 0x0285(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbShowVertexNormals                                         = new ExternalOffset<byte/*(bool)*/>(0x0286);                  // 0x0286(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbUseActiveVisualization                                    = new ExternalOffset<byte/*(bool)*/>(0x0287);                  // 0x0287(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offPointThickness                                             = new ExternalOffset<float>(0x0288);                           // 0x0288(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offLineThickness                                              = new ExternalOffset<float>(0x028C);                           // 0x028C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbTextShadow                                                = new ExternalOffset<byte/*(bool)*/>(0x0290);                  // 0x0290(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offTextScale                                                  = new ExternalOffset<float>(0x0294);                           // 0x0294(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offNormalScale                                                = new ExternalOffset<float>(0x0298);                           // 0x0298(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offAxisScale                                                  = new ExternalOffset<float>(0x029C);                           // 0x029C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offArrowScale                                                 = new ExternalOffset<float>(0x02A0);                           // 0x02A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                            _offRigidBodyIdColor                                           = new ExternalOffset<FColor>(0x02A4, false);                   // 0x02A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offRigidBodyTransformScale                                    = new ExternalOffset<float>(0x02A8);                           // 0x02A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                            _offRigidBodyCollisionColor                                    = new ExternalOffset<FColor>(0x02AC, false);                   // 0x02AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                            _offRigidBodyInertiaColor                                      = new ExternalOffset<FColor>(0x02B0, false);                   // 0x02B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                            _offRigidBodyVelocityColor                                     = new ExternalOffset<FColor>(0x02B4, false);                   // 0x02B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                            _offRigidBodyForceColor                                        = new ExternalOffset<FColor>(0x02B8, false);                   // 0x02B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                            _offRigidBodyInfoColor                                         = new ExternalOffset<FColor>(0x02BC, false);                   // 0x02BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                            _offTransformIndexColor                                        = new ExternalOffset<FColor>(0x02C0, false);                   // 0x02C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offTransformScale                                             = new ExternalOffset<float>(0x02C4);                           // 0x02C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                            _offLevelColor                                                 = new ExternalOffset<FColor>(0x02C8, false);                   // 0x02C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                            _offParentColor                                                = new ExternalOffset<FColor>(0x02CC, false);                   // 0x02CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offConnectivityEdgeThickness                                  = new ExternalOffset<float>(0x02D0);                           // 0x02D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                            _offGeometryIndexColor                                         = new ExternalOffset<FColor>(0x02D4, false);                   // 0x02D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offGeometryTransformScale                                     = new ExternalOffset<float>(0x02D8);                           // 0x02D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                            _offBoundingBoxColor                                           = new ExternalOffset<FColor>(0x02DC, false);                   // 0x02DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                            _offFaceColor                                                  = new ExternalOffset<FColor>(0x02E0, false);                   // 0x02E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                            _offFaceIndexColor                                             = new ExternalOffset<FColor>(0x02E4, false);                   // 0x02E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                            _offFaceNormalColor                                            = new ExternalOffset<FColor>(0x02E8, false);                   // 0x02E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                            _offSingleFaceColor                                            = new ExternalOffset<FColor>(0x02EC, false);                   // 0x02EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                            _offVertexColor                                                = new ExternalOffset<FColor>(0x02F0, false);                   // 0x02F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                            _offVertexIndexColor                                           = new ExternalOffset<FColor>(0x02F4, false);                   // 0x02F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FColor>                            _offVertexNormalColor                                          = new ExternalOffset<FColor>(0x02F8, false);                   // 0x02F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UBillboardComponent>               _offSpriteComponent                                            = new ExternalOffset<UBillboardComponent>(0x0300, true);       // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGeometryCollectionDebugDrawWarningMessage         WarningMessage                                                 => _offWarningMessage.GetValue();
	public FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody                                              => _offSelectedRigidBody.GetValue();
	public byte/*(bool)*/                                     bDebugDrawWholeCollection                                      => _offbDebugDrawWholeCollection.GetValue();
	public byte/*(bool)*/                                     bDebugDrawHierarchy                                            => _offbDebugDrawHierarchy.GetValue();
	public byte/*(bool)*/                                     bDebugDrawClustering                                           => _offbDebugDrawClustering.GetValue();
	public EGeometryCollectionDebugDrawActorHideGeometry      HideGeometry                                                   => _offHideGeometry.GetValue();
	public byte/*(bool)*/                                     bShowRigidBodyId                                               => _offbShowRigidBodyId.GetValue();
	public byte/*(bool)*/                                     bShowRigidBodyCollision                                        => _offbShowRigidBodyCollision.GetValue();
	public byte/*(bool)*/                                     bCollisionAtOrigin                                             => _offbCollisionAtOrigin.GetValue();
	public byte/*(bool)*/                                     bShowRigidBodyTransform                                        => _offbShowRigidBodyTransform.GetValue();
	public byte/*(bool)*/                                     bShowRigidBodyInertia                                          => _offbShowRigidBodyInertia.GetValue();
	public byte/*(bool)*/                                     bShowRigidBodyVelocity                                         => _offbShowRigidBodyVelocity.GetValue();
	public byte/*(bool)*/                                     bShowRigidBodyForce                                            => _offbShowRigidBodyForce.GetValue();
	public byte/*(bool)*/                                     bShowRigidBodyInfos                                            => _offbShowRigidBodyInfos.GetValue();
	public byte/*(bool)*/                                     bShowTransformIndex                                            => _offbShowTransformIndex.GetValue();
	public byte/*(bool)*/                                     bShowTransform                                                 => _offbShowTransform.GetValue();
	public byte/*(bool)*/                                     bShowParent                                                    => _offbShowParent.GetValue();
	public byte/*(bool)*/                                     bShowLevel                                                     => _offbShowLevel.GetValue();
	public byte/*(bool)*/                                     bShowConnectivityEdges                                         => _offbShowConnectivityEdges.GetValue();
	public byte/*(bool)*/                                     bShowGeometryIndex                                             => _offbShowGeometryIndex.GetValue();
	public byte/*(bool)*/                                     bShowGeometryTransform                                         => _offbShowGeometryTransform.GetValue();
	public byte/*(bool)*/                                     bShowBoundingBox                                               => _offbShowBoundingBox.GetValue();
	public byte/*(bool)*/                                     bShowFaces                                                     => _offbShowFaces.GetValue();
	public byte/*(bool)*/                                     bShowFaceIndices                                               => _offbShowFaceIndices.GetValue();
	public byte/*(bool)*/                                     bShowFaceNormals                                               => _offbShowFaceNormals.GetValue();
	public byte/*(bool)*/                                     bShowSingleFace                                                => _offbShowSingleFace.GetValue();
	public int                                                SingleFaceIndex                                                => _offSingleFaceIndex.GetValue();
	public byte/*(bool)*/                                     bShowVertices                                                  => _offbShowVertices.GetValue();
	public byte/*(bool)*/                                     bShowVertexIndices                                             => _offbShowVertexIndices.GetValue();
	public byte/*(bool)*/                                     bShowVertexNormals                                             => _offbShowVertexNormals.GetValue();
	public byte/*(bool)*/                                     bUseActiveVisualization                                        => _offbUseActiveVisualization.GetValue();
	public float                                              PointThickness                                                 => _offPointThickness.GetValue();
	public float                                              LineThickness                                                  => _offLineThickness.GetValue();
	public byte/*(bool)*/                                     bTextShadow                                                    => _offbTextShadow.GetValue();
	public float                                              TextScale                                                      => _offTextScale.GetValue();
	public float                                              NormalScale                                                    => _offNormalScale.GetValue();
	public float                                              AxisScale                                                      => _offAxisScale.GetValue();
	public float                                              ArrowScale                                                     => _offArrowScale.GetValue();
	public FColor                                             RigidBodyIdColor                                               => _offRigidBodyIdColor.GetValue();
	public float                                              RigidBodyTransformScale                                        => _offRigidBodyTransformScale.GetValue();
	public FColor                                             RigidBodyCollisionColor                                        => _offRigidBodyCollisionColor.GetValue();
	public FColor                                             RigidBodyInertiaColor                                          => _offRigidBodyInertiaColor.GetValue();
	public FColor                                             RigidBodyVelocityColor                                         => _offRigidBodyVelocityColor.GetValue();
	public FColor                                             RigidBodyForceColor                                            => _offRigidBodyForceColor.GetValue();
	public FColor                                             RigidBodyInfoColor                                             => _offRigidBodyInfoColor.GetValue();
	public FColor                                             TransformIndexColor                                            => _offTransformIndexColor.GetValue();
	public float                                              TransformScale                                                 => _offTransformScale.GetValue();
	public FColor                                             LevelColor                                                     => _offLevelColor.GetValue();
	public FColor                                             ParentColor                                                    => _offParentColor.GetValue();
	public float                                              ConnectivityEdgeThickness                                      => _offConnectivityEdgeThickness.GetValue();
	public FColor                                             GeometryIndexColor                                             => _offGeometryIndexColor.GetValue();
	public float                                              GeometryTransformScale                                         => _offGeometryTransformScale.GetValue();
	public FColor                                             BoundingBoxColor                                               => _offBoundingBoxColor.GetValue();
	public FColor                                             FaceColor                                                      => _offFaceColor.GetValue();
	public FColor                                             FaceIndexColor                                                 => _offFaceIndexColor.GetValue();
	public FColor                                             FaceNormalColor                                                => _offFaceNormalColor.GetValue();
	public FColor                                             SingleFaceColor                                                => _offSingleFaceColor.GetValue();
	public FColor                                             VertexColor                                                    => _offVertexColor.GetValue();
	public FColor                                             VertexIndexColor                                               => _offVertexIndexColor.GetValue();
	public FColor                                             VertexNormalColor                                              => _offVertexNormalColor.GetValue();
	public UBillboardComponent                                SpriteComponent                                                => _offSpriteComponent.GetValue();
	#endregion


}

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// 0x0020 (0x00E8 - 0x00C8)
public class UGeometryCollectionDebugDrawComponent : UActorComponent
{
	#region Offsets
	private ExternalOffset<AGeometryCollectionDebugDrawActor> _offGeometryCollectionDebugDrawActor                           = new ExternalOffset<AGeometryCollectionDebugDrawActor>(0x00D8, true); // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<AGeometryCollectionRenderLevelSetActor> _offGeometryCollectionRenderLevelSetActor                      = new ExternalOffset<AGeometryCollectionRenderLevelSetActor>(0x00E0, true); // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public AGeometryCollectionDebugDrawActor                  GeometryCollectionDebugDrawActor                               => _offGeometryCollectionDebugDrawActor.GetValue();
	public AGeometryCollectionRenderLevelSetActor             GeometryCollectionRenderLevelSetActor                          => _offGeometryCollectionRenderLevelSetActor.GetValue();
	#endregion


}

// Class GeometryCollectionEngine.GeometryCollection
// 0x0094 (0x00BC - 0x0028)
public class UGeometryCollection : UObject
{
	#region Offsets
	private ExternalOffset<TArray<UMaterialInterface>>        _offMaterials                                                  = new ExternalOffset<TArray<UMaterialInterface>>(0x0030, false); // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<ECollisionTypeEnum>                _offCollisionType                                              = new ExternalOffset<ECollisionTypeEnum>(0x0040, false);       // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EImplicitTypeEnum>                 _offImplicitType                                               = new ExternalOffset<EImplicitTypeEnum>(0x0041, false);        // 0x0041(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offMinLevelSetResolution                                      = new ExternalOffset<int>(0x0044);                             // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offMaxLevelSetResolution                                      = new ExternalOffset<int>(0x0048);                             // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offMinClusterLevelSetResolution                               = new ExternalOffset<int>(0x004C);                             // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offMaxClusterLevelSetResolution                               = new ExternalOffset<int>(0x0050);                             // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offCollisionObjectReductionPercentage                         = new ExternalOffset<float>(0x0054);                           // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbMassAsDensity                                             = new ExternalOffset<byte/*(bool)*/>(0x0058);                  // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMass                                                       = new ExternalOffset<float>(0x005C);                           // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMinimumMassClamp                                           = new ExternalOffset<float>(0x0060);                           // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offCollisionParticlesFraction                                 = new ExternalOffset<float>(0x0064);                           // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offMaximumCollisionParticles                                  = new ExternalOffset<int>(0x0068);                             // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FGeometryCollectionSizeSpecificData>> _offSizeSpecificData                                           = new ExternalOffset<TArray<FGeometryCollectionSizeSpecificData>>(0x0070, false); // 0x0070(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offEnableRemovePiecesOnFracture                               = new ExternalOffset<byte/*(bool)*/>(0x0080);                  // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UMaterialInterface>>        _offRemoveOnFractureMaterials                                  = new ExternalOffset<TArray<UMaterialInterface>>(0x0088, false); // 0x0088(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FGuid>                             _offPersistentGuid                                             = new ExternalOffset<FGuid>(0x0098, false);                    // 0x0098(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<FGuid>                             _offStateGuid                                                  = new ExternalOffset<FGuid>(0x00A8, false);                    // 0x00A8(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<int>                               _offBoneSelectedMaterialIndex                                  = new ExternalOffset<int>(0x00B8);                             // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<UMaterialInterface>                         Materials                                                      => _offMaterials.GetValue();
	public ECollisionTypeEnum                                 CollisionType                                                  => _offCollisionType.GetValue();
	public EImplicitTypeEnum                                  ImplicitType                                                   => _offImplicitType.GetValue();
	public int                                                MinLevelSetResolution                                          => _offMinLevelSetResolution.GetValue();
	public int                                                MaxLevelSetResolution                                          => _offMaxLevelSetResolution.GetValue();
	public int                                                MinClusterLevelSetResolution                                   => _offMinClusterLevelSetResolution.GetValue();
	public int                                                MaxClusterLevelSetResolution                                   => _offMaxClusterLevelSetResolution.GetValue();
	public float                                              CollisionObjectReductionPercentage                             => _offCollisionObjectReductionPercentage.GetValue();
	public byte/*(bool)*/                                     bMassAsDensity                                                 => _offbMassAsDensity.GetValue();
	public float                                              Mass                                                           => _offMass.GetValue();
	public float                                              MinimumMassClamp                                               => _offMinimumMassClamp.GetValue();
	public float                                              CollisionParticlesFraction                                     => _offCollisionParticlesFraction.GetValue();
	public int                                                MaximumCollisionParticles                                      => _offMaximumCollisionParticles.GetValue();
	public TArray<FGeometryCollectionSizeSpecificData>        SizeSpecificData                                               => _offSizeSpecificData.GetValue();
	public byte/*(bool)*/                                     EnableRemovePiecesOnFracture                                   => _offEnableRemovePiecesOnFracture.GetValue();
	public TArray<UMaterialInterface>                         RemoveOnFractureMaterials                                      => _offRemoveOnFractureMaterials.GetValue();
	public FGuid                                              PersistentGuid                                                 => _offPersistentGuid.GetValue();
	public FGuid                                              StateGuid                                                      => _offStateGuid.GetValue();
	public int                                                BoneSelectedMaterialIndex                                      => _offBoneSelectedMaterialIndex.GetValue();
	#endregion


}

// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// 0x002A (0x0262 - 0x0238)
public class AGeometryCollectionRenderLevelSetActor : AActor
{
	#region Offsets
	private ExternalOffset<UVolumeTexture>                    _offTargetVolumeTexture                                        = new ExternalOffset<UVolumeTexture>(0x0248, true);            // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMaterial>                         _offRayMarchMaterial                                           = new ExternalOffset<UMaterial>(0x0250, true);                 // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offSurfaceTolerance                                           = new ExternalOffset<float>(0x0258);                           // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offIsovalue                                                   = new ExternalOffset<float>(0x025C);                           // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offEnabled                                                    = new ExternalOffset<byte/*(bool)*/>(0x0260);                  // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offRenderVolumeBoundingBox                                    = new ExternalOffset<byte/*(bool)*/>(0x0261);                  // 0x0261(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UVolumeTexture                                     TargetVolumeTexture                                            => _offTargetVolumeTexture.GetValue();
	public UMaterial                                          RayMarchMaterial                                               => _offRayMarchMaterial.GetValue();
	public float                                              SurfaceTolerance                                               => _offSurfaceTolerance.GetValue();
	public float                                              Isovalue                                                       => _offIsovalue.GetValue();
	public byte/*(bool)*/                                     Enabled                                                        => _offEnabled.GetValue();
	public byte/*(bool)*/                                     RenderVolumeBoundingBox                                        => _offRenderVolumeBoundingBox.GetValue();
	#endregion


}

// Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
// 0x0088 (0x0150 - 0x00C8)
public class USkeletalMeshSimulationComponent : UActorComponent
{
	#region Offsets
	private ExternalOffset<UChaosPhysicalMaterial>            _offPhysicalMaterial                                           = new ExternalOffset<UChaosPhysicalMaterial>(0x00E0, true);    // 0x00E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<AChaosSolverActor>                 _offChaosSolverActor                                           = new ExternalOffset<AChaosSolverActor>(0x00E8, true);         // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UPhysicsAsset>                     _offOverridePhysicsAsset                                       = new ExternalOffset<UPhysicsAsset>(0x00F0, true);             // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbSimulating                                                = new ExternalOffset<byte/*(bool)*/>(0x00F8);                  // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbNotifyCollisions                                          = new ExternalOffset<byte/*(bool)*/>(0x00F9);                  // 0x00F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EObjectStateTypeEnum>              _offObjectType                                                 = new ExternalOffset<EObjectStateTypeEnum>(0x00FA, false);     // 0x00FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDensity                                                    = new ExternalOffset<float>(0x00FC);                           // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMinMass                                                    = new ExternalOffset<float>(0x0100);                           // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMaxMass                                                    = new ExternalOffset<float>(0x0104);                           // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ECollisionTypeEnum>                _offCollisionType                                              = new ExternalOffset<ECollisionTypeEnum>(0x0108, false);       // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offImplicitShapeParticlesPerUnitArea                          = new ExternalOffset<float>(0x010C);                           // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offImplicitShapeMinNumParticles                               = new ExternalOffset<int>(0x0110);                             // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offImplicitShapeMaxNumParticles                               = new ExternalOffset<int>(0x0114);                             // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offMinLevelSetResolution                                      = new ExternalOffset<int>(0x0118);                             // 0x0118(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offMaxLevelSetResolution                                      = new ExternalOffset<int>(0x011C);                             // 0x011C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offCollisionGroup                                             = new ExternalOffset<int>(0x0120);                             // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EInitialVelocityTypeEnum>          _offInitialVelocityType                                        = new ExternalOffset<EInitialVelocityTypeEnum>(0x0124, false); // 0x0124(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offInitialLinearVelocity                                      = new ExternalOffset<FVector>(0x0128, false);                  // 0x0128(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offInitialAngularVelocity                                     = new ExternalOffset<FVector>(0x0134, false);                  // 0x0134(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnChaosPhysicsCollision                                    = new ExternalOffset<FScriptMulticastDelegate>(0x0140, false); // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UChaosPhysicalMaterial                             PhysicalMaterial                                               => _offPhysicalMaterial.GetValue();
	public AChaosSolverActor                                  ChaosSolverActor                                               => _offChaosSolverActor.GetValue();
	public UPhysicsAsset                                      OverridePhysicsAsset                                           => _offOverridePhysicsAsset.GetValue();
	public byte/*(bool)*/                                     bSimulating                                                    => _offbSimulating.GetValue();
	public byte/*(bool)*/                                     bNotifyCollisions                                              => _offbNotifyCollisions.GetValue();
	public EObjectStateTypeEnum                               ObjectType                                                     => _offObjectType.GetValue();
	public float                                              Density                                                        => _offDensity.GetValue();
	public float                                              MinMass                                                        => _offMinMass.GetValue();
	public float                                              MaxMass                                                        => _offMaxMass.GetValue();
	public ECollisionTypeEnum                                 CollisionType                                                  => _offCollisionType.GetValue();
	public float                                              ImplicitShapeParticlesPerUnitArea                              => _offImplicitShapeParticlesPerUnitArea.GetValue();
	public int                                                ImplicitShapeMinNumParticles                                   => _offImplicitShapeMinNumParticles.GetValue();
	public int                                                ImplicitShapeMaxNumParticles                                   => _offImplicitShapeMaxNumParticles.GetValue();
	public int                                                MinLevelSetResolution                                          => _offMinLevelSetResolution.GetValue();
	public int                                                MaxLevelSetResolution                                          => _offMaxLevelSetResolution.GetValue();
	public int                                                CollisionGroup                                                 => _offCollisionGroup.GetValue();
	public EInitialVelocityTypeEnum                           InitialVelocityType                                            => _offInitialVelocityType.GetValue();
	public FVector                                            InitialLinearVelocity                                          => _offInitialLinearVelocity.GetValue();
	public FVector                                            InitialAngularVelocity                                         => _offInitialAngularVelocity.GetValue();
	public FScriptMulticastDelegate                           OnChaosPhysicsCollision                                        => _offOnChaosPhysicsCollision.GetValue();
	#endregion


}

// Class GeometryCollectionEngine.StaticMeshSimulationComponent
// 0x0090 (0x0158 - 0x00C8)
public class UStaticMeshSimulationComponent : UActorComponent
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offSimulating                                                 = new ExternalOffset<byte/*(bool)*/>(0x00E0);                  // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbNotifyCollisions                                          = new ExternalOffset<byte/*(bool)*/>(0x00E1);                  // 0x00E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EObjectStateTypeEnum>              _offObjectType                                                 = new ExternalOffset<EObjectStateTypeEnum>(0x00E2, false);     // 0x00E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMass                                                       = new ExternalOffset<float>(0x00E4);                           // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<ECollisionTypeEnum>                _offCollisionType                                              = new ExternalOffset<ECollisionTypeEnum>(0x00E8, false);       // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EImplicitTypeEnum>                 _offImplicitType                                               = new ExternalOffset<EImplicitTypeEnum>(0x00E9, false);        // 0x00E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offMinLevelSetResolution                                      = new ExternalOffset<int>(0x00EC);                             // 0x00EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offMaxLevelSetResolution                                      = new ExternalOffset<int>(0x00F0);                             // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EInitialVelocityTypeEnum>          _offInitialVelocityType                                        = new ExternalOffset<EInitialVelocityTypeEnum>(0x00F4, false); // 0x00F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offInitialLinearVelocity                                      = new ExternalOffset<FVector>(0x00F8, false);                  // 0x00F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector>                           _offInitialAngularVelocity                                     = new ExternalOffset<FVector>(0x0104, false);                  // 0x0104(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offDamageThreshold                                            = new ExternalOffset<float>(0x0110);                           // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UChaosPhysicalMaterial>            _offPhysicalMaterial                                           = new ExternalOffset<UChaosPhysicalMaterial>(0x0118, true);    // 0x0118(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<AChaosSolverActor>                 _offChaosSolverActor                                           = new ExternalOffset<AChaosSolverActor>(0x0120, true);         // 0x0120(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnChaosPhysicsCollision                                    = new ExternalOffset<FScriptMulticastDelegate>(0x0128, false); // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UPrimitiveComponent>>       _offSimulatedComponents                                        = new ExternalOffset<TArray<UPrimitiveComponent>>(0x0148, false); // 0x0148(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public byte/*(bool)*/                                     Simulating                                                     => _offSimulating.GetValue();
	public byte/*(bool)*/                                     bNotifyCollisions                                              => _offbNotifyCollisions.GetValue();
	public EObjectStateTypeEnum                               ObjectType                                                     => _offObjectType.GetValue();
	public float                                              Mass                                                           => _offMass.GetValue();
	public ECollisionTypeEnum                                 CollisionType                                                  => _offCollisionType.GetValue();
	public EImplicitTypeEnum                                  ImplicitType                                                   => _offImplicitType.GetValue();
	public int                                                MinLevelSetResolution                                          => _offMinLevelSetResolution.GetValue();
	public int                                                MaxLevelSetResolution                                          => _offMaxLevelSetResolution.GetValue();
	public EInitialVelocityTypeEnum                           InitialVelocityType                                            => _offInitialVelocityType.GetValue();
	public FVector                                            InitialLinearVelocity                                          => _offInitialLinearVelocity.GetValue();
	public FVector                                            InitialAngularVelocity                                         => _offInitialAngularVelocity.GetValue();
	public float                                              DamageThreshold                                                => _offDamageThreshold.GetValue();
	public UChaosPhysicalMaterial                             PhysicalMaterial                                               => _offPhysicalMaterial.GetValue();
	public AChaosSolverActor                                  ChaosSolverActor                                               => _offChaosSolverActor.GetValue();
	public FScriptMulticastDelegate                           OnChaosPhysicsCollision                                        => _offOnChaosPhysicsCollision.GetValue();
	public TArray<UPrimitiveComponent>                        SimulatedComponents                                            => _offSimulatedComponents.GetValue();
	#endregion


}


}