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

// Class GameplayTasks.GameplayTask
// 0x0040 (0x0068 - 0x0028)
public class UGameplayTask : UObject
{
	#region Offsets
	private ExternalOffset<FName>                             _offInstanceName                                               = new ExternalOffset<FName>(0x0030, false);                    // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<ETaskResourceOverlapPolicy>        _offResourceOverlapPolicy                                      = new ExternalOffset<ETaskResourceOverlapPolicy>(0x003A, false); // 0x003A(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UGameplayTask>                     _offChildTask                                                  = new ExternalOffset<UGameplayTask>(0x0060, true);             // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FName                                              InstanceName                                                   => _offInstanceName.GetValue();
	public ETaskResourceOverlapPolicy                         ResourceOverlapPolicy                                          => _offResourceOverlapPolicy.GetValue();
	public UGameplayTask                                      ChildTask                                                      => _offChildTask.GetValue();
	#endregion


}

// Class GameplayTasks.GameplayTask_ClaimResource
// 0x0000 (0x0068 - 0x0068)
public class UGameplayTask_ClaimResource : UGameplayTask
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class GameplayTasks.GameplayTask_SpawnActor
// 0x0040 (0x00A8 - 0x0068)
public class UGameplayTask_SpawnActor : UGameplayTask
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offSuccess                                                    = new ExternalOffset<FScriptMulticastDelegate>(0x0068, false); // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offDidNotSpawn                                                = new ExternalOffset<FScriptMulticastDelegate>(0x0078, false); // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offClassToSpawn                                               = new ExternalOffset<UClass>(0x00A0, true);                    // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           Success                                                        => _offSuccess.GetValue();
	public FScriptMulticastDelegate                           DidNotSpawn                                                    => _offDidNotSpawn.GetValue();
	public UClass                                             ClassToSpawn                                                   => _offClassToSpawn.GetValue();
	#endregion


}

// Class GameplayTasks.GameplayTask_TimeLimitedExecution
// 0x0020 (0x0088 - 0x0068)
public class UGameplayTask_TimeLimitedExecution : UGameplayTask
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFinished                                                 = new ExternalOffset<FScriptMulticastDelegate>(0x0068, false); // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnTimeExpired                                              = new ExternalOffset<FScriptMulticastDelegate>(0x0078, false); // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnFinished                                                     => _offOnFinished.GetValue();
	public FScriptMulticastDelegate                           OnTimeExpired                                                  => _offOnTimeExpired.GetValue();
	#endregion


}

// Class GameplayTasks.GameplayTask_WaitDelay
// 0x0010 (0x0078 - 0x0068)
public class UGameplayTask_WaitDelay : UGameplayTask
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFinish                                                   = new ExternalOffset<FScriptMulticastDelegate>(0x0068, false); // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnFinish                                                       => _offOnFinish.GetValue();
	#endregion


}

// Class GameplayTasks.GameplayTaskOwnerInterface
// 0x0000 (0x0028 - 0x0028)
public class UGameplayTaskOwnerInterface : UInterface
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class GameplayTasks.GameplayTaskResource
// 0x0009 (0x0031 - 0x0028)
public class UGameplayTaskResource : UObject
{
	#region Offsets
	private ExternalOffset<int>                               _offManualResourceID                                           = new ExternalOffset<int>(0x0028);                             // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<sbyte>                             _offAutoResourceID                                             = new ExternalOffset<sbyte>(0x002C);                           // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
//	private ExternalOffset<char>                              _offbManuallySetID                                             = new ExternalOffset<char>(0x0030, false);                     // 0x0030(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                ManualResourceID                                               => _offManualResourceID.GetValue();
	public sbyte                                              AutoResourceID                                                 => _offAutoResourceID.GetValue();
	#endregion


}

// Class GameplayTasks.GameplayTasksComponent
// 0x0080 (0x0148 - 0x00C8)
public class UGameplayTasksComponent : UActorComponent
{
	#region Offsets
//	private ExternalOffset<char>                              _offbIsNetDirty                                                = new ExternalOffset<char>(0x00E4, false);                     // 0x00E4(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UGameplayTask>>             _offSimulatedTasks                                             = new ExternalOffset<TArray<UGameplayTask>>(0x00E8, false);    // 0x00E8(0x0010) (Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<UGameplayTask>>             _offTaskPriorityQueue                                          = new ExternalOffset<TArray<UGameplayTask>>(0x00F8, false);    // 0x00F8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<UGameplayTask>>             _offTickingTasks                                               = new ExternalOffset<TArray<UGameplayTask>>(0x0118, false);    // 0x0118(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<UGameplayTask>>             _offKnownTasks                                                 = new ExternalOffset<TArray<UGameplayTask>>(0x0128, false);    // 0x0128(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnClaimedResourcesChange                                   = new ExternalOffset<FScriptMulticastDelegate>(0x0138, false); // 0x0138(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<UGameplayTask>                              SimulatedTasks                                                 => _offSimulatedTasks.GetValue();
	public TArray<UGameplayTask>                              TaskPriorityQueue                                              => _offTaskPriorityQueue.GetValue();
	public TArray<UGameplayTask>                              TickingTasks                                                   => _offTickingTasks.GetValue();
	public TArray<UGameplayTask>                              KnownTasks                                                     => _offKnownTasks.GetValue();
	public FScriptMulticastDelegate                           OnClaimedResourcesChange                                       => _offOnClaimedResourcesChange.GetValue();
	#endregion


}


}