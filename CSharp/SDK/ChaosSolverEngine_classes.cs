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

// Class ChaosSolverEngine.ChaosEventListenerComponent
// 0x0010 (0x00D8 - 0x00C8)
public class UChaosEventListenerComponent : UActorComponent
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// 0x0168 (0x0240 - 0x00D8)
public class UChaosGameplayEventDispatcher : UChaosEventListenerComponent
{
	#region Offsets
//	private TMap<class UPrimitiveComponent*, struct FChaosHandlerSet> _offCollisionEventRegistrations                                = new ExternalOffset<TMap<FChaosHandlerSet>>(0x01A0, false);   // 0x01A0(0x0050) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
//	private TMap<class UPrimitiveComponent*, struct FBreakEventCallbackWrapper> _offBreakEventRegistrations                                    = new ExternalOffset<TMap<FBreakEventCallbackWrapper>>(0x01F0, false); // 0x01F0(0x0050) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	#endregion


}

// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// 0x0000 (0x0028 - 0x0028)
public class UChaosNotifyHandlerInterface : UInterface
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
public class UChaosSolverEngineBlueprintLibrary : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class ChaosSolverEngine.ChaosSolver
// 0x0000 (0x0028 - 0x0028)
public class UChaosSolver : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class ChaosSolverEngine.ChaosSolverActor
// 0x0080 (0x02B8 - 0x0238)
public class AChaosSolverActor : AActor
{
	#region Offsets
	private ExternalOffset<float>                             _offTimeStepMultiplier                                         = new ExternalOffset<float>(0x0248);                           // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offCollisionIterations                                        = new ExternalOffset<int>(0x024C);                             // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offPushOutIterations                                          = new ExternalOffset<int>(0x0250);                             // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offPushOutPairIterations                                      = new ExternalOffset<int>(0x0254);                             // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offClusterConnectionFactor                                    = new ExternalOffset<float>(0x0258);                           // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EClusterConnectionTypeEnum>        _offClusterUnionConnectionType                                 = new ExternalOffset<EClusterConnectionTypeEnum>(0x025C, false); // 0x025C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offDoGenerateCollisionData                                    = new ExternalOffset<byte/*(bool)*/>(0x025D);                  // 0x025D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSolverCollisionFilterSettings>    _offCollisionFilterSettings                                    = new ExternalOffset<FSolverCollisionFilterSettings>(0x0260, false); // 0x0260(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offDoGenerateBreakingData                                     = new ExternalOffset<byte/*(bool)*/>(0x0270);                  // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSolverBreakingFilterSettings>     _offBreakingFilterSettings                                     = new ExternalOffset<FSolverBreakingFilterSettings>(0x0274, false); // 0x0274(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offDoGenerateTrailingData                                     = new ExternalOffset<byte/*(bool)*/>(0x0284);                  // 0x0284(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSolverTrailingFilterSettings>     _offTrailingFilterSettings                                     = new ExternalOffset<FSolverTrailingFilterSettings>(0x0288, false); // 0x0288(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbHasFloor                                                  = new ExternalOffset<byte/*(bool)*/>(0x0298);                  // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offFloorHeight                                                = new ExternalOffset<float>(0x029C);                           // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offMassScale                                                  = new ExternalOffset<float>(0x02A0);                           // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FChaosDebugSubstepControl>         _offChaosDebugSubstepControl                                   = new ExternalOffset<FChaosDebugSubstepControl>(0x02A4, false); // 0x02A4(0x0003) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<UBillboardComponent>               _offSpriteComponent                                            = new ExternalOffset<UBillboardComponent>(0x02A8, true);       // 0x02A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UChaosGameplayEventDispatcher>     _offGameplayEventDispatcherComponent                           = new ExternalOffset<UChaosGameplayEventDispatcher>(0x02B0, true); // 0x02B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public float                                              TimeStepMultiplier                                             => _offTimeStepMultiplier.GetValue();
	public int                                                CollisionIterations                                            => _offCollisionIterations.GetValue();
	public int                                                PushOutIterations                                              => _offPushOutIterations.GetValue();
	public int                                                PushOutPairIterations                                          => _offPushOutPairIterations.GetValue();
	public float                                              ClusterConnectionFactor                                        => _offClusterConnectionFactor.GetValue();
	public EClusterConnectionTypeEnum                         ClusterUnionConnectionType                                     => _offClusterUnionConnectionType.GetValue();
	public byte/*(bool)*/                                     DoGenerateCollisionData                                        => _offDoGenerateCollisionData.GetValue();
	public FSolverCollisionFilterSettings                     CollisionFilterSettings                                        => _offCollisionFilterSettings.GetValue();
	public byte/*(bool)*/                                     DoGenerateBreakingData                                         => _offDoGenerateBreakingData.GetValue();
	public FSolverBreakingFilterSettings                      BreakingFilterSettings                                         => _offBreakingFilterSettings.GetValue();
	public byte/*(bool)*/                                     DoGenerateTrailingData                                         => _offDoGenerateTrailingData.GetValue();
	public FSolverTrailingFilterSettings                      TrailingFilterSettings                                         => _offTrailingFilterSettings.GetValue();
	public byte/*(bool)*/                                     bHasFloor                                                      => _offbHasFloor.GetValue();
	public float                                              FloorHeight                                                    => _offFloorHeight.GetValue();
	public float                                              MassScale                                                      => _offMassScale.GetValue();
	public FChaosDebugSubstepControl                          ChaosDebugSubstepControl                                       => _offChaosDebugSubstepControl.GetValue();
	public UBillboardComponent                                SpriteComponent                                                => _offSpriteComponent.GetValue();
	public UChaosGameplayEventDispatcher                      GameplayEventDispatcherComponent                               => _offGameplayEventDispatcherComponent.GetValue();
	#endregion


}

// Class ChaosSolverEngine.ChaosSolverSettings
// 0x0030 (0x0058 - 0x0028)
public class UChaosSolverSettings : UDeveloperSettings
{
	#region Offsets
	private ExternalOffset<FSoftClassPath>                    _offDefaultChaosSolverActorClass                               = new ExternalOffset<FSoftClassPath>(0x0040, false);           // 0x0040(0x0018) (Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FSoftClassPath                                     DefaultChaosSolverActorClass                                   => _offDefaultChaosSolverActorClass.GetValue();
	#endregion


}


}