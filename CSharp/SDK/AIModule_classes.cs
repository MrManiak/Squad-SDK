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

// Class AIModule.AIController
// 0x008B (0x0348 - 0x02BD)
public class AAIController : AController
{
	#region Offsets
//	private ExternalOffset<char>                              _offbStopAILogicOnUnposses                                     = new ExternalOffset<char>(0x02F8, false);                     // 0x02F8(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbLOSflag                                                   = new ExternalOffset<char>(0x02F8, false);                     // 0x02F8(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbSkipExtraLOSChecks                                        = new ExternalOffset<char>(0x02F8, false);                     // 0x02F8(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbAllowStrafe                                               = new ExternalOffset<char>(0x02F8, false);                     // 0x02F8(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbWantsPlayerState                                          = new ExternalOffset<char>(0x02F8, false);                     // 0x02F8(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbSetControlRotationFromPawnOrientation                     = new ExternalOffset<char>(0x02F8, false);                     // 0x02F8(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UPathFollowingComponent>           _offPathFollowingComponent                                     = new ExternalOffset<UPathFollowingComponent>(0x0300, true);   // 0x0300(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UBrainComponent>                   _offBrainComponent                                             = new ExternalOffset<UBrainComponent>(0x0308, true);           // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAIPerceptionComponent>            _offPerceptionComponent                                        = new ExternalOffset<UAIPerceptionComponent>(0x0310, true);    // 0x0310(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UPawnActionsComponent>             _offActionsComp                                                = new ExternalOffset<UPawnActionsComponent>(0x0318, true);     // 0x0318(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UBlackboardComponent>              _offBlackboard                                                 = new ExternalOffset<UBlackboardComponent>(0x0320, true);      // 0x0320(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UGameplayTasksComponent>           _offCachedGameplayTasksComponent                               = new ExternalOffset<UGameplayTasksComponent>(0x0328, true);   // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UClass>                            _offDefaultNavigationFilterClass                               = new ExternalOffset<UClass>(0x0330, true);                    // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FScriptMulticastDelegate>          _offReceiveMoveCompleted                                       = new ExternalOffset<FScriptMulticastDelegate>(0x0338, false); // 0x0338(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UPathFollowingComponent                            PathFollowingComponent                                         => _offPathFollowingComponent.GetValue();
	public UBrainComponent                                    BrainComponent                                                 => _offBrainComponent.GetValue();
	public UAIPerceptionComponent                             PerceptionComponent                                            => _offPerceptionComponent.GetValue();
	public UPawnActionsComponent                              ActionsComp                                                    => _offActionsComp.GetValue();
	public UBlackboardComponent                               Blackboard                                                     => _offBlackboard.GetValue();
	public UGameplayTasksComponent                            CachedGameplayTasksComponent                                   => _offCachedGameplayTasksComponent.GetValue();
	public UClass                                             DefaultNavigationFilterClass                                   => _offDefaultNavigationFilterClass.GetValue();
	public FScriptMulticastDelegate                           ReceiveMoveCompleted                                           => _offReceiveMoveCompleted.GetValue();
	#endregion


}

// Class AIModule.BTNode
// 0x0028 (0x0050 - 0x0028)
public class UBTNode : UObject
{
	#region Offsets
	private ExternalOffset<FString>                           _offNodeName                                                   = new ExternalOffset<FString>(0x0030, false);                  // 0x0030(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UBehaviorTree>                     _offTreeAsset                                                  = new ExternalOffset<UBehaviorTree>(0x0040, true);             // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UBTCompositeNode>                  _offParentNode                                                 = new ExternalOffset<UBTCompositeNode>(0x0048, true);          // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FString                                            NodeName                                                       => _offNodeName.GetValue();
	public UBehaviorTree                                      TreeAsset                                                      => _offTreeAsset.GetValue();
	public UBTCompositeNode                                   ParentNode                                                     => _offParentNode.GetValue();
	#endregion


}

// Class AIModule.BTAuxiliaryNode
// 0x0008 (0x0058 - 0x0050)
public class UBTAuxiliaryNode : UBTNode
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.BTDecorator
// 0x000D (0x0065 - 0x0058)
public class UBTDecorator : UBTAuxiliaryNode
{
	#region Offsets
//	private ExternalOffset<char>                              _offbInverseCondition                                          = new ExternalOffset<char>(0x0060, false);                     // 0x0060(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<TEnumAsByte<EBTFlowAbortMode>>     _offFlowAbortMode                                              = new ExternalOffset<TEnumAsByte<EBTFlowAbortMode>>(0x0064, false); // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public TEnumAsByte<EBTFlowAbortMode>                      FlowAbortMode                                                  => _offFlowAbortMode.GetValue();
	#endregion


}

// Class AIModule.BTTaskNode
// 0x0019 (0x0069 - 0x0050)
public class UBTTaskNode : UBTNode
{
	#region Offsets
	private ExternalOffset<TArray<UBTService>>                _offServices                                                   = new ExternalOffset<TArray<UBTService>>(0x0058, false);       // 0x0058(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbIgnoreRestartSelf                                         = new ExternalOffset<char>(0x0068, false);                     // 0x0068(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public TArray<UBTService>                                 Services                                                       => _offServices.GetValue();
	#endregion


}

// Class AIModule.BTTask_BlackboardBase
// 0x002F (0x0098 - 0x0069)
public class UBTTask_BlackboardBase : UBTTaskNode
{
	#region Offsets
	private ExternalOffset<FBlackboardKeySelector>            _offBlackboardKey                                              = new ExternalOffset<FBlackboardKeySelector>(0x0070, false);   // 0x0070(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FBlackboardKeySelector                             BlackboardKey                                                  => _offBlackboardKey.GetValue();
	#endregion


}

// Class AIModule.AIAsyncTaskBlueprintProxy
// 0x0020 (0x0048 - 0x0028)
public class UAIAsyncTaskBlueprintProxy : UObject
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSuccess                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnFail                                                     = new ExternalOffset<FScriptMulticastDelegate>(0x0038, false); // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnSuccess                                                      => _offOnSuccess.GetValue();
	public FScriptMulticastDelegate                           OnFail                                                         => _offOnFail.GetValue();
	#endregion


}

// Class AIModule.AIBlueprintHelperLibrary
// 0x0000 (0x0028 - 0x0028)
public class UAIBlueprintHelperLibrary : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.AIDataProvider
// 0x0000 (0x0028 - 0x0028)
public class UAIDataProvider : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.AIDataProvider_QueryParams
// 0x0011 (0x0039 - 0x0028)
public class UAIDataProvider_QueryParams : UAIDataProvider
{
	#region Offsets
	private ExternalOffset<FName>                             _offParamName                                                  = new ExternalOffset<FName>(0x0028, false);                    // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offFloatValue                                                 = new ExternalOffset<float>(0x0030);                           // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offIntValue                                                   = new ExternalOffset<int>(0x0034);                             // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offBoolValue                                                  = new ExternalOffset<byte/*(bool)*/>(0x0038);                  // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                              ParamName                                                      => _offParamName.GetValue();
	public float                                              FloatValue                                                     => _offFloatValue.GetValue();
	public int                                                IntValue                                                       => _offIntValue.GetValue();
	public byte/*(bool)*/                                     BoolValue                                                      => _offBoolValue.GetValue();
	#endregion


}

// Class AIModule.AIDataProvider_Random
// 0x0010 (0x0049 - 0x0039)
public class UAIDataProvider_Random : UAIDataProvider_QueryParams
{
	#region Offsets
	private ExternalOffset<float>                             _offMin                                                        = new ExternalOffset<float>(0x0040);                           // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offMax                                                        = new ExternalOffset<float>(0x0044);                           // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbInteger                                                   = new ExternalOffset<char>(0x0048, false);                     // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public float                                              Min                                                            => _offMin.GetValue();
	public float                                              Max                                                            => _offMax.GetValue();
	#endregion


}

// Class AIModule.AIHotSpotManager
// 0x0000 (0x0028 - 0x0028)
public class UAIHotSpotManager : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.AIPerceptionComponent
// 0x00E0 (0x01A8 - 0x00C8)
public class UAIPerceptionComponent : UActorComponent
{
	#region Offsets
	private ExternalOffset<TArray<UAISenseConfig>>            _offSensesConfig                                               = new ExternalOffset<TArray<UAISenseConfig>>(0x00D8, false);   // 0x00D8(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<UClass>                            _offDominantSense                                              = new ExternalOffset<UClass>(0x00E8, true);                    // 0x00E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<AAIController>                     _offAIOwner                                                    = new ExternalOffset<AAIController>(0x0100, true);             // 0x0100(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnPerceptionUpdated                                        = new ExternalOffset<FScriptMulticastDelegate>(0x0188, false); // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnTargetPerceptionUpdated                                  = new ExternalOffset<FScriptMulticastDelegate>(0x0198, false); // 0x0198(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<UAISenseConfig>                             SensesConfig                                                   => _offSensesConfig.GetValue();
	public UClass                                             DominantSense                                                  => _offDominantSense.GetValue();
	public AAIController                                      AIOwner                                                        => _offAIOwner.GetValue();
	public FScriptMulticastDelegate                           OnPerceptionUpdated                                            => _offOnPerceptionUpdated.GetValue();
	public FScriptMulticastDelegate                           OnTargetPerceptionUpdated                                      => _offOnTargetPerceptionUpdated.GetValue();
	#endregion


}

// Class AIModule.AIPerceptionListenerInterface
// 0x0000 (0x0028 - 0x0028)
public class UAIPerceptionListenerInterface : UInterface
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.AIPerceptionStimuliSourceComponent
// 0x0028 (0x00F0 - 0x00C8)
public class UAIPerceptionStimuliSourceComponent : UActorComponent
{
	#region Offsets
//	private ExternalOffset<char>                              _offbAutoRegisterAsSource                                      = new ExternalOffset<char>(0x00D8, false);                     // 0x00D8(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<UClass>>                    _offRegisterAsSourceForSenses                                  = new ExternalOffset<TArray<UClass>>(0x00E0, false);           // 0x00E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public TArray<UClass>                                     RegisterAsSourceForSenses                                      => _offRegisterAsSourceForSenses.GetValue();
	#endregion


}

// Class AIModule.AISubsystem
// 0x0010 (0x0038 - 0x0028)
public class UAISubsystem : UObject
{
	#region Offsets
	private ExternalOffset<UAISystem>                         _offAISystem                                                   = new ExternalOffset<UAISystem>(0x0030, true);                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UAISystem                                          AISystem                                                       => _offAISystem.GetValue();
	#endregion


}

// Class AIModule.AIPerceptionSystem
// 0x0064 (0x009C - 0x0038)
public class UAIPerceptionSystem : UAISubsystem
{
	#region Offsets
	private ExternalOffset<TArray<UAISense>>                  _offSenses                                                     = new ExternalOffset<TArray<UAISense>>(0x0088, false);         // 0x0088(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offPerceptionAgingRate                                        = new ExternalOffset<float>(0x0098);                           // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public TArray<UAISense>                                   Senses                                                         => _offSenses.GetValue();
	public float                                              PerceptionAgingRate                                            => _offPerceptionAgingRate.GetValue();
	#endregion


}

// Class AIModule.AIResourceInterface
// 0x0000 (0x0028 - 0x0028)
public class UAIResourceInterface : UInterface
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.AIResource_Movement
// 0x0007 (0x0038 - 0x0031)
public class UAIResource_Movement : UGameplayTaskResource
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.AIResource_Logic
// 0x0007 (0x0038 - 0x0031)
public class UAIResource_Logic : UGameplayTaskResource
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.AISense
// 0x0018 (0x0040 - 0x0028)
public class UAISense : UObject
{
	#region Offsets
	private ExternalOffset<float>                             _offDefaultExpirationAge                                       = new ExternalOffset<float>(0x0028);                           // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<EAISenseNotifyType>                _offNotifyType                                                 = new ExternalOffset<EAISenseNotifyType>(0x002C, false);       // 0x002C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbWantsNewPawnNotification                                  = new ExternalOffset<char>(0x0030, false);                     // 0x0030(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbAutoRegisterAllPawnsAsSources                             = new ExternalOffset<char>(0x0030, false);                     // 0x0030(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UAIPerceptionSystem>               _offPerceptionSystemInstance                                   = new ExternalOffset<UAIPerceptionSystem>(0x0038, true);       // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public float                                              DefaultExpirationAge                                           => _offDefaultExpirationAge.GetValue();
	public EAISenseNotifyType                                 NotifyType                                                     => _offNotifyType.GetValue();
	public UAIPerceptionSystem                                PerceptionSystemInstance                                       => _offPerceptionSystemInstance.GetValue();
	#endregion


}

// Class AIModule.AISense_Blueprint
// 0x0068 (0x00A8 - 0x0040)
public class UAISense_Blueprint : UAISense
{
	#region Offsets
	private ExternalOffset<UClass>                            _offListenerDataType                                           = new ExternalOffset<UClass>(0x0080, true);                    // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<UAIPerceptionComponent>>    _offListenerContainer                                          = new ExternalOffset<TArray<UAIPerceptionComponent>>(0x0088, false); // 0x0088(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<UAISenseEvent>>             _offUnprocessedEvents                                          = new ExternalOffset<TArray<UAISenseEvent>>(0x0098, false);    // 0x0098(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public UClass                                             ListenerDataType                                               => _offListenerDataType.GetValue();
	public TArray<UAIPerceptionComponent>                     ListenerContainer                                              => _offListenerContainer.GetValue();
	public TArray<UAISenseEvent>                              UnprocessedEvents                                              => _offUnprocessedEvents.GetValue();
	#endregion


}

// Class AIModule.AISense_Damage
// 0x0050 (0x0090 - 0x0040)
public class UAISense_Damage : UAISense
{
	#region Offsets
	private ExternalOffset<TArray<FAIDamageEvent>>            _offRegisteredEvents                                           = new ExternalOffset<TArray<FAIDamageEvent>>(0x0080, false);   // 0x0080(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FAIDamageEvent>                             RegisteredEvents                                               => _offRegisteredEvents.GetValue();
	#endregion


}

// Class AIModule.AISense_Hearing
// 0x0054 (0x0094 - 0x0040)
public class UAISense_Hearing : UAISense
{
	#region Offsets
	private ExternalOffset<TArray<FAINoiseEvent>>             _offNoiseEvents                                                = new ExternalOffset<TArray<FAINoiseEvent>>(0x0080, false);    // 0x0080(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offSpeedOfSoundSq                                             = new ExternalOffset<float>(0x0090);                           // 0x0090(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public TArray<FAINoiseEvent>                              NoiseEvents                                                    => _offNoiseEvents.GetValue();
	public float                                              SpeedOfSoundSq                                                 => _offSpeedOfSoundSq.GetValue();
	#endregion


}

// Class AIModule.AISense_Prediction
// 0x0050 (0x0090 - 0x0040)
public class UAISense_Prediction : UAISense
{
	#region Offsets
	private ExternalOffset<TArray<FAIPredictionEvent>>        _offRegisteredEvents                                           = new ExternalOffset<TArray<FAIPredictionEvent>>(0x0080, false); // 0x0080(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FAIPredictionEvent>                         RegisteredEvents                                               => _offRegisteredEvents.GetValue();
	#endregion


}

// Class AIModule.AISense_Sight
// 0x0110 (0x0150 - 0x0040)
public class UAISense_Sight : UAISense
{
	#region Offsets
	private ExternalOffset<int>                               _offMaxTracesPerTick                                           = new ExternalOffset<int>(0x0130);                             // 0x0130(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<int>                               _offMinQueriesPerTimeSliceCheck                                = new ExternalOffset<int>(0x0134);                             // 0x0134(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<double>                            _offMaxTimeSlicePerTick                                        = new ExternalOffset<double>(0x0138, false);                   // 0x0138(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offHighImportanceQueryDistanceThreshold                       = new ExternalOffset<float>(0x0140);                           // 0x0140(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offMaxQueryImportance                                         = new ExternalOffset<float>(0x0148);                           // 0x0148(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offSightLimitQueryImportance                                  = new ExternalOffset<float>(0x014C);                           // 0x014C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public int                                                MaxTracesPerTick                                               => _offMaxTracesPerTick.GetValue();
	public int                                                MinQueriesPerTimeSliceCheck                                    => _offMinQueriesPerTimeSliceCheck.GetValue();
	public double                                             MaxTimeSlicePerTick                                            => _offMaxTimeSlicePerTick.GetValue();
	public float                                              HighImportanceQueryDistanceThreshold                           => _offHighImportanceQueryDistanceThreshold.GetValue();
	public float                                              MaxQueryImportance                                             => _offMaxQueryImportance.GetValue();
	public float                                              SightLimitQueryImportance                                      => _offSightLimitQueryImportance.GetValue();
	#endregion


}

// Class AIModule.AISense_Team
// 0x0050 (0x0090 - 0x0040)
public class UAISense_Team : UAISense
{
	#region Offsets
	private ExternalOffset<TArray<FAITeamStimulusEvent>>      _offRegisteredEvents                                           = new ExternalOffset<TArray<FAITeamStimulusEvent>>(0x0080, false); // 0x0080(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FAITeamStimulusEvent>                       RegisteredEvents                                               => _offRegisteredEvents.GetValue();
	#endregion


}

// Class AIModule.AISense_Touch
// 0x0050 (0x0090 - 0x0040)
public class UAISense_Touch : UAISense
{
	#region Offsets
	private ExternalOffset<TArray<FAITouchEvent>>             _offRegisteredEvents                                           = new ExternalOffset<TArray<FAITouchEvent>>(0x0080, false);    // 0x0080(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FAITouchEvent>                              RegisteredEvents                                               => _offRegisteredEvents.GetValue();
	#endregion


}

// Class AIModule.AISenseBlueprintListener
// 0x0034 (0x00F0 - 0x00BC)
public class UAISenseBlueprintListener : UUserDefinedStruct
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.AISenseConfig
// 0x0009 (0x0031 - 0x0028)
public class UAISenseConfig : UObject
{
	#region Offsets
	private ExternalOffset<FColor>                            _offDebugColor                                                 = new ExternalOffset<FColor>(0x0028, false);                   // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offMaxAge                                                     = new ExternalOffset<float>(0x002C);                           // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbStartsEnabled                                             = new ExternalOffset<char>(0x0030, false);                     // 0x0030(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FColor                                             DebugColor                                                     => _offDebugColor.GetValue();
	public float                                              MaxAge                                                         => _offMaxAge.GetValue();
	#endregion


}

// Class AIModule.AISenseConfig_Blueprint
// 0x001F (0x0050 - 0x0031)
public class UAISenseConfig_Blueprint : UAISenseConfig
{
	#region Offsets
	private ExternalOffset<UClass>                            _offImplementation                                             = new ExternalOffset<UClass>(0x0048, true);                    // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                             Implementation                                                 => _offImplementation.GetValue();
	#endregion


}

// Class AIModule.AISenseConfig_Damage
// 0x001F (0x0050 - 0x0031)
public class UAISenseConfig_Damage : UAISenseConfig
{
	#region Offsets
	private ExternalOffset<UClass>                            _offImplementation                                             = new ExternalOffset<UClass>(0x0048, true);                    // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                             Implementation                                                 => _offImplementation.GetValue();
	#endregion


}

// Class AIModule.AISenseConfig_Hearing
// 0x002F (0x0060 - 0x0031)
public class UAISenseConfig_Hearing : UAISenseConfig
{
	#region Offsets
	private ExternalOffset<UClass>                            _offImplementation                                             = new ExternalOffset<UClass>(0x0048, true);                    // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offHearingRange                                               = new ExternalOffset<float>(0x0050);                           // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offLoSHearingRange                                            = new ExternalOffset<float>(0x0054);                           // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbUseLoSHearing                                             = new ExternalOffset<char>(0x0058, false);                     // 0x0058(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FAISenseAffiliationFilter>         _offDetectionByAffiliation                                     = new ExternalOffset<FAISenseAffiliationFilter>(0x005C, false); // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                             Implementation                                                 => _offImplementation.GetValue();
	public float                                              HearingRange                                                   => _offHearingRange.GetValue();
	public float                                              LoSHearingRange                                                => _offLoSHearingRange.GetValue();
	public FAISenseAffiliationFilter                          DetectionByAffiliation                                         => _offDetectionByAffiliation.GetValue();
	#endregion


}

// Class AIModule.AISenseConfig_Prediction
// 0x0017 (0x0048 - 0x0031)
public class UAISenseConfig_Prediction : UAISenseConfig
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.AISenseConfig_Sight
// 0x0033 (0x0064 - 0x0031)
public class UAISenseConfig_Sight : UAISenseConfig
{
	#region Offsets
	private ExternalOffset<UClass>                            _offImplementation                                             = new ExternalOffset<UClass>(0x0048, true);                    // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offSightRadius                                                = new ExternalOffset<float>(0x0050);                           // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offLoseSightRadius                                            = new ExternalOffset<float>(0x0054);                           // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offPeripheralVisionAngleDegrees                               = new ExternalOffset<float>(0x0058);                           // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FAISenseAffiliationFilter>         _offDetectionByAffiliation                                     = new ExternalOffset<FAISenseAffiliationFilter>(0x005C, false); // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offAutoSuccessRangeFromLastSeenLocation                       = new ExternalOffset<float>(0x0060);                           // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                             Implementation                                                 => _offImplementation.GetValue();
	public float                                              SightRadius                                                    => _offSightRadius.GetValue();
	public float                                              LoseSightRadius                                                => _offLoseSightRadius.GetValue();
	public float                                              PeripheralVisionAngleDegrees                                   => _offPeripheralVisionAngleDegrees.GetValue();
	public FAISenseAffiliationFilter                          DetectionByAffiliation                                         => _offDetectionByAffiliation.GetValue();
	public float                                              AutoSuccessRangeFromLastSeenLocation                           => _offAutoSuccessRangeFromLastSeenLocation.GetValue();
	#endregion


}

// Class AIModule.AISenseConfig_Team
// 0x0017 (0x0048 - 0x0031)
public class UAISenseConfig_Team : UAISenseConfig
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.AISenseConfig_Touch
// 0x0017 (0x0048 - 0x0031)
public class UAISenseConfig_Touch : UAISenseConfig
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.AISenseEvent
// 0x0000 (0x0028 - 0x0028)
public class UAISenseEvent : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.AISenseEvent_Damage
// 0x0030 (0x0058 - 0x0028)
public class UAISenseEvent_Damage : UAISenseEvent
{
	#region Offsets
	private ExternalOffset<FAIDamageEvent>                    _offEvent                                                      = new ExternalOffset<FAIDamageEvent>(0x0028, false);           // 0x0028(0x0030) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FAIDamageEvent                                     Event                                                          => _offEvent.GetValue();
	#endregion


}

// Class AIModule.AISenseEvent_Hearing
// 0x0030 (0x0058 - 0x0028)
public class UAISenseEvent_Hearing : UAISenseEvent
{
	#region Offsets
	private ExternalOffset<FAINoiseEvent>                     _offEvent                                                      = new ExternalOffset<FAINoiseEvent>(0x0028, false);            // 0x0028(0x0030) (Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FAINoiseEvent                                      Event                                                          => _offEvent.GetValue();
	#endregion


}

// Class AIModule.AISightTargetInterface
// 0x0000 (0x0028 - 0x0028)
public class UAISightTargetInterface : UInterface
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.AISystem
// 0x0087 (0x00D8 - 0x0051)
public class UAISystem : UAISystemBase
{
	#region Offsets
	private ExternalOffset<FSoftClassPath>                    _offPerceptionSystemClassName                                  = new ExternalOffset<FSoftClassPath>(0x0058, false);           // 0x0058(0x0018) (Edit, ZeroConstructor, Config, GlobalConfig, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FSoftClassPath>                    _offHotSpotManagerClassName                                    = new ExternalOffset<FSoftClassPath>(0x0070, false);           // 0x0070(0x0018) (Edit, ZeroConstructor, Config, GlobalConfig, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offAcceptanceRadius                                           = new ExternalOffset<float>(0x0088);                           // 0x0088(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offPathfollowingRegularPathPointAcceptanceRadius              = new ExternalOffset<float>(0x008C);                           // 0x008C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offPathfollowingNavLinkAcceptanceRadius                       = new ExternalOffset<float>(0x0090);                           // 0x0090(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbFinishMoveOnGoalOverlap                                   = new ExternalOffset<byte/*(bool)*/>(0x0094);                  // 0x0094(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbAcceptPartialPaths                                        = new ExternalOffset<byte/*(bool)*/>(0x0095);                  // 0x0095(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbAllowStrafing                                             = new ExternalOffset<byte/*(bool)*/>(0x0096);                  // 0x0096(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbEnableBTAITasks                                           = new ExternalOffset<byte/*(bool)*/>(0x0097);                  // 0x0097(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbAllowControllersAsEQSQuerier                              = new ExternalOffset<byte/*(bool)*/>(0x0098);                  // 0x0098(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbEnableDebuggerPlugin                                      = new ExternalOffset<byte/*(bool)*/>(0x0099);                  // 0x0099(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ECollisionChannel>>    _offDefaultSightCollisionChannel                               = new ExternalOffset<TEnumAsByte<ECollisionChannel>>(0x009A, false); // 0x009A(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UBehaviorTreeManager>              _offBehaviorTreeManager                                        = new ExternalOffset<UBehaviorTreeManager>(0x00A0, true);      // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UEnvQueryManager>                  _offEnvironmentQueryManager                                    = new ExternalOffset<UEnvQueryManager>(0x00A8, true);          // 0x00A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UAIPerceptionSystem>               _offPerceptionSystem                                           = new ExternalOffset<UAIPerceptionSystem>(0x00B0, true);       // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<UAIAsyncTaskBlueprintProxy>> _offAllProxyObjects                                            = new ExternalOffset<TArray<UAIAsyncTaskBlueprintProxy>>(0x00B8, false); // 0x00B8(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<UAIHotSpotManager>                 _offHotSpotManager                                             = new ExternalOffset<UAIHotSpotManager>(0x00C8, true);         // 0x00C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UNavLocalGridManager>              _offNavLocalGrids                                              = new ExternalOffset<UNavLocalGridManager>(0x00D0, true);      // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FSoftClassPath                                     PerceptionSystemClassName                                      => _offPerceptionSystemClassName.GetValue();
	public FSoftClassPath                                     HotSpotManagerClassName                                        => _offHotSpotManagerClassName.GetValue();
	public float                                              AcceptanceRadius                                               => _offAcceptanceRadius.GetValue();
	public float                                              PathfollowingRegularPathPointAcceptanceRadius                  => _offPathfollowingRegularPathPointAcceptanceRadius.GetValue();
	public float                                              PathfollowingNavLinkAcceptanceRadius                           => _offPathfollowingNavLinkAcceptanceRadius.GetValue();
	public byte/*(bool)*/                                     bFinishMoveOnGoalOverlap                                       => _offbFinishMoveOnGoalOverlap.GetValue();
	public byte/*(bool)*/                                     bAcceptPartialPaths                                            => _offbAcceptPartialPaths.GetValue();
	public byte/*(bool)*/                                     bAllowStrafing                                                 => _offbAllowStrafing.GetValue();
	public byte/*(bool)*/                                     bEnableBTAITasks                                               => _offbEnableBTAITasks.GetValue();
	public byte/*(bool)*/                                     bAllowControllersAsEQSQuerier                                  => _offbAllowControllersAsEQSQuerier.GetValue();
	public byte/*(bool)*/                                     bEnableDebuggerPlugin                                          => _offbEnableDebuggerPlugin.GetValue();
	public TEnumAsByte<ECollisionChannel>                     DefaultSightCollisionChannel                                   => _offDefaultSightCollisionChannel.GetValue();
	public UBehaviorTreeManager                               BehaviorTreeManager                                            => _offBehaviorTreeManager.GetValue();
	public UEnvQueryManager                                   EnvironmentQueryManager                                        => _offEnvironmentQueryManager.GetValue();
	public UAIPerceptionSystem                                PerceptionSystem                                               => _offPerceptionSystem.GetValue();
	public TArray<UAIAsyncTaskBlueprintProxy>                 AllProxyObjects                                                => _offAllProxyObjects.GetValue();
	public UAIHotSpotManager                                  HotSpotManager                                                 => _offHotSpotManager.GetValue();
	public UNavLocalGridManager                               NavLocalGrids                                                  => _offNavLocalGrids.GetValue();
	#endregion


}

// Class AIModule.AITask
// 0x0008 (0x0070 - 0x0068)
public class UAITask : UGameplayTask
{
	#region Offsets
	private ExternalOffset<AAIController>                     _offOwnerController                                            = new ExternalOffset<AAIController>(0x0068, true);             // 0x0068(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public AAIController                                      OwnerController                                                => _offOwnerController.GetValue();
	#endregion


}

// Class AIModule.AITask_LockLogic
// 0x0000 (0x0070 - 0x0070)
public class UAITask_LockLogic : UAITask
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.AITask_MoveTo
// 0x0060 (0x00D0 - 0x0070)
public class UAITask_MoveTo : UAITask
{
	#region Offsets
	private ExternalOffset<FScriptMulticastDelegate>          _offOnRequestFailed                                            = new ExternalOffset<FScriptMulticastDelegate>(0x0070, false); // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnMoveFinished                                             = new ExternalOffset<FScriptMulticastDelegate>(0x0080, false); // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FAIMoveRequest>                    _offMoveRequest                                                = new ExternalOffset<FAIMoveRequest>(0x0090, false);           // 0x0090(0x0040) (Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FScriptMulticastDelegate                           OnRequestFailed                                                => _offOnRequestFailed.GetValue();
	public FScriptMulticastDelegate                           OnMoveFinished                                                 => _offOnMoveFinished.GetValue();
	public FAIMoveRequest                                     MoveRequest                                                    => _offMoveRequest.GetValue();
	#endregion


}

// Class AIModule.AITask_RunEQS
// 0x0000 (0x0070 - 0x0070)
public class UAITask_RunEQS : UAITask
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.BehaviorTree
// 0x0030 (0x0058 - 0x0028)
public class UBehaviorTree : UObject
{
	#region Offsets
	private ExternalOffset<UBTCompositeNode>                  _offRootNode                                                   = new ExternalOffset<UBTCompositeNode>(0x0028, true);          // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UBlackboardData>                   _offBlackboardAsset                                            = new ExternalOffset<UBlackboardData>(0x0030, true);           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UBTDecorator>>              _offRootDecorators                                             = new ExternalOffset<TArray<UBTDecorator>>(0x0038, false);     // 0x0038(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FBTDecoratorLogic>>         _offRootDecoratorOps                                           = new ExternalOffset<TArray<FBTDecoratorLogic>>(0x0048, false); // 0x0048(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UBTCompositeNode                                   RootNode                                                       => _offRootNode.GetValue();
	public UBlackboardData                                    BlackboardAsset                                                => _offBlackboardAsset.GetValue();
	public TArray<UBTDecorator>                               RootDecorators                                                 => _offRootDecorators.GetValue();
	public TArray<FBTDecoratorLogic>                          RootDecoratorOps                                               => _offRootDecoratorOps.GetValue();
	#endregion


}

// Class AIModule.BrainComponent
// 0x0028 (0x00F0 - 0x00C8)
public class UBrainComponent : UActorComponent
{
	#region Offsets
	private ExternalOffset<UBlackboardComponent>              _offBlackboardComp                                             = new ExternalOffset<UBlackboardComponent>(0x00E0, true);      // 0x00E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<AAIController>                     _offAIOwner                                                    = new ExternalOffset<AAIController>(0x00E8, true);             // 0x00E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public UBlackboardComponent                               BlackboardComp                                                 => _offBlackboardComp.GetValue();
	public AAIController                                      AIOwner                                                        => _offAIOwner.GetValue();
	#endregion


}

// Class AIModule.BehaviorTreeComponent
// 0x0078 (0x0168 - 0x00F0)
public class UBehaviorTreeComponent : UBrainComponent
{
	#region Offsets
	private ExternalOffset<TArray<UBTNode>>                   _offNodeInstances                                              = new ExternalOffset<TArray<UBTNode>>(0x0158, false);          // 0x0158(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public TArray<UBTNode>                                    NodeInstances                                                  => _offNodeInstances.GetValue();
	#endregion


}

// Class AIModule.BehaviorTreeManager
// 0x0028 (0x0050 - 0x0028)
public class UBehaviorTreeManager : UObject
{
	#region Offsets
	private ExternalOffset<int>                               _offMaxDebuggerSteps                                           = new ExternalOffset<int>(0x0028);                             // 0x0028(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FBehaviorTreeTemplateInfo>> _offLoadedTemplates                                            = new ExternalOffset<TArray<FBehaviorTreeTemplateInfo>>(0x0030, false); // 0x0030(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<UBehaviorTreeComponent>>    _offActiveComponents                                           = new ExternalOffset<TArray<UBehaviorTreeComponent>>(0x0040, false); // 0x0040(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public int                                                MaxDebuggerSteps                                               => _offMaxDebuggerSteps.GetValue();
	public TArray<FBehaviorTreeTemplateInfo>                  LoadedTemplates                                                => _offLoadedTemplates.GetValue();
	public TArray<UBehaviorTreeComponent>                     ActiveComponents                                               => _offActiveComponents.GetValue();
	#endregion


}

// Class AIModule.BehaviorTreeTypes
// 0x0000 (0x0028 - 0x0028)
public class UBehaviorTreeTypes : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.BlackboardComponent
// 0x0050 (0x0118 - 0x00C8)
public class UBlackboardComponent : UActorComponent
{
	#region Offsets
	private ExternalOffset<UBrainComponent>                   _offBrainComp                                                  = new ExternalOffset<UBrainComponent>(0x00D8, true);           // 0x00D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UBlackboardData>                   _offBlackboardAsset                                            = new ExternalOffset<UBlackboardData>(0x00E0, true);           // 0x00E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<UBlackboardKeyType>>        _offKeyInstances                                               = new ExternalOffset<TArray<UBlackboardKeyType>>(0x0108, false); // 0x0108(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public UBrainComponent                                    BrainComp                                                      => _offBrainComp.GetValue();
	public UBlackboardData                                    BlackboardAsset                                                => _offBlackboardAsset.GetValue();
	public TArray<UBlackboardKeyType>                         KeyInstances                                                   => _offKeyInstances.GetValue();
	#endregion


}

// Class AIModule.BlackboardData
// 0x0019 (0x0049 - 0x0030)
public class UBlackboardData : UDataAsset
{
	#region Offsets
	private ExternalOffset<UBlackboardData>                   _offParent                                                     = new ExternalOffset<UBlackboardData>(0x0030, true);           // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FBlackboardEntry>>          _offKeys                                                       = new ExternalOffset<TArray<FBlackboardEntry>>(0x0038, false); // 0x0038(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbHasSynchronizedKeys                                       = new ExternalOffset<char>(0x0048, false);                     // 0x0048(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UBlackboardData                                    Parent                                                         => _offParent.GetValue();
	public TArray<FBlackboardEntry>                           Keys                                                           => _offKeys.GetValue();
	#endregion


}

// Class AIModule.BlackboardKeyType
// 0x0000 (0x0028 - 0x0028)
public class UBlackboardKeyType : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.BlackboardKeyType_Bool
// 0x0008 (0x0030 - 0x0028)
public class UBlackboardKeyType_Bool : UBlackboardKeyType
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.BlackboardKeyType_Class
// 0x0010 (0x0038 - 0x0028)
public class UBlackboardKeyType_Class : UBlackboardKeyType
{
	#region Offsets
	private ExternalOffset<UClass>                            _offBaseClass                                                  = new ExternalOffset<UClass>(0x0030, true);                    // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                             BaseClass                                                      => _offBaseClass.GetValue();
	#endregion


}

// Class AIModule.BlackboardKeyType_Enum
// 0x0021 (0x0049 - 0x0028)
public class UBlackboardKeyType_Enum : UBlackboardKeyType
{
	#region Offsets
	private ExternalOffset<UEnum>                             _offEnumType                                                   = new ExternalOffset<UEnum>(0x0030, true);                     // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offEnumName                                                   = new ExternalOffset<FString>(0x0038, false);                  // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbIsEnumNameValid                                           = new ExternalOffset<char>(0x0048, false);                     // 0x0048(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UEnum                                              EnumType                                                       => _offEnumType.GetValue();
	public FString                                            EnumName                                                       => _offEnumName.GetValue();
	#endregion


}

// Class AIModule.BlackboardKeyType_Float
// 0x0008 (0x0030 - 0x0028)
public class UBlackboardKeyType_Float : UBlackboardKeyType
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.BlackboardKeyType_Int
// 0x0008 (0x0030 - 0x0028)
public class UBlackboardKeyType_Int : UBlackboardKeyType
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.BlackboardKeyType_Name
// 0x0008 (0x0030 - 0x0028)
public class UBlackboardKeyType_Name : UBlackboardKeyType
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.BlackboardKeyType_NativeEnum
// 0x0020 (0x0048 - 0x0028)
public class UBlackboardKeyType_NativeEnum : UBlackboardKeyType
{
	#region Offsets
	private ExternalOffset<FString>                           _offEnumName                                                   = new ExternalOffset<FString>(0x0030, false);                  // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UEnum>                             _offEnumType                                                   = new ExternalOffset<UEnum>(0x0040, true);                     // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                            EnumName                                                       => _offEnumName.GetValue();
	public UEnum                                              EnumType                                                       => _offEnumType.GetValue();
	#endregion


}

// Class AIModule.BlackboardKeyType_Object
// 0x0010 (0x0038 - 0x0028)
public class UBlackboardKeyType_Object : UBlackboardKeyType
{
	#region Offsets
	private ExternalOffset<UClass>                            _offBaseClass                                                  = new ExternalOffset<UClass>(0x0030, true);                    // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                             BaseClass                                                      => _offBaseClass.GetValue();
	#endregion


}

// Class AIModule.BlackboardKeyType_Rotator
// 0x0008 (0x0030 - 0x0028)
public class UBlackboardKeyType_Rotator : UBlackboardKeyType
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.BlackboardKeyType_String
// 0x0018 (0x0040 - 0x0028)
public class UBlackboardKeyType_String : UBlackboardKeyType
{
	#region Offsets
	private ExternalOffset<FString>                           _offStringValue                                                = new ExternalOffset<FString>(0x0030, false);                  // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                            StringValue                                                    => _offStringValue.GetValue();
	#endregion


}

// Class AIModule.BlackboardKeyType_Vector
// 0x0008 (0x0030 - 0x0028)
public class UBlackboardKeyType_Vector : UBlackboardKeyType
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.BTCompositeNode
// 0x0039 (0x0089 - 0x0050)
public class UBTCompositeNode : UBTNode
{
	#region Offsets
	private ExternalOffset<TArray<FBTCompositeChild>>         _offChildren                                                   = new ExternalOffset<TArray<FBTCompositeChild>>(0x0058, false); // 0x0058(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UBTService>>                _offServices                                                   = new ExternalOffset<TArray<UBTService>>(0x0068, false);       // 0x0068(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbApplyDecoratorScope                                       = new ExternalOffset<char>(0x0088, false);                     // 0x0088(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public TArray<FBTCompositeChild>                          Children                                                       => _offChildren.GetValue();
	public TArray<UBTService>                                 Services                                                       => _offServices.GetValue();
	#endregion


}

// Class AIModule.BTComposite_Selector
// 0x0007 (0x0090 - 0x0089)
public class UBTComposite_Selector : UBTCompositeNode
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.BTComposite_Sequence
// 0x0007 (0x0090 - 0x0089)
public class UBTComposite_Sequence : UBTCompositeNode
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.BTComposite_SimpleParallel
// 0x0008 (0x0091 - 0x0089)
public class UBTComposite_SimpleParallel : UBTCompositeNode
{
	#region Offsets
	private ExternalOffset<TEnumAsByte<EBTParallelMode>>      _offFinishMode                                                 = new ExternalOffset<TEnumAsByte<EBTParallelMode>>(0x0090, false); // 0x0090(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TEnumAsByte<EBTParallelMode>                       FinishMode                                                     => _offFinishMode.GetValue();
	#endregion


}

// Class AIModule.BTDecorator_BlackboardBase
// 0x002B (0x0090 - 0x0065)
public class UBTDecorator_BlackboardBase : UBTDecorator
{
	#region Offsets
	private ExternalOffset<FBlackboardKeySelector>            _offBlackboardKey                                              = new ExternalOffset<FBlackboardKeySelector>(0x0068, false);   // 0x0068(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FBlackboardKeySelector                             BlackboardKey                                                  => _offBlackboardKey.GetValue();
	#endregion


}

// Class AIModule.BTDecorator_Blackboard
// 0x002A (0x00BA - 0x0090)
public class UBTDecorator_Blackboard : UBTDecorator_BlackboardBase
{
	#region Offsets
	private ExternalOffset<int>                               _offIntValue                                                   = new ExternalOffset<int>(0x0090);                             // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offFloatValue                                                 = new ExternalOffset<float>(0x0094);                           // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FString>                           _offStringValue                                                = new ExternalOffset<FString>(0x0098, false);                  // 0x0098(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FString>                           _offCachedDescription                                          = new ExternalOffset<FString>(0x00A8, false);                  // 0x00A8(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offOperationType                                              = new ExternalOffset<char>(0x00B8, false);                     // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TEnumAsByte<EBTBlackboardRestart>> _offNotifyObserver                                             = new ExternalOffset<TEnumAsByte<EBTBlackboardRestart>>(0x00B9, false); // 0x00B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public int                                                IntValue                                                       => _offIntValue.GetValue();
	public float                                              FloatValue                                                     => _offFloatValue.GetValue();
	public FString                                            StringValue                                                    => _offStringValue.GetValue();
	public FString                                            CachedDescription                                              => _offCachedDescription.GetValue();
	public TEnumAsByte<EBTBlackboardRestart>                  NotifyObserver                                                 => _offNotifyObserver.GetValue();
	#endregion


}

// Class AIModule.BTDecorator_BlueprintBase
// 0x0034 (0x0099 - 0x0065)
public class UBTDecorator_BlueprintBase : UBTDecorator
{
	#region Offsets
	private ExternalOffset<AAIController>                     _offAIOwner                                                    = new ExternalOffset<AAIController>(0x0068, true);             // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<AActor>                            _offActorOwner                                                 = new ExternalOffset<AActor>(0x0070, true);                    // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<FName>>                     _offObservedKeyNames                                           = new ExternalOffset<TArray<FName>>(0x0078, false);            // 0x0078(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbShowPropertyDetails                                       = new ExternalOffset<char>(0x0098, false);                     // 0x0098(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbCheckConditionOnlyBlackBoardChanges                       = new ExternalOffset<char>(0x0098, false);                     // 0x0098(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbIsObservingBB                                             = new ExternalOffset<char>(0x0098, false);                     // 0x0098(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public AAIController                                      AIOwner                                                        => _offAIOwner.GetValue();
	public AActor                                             ActorOwner                                                     => _offActorOwner.GetValue();
	public TArray<FName>                                      ObservedKeyNames                                               => _offObservedKeyNames.GetValue();
	#endregion


}

// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
// 0x0063 (0x00C8 - 0x0065)
public class UBTDecorator_CheckGameplayTagsOnActor : UBTDecorator
{
	#region Offsets
	private ExternalOffset<FBlackboardKeySelector>            _offActorToCheck                                               = new ExternalOffset<FBlackboardKeySelector>(0x0068, false);   // 0x0068(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<EGameplayContainerMatchType>       _offTagsToMatch                                                = new ExternalOffset<EGameplayContainerMatchType>(0x0090, false); // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FGameplayTagContainer>             _offGameplayTags                                               = new ExternalOffset<FGameplayTagContainer>(0x0098, false);    // 0x0098(0x0020) (Edit, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FString>                           _offCachedDescription                                          = new ExternalOffset<FString>(0x00B8, false);                  // 0x00B8(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FBlackboardKeySelector                             ActorToCheck                                                   => _offActorToCheck.GetValue();
	public EGameplayContainerMatchType                        TagsToMatch                                                    => _offTagsToMatch.GetValue();
	public FGameplayTagContainer                              GameplayTags                                                   => _offGameplayTags.GetValue();
	public FString                                            CachedDescription                                              => _offCachedDescription.GetValue();
	#endregion


}

// Class AIModule.BTDecorator_CompareBBEntries
// 0x005B (0x00C0 - 0x0065)
public class UBTDecorator_CompareBBEntries : UBTDecorator
{
	#region Offsets
	private ExternalOffset<TEnumAsByte<EBlackBoardEntryComparison>> _offOperator                                                   = new ExternalOffset<TEnumAsByte<EBlackBoardEntryComparison>>(0x0068, false); // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FBlackboardKeySelector>            _offBlackboardKeyA                                             = new ExternalOffset<FBlackboardKeySelector>(0x0070, false);   // 0x0070(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FBlackboardKeySelector>            _offBlackboardKeyB                                             = new ExternalOffset<FBlackboardKeySelector>(0x0098, false);   // 0x0098(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public TEnumAsByte<EBlackBoardEntryComparison>            Operator                                                       => _offOperator.GetValue();
	public FBlackboardKeySelector                             BlackboardKeyA                                                 => _offBlackboardKeyA.GetValue();
	public FBlackboardKeySelector                             BlackboardKeyB                                                 => _offBlackboardKeyB.GetValue();
	#endregion


}

// Class AIModule.BTDecorator_ConditionalLoop
// 0x0006 (0x00C0 - 0x00BA)
public class UBTDecorator_ConditionalLoop : UBTDecorator_Blackboard
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.BTDecorator_ConeCheck
// 0x0083 (0x00E8 - 0x0065)
public class UBTDecorator_ConeCheck : UBTDecorator
{
	#region Offsets
	private ExternalOffset<float>                             _offConeHalfAngle                                              = new ExternalOffset<float>(0x0068);                           // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FBlackboardKeySelector>            _offConeOrigin                                                 = new ExternalOffset<FBlackboardKeySelector>(0x0070, false);   // 0x0070(0x0028) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FBlackboardKeySelector>            _offConeDirection                                              = new ExternalOffset<FBlackboardKeySelector>(0x0098, false);   // 0x0098(0x0028) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FBlackboardKeySelector>            _offObserved                                                   = new ExternalOffset<FBlackboardKeySelector>(0x00C0, false);   // 0x00C0(0x0028) (Edit, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                              ConeHalfAngle                                                  => _offConeHalfAngle.GetValue();
	public FBlackboardKeySelector                             ConeOrigin                                                     => _offConeOrigin.GetValue();
	public FBlackboardKeySelector                             ConeDirection                                                  => _offConeDirection.GetValue();
	public FBlackboardKeySelector                             Observed                                                       => _offObserved.GetValue();
	#endregion


}

// Class AIModule.BTDecorator_Cooldown
// 0x0007 (0x006C - 0x0065)
public class UBTDecorator_Cooldown : UBTDecorator
{
	#region Offsets
	private ExternalOffset<float>                             _offCoolDownTime                                               = new ExternalOffset<float>(0x0068);                           // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                              CoolDownTime                                                   => _offCoolDownTime.GetValue();
	#endregion


}

// Class AIModule.BTDecorator_DoesPathExist
// 0x0063 (0x00C8 - 0x0065)
public class UBTDecorator_DoesPathExist : UBTDecorator
{
	#region Offsets
	private ExternalOffset<FBlackboardKeySelector>            _offBlackboardKeyA                                             = new ExternalOffset<FBlackboardKeySelector>(0x0068, false);   // 0x0068(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FBlackboardKeySelector>            _offBlackboardKeyB                                             = new ExternalOffset<FBlackboardKeySelector>(0x0090, false);   // 0x0090(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbUseSelf                                                   = new ExternalOffset<char>(0x00B8, false);                     // 0x00B8(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EPathExistanceQueryType>> _offPathQueryType                                              = new ExternalOffset<TEnumAsByte<EPathExistanceQueryType>>(0x00BC, false); // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offFilterClass                                                = new ExternalOffset<UClass>(0x00C0, true);                    // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FBlackboardKeySelector                             BlackboardKeyA                                                 => _offBlackboardKeyA.GetValue();
	public FBlackboardKeySelector                             BlackboardKeyB                                                 => _offBlackboardKeyB.GetValue();
	public TEnumAsByte<EPathExistanceQueryType>               PathQueryType                                                  => _offPathQueryType.GetValue();
	public UClass                                             FilterClass                                                    => _offFilterClass.GetValue();
	#endregion


}

// Class AIModule.BTDecorator_ForceSuccess
// 0x0003 (0x0068 - 0x0065)
public class UBTDecorator_ForceSuccess : UBTDecorator
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.BTDecorator_IsAtLocation
// 0x003D (0x00CD - 0x0090)
public class UBTDecorator_IsAtLocation : UBTDecorator_BlackboardBase
{
	#region Offsets
	private ExternalOffset<float>                             _offAcceptableRadius                                           = new ExternalOffset<float>(0x0090);                           // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FAIDataProviderFloatValue>         _offParametrizedAcceptableRadius                               = new ExternalOffset<FAIDataProviderFloatValue>(0x0098, false); // 0x0098(0x0030) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<EFAIDistanceType>                  _offGeometricDistanceType                                      = new ExternalOffset<EFAIDistanceType>(0x00C8, false);         // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbUseParametrizedRadius                                     = new ExternalOffset<char>(0x00CC, false);                     // 0x00CC(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbUseNavAgentGoalLocation                                   = new ExternalOffset<char>(0x00CC, false);                     // 0x00CC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbPathFindingBasedTest                                      = new ExternalOffset<char>(0x00CC, false);                     // 0x00CC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                              AcceptableRadius                                               => _offAcceptableRadius.GetValue();
	public FAIDataProviderFloatValue                          ParametrizedAcceptableRadius                                   => _offParametrizedAcceptableRadius.GetValue();
	public EFAIDistanceType                                   GeometricDistanceType                                          => _offGeometricDistanceType.GetValue();
	#endregion


}

// Class AIModule.BTDecorator_IsBBEntryOfClass
// 0x0008 (0x0098 - 0x0090)
public class UBTDecorator_IsBBEntryOfClass : UBTDecorator_BlackboardBase
{
	#region Offsets
	private ExternalOffset<UClass>                            _offTestClass                                                  = new ExternalOffset<UClass>(0x0090, true);                    // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public UClass                                             TestClass                                                      => _offTestClass.GetValue();
	#endregion


}

// Class AIModule.BTDecorator_KeepInCone
// 0x005C (0x00C1 - 0x0065)
public class UBTDecorator_KeepInCone : UBTDecorator
{
	#region Offsets
	private ExternalOffset<float>                             _offConeHalfAngle                                              = new ExternalOffset<float>(0x0068);                           // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FBlackboardKeySelector>            _offConeOrigin                                                 = new ExternalOffset<FBlackboardKeySelector>(0x0070, false);   // 0x0070(0x0028) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FBlackboardKeySelector>            _offObserved                                                   = new ExternalOffset<FBlackboardKeySelector>(0x0098, false);   // 0x0098(0x0028) (Edit, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbUseSelfAsOrigin                                           = new ExternalOffset<char>(0x00C0, false);                     // 0x00C0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbUseSelfAsObserved                                         = new ExternalOffset<char>(0x00C0, false);                     // 0x00C0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                              ConeHalfAngle                                                  => _offConeHalfAngle.GetValue();
	public FBlackboardKeySelector                             ConeOrigin                                                     => _offConeOrigin.GetValue();
	public FBlackboardKeySelector                             Observed                                                       => _offObserved.GetValue();
	#endregion


}

// Class AIModule.BTDecorator_Loop
// 0x000F (0x0074 - 0x0065)
public class UBTDecorator_Loop : UBTDecorator
{
	#region Offsets
	private ExternalOffset<int>                               _offNumLoops                                                   = new ExternalOffset<int>(0x0068);                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbInfiniteLoop                                              = new ExternalOffset<byte/*(bool)*/>(0x006C);                  // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offInfiniteLoopTimeoutTime                                    = new ExternalOffset<float>(0x0070);                           // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                NumLoops                                                       => _offNumLoops.GetValue();
	public byte/*(bool)*/                                     bInfiniteLoop                                                  => _offbInfiniteLoop.GetValue();
	public float                                              InfiniteLoopTimeoutTime                                        => _offInfiniteLoopTimeoutTime.GetValue();
	#endregion


}

// Class AIModule.BTDecorator_ReachedMoveGoal
// 0x0003 (0x0068 - 0x0065)
public class UBTDecorator_ReachedMoveGoal : UBTDecorator
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.BTDecorator_SetTagCooldown
// 0x0010 (0x0075 - 0x0065)
public class UBTDecorator_SetTagCooldown : UBTDecorator
{
	#region Offsets
	private ExternalOffset<FGameplayTag>                      _offCooldownTag                                                = new ExternalOffset<FGameplayTag>(0x0068, false);             // 0x0068(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offCooldownDuration                                           = new ExternalOffset<float>(0x0070);                           // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbAddToExistingDuration                                     = new ExternalOffset<byte/*(bool)*/>(0x0074);                  // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGameplayTag                                       CooldownTag                                                    => _offCooldownTag.GetValue();
	public float                                              CooldownDuration                                               => _offCooldownDuration.GetValue();
	public byte/*(bool)*/                                     bAddToExistingDuration                                         => _offbAddToExistingDuration.GetValue();
	#endregion


}

// Class AIModule.BTDecorator_TagCooldown
// 0x0011 (0x0076 - 0x0065)
public class UBTDecorator_TagCooldown : UBTDecorator
{
	#region Offsets
	private ExternalOffset<FGameplayTag>                      _offCooldownTag                                                = new ExternalOffset<FGameplayTag>(0x0068, false);             // 0x0068(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offCooldownDuration                                           = new ExternalOffset<float>(0x0070);                           // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbAddToExistingDuration                                     = new ExternalOffset<byte/*(bool)*/>(0x0074);                  // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbActivatesCooldown                                         = new ExternalOffset<byte/*(bool)*/>(0x0075);                  // 0x0075(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGameplayTag                                       CooldownTag                                                    => _offCooldownTag.GetValue();
	public float                                              CooldownDuration                                               => _offCooldownDuration.GetValue();
	public byte/*(bool)*/                                     bAddToExistingDuration                                         => _offbAddToExistingDuration.GetValue();
	public byte/*(bool)*/                                     bActivatesCooldown                                             => _offbActivatesCooldown.GetValue();
	#endregion


}

// Class AIModule.BTDecorator_TimeLimit
// 0x0007 (0x006C - 0x0065)
public class UBTDecorator_TimeLimit : UBTDecorator
{
	#region Offsets
	private ExternalOffset<float>                             _offTimeLimit                                                  = new ExternalOffset<float>(0x0068);                           // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                              TimeLimit                                                      => _offTimeLimit.GetValue();
	#endregion


}

// Class AIModule.BTFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
public class UBTFunctionLibrary : UBlueprintFunctionLibrary
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.BTService
// 0x0011 (0x0069 - 0x0058)
public class UBTService : UBTAuxiliaryNode
{
	#region Offsets
	private ExternalOffset<float>                             _offInterval                                                   = new ExternalOffset<float>(0x0060);                           // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offRandomDeviation                                            = new ExternalOffset<float>(0x0064);                           // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbCallTickOnSearchStart                                     = new ExternalOffset<char>(0x0068, false);                     // 0x0068(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbRestartTimerOnEachActivation                              = new ExternalOffset<char>(0x0068, false);                     // 0x0068(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public float                                              Interval                                                       => _offInterval.GetValue();
	public float                                              RandomDeviation                                                => _offRandomDeviation.GetValue();
	#endregion


}

// Class AIModule.BTService_BlackboardBase
// 0x002F (0x0098 - 0x0069)
public class UBTService_BlackboardBase : UBTService
{
	#region Offsets
	private ExternalOffset<FBlackboardKeySelector>            _offBlackboardKey                                              = new ExternalOffset<FBlackboardKeySelector>(0x0070, false);   // 0x0070(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FBlackboardKeySelector                             BlackboardKey                                                  => _offBlackboardKey.GetValue();
	#endregion


}

// Class AIModule.BTService_BlueprintBase
// 0x0028 (0x0091 - 0x0069)
public class UBTService_BlueprintBase : UBTService
{
	#region Offsets
	private ExternalOffset<AAIController>                     _offAIOwner                                                    = new ExternalOffset<AAIController>(0x0070, true);             // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<AActor>                            _offActorOwner                                                 = new ExternalOffset<AActor>(0x0078, true);                    // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbShowPropertyDetails                                       = new ExternalOffset<char>(0x0090, false);                     // 0x0090(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbShowEventDetails                                          = new ExternalOffset<char>(0x0090, false);                     // 0x0090(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public AAIController                                      AIOwner                                                        => _offAIOwner.GetValue();
	public AActor                                             ActorOwner                                                     => _offActorOwner.GetValue();
	#endregion


}

// Class AIModule.BTService_DefaultFocus
// 0x0001 (0x0099 - 0x0098)
public class UBTService_DefaultFocus : UBTService_BlackboardBase
{
	#region Offsets
//	private ExternalOffset<char>                              _offFocusPriority                                              = new ExternalOffset<char>(0x0098, false);                     // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	#endregion


}

// Class AIModule.BTService_RunEQS
// 0x0048 (0x00E0 - 0x0098)
public class UBTService_RunEQS : UBTService_BlackboardBase
{
	#region Offsets
	private ExternalOffset<FEQSParametrizedQueryExecutionRequest> _offEQSRequest                                                 = new ExternalOffset<FEQSParametrizedQueryExecutionRequest>(0x0098, false); // 0x0098(0x0048) (Edit, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FEQSParametrizedQueryExecutionRequest              EQSRequest                                                     => _offEQSRequest.GetValue();
	#endregion


}

// Class AIModule.BTTask_BlueprintBase
// 0x0030 (0x0099 - 0x0069)
public class UBTTask_BlueprintBase : UBTTaskNode
{
	#region Offsets
	private ExternalOffset<AAIController>                     _offAIOwner                                                    = new ExternalOffset<AAIController>(0x0070, true);             // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<AActor>                            _offActorOwner                                                 = new ExternalOffset<AActor>(0x0078, true);                    // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbShowPropertyDetails                                       = new ExternalOffset<char>(0x0098, false);                     // 0x0098(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public AAIController                                      AIOwner                                                        => _offAIOwner.GetValue();
	public AActor                                             ActorOwner                                                     => _offActorOwner.GetValue();
	#endregion


}

// Class AIModule.BTTask_FinishWithResult
// 0x0008 (0x0071 - 0x0069)
public class UBTTask_FinishWithResult : UBTTaskNode
{
	#region Offsets
	private ExternalOffset<TEnumAsByte<EBTNodeResult>>        _offResult                                                     = new ExternalOffset<TEnumAsByte<EBTNodeResult>>(0x0070, false); // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public TEnumAsByte<EBTNodeResult>                         Result                                                         => _offResult.GetValue();
	#endregion


}

// Class AIModule.BTTask_GameplayTaskBase
// 0x0008 (0x0071 - 0x0069)
public class UBTTask_GameplayTaskBase : UBTTaskNode
{
	#region Offsets
//	private ExternalOffset<char>                              _offbWaitForGameplayTask                                       = new ExternalOffset<char>(0x0070, false);                     // 0x0070(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	#endregion


}

// Class AIModule.BTTask_MakeNoise
// 0x000B (0x0074 - 0x0069)
public class UBTTask_MakeNoise : UBTTaskNode
{
	#region Offsets
	private ExternalOffset<float>                             _offLoudnes                                                    = new ExternalOffset<float>(0x0070);                           // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                              Loudnes                                                        => _offLoudnes.GetValue();
	#endregion


}

// Class AIModule.BTTask_MoveTo
// 0x0016 (0x00AE - 0x0098)
public class UBTTask_MoveTo : UBTTask_BlackboardBase
{
	#region Offsets
	private ExternalOffset<float>                             _offAcceptableRadius                                           = new ExternalOffset<float>(0x0098);                           // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offFilterClass                                                = new ExternalOffset<UClass>(0x00A0, true);                    // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offObservedBlackboardValueTolerance                           = new ExternalOffset<float>(0x00A8);                           // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbObserveBlackboardValue                                    = new ExternalOffset<char>(0x00AC, false);                     // 0x00AC(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbAllowStrafe                                               = new ExternalOffset<char>(0x00AC, false);                     // 0x00AC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbAllowPartialPath                                          = new ExternalOffset<char>(0x00AC, false);                     // 0x00AC(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbTrackMovingGoal                                           = new ExternalOffset<char>(0x00AC, false);                     // 0x00AC(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbProjectGoalLocation                                       = new ExternalOffset<char>(0x00AC, false);                     // 0x00AC(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbReachTestIncludesAgentRadius                              = new ExternalOffset<char>(0x00AC, false);                     // 0x00AC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbReachTestIncludesGoalRadius                               = new ExternalOffset<char>(0x00AC, false);                     // 0x00AC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbStopOnOverlap                                             = new ExternalOffset<char>(0x00AC, false);                     // 0x00AC(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbStopOnOverlapNeedsUpdate                                  = new ExternalOffset<char>(0x00AD, false);                     // 0x00AD(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                              AcceptableRadius                                               => _offAcceptableRadius.GetValue();
	public UClass                                             FilterClass                                                    => _offFilterClass.GetValue();
	public float                                              ObservedBlackboardValueTolerance                               => _offObservedBlackboardValueTolerance.GetValue();
	#endregion


}

// Class AIModule.BTTask_MoveDirectlyToward
// 0x0003 (0x00B1 - 0x00AE)
public class UBTTask_MoveDirectlyToward : UBTTask_MoveTo
{
	#region Offsets
//	private ExternalOffset<char>                              _offbDisablePathUpdateOnGoalLocationChange                     = new ExternalOffset<char>(0x00B0, false);                     // 0x00B0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbProjectVectorGoalToNavigation                             = new ExternalOffset<char>(0x00B0, false);                     // 0x00B0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbUpdatedDeprecatedProperties                               = new ExternalOffset<char>(0x00B0, false);                     // 0x00B0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	#endregion


}

// Class AIModule.BTTask_PawnActionBase
// 0x0007 (0x0070 - 0x0069)
public class UBTTask_PawnActionBase : UBTTaskNode
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.BTTask_PlayAnimation
// 0x0027 (0x0090 - 0x0069)
public class UBTTask_PlayAnimation : UBTTaskNode
{
	#region Offsets
	private ExternalOffset<UAnimationAsset>                   _offAnimationToPlay                                            = new ExternalOffset<UAnimationAsset>(0x0070, true);           // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbLooping                                                   = new ExternalOffset<char>(0x0078, false);                     // 0x0078(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbNonBlocking                                               = new ExternalOffset<char>(0x0078, false);                     // 0x0078(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UBehaviorTreeComponent>            _offMyOwnerComp                                                = new ExternalOffset<UBehaviorTreeComponent>(0x0080, true);    // 0x0080(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<USkeletalMeshComponent>            _offCachedSkelMesh                                             = new ExternalOffset<USkeletalMeshComponent>(0x0088, true);    // 0x0088(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UAnimationAsset                                    AnimationToPlay                                                => _offAnimationToPlay.GetValue();
	public UBehaviorTreeComponent                             MyOwnerComp                                                    => _offMyOwnerComp.GetValue();
	public USkeletalMeshComponent                             CachedSkelMesh                                                 => _offCachedSkelMesh.GetValue();
	#endregion


}

// Class AIModule.BTTask_PlaySound
// 0x000F (0x0078 - 0x0069)
public class UBTTask_PlaySound : UBTTaskNode
{
	#region Offsets
	private ExternalOffset<USoundCue>                         _offSoundToPlay                                                = new ExternalOffset<USoundCue>(0x0070, true);                 // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public USoundCue                                          SoundToPlay                                                    => _offSoundToPlay.GetValue();
	#endregion


}

// Class AIModule.BTTask_PushPawnAction
// 0x0008 (0x0078 - 0x0070)
public class UBTTask_PushPawnAction : UBTTask_PawnActionBase
{
	#region Offsets
	private ExternalOffset<UPawnAction>                       _offAction                                                     = new ExternalOffset<UPawnAction>(0x0070, true);               // 0x0070(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public UPawnAction                                        Action                                                         => _offAction.GetValue();
	#endregion


}

// Class AIModule.BTTask_RotateToFaceBBEntry
// 0x0004 (0x009C - 0x0098)
public class UBTTask_RotateToFaceBBEntry : UBTTask_BlackboardBase
{
	#region Offsets
	private ExternalOffset<float>                             _offPrecision                                                  = new ExternalOffset<float>(0x0098);                           // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public float                                              Precision                                                      => _offPrecision.GetValue();
	#endregion


}

// Class AIModule.BTTask_RunBehavior
// 0x000F (0x0078 - 0x0069)
public class UBTTask_RunBehavior : UBTTaskNode
{
	#region Offsets
	private ExternalOffset<UBehaviorTree>                     _offBehaviorAsset                                              = new ExternalOffset<UBehaviorTree>(0x0070, true);             // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public UBehaviorTree                                      BehaviorAsset                                                  => _offBehaviorAsset.GetValue();
	#endregion


}

// Class AIModule.BTTask_RunBehaviorDynamic
// 0x001F (0x0088 - 0x0069)
public class UBTTask_RunBehaviorDynamic : UBTTaskNode
{
	#region Offsets
	private ExternalOffset<FGameplayTag>                      _offInjectionTag                                               = new ExternalOffset<FGameplayTag>(0x0070, false);             // 0x0070(0x0008) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UBehaviorTree>                     _offDefaultBehaviorAsset                                       = new ExternalOffset<UBehaviorTree>(0x0078, true);             // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UBehaviorTree>                     _offBehaviorAsset                                              = new ExternalOffset<UBehaviorTree>(0x0080, true);             // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FGameplayTag                                       InjectionTag                                                   => _offInjectionTag.GetValue();
	public UBehaviorTree                                      DefaultBehaviorAsset                                           => _offDefaultBehaviorAsset.GetValue();
	public UBehaviorTree                                      BehaviorAsset                                                  => _offBehaviorAsset.GetValue();
	#endregion


}

// Class AIModule.BTTask_RunEQSQuery
// 0x00A8 (0x0140 - 0x0098)
public class UBTTask_RunEQSQuery : UBTTask_BlackboardBase
{
	#region Offsets
	private ExternalOffset<UEnvQuery>                         _offQueryTemplate                                              = new ExternalOffset<UEnvQuery>(0x0098, true);                 // 0x0098(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FEnvNamedValue>>            _offQueryParams                                                = new ExternalOffset<TArray<FEnvNamedValue>>(0x00A0, false);   // 0x00A0(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FAIDynamicParam>>           _offQueryConfig                                                = new ExternalOffset<TArray<FAIDynamicParam>>(0x00B0, false);  // 0x00B0(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EEnvQueryRunMode>>     _offRunMode                                                    = new ExternalOffset<TEnumAsByte<EEnvQueryRunMode>>(0x00C0, false); // 0x00C0(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FBlackboardKeySelector>            _offEQSQueryBlackboardKey                                      = new ExternalOffset<FBlackboardKeySelector>(0x00C8, false);   // 0x00C8(0x0028) (Edit, EditConst, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbUseBBKey                                                  = new ExternalOffset<byte/*(bool)*/>(0x00F0);                  // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FEQSParametrizedQueryExecutionRequest> _offEQSRequest                                                 = new ExternalOffset<FEQSParametrizedQueryExecutionRequest>(0x00F8, false); // 0x00F8(0x0048) (Edit, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UEnvQuery                                          QueryTemplate                                                  => _offQueryTemplate.GetValue();
	public TArray<FEnvNamedValue>                             QueryParams                                                    => _offQueryParams.GetValue();
	public TArray<FAIDynamicParam>                            QueryConfig                                                    => _offQueryConfig.GetValue();
	public TEnumAsByte<EEnvQueryRunMode>                      RunMode                                                        => _offRunMode.GetValue();
	public FBlackboardKeySelector                             EQSQueryBlackboardKey                                          => _offEQSQueryBlackboardKey.GetValue();
	public byte/*(bool)*/                                     bUseBBKey                                                      => _offbUseBBKey.GetValue();
	public FEQSParametrizedQueryExecutionRequest              EQSRequest                                                     => _offEQSRequest.GetValue();
	#endregion


}

// Class AIModule.BTTask_SetTagCooldown
// 0x0017 (0x0080 - 0x0069)
public class UBTTask_SetTagCooldown : UBTTaskNode
{
	#region Offsets
	private ExternalOffset<FGameplayTag>                      _offCooldownTag                                                = new ExternalOffset<FGameplayTag>(0x0070, false);             // 0x0070(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbAddToExistingDuration                                     = new ExternalOffset<byte/*(bool)*/>(0x0078);                  // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offCooldownDuration                                           = new ExternalOffset<float>(0x007C);                           // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGameplayTag                                       CooldownTag                                                    => _offCooldownTag.GetValue();
	public byte/*(bool)*/                                     bAddToExistingDuration                                         => _offbAddToExistingDuration.GetValue();
	public float                                              CooldownDuration                                               => _offCooldownDuration.GetValue();
	#endregion


}

// Class AIModule.BTTask_Wait
// 0x000F (0x0078 - 0x0069)
public class UBTTask_Wait : UBTTaskNode
{
	#region Offsets
	private ExternalOffset<float>                             _offWaitTime                                                   = new ExternalOffset<float>(0x0070);                           // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offRandomDeviation                                            = new ExternalOffset<float>(0x0074);                           // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                              WaitTime                                                       => _offWaitTime.GetValue();
	public float                                              RandomDeviation                                                => _offRandomDeviation.GetValue();
	#endregion


}

// Class AIModule.BTTask_WaitBlackboardTime
// 0x0028 (0x00A0 - 0x0078)
public class UBTTask_WaitBlackboardTime : UBTTask_Wait
{
	#region Offsets
	private ExternalOffset<FBlackboardKeySelector>            _offBlackboardKey                                              = new ExternalOffset<FBlackboardKeySelector>(0x0078, false);   // 0x0078(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FBlackboardKeySelector                             BlackboardKey                                                  => _offBlackboardKey.GetValue();
	#endregion


}

// Class AIModule.CrowdAgentInterface
// 0x0000 (0x0028 - 0x0028)
public class UCrowdAgentInterface : UInterface
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.PathFollowingComponent
// 0x0060 (0x0128 - 0x00C8)
public class UPathFollowingComponent : UActorComponent
{
	#region Offsets
	private ExternalOffset<UNavMovementComponent>             _offMovementComp                                               = new ExternalOffset<UNavMovementComponent>(0x0110, true);     // 0x0110(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<ANavigationData>                   _offMyNavData                                                  = new ExternalOffset<ANavigationData>(0x0120, true);           // 0x0120(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public UNavMovementComponent                              MovementComp                                                   => _offMovementComp.GetValue();
	public ANavigationData                                    MyNavData                                                      => _offMyNavData.GetValue();
	#endregion


}

// Class AIModule.CrowdFollowingComponent
// 0x0174 (0x029C - 0x0128)
public class UCrowdFollowingComponent : UPathFollowingComponent
{
	#region Offsets
	private ExternalOffset<UCharacterMovementComponent>       _offCharacterMovement                                          = new ExternalOffset<UCharacterMovementComponent>(0x0288, true); // 0x0288(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FVector>                           _offCrowdAgentMoveDirection                                    = new ExternalOffset<FVector>(0x0290, false);                  // 0x0290(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UCharacterMovementComponent                        CharacterMovement                                              => _offCharacterMovement.GetValue();
	public FVector                                            CrowdAgentMoveDirection                                        => _offCrowdAgentMoveDirection.GetValue();
	#endregion


}

// Class AIModule.CrowdManager
// 0x0049 (0x0071 - 0x0028)
public class UCrowdManager : UCrowdManagerBase
{
	#region Offsets
	private ExternalOffset<ANavigationData>                   _offMyNavData                                                  = new ExternalOffset<ANavigationData>(0x0028, true);           // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<FCrowdAvoidanceConfig>>     _offAvoidanceConfig                                            = new ExternalOffset<TArray<FCrowdAvoidanceConfig>>(0x0030, false); // 0x0030(0x0010) (Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<FCrowdAvoidanceSamplingPattern>> _offSamplingPatterns                                           = new ExternalOffset<TArray<FCrowdAvoidanceSamplingPattern>>(0x0040, false); // 0x0040(0x0010) (Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<int>                               _offMaxAgents                                                  = new ExternalOffset<int>(0x0050);                             // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offMaxAgentRadius                                             = new ExternalOffset<float>(0x0054);                           // 0x0054(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<int>                               _offMaxAvoidedAgents                                           = new ExternalOffset<int>(0x0058);                             // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<int>                               _offMaxAvoidedWalls                                            = new ExternalOffset<int>(0x005C);                             // 0x005C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offNavmeshCheckInterval                                       = new ExternalOffset<float>(0x0060);                           // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offPathOptimizationInterval                                   = new ExternalOffset<float>(0x0064);                           // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offSeparationDirClamp                                         = new ExternalOffset<float>(0x0068);                           // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offPathOffsetRadiusMultiplier                                 = new ExternalOffset<float>(0x006C);                           // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbResolveCollisions                                         = new ExternalOffset<char>(0x0070, false);                     // 0x0070(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public ANavigationData                                    MyNavData                                                      => _offMyNavData.GetValue();
	public TArray<FCrowdAvoidanceConfig>                      AvoidanceConfig                                                => _offAvoidanceConfig.GetValue();
	public TArray<FCrowdAvoidanceSamplingPattern>             SamplingPatterns                                               => _offSamplingPatterns.GetValue();
	public int                                                MaxAgents                                                      => _offMaxAgents.GetValue();
	public float                                              MaxAgentRadius                                                 => _offMaxAgentRadius.GetValue();
	public int                                                MaxAvoidedAgents                                               => _offMaxAvoidedAgents.GetValue();
	public int                                                MaxAvoidedWalls                                                => _offMaxAvoidedWalls.GetValue();
	public float                                              NavmeshCheckInterval                                           => _offNavmeshCheckInterval.GetValue();
	public float                                              PathOptimizationInterval                                       => _offPathOptimizationInterval.GetValue();
	public float                                              SeparationDirClamp                                             => _offSeparationDirClamp.GetValue();
	public float                                              PathOffsetRadiusMultiplier                                     => _offPathOffsetRadiusMultiplier.GetValue();
	#endregion


}

// Class AIModule.DetourCrowdAIController
// 0x0008 (0x0350 - 0x0348)
public class ADetourCrowdAIController : AAIController
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.EnvQuery
// 0x0018 (0x0048 - 0x0030)
public class UEnvQuery : UDataAsset
{
	#region Offsets
	private ExternalOffset<FName>                             _offQueryName                                                  = new ExternalOffset<FName>(0x0030, false);                    // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<UEnvQueryOption>>           _offOptions                                                    = new ExternalOffset<TArray<UEnvQueryOption>>(0x0038, false);  // 0x0038(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FName                                              QueryName                                                      => _offQueryName.GetValue();
	public TArray<UEnvQueryOption>                            Options                                                        => _offOptions.GetValue();
	#endregion


}

// Class AIModule.EnvQueryContext
// 0x0000 (0x0028 - 0x0028)
public class UEnvQueryContext : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.EnvQueryContext_BlueprintBase
// 0x0000 (0x0028 - 0x0028)
public class UEnvQueryContext_BlueprintBase : UEnvQueryContext
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.EnvQueryContext_Item
// 0x0000 (0x0028 - 0x0028)
public class UEnvQueryContext_Item : UEnvQueryContext
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.EnvQueryContext_Querier
// 0x0000 (0x0028 - 0x0028)
public class UEnvQueryContext_Querier : UEnvQueryContext
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.EnvQueryDebugHelpers
// 0x0000 (0x0028 - 0x0028)
public class UEnvQueryDebugHelpers : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.EnvQueryNode
// 0x0004 (0x002C - 0x0028)
public class UEnvQueryNode : UObject
{
	#region Offsets
	private ExternalOffset<int>                               _offVerNum                                                     = new ExternalOffset<int>(0x0028);                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                VerNum                                                         => _offVerNum.GetValue();
	#endregion


}

// Class AIModule.EnvQueryGenerator
// 0x001D (0x0049 - 0x002C)
public class UEnvQueryGenerator : UEnvQueryNode
{
	#region Offsets
	private ExternalOffset<FString>                           _offOptionName                                                 = new ExternalOffset<FString>(0x0030, false);                  // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offItemType                                                   = new ExternalOffset<UClass>(0x0040, true);                    // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbAutoSortTests                                             = new ExternalOffset<char>(0x0048, false);                     // 0x0048(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                            OptionName                                                     => _offOptionName.GetValue();
	public UClass                                             ItemType                                                       => _offItemType.GetValue();
	#endregion


}

// Class AIModule.EnvQueryGenerator_ActorsOfClass
// 0x0077 (0x00C0 - 0x0049)
public class UEnvQueryGenerator_ActorsOfClass : UEnvQueryGenerator
{
	#region Offsets
	private ExternalOffset<UClass>                            _offSearchedActorClass                                         = new ExternalOffset<UClass>(0x0050, true);                    // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FAIDataProviderBoolValue>          _offGenerateOnlyActorsInRadius                                 = new ExternalOffset<FAIDataProviderBoolValue>(0x0058, false); // 0x0058(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<FAIDataProviderFloatValue>         _offSearchRadius                                               = new ExternalOffset<FAIDataProviderFloatValue>(0x0088, false); // 0x0088(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offSearchCenter                                               = new ExternalOffset<UClass>(0x00B8, true);                    // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                             SearchedActorClass                                             => _offSearchedActorClass.GetValue();
	public FAIDataProviderBoolValue                           GenerateOnlyActorsInRadius                                     => _offGenerateOnlyActorsInRadius.GetValue();
	public FAIDataProviderFloatValue                          SearchRadius                                                   => _offSearchRadius.GetValue();
	public UClass                                             SearchCenter                                                   => _offSearchCenter.GetValue();
	#endregion


}

// Class AIModule.EnvQueryGenerator_BlueprintBase
// 0x002F (0x0078 - 0x0049)
public class UEnvQueryGenerator_BlueprintBase : UEnvQueryGenerator
{
	#region Offsets
	private ExternalOffset<FText>                             _offGeneratorsActionDescription                                = new ExternalOffset<FText>(0x0050, false);                    // 0x0050(0x0018) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offContext                                                    = new ExternalOffset<UClass>(0x0068, true);                    // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offGeneratedItemType                                          = new ExternalOffset<UClass>(0x0070, true);                    // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FText                                              GeneratorsActionDescription                                    => _offGeneratorsActionDescription.GetValue();
	public UClass                                             Context                                                        => _offContext.GetValue();
	public UClass                                             GeneratedItemType                                              => _offGeneratedItemType.GetValue();
	#endregion


}

// Class AIModule.EnvQueryGenerator_Composite
// 0x0027 (0x0070 - 0x0049)
public class UEnvQueryGenerator_Composite : UEnvQueryGenerator
{
	#region Offsets
	private ExternalOffset<TArray<UEnvQueryGenerator>>        _offGenerators                                                 = new ExternalOffset<TArray<UEnvQueryGenerator>>(0x0050, false); // 0x0050(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbAllowDifferentItemTypes                                   = new ExternalOffset<char>(0x0060, false);                     // 0x0060(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbHasMatchingItemType                                       = new ExternalOffset<char>(0x0060, false);                     // 0x0060(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offForcedItemType                                             = new ExternalOffset<UClass>(0x0068, true);                    // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<UEnvQueryGenerator>                         Generators                                                     => _offGenerators.GetValue();
	public UClass                                             ForcedItemType                                                 => _offForcedItemType.GetValue();
	#endregion


}

// Class AIModule.EnvQueryGenerator_ProjectedPoints
// 0x0037 (0x0080 - 0x0049)
public class UEnvQueryGenerator_ProjectedPoints : UEnvQueryGenerator
{
	#region Offsets
	private ExternalOffset<FEnvTraceData>                     _offProjectionData                                             = new ExternalOffset<FEnvTraceData>(0x0050, false);            // 0x0050(0x0030) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FEnvTraceData                                      ProjectionData                                                 => _offProjectionData.GetValue();
	#endregion


}

// Class AIModule.EnvQueryGenerator_Cone
// 0x00C9 (0x0149 - 0x0080)
public class UEnvQueryGenerator_Cone : UEnvQueryGenerator_ProjectedPoints
{
	#region Offsets
	private ExternalOffset<FAIDataProviderFloatValue>         _offAlignedPointsDistance                                      = new ExternalOffset<FAIDataProviderFloatValue>(0x0080, false); // 0x0080(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FAIDataProviderFloatValue>         _offConeDegrees                                                = new ExternalOffset<FAIDataProviderFloatValue>(0x00B0, false); // 0x00B0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FAIDataProviderFloatValue>         _offAngleStep                                                  = new ExternalOffset<FAIDataProviderFloatValue>(0x00E0, false); // 0x00E0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FAIDataProviderFloatValue>         _offRange                                                      = new ExternalOffset<FAIDataProviderFloatValue>(0x0110, false); // 0x0110(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<UClass>                            _offCenterActor                                                = new ExternalOffset<UClass>(0x0140, true);                    // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbIncludeContextLocation                                    = new ExternalOffset<char>(0x0148, false);                     // 0x0148(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FAIDataProviderFloatValue                          AlignedPointsDistance                                          => _offAlignedPointsDistance.GetValue();
	public FAIDataProviderFloatValue                          ConeDegrees                                                    => _offConeDegrees.GetValue();
	public FAIDataProviderFloatValue                          AngleStep                                                      => _offAngleStep.GetValue();
	public FAIDataProviderFloatValue                          Range                                                          => _offRange.GetValue();
	public UClass                                             CenterActor                                                    => _offCenterActor.GetValue();
	#endregion


}

// Class AIModule.EnvQueryGenerator_CurrentLocation
// 0x000F (0x0058 - 0x0049)
public class UEnvQueryGenerator_CurrentLocation : UEnvQueryGenerator
{
	#region Offsets
	private ExternalOffset<UClass>                            _offQueryContext                                               = new ExternalOffset<UClass>(0x0050, true);                    // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public UClass                                             QueryContext                                                   => _offQueryContext.GetValue();
	#endregion


}

// Class AIModule.EnvQueryGenerator_Donut
// 0x0121 (0x01A1 - 0x0080)
public class UEnvQueryGenerator_Donut : UEnvQueryGenerator_ProjectedPoints
{
	#region Offsets
	private ExternalOffset<FAIDataProviderFloatValue>         _offInnerRadius                                                = new ExternalOffset<FAIDataProviderFloatValue>(0x0080, false); // 0x0080(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<FAIDataProviderFloatValue>         _offOuterRadius                                                = new ExternalOffset<FAIDataProviderFloatValue>(0x00B0, false); // 0x00B0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<FAIDataProviderIntValue>           _offNumberOfRings                                              = new ExternalOffset<FAIDataProviderIntValue>(0x00E0, false);  // 0x00E0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<FAIDataProviderIntValue>           _offPointsPerRing                                              = new ExternalOffset<FAIDataProviderIntValue>(0x0110, false);  // 0x0110(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<FEnvDirection>                     _offArcDirection                                               = new ExternalOffset<FEnvDirection>(0x0140, false);            // 0x0140(0x0020) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FAIDataProviderFloatValue>         _offArcAngle                                                   = new ExternalOffset<FAIDataProviderFloatValue>(0x0160, false); // 0x0160(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbUseSpiralPattern                                          = new ExternalOffset<byte/*(bool)*/>(0x0190);                  // 0x0190(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offCenter                                                     = new ExternalOffset<UClass>(0x0198, true);                    // 0x0198(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbDefineArc                                                 = new ExternalOffset<char>(0x01A0, false);                     // 0x01A0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FAIDataProviderFloatValue                          InnerRadius                                                    => _offInnerRadius.GetValue();
	public FAIDataProviderFloatValue                          OuterRadius                                                    => _offOuterRadius.GetValue();
	public FAIDataProviderIntValue                            NumberOfRings                                                  => _offNumberOfRings.GetValue();
	public FAIDataProviderIntValue                            PointsPerRing                                                  => _offPointsPerRing.GetValue();
	public FEnvDirection                                      ArcDirection                                                   => _offArcDirection.GetValue();
	public FAIDataProviderFloatValue                          ArcAngle                                                       => _offArcAngle.GetValue();
	public byte/*(bool)*/                                     bUseSpiralPattern                                              => _offbUseSpiralPattern.GetValue();
	public UClass                                             Center                                                         => _offCenter.GetValue();
	#endregion


}

// Class AIModule.EnvQueryGenerator_OnCircle
// 0x0161 (0x01E1 - 0x0080)
public class UEnvQueryGenerator_OnCircle : UEnvQueryGenerator_ProjectedPoints
{
	#region Offsets
	private ExternalOffset<FAIDataProviderFloatValue>         _offCircleRadius                                               = new ExternalOffset<FAIDataProviderFloatValue>(0x0080, false); // 0x0080(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<FAIDataProviderFloatValue>         _offSpaceBetween                                               = new ExternalOffset<FAIDataProviderFloatValue>(0x00B0, false); // 0x00B0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<FAIDataProviderIntValue>           _offNumberOfPoints                                             = new ExternalOffset<FAIDataProviderIntValue>(0x00E0, false);  // 0x00E0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<EPointOnCircleSpacingMethod>       _offPointOnCircleSpacingMethod                                 = new ExternalOffset<EPointOnCircleSpacingMethod>(0x0110, false); // 0x0110(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FEnvDirection>                     _offArcDirection                                               = new ExternalOffset<FEnvDirection>(0x0118, false);            // 0x0118(0x0020) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FAIDataProviderFloatValue>         _offArcAngle                                                   = new ExternalOffset<FAIDataProviderFloatValue>(0x0138, false); // 0x0138(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offAngleRadians                                               = new ExternalOffset<float>(0x0168);                           // 0x0168(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offCircleCenter                                               = new ExternalOffset<UClass>(0x0170, true);                    // 0x0170(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbIgnoreAnyContextActorsWhenGeneratingCircle                = new ExternalOffset<byte/*(bool)*/>(0x0178);                  // 0x0178(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FAIDataProviderFloatValue>         _offCircleCenterZOffset                                        = new ExternalOffset<FAIDataProviderFloatValue>(0x0180, false); // 0x0180(0x0030) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<FEnvTraceData>                     _offTraceData                                                  = new ExternalOffset<FEnvTraceData>(0x01B0, false);            // 0x01B0(0x0030) (Edit, NoDestructor, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbDefineArc                                                 = new ExternalOffset<char>(0x01E0, false);                     // 0x01E0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FAIDataProviderFloatValue                          CircleRadius                                                   => _offCircleRadius.GetValue();
	public FAIDataProviderFloatValue                          SpaceBetween                                                   => _offSpaceBetween.GetValue();
	public FAIDataProviderIntValue                            NumberOfPoints                                                 => _offNumberOfPoints.GetValue();
	public EPointOnCircleSpacingMethod                        PointOnCircleSpacingMethod                                     => _offPointOnCircleSpacingMethod.GetValue();
	public FEnvDirection                                      ArcDirection                                                   => _offArcDirection.GetValue();
	public FAIDataProviderFloatValue                          ArcAngle                                                       => _offArcAngle.GetValue();
	public float                                              AngleRadians                                                   => _offAngleRadians.GetValue();
	public UClass                                             CircleCenter                                                   => _offCircleCenter.GetValue();
	public byte/*(bool)*/                                     bIgnoreAnyContextActorsWhenGeneratingCircle                    => _offbIgnoreAnyContextActorsWhenGeneratingCircle.GetValue();
	public FAIDataProviderFloatValue                          CircleCenterZOffset                                            => _offCircleCenterZOffset.GetValue();
	public FEnvTraceData                                      TraceData                                                      => _offTraceData.GetValue();
	#endregion


}

// Class AIModule.EnvQueryGenerator_SimpleGrid
// 0x0068 (0x00E8 - 0x0080)
public class UEnvQueryGenerator_SimpleGrid : UEnvQueryGenerator_ProjectedPoints
{
	#region Offsets
	private ExternalOffset<FAIDataProviderFloatValue>         _offGridSize                                                   = new ExternalOffset<FAIDataProviderFloatValue>(0x0080, false); // 0x0080(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<FAIDataProviderFloatValue>         _offSpaceBetween                                               = new ExternalOffset<FAIDataProviderFloatValue>(0x00B0, false); // 0x00B0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offGenerateAround                                             = new ExternalOffset<UClass>(0x00E0, true);                    // 0x00E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FAIDataProviderFloatValue                          GridSize                                                       => _offGridSize.GetValue();
	public FAIDataProviderFloatValue                          SpaceBetween                                                   => _offSpaceBetween.GetValue();
	public UClass                                             GenerateAround                                                 => _offGenerateAround.GetValue();
	#endregion


}

// Class AIModule.EnvQueryGenerator_PathingGrid
// 0x0068 (0x0150 - 0x00E8)
public class UEnvQueryGenerator_PathingGrid : UEnvQueryGenerator_SimpleGrid
{
	#region Offsets
	private ExternalOffset<FAIDataProviderBoolValue>          _offPathToItem                                                 = new ExternalOffset<FAIDataProviderBoolValue>(0x00E8, false); // 0x00E8(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offNavigationFilter                                           = new ExternalOffset<UClass>(0x0118, true);                    // 0x0118(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FAIDataProviderFloatValue>         _offScanRangeMultiplier                                        = new ExternalOffset<FAIDataProviderFloatValue>(0x0120, false); // 0x0120(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FAIDataProviderBoolValue                           PathToItem                                                     => _offPathToItem.GetValue();
	public UClass                                             NavigationFilter                                               => _offNavigationFilter.GetValue();
	public FAIDataProviderFloatValue                          ScanRangeMultiplier                                            => _offScanRangeMultiplier.GetValue();
	#endregion


}

// Class AIModule.EnvQueryInstanceBlueprintWrapper
// 0x0050 (0x0078 - 0x0028)
public class UEnvQueryInstanceBlueprintWrapper : UObject
{
	#region Offsets
	private ExternalOffset<int>                               _offQueryID                                                    = new ExternalOffset<int>(0x0030);                             // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UClass>                            _offItemType                                                   = new ExternalOffset<UClass>(0x0058, true);                    // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<int>                               _offOptionIndex                                                = new ExternalOffset<int>(0x0060);                             // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnQueryFinishedEvent                                       = new ExternalOffset<FScriptMulticastDelegate>(0x0068, false); // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public int                                                QueryID                                                        => _offQueryID.GetValue();
	public UClass                                             ItemType                                                       => _offItemType.GetValue();
	public int                                                OptionIndex                                                    => _offOptionIndex.GetValue();
	public FScriptMulticastDelegate                           OnQueryFinishedEvent                                           => _offOnQueryFinishedEvent.GetValue();
	#endregion


}

// Class AIModule.EnvQueryItemType
// 0x0000 (0x0028 - 0x0028)
public class UEnvQueryItemType : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.EnvQueryItemType_VectorBase
// 0x0008 (0x0030 - 0x0028)
public class UEnvQueryItemType_VectorBase : UEnvQueryItemType
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.EnvQueryItemType_ActorBase
// 0x0000 (0x0030 - 0x0030)
public class UEnvQueryItemType_ActorBase : UEnvQueryItemType_VectorBase
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.EnvQueryItemType_Actor
// 0x0000 (0x0030 - 0x0030)
public class UEnvQueryItemType_Actor : UEnvQueryItemType_ActorBase
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.EnvQueryItemType_Direction
// 0x0000 (0x0030 - 0x0030)
public class UEnvQueryItemType_Direction : UEnvQueryItemType_VectorBase
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.EnvQueryItemType_Point
// 0x0000 (0x0030 - 0x0030)
public class UEnvQueryItemType_Point : UEnvQueryItemType_VectorBase
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.EnvQueryManager
// 0x0108 (0x0140 - 0x0038)
public class UEnvQueryManager : UAISubsystem
{
	#region Offsets
	private ExternalOffset<TArray<FEnvQueryInstanceCache>>    _offInstanceCache                                              = new ExternalOffset<TArray<FEnvQueryInstanceCache>>(0x00A8, false); // 0x00A8(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<UEnvQueryContext>>          _offLocalContexts                                              = new ExternalOffset<TArray<UEnvQueryContext>>(0x00B8, false); // 0x00B8(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<UEnvQueryInstanceBlueprintWrapper>> _offGCShieldedWrappers                                         = new ExternalOffset<TArray<UEnvQueryInstanceBlueprintWrapper>>(0x00C8, false); // 0x00C8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offMaxAllowedTestingTime                                      = new ExternalOffset<float>(0x012C);                           // 0x012C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbTestQueriesUsingBreadth                                   = new ExternalOffset<byte/*(bool)*/>(0x0130);                  // 0x0130(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<int>                               _offQueryCountWarningThreshold                                 = new ExternalOffset<int>(0x0134);                             // 0x0134(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<double>                            _offQueryCountWarningInterval                                  = new ExternalOffset<double>(0x0138, false);                   // 0x0138(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public TArray<FEnvQueryInstanceCache>                     InstanceCache                                                  => _offInstanceCache.GetValue();
	public TArray<UEnvQueryContext>                           LocalContexts                                                  => _offLocalContexts.GetValue();
	public TArray<UEnvQueryInstanceBlueprintWrapper>          GCShieldedWrappers                                             => _offGCShieldedWrappers.GetValue();
	public float                                              MaxAllowedTestingTime                                          => _offMaxAllowedTestingTime.GetValue();
	public byte/*(bool)*/                                     bTestQueriesUsingBreadth                                       => _offbTestQueriesUsingBreadth.GetValue();
	public int                                                QueryCountWarningThreshold                                     => _offQueryCountWarningThreshold.GetValue();
	public double                                             QueryCountWarningInterval                                      => _offQueryCountWarningInterval.GetValue();
	#endregion


}

// Class AIModule.EnvQueryOption
// 0x0018 (0x0040 - 0x0028)
public class UEnvQueryOption : UObject
{
	#region Offsets
	private ExternalOffset<UEnvQueryGenerator>                _offGenerator                                                  = new ExternalOffset<UEnvQueryGenerator>(0x0028, true);        // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UEnvQueryTest>>             _offTests                                                      = new ExternalOffset<TArray<UEnvQueryTest>>(0x0030, false);    // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UEnvQueryGenerator                                 Generator                                                      => _offGenerator.GetValue();
	public TArray<UEnvQueryTest>                              Tests                                                          => _offTests.GetValue();
	#endregion


}

// Class AIModule.EnvQueryTest
// 0x018D (0x01B9 - 0x002C)
public class UEnvQueryTest : UEnvQueryNode
{
	#region Offsets
	private ExternalOffset<int>                               _offTestOrder                                                  = new ExternalOffset<int>(0x0030);                             // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EEnvTestPurpose>>      _offTestPurpose                                                = new ExternalOffset<TEnumAsByte<EEnvTestPurpose>>(0x0034, false); // 0x0034(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                           _offTestComment                                                = new ExternalOffset<FString>(0x0038, false);                  // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EEnvTestFilterOperator>> _offMultipleContextFilterOp                                    = new ExternalOffset<TEnumAsByte<EEnvTestFilterOperator>>(0x0048, false); // 0x0048(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EEnvTestScoreOperator>> _offMultipleContextScoreOp                                     = new ExternalOffset<TEnumAsByte<EEnvTestScoreOperator>>(0x0049, false); // 0x0049(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EEnvTestFilterType>>   _offFilterType                                                 = new ExternalOffset<TEnumAsByte<EEnvTestFilterType>>(0x004A, false); // 0x004A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FAIDataProviderBoolValue>          _offBoolValue                                                  = new ExternalOffset<FAIDataProviderBoolValue>(0x0050, false); // 0x0050(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<FAIDataProviderFloatValue>         _offFloatValueMin                                              = new ExternalOffset<FAIDataProviderFloatValue>(0x0080, false); // 0x0080(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<FAIDataProviderFloatValue>         _offFloatValueMax                                              = new ExternalOffset<FAIDataProviderFloatValue>(0x00B0, false); // 0x00B0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EEnvTestScoreEquation>> _offScoringEquation                                            = new ExternalOffset<TEnumAsByte<EEnvTestScoreEquation>>(0x00E1, false); // 0x00E1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EEnvQueryTestClamping>> _offClampMinType                                               = new ExternalOffset<TEnumAsByte<EEnvQueryTestClamping>>(0x00E2, false); // 0x00E2(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EEnvQueryTestClamping>> _offClampMaxType                                               = new ExternalOffset<TEnumAsByte<EEnvQueryTestClamping>>(0x00E3, false); // 0x00E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EEQSNormalizationType>             _offNormalizationType                                          = new ExternalOffset<EEQSNormalizationType>(0x00E4, false);    // 0x00E4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FAIDataProviderFloatValue>         _offScoreClampMin                                              = new ExternalOffset<FAIDataProviderFloatValue>(0x00E8, false); // 0x00E8(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<FAIDataProviderFloatValue>         _offScoreClampMax                                              = new ExternalOffset<FAIDataProviderFloatValue>(0x0118, false); // 0x0118(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<FAIDataProviderFloatValue>         _offScoringFactor                                              = new ExternalOffset<FAIDataProviderFloatValue>(0x0148, false); // 0x0148(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<FAIDataProviderFloatValue>         _offReferenceValue                                             = new ExternalOffset<FAIDataProviderFloatValue>(0x0178, false); // 0x0178(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbDefineReferenceValue                                      = new ExternalOffset<byte/*(bool)*/>(0x01A8);                  // 0x01A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbWorkOnFloatValues                                         = new ExternalOffset<char>(0x01B8, false);                     // 0x01B8(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public int                                                TestOrder                                                      => _offTestOrder.GetValue();
	public TEnumAsByte<EEnvTestPurpose>                       TestPurpose                                                    => _offTestPurpose.GetValue();
	public FString                                            TestComment                                                    => _offTestComment.GetValue();
	public TEnumAsByte<EEnvTestFilterOperator>                MultipleContextFilterOp                                        => _offMultipleContextFilterOp.GetValue();
	public TEnumAsByte<EEnvTestScoreOperator>                 MultipleContextScoreOp                                         => _offMultipleContextScoreOp.GetValue();
	public TEnumAsByte<EEnvTestFilterType>                    FilterType                                                     => _offFilterType.GetValue();
	public FAIDataProviderBoolValue                           BoolValue                                                      => _offBoolValue.GetValue();
	public FAIDataProviderFloatValue                          FloatValueMin                                                  => _offFloatValueMin.GetValue();
	public FAIDataProviderFloatValue                          FloatValueMax                                                  => _offFloatValueMax.GetValue();
	public TEnumAsByte<EEnvTestScoreEquation>                 ScoringEquation                                                => _offScoringEquation.GetValue();
	public TEnumAsByte<EEnvQueryTestClamping>                 ClampMinType                                                   => _offClampMinType.GetValue();
	public TEnumAsByte<EEnvQueryTestClamping>                 ClampMaxType                                                   => _offClampMaxType.GetValue();
	public EEQSNormalizationType                              NormalizationType                                              => _offNormalizationType.GetValue();
	public FAIDataProviderFloatValue                          ScoreClampMin                                                  => _offScoreClampMin.GetValue();
	public FAIDataProviderFloatValue                          ScoreClampMax                                                  => _offScoreClampMax.GetValue();
	public FAIDataProviderFloatValue                          ScoringFactor                                                  => _offScoringFactor.GetValue();
	public FAIDataProviderFloatValue                          ReferenceValue                                                 => _offReferenceValue.GetValue();
	public byte/*(bool)*/                                     bDefineReferenceValue                                          => _offbDefineReferenceValue.GetValue();
	#endregion


}

// Class AIModule.EnvQueryTest_Distance
// 0x0017 (0x01D0 - 0x01B9)
public class UEnvQueryTest_Distance : UEnvQueryTest
{
	#region Offsets
	private ExternalOffset<TEnumAsByte<EEnvTestDistance>>     _offTestMode                                                   = new ExternalOffset<TEnumAsByte<EEnvTestDistance>>(0x01C0, false); // 0x01C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offDistanceTo                                                 = new ExternalOffset<UClass>(0x01C8, true);                    // 0x01C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TEnumAsByte<EEnvTestDistance>                      TestMode                                                       => _offTestMode.GetValue();
	public UClass                                             DistanceTo                                                     => _offDistanceTo.GetValue();
	#endregion


}

// Class AIModule.EnvQueryTest_Dot
// 0x0049 (0x0202 - 0x01B9)
public class UEnvQueryTest_Dot : UEnvQueryTest
{
	#region Offsets
	private ExternalOffset<FEnvDirection>                     _offLineA                                                      = new ExternalOffset<FEnvDirection>(0x01C0, false);            // 0x01C0(0x0020) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FEnvDirection>                     _offLineB                                                      = new ExternalOffset<FEnvDirection>(0x01E0, false);            // 0x01E0(0x0020) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<EEnvTestDot>                       _offTestMode                                                   = new ExternalOffset<EEnvTestDot>(0x0200, false);              // 0x0200(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbAbsoluteValue                                             = new ExternalOffset<byte/*(bool)*/>(0x0201);                  // 0x0201(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FEnvDirection                                      LineA                                                          => _offLineA.GetValue();
	public FEnvDirection                                      LineB                                                          => _offLineB.GetValue();
	public EEnvTestDot                                        TestMode                                                       => _offTestMode.GetValue();
	public byte/*(bool)*/                                     bAbsoluteValue                                                 => _offbAbsoluteValue.GetValue();
	#endregion


}

// Class AIModule.EnvQueryTest_GameplayTags
// 0x0077 (0x0230 - 0x01B9)
public class UEnvQueryTest_GameplayTags : UEnvQueryTest
{
	#region Offsets
	private ExternalOffset<FGameplayTagQuery>                 _offTagQueryToMatch                                            = new ExternalOffset<FGameplayTagQuery>(0x01C0, false);        // 0x01C0(0x0048) (Edit, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<byte/*(bool)*/>                    _offbUpdatedToUseQuery                                         = new ExternalOffset<byte/*(bool)*/>(0x0208);                  // 0x0208(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<EGameplayContainerMatchType>       _offTagsToMatch                                                = new ExternalOffset<EGameplayContainerMatchType>(0x0209, false); // 0x0209(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FGameplayTagContainer>             _offGameplayTags                                               = new ExternalOffset<FGameplayTagContainer>(0x0210, false);    // 0x0210(0x0020) (Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FGameplayTagQuery                                  TagQueryToMatch                                                => _offTagQueryToMatch.GetValue();
	public byte/*(bool)*/                                     bUpdatedToUseQuery                                             => _offbUpdatedToUseQuery.GetValue();
	public EGameplayContainerMatchType                        TagsToMatch                                                    => _offTagsToMatch.GetValue();
	public FGameplayTagContainer                              GameplayTags                                                   => _offGameplayTags.GetValue();
	#endregion


}

// Class AIModule.EnvQueryTest_Overlap
// 0x0027 (0x01E0 - 0x01B9)
public class UEnvQueryTest_Overlap : UEnvQueryTest
{
	#region Offsets
	private ExternalOffset<FEnvOverlapData>                   _offOverlapData                                                = new ExternalOffset<FEnvOverlapData>(0x01C0, false);          // 0x01C0(0x0020) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FEnvOverlapData                                    OverlapData                                                    => _offOverlapData.GetValue();
	#endregion


}

// Class AIModule.EnvQueryTest_Pathfinding
// 0x007F (0x0238 - 0x01B9)
public class UEnvQueryTest_Pathfinding : UEnvQueryTest
{
	#region Offsets
	private ExternalOffset<TEnumAsByte<EEnvTestPathfinding>>  _offTestMode                                                   = new ExternalOffset<TEnumAsByte<EEnvTestPathfinding>>(0x01C0, false); // 0x01C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offContext                                                    = new ExternalOffset<UClass>(0x01C8, true);                    // 0x01C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FAIDataProviderBoolValue>          _offPathFromContext                                            = new ExternalOffset<FAIDataProviderBoolValue>(0x01D0, false); // 0x01D0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<FAIDataProviderBoolValue>          _offSkipUnreachable                                            = new ExternalOffset<FAIDataProviderBoolValue>(0x0200, false); // 0x0200(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offFilterClass                                                = new ExternalOffset<UClass>(0x0230, true);                    // 0x0230(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TEnumAsByte<EEnvTestPathfinding>                   TestMode                                                       => _offTestMode.GetValue();
	public UClass                                             Context                                                        => _offContext.GetValue();
	public FAIDataProviderBoolValue                           PathFromContext                                                => _offPathFromContext.GetValue();
	public FAIDataProviderBoolValue                           SkipUnreachable                                                => _offSkipUnreachable.GetValue();
	public UClass                                             FilterClass                                                    => _offFilterClass.GetValue();
	#endregion


}

// Class AIModule.EnvQueryTest_PathfindingBatch
// 0x0030 (0x0268 - 0x0238)
public class UEnvQueryTest_PathfindingBatch : UEnvQueryTest_Pathfinding
{
	#region Offsets
	private ExternalOffset<FAIDataProviderFloatValue>         _offScanRangeMultiplier                                        = new ExternalOffset<FAIDataProviderFloatValue>(0x0238, false); // 0x0238(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FAIDataProviderFloatValue                          ScanRangeMultiplier                                            => _offScanRangeMultiplier.GetValue();
	#endregion


}

// Class AIModule.EnvQueryTest_Project
// 0x0037 (0x01F0 - 0x01B9)
public class UEnvQueryTest_Project : UEnvQueryTest
{
	#region Offsets
	private ExternalOffset<FEnvTraceData>                     _offProjectionData                                             = new ExternalOffset<FEnvTraceData>(0x01C0, false);            // 0x01C0(0x0030) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FEnvTraceData                                      ProjectionData                                                 => _offProjectionData.GetValue();
	#endregion


}

// Class AIModule.EnvQueryTest_Random
// 0x0007 (0x01C0 - 0x01B9)
public class UEnvQueryTest_Random : UEnvQueryTest
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.EnvQueryTest_Trace
// 0x00CF (0x0288 - 0x01B9)
public class UEnvQueryTest_Trace : UEnvQueryTest
{
	#region Offsets
	private ExternalOffset<FEnvTraceData>                     _offTraceData                                                  = new ExternalOffset<FEnvTraceData>(0x01C0, false);            // 0x01C0(0x0030) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FAIDataProviderBoolValue>          _offTraceFromContext                                           = new ExternalOffset<FAIDataProviderBoolValue>(0x01F0, false); // 0x01F0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<FAIDataProviderFloatValue>         _offItemHeightOffset                                           = new ExternalOffset<FAIDataProviderFloatValue>(0x0220, false); // 0x0220(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
	private ExternalOffset<FAIDataProviderFloatValue>         _offContextHeightOffset                                        = new ExternalOffset<FAIDataProviderFloatValue>(0x0250, false); // 0x0250(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                            _offContext                                                    = new ExternalOffset<UClass>(0x0280, true);                    // 0x0280(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FEnvTraceData                                      TraceData                                                      => _offTraceData.GetValue();
	public FAIDataProviderBoolValue                           TraceFromContext                                               => _offTraceFromContext.GetValue();
	public FAIDataProviderFloatValue                          ItemHeightOffset                                               => _offItemHeightOffset.GetValue();
	public FAIDataProviderFloatValue                          ContextHeightOffset                                            => _offContextHeightOffset.GetValue();
	public UClass                                             Context                                                        => _offContext.GetValue();
	#endregion


}

// Class AIModule.EnvQueryTest_Volume
// 0x0018 (0x01D1 - 0x01B9)
public class UEnvQueryTest_Volume : UEnvQueryTest
{
	#region Offsets
	private ExternalOffset<UClass>                            _offVolumeContext                                              = new ExternalOffset<UClass>(0x01C0, true);                    // 0x01C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UClass>                            _offVolumeClass                                                = new ExternalOffset<UClass>(0x01C8, true);                    // 0x01C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
//	private ExternalOffset<char>                              _offbDoComplexVolumeTest                                       = new ExternalOffset<char>(0x01D0, false);                     // 0x01D0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UClass                                             VolumeContext                                                  => _offVolumeContext.GetValue();
	public UClass                                             VolumeClass                                                    => _offVolumeClass.GetValue();
	#endregion


}

// Class AIModule.EnvQueryTypes
// 0x0000 (0x0028 - 0x0028)
public class UEnvQueryTypes : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.EQSQueryResultSourceInterface
// 0x0000 (0x0028 - 0x0028)
public class UEQSQueryResultSourceInterface : UInterface
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.EQSRenderingComponent
// 0x000B (0x0410 - 0x0405)
public class UEQSRenderingComponent : UPrimitiveComponent
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.EQSTestingPawn
// 0x0078 (0x06D0 - 0x0658)
public class AEQSTestingPawn : ACharacter
{
	#region Offsets
	private ExternalOffset<UEnvQuery>                         _offQueryTemplate                                              = new ExternalOffset<UEnvQuery>(0x0660, true);                 // 0x0660(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FEnvNamedValue>>            _offQueryParams                                                = new ExternalOffset<TArray<FEnvNamedValue>>(0x0668, false);   // 0x0668(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FAIDynamicParam>>           _offQueryConfig                                                = new ExternalOffset<TArray<FAIDynamicParam>>(0x0678, false);  // 0x0678(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offTimeLimitPerStep                                           = new ExternalOffset<float>(0x0688);                           // 0x0688(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offStepToDebugDraw                                            = new ExternalOffset<int>(0x068C);                             // 0x068C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EEnvQueryHightlightMode>           _offHighlightMode                                              = new ExternalOffset<EEnvQueryHightlightMode>(0x0690, false);  // 0x0690(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbDrawLabels                                                = new ExternalOffset<char>(0x0694, false);                     // 0x0694(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbDrawFailedItems                                           = new ExternalOffset<char>(0x0694, false);                     // 0x0694(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbReRunQueryOnlyOnFinishedMove                              = new ExternalOffset<char>(0x0694, false);                     // 0x0694(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbShouldBeVisibleInGame                                     = new ExternalOffset<char>(0x0694, false);                     // 0x0694(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbTickDuringGame                                            = new ExternalOffset<char>(0x0694, false);                     // 0x0694(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EEnvQueryRunMode>>     _offQueryingMode                                               = new ExternalOffset<TEnumAsByte<EEnvQueryRunMode>>(0x0698, false); // 0x0698(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FNavAgentProperties>               _offNavAgentProperties                                         = new ExternalOffset<FNavAgentProperties>(0x06A0, false);      // 0x06A0(0x0030) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UEnvQuery                                          QueryTemplate                                                  => _offQueryTemplate.GetValue();
	public TArray<FEnvNamedValue>                             QueryParams                                                    => _offQueryParams.GetValue();
	public TArray<FAIDynamicParam>                            QueryConfig                                                    => _offQueryConfig.GetValue();
	public float                                              TimeLimitPerStep                                               => _offTimeLimitPerStep.GetValue();
	public int                                                StepToDebugDraw                                                => _offStepToDebugDraw.GetValue();
	public EEnvQueryHightlightMode                            HighlightMode                                                  => _offHighlightMode.GetValue();
	public TEnumAsByte<EEnvQueryRunMode>                      QueryingMode                                                   => _offQueryingMode.GetValue();
	public FNavAgentProperties                                NavAgentProperties                                             => _offNavAgentProperties.GetValue();
	#endregion


}

// Class AIModule.GenericTeamAgentInterface
// 0x0000 (0x0028 - 0x0028)
public class UGenericTeamAgentInterface : UInterface
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.GridPathAIController
// 0x0008 (0x0350 - 0x0348)
public class AGridPathAIController : AAIController
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.GridPathFollowingComponent
// 0x0160 (0x0288 - 0x0128)
public class UGridPathFollowingComponent : UPathFollowingComponent
{
	#region Offsets
	private ExternalOffset<UNavLocalGridManager>              _offGridManager                                                = new ExternalOffset<UNavLocalGridManager>(0x0280, true);      // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public UNavLocalGridManager                               GridManager                                                    => _offGridManager.GetValue();
	#endregion


}

// Class AIModule.NavFilter_AIControllerDefault
// 0x0008 (0x0048 - 0x0040)
public class UNavFilter_AIControllerDefault : UNavigationQueryFilter
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.NavLinkProxy
// 0x0060 (0x0298 - 0x0238)
public class ANavLinkProxy : AActor
{
	#region Offsets
	private ExternalOffset<TArray<FNavigationLink>>           _offPointLinks                                                 = new ExternalOffset<TArray<FNavigationLink>>(0x0258, false);  // 0x0258(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FNavigationSegmentLink>>    _offSegmentLinks                                               = new ExternalOffset<TArray<FNavigationSegmentLink>>(0x0268, false); // 0x0268(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<UNavLinkCustomComponent>           _offSmartLinkComp                                              = new ExternalOffset<UNavLinkCustomComponent>(0x0278, true);   // 0x0278(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                    _offbSmartLinkIsRelevant                                       = new ExternalOffset<byte/*(bool)*/>(0x0280);                  // 0x0280(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSmartLinkReached                                         = new ExternalOffset<FScriptMulticastDelegate>(0x0288, false); // 0x0288(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public TArray<FNavigationLink>                            PointLinks                                                     => _offPointLinks.GetValue();
	public TArray<FNavigationSegmentLink>                     SegmentLinks                                                   => _offSegmentLinks.GetValue();
	public UNavLinkCustomComponent                            SmartLinkComp                                                  => _offSmartLinkComp.GetValue();
	public byte/*(bool)*/                                     bSmartLinkIsRelevant                                           => _offbSmartLinkIsRelevant.GetValue();
	public FScriptMulticastDelegate                           OnSmartLinkReached                                             => _offOnSmartLinkReached.GetValue();
	#endregion


}

// Class AIModule.NavLocalGridManager
// 0x0000 (0x0028 - 0x0028)
public class UNavLocalGridManager : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.PathFollowingManager
// 0x0000 (0x0028 - 0x0028)
public class UPathFollowingManager : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.PawnAction
// 0x0059 (0x0081 - 0x0028)
public class UPawnAction : UObject
{
	#region Offsets
	private ExternalOffset<UPawnAction>                       _offChildAction                                                = new ExternalOffset<UPawnAction>(0x0028, true);               // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UPawnAction>                       _offParentAction                                               = new ExternalOffset<UPawnAction>(0x0030, true);               // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UPawnActionsComponent>             _offOwnerComponent                                             = new ExternalOffset<UPawnActionsComponent>(0x0038, true);     // 0x0038(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UObject>                           _offInstigator                                                 = new ExternalOffset<UObject>(0x0040, true);                   // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UBrainComponent>                   _offBrainComp                                                  = new ExternalOffset<UBrainComponent>(0x0048, true);           // 0x0048(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbAllowNewSameClassInstance                                 = new ExternalOffset<char>(0x0080, false);                     // 0x0080(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbReplaceActiveSameClassInstance                            = new ExternalOffset<char>(0x0080, false);                     // 0x0080(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbShouldPauseMovement                                       = new ExternalOffset<char>(0x0080, false);                     // 0x0080(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbAlwaysNotifyOnFinished                                    = new ExternalOffset<char>(0x0080, false);                     // 0x0080(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public UPawnAction                                        ChildAction                                                    => _offChildAction.GetValue();
	public UPawnAction                                        ParentAction                                                   => _offParentAction.GetValue();
	public UPawnActionsComponent                              OwnerComponent                                                 => _offOwnerComponent.GetValue();
	public UObject                                            Instigator                                                     => _offInstigator.GetValue();
	public UBrainComponent                                    BrainComp                                                      => _offBrainComp.GetValue();
	#endregion


}

// Class AIModule.PawnAction_BlueprintBase
// 0x0017 (0x0098 - 0x0081)
public class UPawnAction_BlueprintBase : UPawnAction
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class AIModule.PawnAction_Move
// 0x0038 (0x00B9 - 0x0081)
public class UPawnAction_Move : UPawnAction
{
	#region Offsets
	private ExternalOffset<AActor>                            _offGoalActor                                                  = new ExternalOffset<AActor>(0x0098, true);                    // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FVector>                           _offGoalLocation                                               = new ExternalOffset<FVector>(0x00A0, false);                  // 0x00A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offAcceptableRadius                                           = new ExternalOffset<float>(0x00AC);                           // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<UClass>                            _offFilterClass                                                = new ExternalOffset<UClass>(0x00B0, true);                    // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbAllowStrafe                                               = new ExternalOffset<char>(0x00B8, false);                     // 0x00B8(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbFinishOnOverlap                                           = new ExternalOffset<char>(0x00B8, false);                     // 0x00B8(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbUsePathfinding                                            = new ExternalOffset<char>(0x00B8, false);                     // 0x00B8(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbAllowPartialPath                                          = new ExternalOffset<char>(0x00B8, false);                     // 0x00B8(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbProjectGoalToNavigation                                   = new ExternalOffset<char>(0x00B8, false);                     // 0x00B8(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbUpdatePathToGoal                                          = new ExternalOffset<char>(0x00B8, false);                     // 0x00B8(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                              _offbAbortChildActionOnPathChange                              = new ExternalOffset<char>(0x00B8, false);                     // 0x00B8(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public AActor                                             GoalActor                                                      => _offGoalActor.GetValue();
	public FVector                                            GoalLocation                                                   => _offGoalLocation.GetValue();
	public float                                              AcceptableRadius                                               => _offAcceptableRadius.GetValue();
	public UClass                                             FilterClass                                                    => _offFilterClass.GetValue();
	#endregion


}

// Class AIModule.PawnAction_Repeat
// 0x0028 (0x00A9 - 0x0081)
public class UPawnAction_Repeat : UPawnAction
{
	#region Offsets
	private ExternalOffset<UPawnAction>                       _offActionToRepeat                                             = new ExternalOffset<UPawnAction>(0x0098, true);               // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UPawnAction>                       _offRecentActionCopy                                           = new ExternalOffset<UPawnAction>(0x00A0, true);               // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EPawnActionFailHandling>> _offChildFailureHandlingMode                                   = new ExternalOffset<TEnumAsByte<EPawnActionFailHandling>>(0x00A8, false); // 0x00A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UPawnAction                                        ActionToRepeat                                                 => _offActionToRepeat.GetValue();
	public UPawnAction                                        RecentActionCopy                                               => _offRecentActionCopy.GetValue();
	public TEnumAsByte<EPawnActionFailHandling>               ChildFailureHandlingMode                                       => _offChildFailureHandlingMode.GetValue();
	#endregion


}

// Class AIModule.PawnAction_Sequence
// 0x0037 (0x00B8 - 0x0081)
public class UPawnAction_Sequence : UPawnAction
{
	#region Offsets
	private ExternalOffset<TArray<UPawnAction>>               _offActionSequence                                             = new ExternalOffset<TArray<UPawnAction>>(0x0098, false);      // 0x0098(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EPawnActionFailHandling>> _offChildFailureHandlingMode                                   = new ExternalOffset<TEnumAsByte<EPawnActionFailHandling>>(0x00A8, false); // 0x00A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UPawnAction>                       _offRecentActionCopy                                           = new ExternalOffset<UPawnAction>(0x00B0, true);               // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<UPawnAction>                                ActionSequence                                                 => _offActionSequence.GetValue();
	public TEnumAsByte<EPawnActionFailHandling>               ChildFailureHandlingMode                                       => _offChildFailureHandlingMode.GetValue();
	public UPawnAction                                        RecentActionCopy                                               => _offRecentActionCopy.GetValue();
	#endregion


}

// Class AIModule.PawnAction_Wait
// 0x001B (0x009C - 0x0081)
public class UPawnAction_Wait : UPawnAction
{
	#region Offsets
	private ExternalOffset<float>                             _offTimeToWait                                                 = new ExternalOffset<float>(0x0098);                           // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                              TimeToWait                                                     => _offTimeToWait.GetValue();
	#endregion


}

// Class AIModule.PawnActionsComponent
// 0x0040 (0x0108 - 0x00C8)
public class UPawnActionsComponent : UActorComponent
{
	#region Offsets
	private ExternalOffset<APawn>                             _offControlledPawn                                             = new ExternalOffset<APawn>(0x00D8, true);                     // 0x00D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<FPawnActionStack>>          _offActionStacks                                               = new ExternalOffset<TArray<FPawnActionStack>>(0x00E0, false); // 0x00E0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<FPawnActionEvent>>          _offActionEvents                                               = new ExternalOffset<TArray<FPawnActionEvent>>(0x00F0, false); // 0x00F0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<UPawnAction>                       _offCurrentAction                                              = new ExternalOffset<UPawnAction>(0x0100, true);               // 0x0100(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public APawn                                              ControlledPawn                                                 => _offControlledPawn.GetValue();
	public TArray<FPawnActionStack>                           ActionStacks                                                   => _offActionStacks.GetValue();
	public TArray<FPawnActionEvent>                           ActionEvents                                                   => _offActionEvents.GetValue();
	public UPawnAction                                        CurrentAction                                                  => _offCurrentAction.GetValue();
	#endregion


}

// Class AIModule.PawnSensingComponent
// 0x0058 (0x0120 - 0x00C8)
public class UPawnSensingComponent : UActorComponent
{
	#region Offsets
	private ExternalOffset<float>                             _offHearingThreshold                                           = new ExternalOffset<float>(0x00D8);                           // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offLOSHearingThreshold                                        = new ExternalOffset<float>(0x00DC);                           // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offSightRadius                                                = new ExternalOffset<float>(0x00E0);                           // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offSensingInterval                                            = new ExternalOffset<float>(0x00E4);                           // 0x00E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offHearingMaxSoundAge                                         = new ExternalOffset<float>(0x00E8);                           // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbEnableSensingUpdates                                      = new ExternalOffset<char>(0x00EC, false);                     // 0x00EC(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbOnlySensePlayers                                          = new ExternalOffset<char>(0x00EC, false);                     // 0x00EC(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbSeePawns                                                  = new ExternalOffset<char>(0x00EC, false);                     // 0x00EC(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                              _offbHearNoises                                                = new ExternalOffset<char>(0x00EC, false);                     // 0x00EC(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnSeePawn                                                  = new ExternalOffset<FScriptMulticastDelegate>(0x00F8, false); // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<FScriptMulticastDelegate>          _offOnHearNoise                                                = new ExternalOffset<FScriptMulticastDelegate>(0x0108, false); // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                             _offPeripheralVisionAngle                                      = new ExternalOffset<float>(0x0118);                           // 0x0118(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                             _offPeripheralVisionCosine                                     = new ExternalOffset<float>(0x011C);                           // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public float                                              HearingThreshold                                               => _offHearingThreshold.GetValue();
	public float                                              LOSHearingThreshold                                            => _offLOSHearingThreshold.GetValue();
	public float                                              SightRadius                                                    => _offSightRadius.GetValue();
	public float                                              SensingInterval                                                => _offSensingInterval.GetValue();
	public float                                              HearingMaxSoundAge                                             => _offHearingMaxSoundAge.GetValue();
	public FScriptMulticastDelegate                           OnSeePawn                                                      => _offOnSeePawn.GetValue();
	public FScriptMulticastDelegate                           OnHearNoise                                                    => _offOnHearNoise.GetValue();
	public float                                              PeripheralVisionAngle                                          => _offPeripheralVisionAngle.GetValue();
	public float                                              PeripheralVisionCosine                                         => _offPeripheralVisionCosine.GetValue();
	#endregion


}

// Class AIModule.VisualLoggerExtension
// 0x0000 (0x0028 - 0x0028)
public class UVisualLoggerExtension : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}


}