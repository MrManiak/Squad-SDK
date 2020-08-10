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

// Enum GameplayAbilities.EGameplayAbilityActivationMode
public enum EGameplayAbilityActivationMode : byte
{
	EGameplayAbilityActivationMode__Authority = 0,
	EGameplayAbilityActivationMode__NonAuthority = 1,
	EGameplayAbilityActivationMode__Predicting = 2,
	EGameplayAbilityActivationMode__Confirmed = 3,
	EGameplayAbilityActivationMode__Rejected = 4,
	EGameplayAbilityActivationMode__EGameplayAbilityActivationMode_MAX = 5
}

// Enum GameplayAbilities.EAbilityGenericReplicatedEvent
public enum EAbilityGenericReplicatedEvent : byte
{
	EAbilityGenericReplicatedEvent__GenericConfirm = 0,
	EAbilityGenericReplicatedEvent__GenericCancel = 1,
	EAbilityGenericReplicatedEvent__InputPressed = 2,
	EAbilityGenericReplicatedEvent__InputReleased = 3,
	EAbilityGenericReplicatedEvent__GenericSignalFromClient = 4,
	EAbilityGenericReplicatedEvent__GenericSignalFromServer = 5,
	EAbilityGenericReplicatedEvent__GameCustom1 = 6,
	EAbilityGenericReplicatedEvent__GameCustom2 = 7,
	EAbilityGenericReplicatedEvent__GameCustom3 = 8,
	EAbilityGenericReplicatedEvent__GameCustom4 = 9,
	EAbilityGenericReplicatedEvent__GameCustom5 = 10,
	EAbilityGenericReplicatedEvent__GameCustom6 = 11,
	EAbilityGenericReplicatedEvent__MAX = 12
}

// Enum GameplayAbilities.EGameplayEffectReplicationMode
public enum EGameplayEffectReplicationMode : byte
{
	EGameplayEffectReplicationMode__Minimal = 0,
	EGameplayEffectReplicationMode__Mixed = 1,
	EGameplayEffectReplicationMode__Full = 2,
	EGameplayEffectReplicationMode__EGameplayEffectReplicationMode_MAX = 3
}

// Enum GameplayAbilities.EAbilityTaskWaitState
public enum EAbilityTaskWaitState : byte
{
	EAbilityTaskWaitState__WaitingOnGame = 0,
	EAbilityTaskWaitState__WaitingOnUser = 1,
	EAbilityTaskWaitState__WaitingOnAvatar = 2,
	EAbilityTaskWaitState__EAbilityTaskWaitState_MAX = 3
}

// Enum GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
public enum ERootMotionMoveToActorTargetOffsetType : byte
{
	ERootMotionMoveToActorTargetOffsetType__AlignFromTargetToSource = 0,
	ERootMotionMoveToActorTargetOffsetType__AlignToTargetForward = 1,
	ERootMotionMoveToActorTargetOffsetType__AlignToWorldSpace = 2,
	ERootMotionMoveToActorTargetOffsetType__ERootMotionMoveToActorTargetOffsetType_MAX = 3
}

// Enum GameplayAbilities.EAbilityTaskNetSyncType
public enum EAbilityTaskNetSyncType : byte
{
	EAbilityTaskNetSyncType__BothWait = 0,
	EAbilityTaskNetSyncType__OnlyServerWait = 1,
	EAbilityTaskNetSyncType__OnlyClientWait = 2,
	EAbilityTaskNetSyncType__EAbilityTaskNetSyncType_MAX = 3
}

// Enum GameplayAbilities.EWaitAttributeChangeComparison
public enum EWaitAttributeChangeComparison : byte
{
	EWaitAttributeChangeComparison__None = 0,
	EWaitAttributeChangeComparison__GreaterThan = 1,
	EWaitAttributeChangeComparison__LessThan = 2,
	EWaitAttributeChangeComparison__GreaterThanOrEqualTo = 3,
	EWaitAttributeChangeComparison__LessThanOrEqualTo = 4,
	EWaitAttributeChangeComparison__NotEqualTo = 5,
	EWaitAttributeChangeComparison__ExactlyEqualTo = 6,
	EWaitAttributeChangeComparison__MAX = 7
}

// Enum GameplayAbilities.EGameplayAbilityInputBinds
public enum EGameplayAbilityInputBinds : byte
{
	EGameplayAbilityInputBinds__Ability1 = 0,
	EGameplayAbilityInputBinds__Ability2 = 1,
	EGameplayAbilityInputBinds__Ability3 = 2,
	EGameplayAbilityInputBinds__Ability4 = 3,
	EGameplayAbilityInputBinds__Ability5 = 4,
	EGameplayAbilityInputBinds__Ability6 = 5,
	EGameplayAbilityInputBinds__Ability7 = 6,
	EGameplayAbilityInputBinds__Ability8 = 7,
	EGameplayAbilityInputBinds__Ability9 = 8,
	EGameplayAbilityInputBinds__EGameplayAbilityInputBinds_MAX = 9
}

// Enum GameplayAbilities.ETargetDataFilterSelf
public enum ETargetDataFilterSelf : byte
{
	ETargetDataFilterSelf__TDFS_Any = 0,
	ETargetDataFilterSelf__TDFS_NoSelf = 1,
	ETargetDataFilterSelf__TDFS_NoOthers = 2,
	ETargetDataFilterSelf__TDFS_MAX = 3
}

// Enum GameplayAbilities.EGameplayAbilityTargetingLocationType
public enum EGameplayAbilityTargetingLocationType : byte
{
	EGameplayAbilityTargetingLocationType__LiteralTransform = 0,
	EGameplayAbilityTargetingLocationType__ActorTransform = 1,
	EGameplayAbilityTargetingLocationType__SocketTransform = 2,
	EGameplayAbilityTargetingLocationType__EGameplayAbilityTargetingLocationType_MAX = 3
}

// Enum GameplayAbilities.EGameplayTargetingConfirmation
public enum EGameplayTargetingConfirmation : byte
{
	EGameplayTargetingConfirmation__Instant = 0,
	EGameplayTargetingConfirmation__UserConfirmed = 1,
	EGameplayTargetingConfirmation__Custom = 2,
	EGameplayTargetingConfirmation__CustomMulti = 3,
	EGameplayTargetingConfirmation__EGameplayTargetingConfirmation_MAX = 4
}

// Enum GameplayAbilities.EGameplayAbilityTriggerSource
public enum EGameplayAbilityTriggerSource : byte
{
	EGameplayAbilityTriggerSource__GameplayEvent = 0,
	EGameplayAbilityTriggerSource__OwnedTagAdded = 1,
	EGameplayAbilityTriggerSource__OwnedTagPresent = 2,
	EGameplayAbilityTriggerSource__EGameplayAbilityTriggerSource_MAX = 3
}

// Enum GameplayAbilities.EGameplayAbilityReplicationPolicy
public enum EGameplayAbilityReplicationPolicy : byte
{
	EGameplayAbilityReplicationPolicy__ReplicateNo = 0,
	EGameplayAbilityReplicationPolicy__ReplicateYes = 1,
	EGameplayAbilityReplicationPolicy__EGameplayAbilityReplicationPolicy_MAX = 2
}

// Enum GameplayAbilities.EGameplayAbilityNetExecutionPolicy
public enum EGameplayAbilityNetExecutionPolicy : byte
{
	EGameplayAbilityNetExecutionPolicy__LocalPredicted = 0,
	EGameplayAbilityNetExecutionPolicy__LocalOnly = 1,
	EGameplayAbilityNetExecutionPolicy__ServerInitiated = 2,
	EGameplayAbilityNetExecutionPolicy__ServerOnly = 3,
	EGameplayAbilityNetExecutionPolicy__EGameplayAbilityNetExecutionPolicy_MAX = 4
}

// Enum GameplayAbilities.EGameplayAbilityInstancingPolicy
public enum EGameplayAbilityInstancingPolicy : byte
{
	EGameplayAbilityInstancingPolicy__NonInstanced = 0,
	EGameplayAbilityInstancingPolicy__InstancedPerActor = 1,
	EGameplayAbilityInstancingPolicy__InstancedPerExecution = 2,
	EGameplayAbilityInstancingPolicy__EGameplayAbilityInstancingPolicy_MAX = 3
}

// Enum GameplayAbilities.EGameplayCuePayloadType
public enum EGameplayCuePayloadType : byte
{
	EGameplayCuePayloadType__EffectContext = 0,
	EGameplayCuePayloadType__CueParameters = 1,
	EGameplayCuePayloadType__FromSpec = 2,
	EGameplayCuePayloadType__EGameplayCuePayloadType_MAX = 3
}

// Enum GameplayAbilities.EGameplayEffectPeriodInhibitionRemovedPolicy
public enum EGameplayEffectPeriodInhibitionRemovedPolicy : byte
{
	EGameplayEffectPeriodInhibitionRemovedPolicy__NeverReset = 0,
	EGameplayEffectPeriodInhibitionRemovedPolicy__ResetPeriod = 1,
	EGameplayEffectPeriodInhibitionRemovedPolicy__ExecuteAndResetPeriod = 2,
	EGameplayEffectPeriodInhibitionRemovedPolicy__EGameplayEffectPeriodInhibitionRemovedPolicy_MAX = 3
}

// Enum GameplayAbilities.EGameplayEffectStackingExpirationPolicy
public enum EGameplayEffectStackingExpirationPolicy : byte
{
	EGameplayEffectStackingExpirationPolicy__ClearEntireStack = 0,
	EGameplayEffectStackingExpirationPolicy__RemoveSingleStackAndRefreshDuration = 1,
	EGameplayEffectStackingExpirationPolicy__RefreshDuration = 2,
	EGameplayEffectStackingExpirationPolicy__EGameplayEffectStackingExpirationPolicy_MAX = 3
}

// Enum GameplayAbilities.EGameplayEffectStackingPeriodPolicy
public enum EGameplayEffectStackingPeriodPolicy : byte
{
	EGameplayEffectStackingPeriodPolicy__ResetOnSuccessfulApplication = 0,
	EGameplayEffectStackingPeriodPolicy__NeverReset = 1,
	EGameplayEffectStackingPeriodPolicy__EGameplayEffectStackingPeriodPolicy_MAX = 2
}

// Enum GameplayAbilities.EGameplayEffectStackingDurationPolicy
public enum EGameplayEffectStackingDurationPolicy : byte
{
	EGameplayEffectStackingDurationPolicy__RefreshOnSuccessfulApplication = 0,
	EGameplayEffectStackingDurationPolicy__NeverRefresh = 1,
	EGameplayEffectStackingDurationPolicy__EGameplayEffectStackingDurationPolicy_MAX = 2
}

// Enum GameplayAbilities.EGameplayEffectDurationType
public enum EGameplayEffectDurationType : byte
{
	EGameplayEffectDurationType__Instant = 0,
	EGameplayEffectDurationType__Infinite = 1,
	EGameplayEffectDurationType__HasDuration = 2,
	EGameplayEffectDurationType__EGameplayEffectDurationType_MAX = 3
}

// Enum GameplayAbilities.EAttributeBasedFloatCalculationType
public enum EAttributeBasedFloatCalculationType : byte
{
	EAttributeBasedFloatCalculationType__AttributeMagnitude = 0,
	EAttributeBasedFloatCalculationType__AttributeBaseValue = 1,
	EAttributeBasedFloatCalculationType__AttributeBonusMagnitude = 2,
	EAttributeBasedFloatCalculationType__AttributeMagnitudeEvaluatedUpToChannel = 3,
	EAttributeBasedFloatCalculationType__EAttributeBasedFloatCalculationType_MAX = 4
}

// Enum GameplayAbilities.EGameplayEffectMagnitudeCalculation
public enum EGameplayEffectMagnitudeCalculation : byte
{
	EGameplayEffectMagnitudeCalculation__ScalableFloat = 0,
	EGameplayEffectMagnitudeCalculation__AttributeBased = 1,
	EGameplayEffectMagnitudeCalculation__CustomCalculationClass = 2,
	EGameplayEffectMagnitudeCalculation__SetByCaller = 3,
	EGameplayEffectMagnitudeCalculation__EGameplayEffectMagnitudeCalculation_MAX = 4
}

// Enum GameplayAbilities.EGameplayTagEventType
public enum EGameplayTagEventType : byte
{
	EGameplayTagEventType__NewOrRemoved = 0,
	EGameplayTagEventType__AnyCountChange = 1,
	EGameplayTagEventType__EGameplayTagEventType_MAX = 2
}

// Enum GameplayAbilities.EGameplayCueEvent
public enum EGameplayCueEvent : byte
{
	EGameplayCueEvent__OnActive    = 0,
	EGameplayCueEvent__WhileActive = 1,
	EGameplayCueEvent__Executed    = 2,
	EGameplayCueEvent__Removed     = 3,
	EGameplayCueEvent__EGameplayCueEvent_MAX = 4
}

// Enum GameplayAbilities.EGameplayEffectStackingType
public enum EGameplayEffectStackingType : byte
{
	EGameplayEffectStackingType__None = 0,
	EGameplayEffectStackingType__AggregateBySource = 1,
	EGameplayEffectStackingType__AggregateByTarget = 2,
	EGameplayEffectStackingType__EGameplayEffectStackingType_MAX = 3
}

// Enum GameplayAbilities.EGameplayModOp
public enum EGameplayModOp : byte
{
	EGameplayModOp__Additive       = 0,
	EGameplayModOp__Multiplicitive = 1,
	EGameplayModOp__Division       = 2,
	EGameplayModOp__Override       = 3,
	EGameplayModOp__Max            = 4
}

// Enum GameplayAbilities.EGameplayModEvaluationChannel
public enum EGameplayModEvaluationChannel : byte
{
	EGameplayModEvaluationChannel__Channel0 = 0,
	EGameplayModEvaluationChannel__Channel1 = 1,
	EGameplayModEvaluationChannel__Channel2 = 2,
	EGameplayModEvaluationChannel__Channel3 = 3,
	EGameplayModEvaluationChannel__Channel4 = 4,
	EGameplayModEvaluationChannel__Channel5 = 5,
	EGameplayModEvaluationChannel__Channel6 = 6,
	EGameplayModEvaluationChannel__Channel7 = 7,
	EGameplayModEvaluationChannel__Channel8 = 8,
	EGameplayModEvaluationChannel__Channel9 = 9,
	EGameplayModEvaluationChannel__Channel_MAX = 10,
	EGameplayModEvaluationChannel__EGameplayModEvaluationChannel_MAX = 11
}

// Enum GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
public enum EGameplayEffectGrantedAbilityRemovePolicy : byte
{
	EGameplayEffectGrantedAbilityRemovePolicy__CancelAbilityImmediately = 0,
	EGameplayEffectGrantedAbilityRemovePolicy__RemoveAbilityOnEnd = 1,
	EGameplayEffectGrantedAbilityRemovePolicy__DoNothing = 2,
	EGameplayEffectGrantedAbilityRemovePolicy__EGameplayEffectGrantedAbilityRemovePolicy_MAX = 3
}

// Enum GameplayAbilities.EGameplayEffectAttributeCaptureSource
public enum EGameplayEffectAttributeCaptureSource : byte
{
	EGameplayEffectAttributeCaptureSource__Source = 0,
	EGameplayEffectAttributeCaptureSource__Target = 1,
	EGameplayEffectAttributeCaptureSource__EGameplayEffectAttributeCaptureSource_MAX = 2
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayAbilities.GameplayAbilityTargetDataHandle
// 0x0028
public class FGameplayAbilityTargetDataHandle : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FGameplayAbilityTargetDataHandle() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandle
// 0x0004
public class FGameplayAbilitySpecHandle : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offHandle                                                     = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public int                                                 Handle                                                         => _offHandle.GetValue();
	#endregion

	public FGameplayAbilitySpecHandle(int c_Handle) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offHandle.SetValue(c_Handle);
	}
}
// ScriptStruct GameplayAbilities.GameplayEffectSpecHandle
// 0x0010
public class FGameplayEffectSpecHandle : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FGameplayEffectSpecHandle() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct GameplayAbilities.GameplayEffectContextHandle
// 0x0018
public class FGameplayEffectContextHandle : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FGameplayEffectContextHandle() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct GameplayAbilities.PredictionKey
// 0x0018
public class FPredictionKey : ExternalClass
{
	#region Offsets
	private ExternalOffset<short>                              _offCurrent                                                    = new ExternalOffset<short>(0x0000);                           // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<short>                              _offBase                                                       = new ExternalOffset<short>(0x0002);                           // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UPackageMap>                        _offPredictiveConnection                                       = new ExternalOffset<UPackageMap>(0x0008, true);               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIsStale                                                   = new ExternalOffset<byte/*(bool)*/>(0x0010);                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIsServerInitiated                                         = new ExternalOffset<byte/*(bool)*/>(0x0011);                  // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public short                                               Current                                                        => _offCurrent.GetValue();
	public short                                               Base                                                           => _offBase.GetValue();
	public UPackageMap                                         PredictiveConnection                                           => _offPredictiveConnection.GetValue();
	public byte/*(bool)*/                                      bIsStale                                                       => _offbIsStale.GetValue();
	public byte/*(bool)*/                                      bIsServerInitiated                                             => _offbIsServerInitiated.GetValue();
	#endregion

	public FPredictionKey(short c_Current, short c_Base, UPackageMap c_PredictiveConnection, byte/*(bool)*/ c_bIsStale, byte/*(bool)*/ c_bIsServerInitiated) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offCurrent.SetValue(c_Current);
		_offBase.SetValue(c_Base);
		_offPredictiveConnection.SetValue(c_PredictiveConnection);
		_offbIsStale.SetValue(c_bIsStale);
		_offbIsServerInitiated.SetValue(c_bIsServerInitiated);
	}
}
// ScriptStruct GameplayAbilities.GameplayAbilityActivationInfo
// 0x0020
public class FGameplayAbilityActivationInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<TEnumAsByte<EGameplayAbilityActivationMode>> _offActivationMode                                             = new ExternalOffset<TEnumAsByte<EGameplayAbilityActivationMode>>(0x0000, false); // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbCanBeEndedByOtherInstance                                 = new ExternalOffset<char>(0x0001, false);                     // 0x0001(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FPredictionKey>                     _offPredictionKeyWhenActivated                                 = new ExternalOffset<FPredictionKey>(0x0008, false);           // 0x0008(0x0018) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TEnumAsByte<EGameplayAbilityActivationMode>         ActivationMode                                                 => _offActivationMode.GetValue();
	public FPredictionKey                                      PredictionKeyWhenActivated                                     => _offPredictionKeyWhenActivated.GetValue();
	#endregion

	public FGameplayAbilityActivationInfo(TEnumAsByte<EGameplayAbilityActivationMode> c_ActivationMode, FPredictionKey c_PredictionKeyWhenActivated) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offActivationMode.SetValue(c_ActivationMode);
		_offPredictionKeyWhenActivated.SetValue(c_PredictionKeyWhenActivated);
	}
}
// ScriptStruct GameplayAbilities.GameplayEventData
// 0x00B0
public class FGameplayEventData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FGameplayTag>                       _offEventTag                                                   = new ExternalOffset<FGameplayTag>(0x0000, false);             // 0x0000(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<AActor>                             _offInstigator                                                 = new ExternalOffset<AActor>(0x0008, true);                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<AActor>                             _offTarget                                                     = new ExternalOffset<AActor>(0x0010, true);                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UObject>                            _offOptionalObject                                             = new ExternalOffset<UObject>(0x0018, true);                   // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UObject>                            _offOptionalObject2                                            = new ExternalOffset<UObject>(0x0020, true);                   // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayEffectContextHandle>       _offContextHandle                                              = new ExternalOffset<FGameplayEffectContextHandle>(0x0028, false); // 0x0028(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTagContainer>              _offInstigatorTags                                             = new ExternalOffset<FGameplayTagContainer>(0x0040, false);    // 0x0040(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTagContainer>              _offTargetTags                                                 = new ExternalOffset<FGameplayTagContainer>(0x0060, false);    // 0x0060(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offEventMagnitude                                             = new ExternalOffset<float>(0x0080);                           // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayAbilityTargetDataHandle>   _offTargetData                                                 = new ExternalOffset<FGameplayAbilityTargetDataHandle>(0x0088, false); // 0x0088(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGameplayTag                                        EventTag                                                       => _offEventTag.GetValue();
	public AActor                                              Instigator                                                     => _offInstigator.GetValue();
	public AActor                                              Target                                                         => _offTarget.GetValue();
	public UObject                                             OptionalObject                                                 => _offOptionalObject.GetValue();
	public UObject                                             OptionalObject2                                                => _offOptionalObject2.GetValue();
	public FGameplayEffectContextHandle                        ContextHandle                                                  => _offContextHandle.GetValue();
	public FGameplayTagContainer                               InstigatorTags                                                 => _offInstigatorTags.GetValue();
	public FGameplayTagContainer                               TargetTags                                                     => _offTargetTags.GetValue();
	public float                                               EventMagnitude                                                 => _offEventMagnitude.GetValue();
	public FGameplayAbilityTargetDataHandle                    TargetData                                                     => _offTargetData.GetValue();
	#endregion

	public FGameplayEventData(FGameplayTag c_EventTag, AActor c_Instigator, AActor c_Target, UObject c_OptionalObject, UObject c_OptionalObject2, FGameplayEffectContextHandle c_ContextHandle, FGameplayTagContainer c_InstigatorTags, FGameplayTagContainer c_TargetTags, float c_EventMagnitude, FGameplayAbilityTargetDataHandle c_TargetData) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offEventTag.SetValue(c_EventTag);
		_offInstigator.SetValue(c_Instigator);
		_offTarget.SetValue(c_Target);
		_offOptionalObject.SetValue(c_OptionalObject);
		_offOptionalObject2.SetValue(c_OptionalObject2);
		_offContextHandle.SetValue(c_ContextHandle);
		_offInstigatorTags.SetValue(c_InstigatorTags);
		_offTargetTags.SetValue(c_TargetTags);
		_offEventMagnitude.SetValue(c_EventMagnitude);
		_offTargetData.SetValue(c_TargetData);
	}
}
// ScriptStruct GameplayAbilities.GameplayAttribute
// 0x0020
public class FGameplayAttribute : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offAttributeName                                              = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UProperty>                          _offAttribute                                                  = new ExternalOffset<UProperty>(0x0010, true);                 // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<UStruct>                            _offAttributeOwner                                             = new ExternalOffset<UStruct>(0x0018, true);                   // 0x0018(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FString                                             AttributeName                                                  => _offAttributeName.GetValue();
	public UProperty                                           Attribute                                                      => _offAttribute.GetValue();
	public UStruct                                             AttributeOwner                                                 => _offAttributeOwner.GetValue();
	#endregion

	public FGameplayAttribute(FString c_AttributeName, UProperty c_Attribute, UStruct c_AttributeOwner) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAttributeName.SetValue(c_AttributeName);
		_offAttribute.SetValue(c_Attribute);
		_offAttributeOwner.SetValue(c_AttributeOwner);
	}
}
// ScriptStruct GameplayAbilities.ActiveGameplayEffectHandle
// 0x0008
public class FActiveGameplayEffectHandle : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offHandle                                                     = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                     _offbPassedFiltersAndWasExecuted                               = new ExternalOffset<byte/*(bool)*/>(0x0004);                  // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public int                                                 Handle                                                         => _offHandle.GetValue();
	public byte/*(bool)*/                                      bPassedFiltersAndWasExecuted                                   => _offbPassedFiltersAndWasExecuted.GetValue();
	#endregion

	public FActiveGameplayEffectHandle(int c_Handle, byte/*(bool)*/ c_bPassedFiltersAndWasExecuted) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offHandle.SetValue(c_Handle);
		_offbPassedFiltersAndWasExecuted.SetValue(c_bPassedFiltersAndWasExecuted);
	}
}
// ScriptStruct GameplayAbilities.GameplayEffectQuery
// 0x0138
public class FGameplayEffectQuery : ExternalClass
{
	#region Offsets
	private ExternalOffset<FScriptDelegate>                    _offCustomMatchDelegate_BP                                     = new ExternalOffset<FScriptDelegate>(0x0010, false);          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTagQuery>                  _offOwningTagQuery                                             = new ExternalOffset<FGameplayTagQuery>(0x0020, false);        // 0x0020(0x0048) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTagQuery>                  _offEffectTagQuery                                             = new ExternalOffset<FGameplayTagQuery>(0x0068, false);        // 0x0068(0x0048) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTagQuery>                  _offSourceTagQuery                                             = new ExternalOffset<FGameplayTagQuery>(0x00B0, false);        // 0x00B0(0x0048) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayAttribute>                 _offModifyingAttribute                                         = new ExternalOffset<FGameplayAttribute>(0x00F8, false);       // 0x00F8(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UObject>                            _offEffectSource                                               = new ExternalOffset<UObject>(0x0118, true);                   // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                             _offEffectDefinition                                           = new ExternalOffset<UClass>(0x0120, true);                    // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScriptDelegate                                     CustomMatchDelegate_BP                                         => _offCustomMatchDelegate_BP.GetValue();
	public FGameplayTagQuery                                   OwningTagQuery                                                 => _offOwningTagQuery.GetValue();
	public FGameplayTagQuery                                   EffectTagQuery                                                 => _offEffectTagQuery.GetValue();
	public FGameplayTagQuery                                   SourceTagQuery                                                 => _offSourceTagQuery.GetValue();
	public FGameplayAttribute                                  ModifyingAttribute                                             => _offModifyingAttribute.GetValue();
	public UObject                                             EffectSource                                                   => _offEffectSource.GetValue();
	public UClass                                              EffectDefinition                                               => _offEffectDefinition.GetValue();
	#endregion

	public FGameplayEffectQuery(FScriptDelegate c_CustomMatchDelegate_BP, FGameplayTagQuery c_OwningTagQuery, FGameplayTagQuery c_EffectTagQuery, FGameplayTagQuery c_SourceTagQuery, FGameplayAttribute c_ModifyingAttribute, UObject c_EffectSource, UClass c_EffectDefinition) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offCustomMatchDelegate_BP.SetValue(c_CustomMatchDelegate_BP);
		_offOwningTagQuery.SetValue(c_OwningTagQuery);
		_offEffectTagQuery.SetValue(c_EffectTagQuery);
		_offSourceTagQuery.SetValue(c_SourceTagQuery);
		_offModifyingAttribute.SetValue(c_ModifyingAttribute);
		_offEffectSource.SetValue(c_EffectSource);
		_offEffectDefinition.SetValue(c_EffectDefinition);
	}
}
// ScriptStruct GameplayAbilities.GameplayEffectModifiedAttribute
// 0x0028
public class FGameplayEffectModifiedAttribute : ExternalClass
{
	#region Offsets
	private ExternalOffset<FGameplayAttribute>                 _offAttribute                                                  = new ExternalOffset<FGameplayAttribute>(0x0000, false);       // 0x0000(0x0020) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offTotalMagnitude                                             = new ExternalOffset<float>(0x0020);                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGameplayAttribute                                  Attribute                                                      => _offAttribute.GetValue();
	public float                                               TotalMagnitude                                                 => _offTotalMagnitude.GetValue();
	#endregion

	public FGameplayEffectModifiedAttribute(FGameplayAttribute c_Attribute, float c_TotalMagnitude) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAttribute.SetValue(c_Attribute);
		_offTotalMagnitude.SetValue(c_TotalMagnitude);
	}
}
// ScriptStruct GameplayAbilities.GameplayAbilitySpec
// 0x00BC (0x00C8 - 0x000C)
public class FGameplayAbilitySpec : FFastArraySerializerItem
{
	#region Offsets
	private ExternalOffset<FGameplayAbilitySpecHandle>         _offHandle                                                     = new ExternalOffset<FGameplayAbilitySpecHandle>(0x000C, false); // 0x000C(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UGameplayAbility>                   _offAbility                                                    = new ExternalOffset<UGameplayAbility>(0x0010, true);          // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offLevel                                                      = new ExternalOffset<int>(0x0018);                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offInputID                                                    = new ExternalOffset<int>(0x001C);                             // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UObject>                            _offSourceObject                                               = new ExternalOffset<UObject>(0x0020, true);                   // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offActiveCount                                                = new ExternalOffset<char>(0x0028, false);                     // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offInputPressed                                               = new ExternalOffset<char>(0x0029, false);                     // 0x0029(0x0001) BIT_FIELD (RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offRemoveAfterActivation                                      = new ExternalOffset<char>(0x0029, false);                     // 0x0029(0x0001) BIT_FIELD (RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offPendingRemove                                              = new ExternalOffset<char>(0x0029, false);                     // 0x0029(0x0001) BIT_FIELD (RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayAbilityActivationInfo>     _offActivationInfo                                             = new ExternalOffset<FGameplayAbilityActivationInfo>(0x0030, false); // 0x0030(0x0020) (RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UGameplayAbility>>           _offNonReplicatedInstances                                     = new ExternalOffset<TArray<UGameplayAbility>>(0x0050, false); // 0x0050(0x0010) (ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UGameplayAbility>>           _offReplicatedInstances                                        = new ExternalOffset<TArray<UGameplayAbility>>(0x0060, false); // 0x0060(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FActiveGameplayEffectHandle>        _offGameplayEffectHandle                                       = new ExternalOffset<FActiveGameplayEffectHandle>(0x0070, false); // 0x0070(0x0008) (RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGameplayAbilitySpecHandle                          Handle                                                         => _offHandle.GetValue();
	public UGameplayAbility                                    Ability                                                        => _offAbility.GetValue();
	public int                                                 Level                                                          => _offLevel.GetValue();
	public int                                                 InputID                                                        => _offInputID.GetValue();
	public UObject                                             SourceObject                                                   => _offSourceObject.GetValue();
	public FGameplayAbilityActivationInfo                      ActivationInfo                                                 => _offActivationInfo.GetValue();
	public TArray<UGameplayAbility>                            NonReplicatedInstances                                         => _offNonReplicatedInstances.GetValue();
	public TArray<UGameplayAbility>                            ReplicatedInstances                                            => _offReplicatedInstances.GetValue();
	public FActiveGameplayEffectHandle                         GameplayEffectHandle                                           => _offGameplayEffectHandle.GetValue();
	#endregion

	public FGameplayAbilitySpec(FGameplayAbilitySpecHandle c_Handle, UGameplayAbility c_Ability, int c_Level, int c_InputID, UObject c_SourceObject, FGameplayAbilityActivationInfo c_ActivationInfo, TArray<UGameplayAbility> c_NonReplicatedInstances, TArray<UGameplayAbility> c_ReplicatedInstances, FActiveGameplayEffectHandle c_GameplayEffectHandle) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offHandle.SetValue(c_Handle);
		_offAbility.SetValue(c_Ability);
		_offLevel.SetValue(c_Level);
		_offInputID.SetValue(c_InputID);
		_offSourceObject.SetValue(c_SourceObject);
		_offActivationInfo.SetValue(c_ActivationInfo);
		_offNonReplicatedInstances.SetValue(c_NonReplicatedInstances);
		_offReplicatedInstances.SetValue(c_ReplicatedInstances);
		_offGameplayEffectHandle.SetValue(c_GameplayEffectHandle);
	}
}
// ScriptStruct GameplayAbilities.AttributeDefaults
// 0x0010
public class FAttributeDefaults : ExternalClass
{
	#region Offsets
	private ExternalOffset<UClass>                             _offAttributes                                                 = new ExternalOffset<UClass>(0x0000, true);                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UDataTable>                         _offDefaultStartingTable                                       = new ExternalOffset<UDataTable>(0x0008, true);                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                              Attributes                                                     => _offAttributes.GetValue();
	public UDataTable                                          DefaultStartingTable                                           => _offDefaultStartingTable.GetValue();
	#endregion

	public FAttributeDefaults(UClass c_Attributes, UDataTable c_DefaultStartingTable) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAttributes.SetValue(c_Attributes);
		_offDefaultStartingTable.SetValue(c_DefaultStartingTable);
	}
}
// ScriptStruct GameplayAbilities.GameplayCueParameters
// 0x00B8
public class FGameplayCueParameters : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offNormalizedMagnitude                                        = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRawMagnitude                                               = new ExternalOffset<float>(0x0004);                           // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayEffectContextHandle>       _offEffectContext                                              = new ExternalOffset<FGameplayEffectContextHandle>(0x0008, false); // 0x0008(0x0018) (BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTag>                       _offMatchedTagName                                             = new ExternalOffset<FGameplayTag>(0x0020, false);             // 0x0020(0x0008) (BlueprintVisible, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTag>                       _offOriginalTag                                                = new ExternalOffset<FGameplayTag>(0x0028, false);             // 0x0028(0x0008) (BlueprintVisible, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTagContainer>              _offAggregatedSourceTags                                       = new ExternalOffset<FGameplayTagContainer>(0x0030, false);    // 0x0030(0x0020) (BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTagContainer>              _offAggregatedTargetTags                                       = new ExternalOffset<FGameplayTagContainer>(0x0050, false);    // 0x0050(0x0020) (BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector_NetQuantize10>              _offLocation                                                   = new ExternalOffset<FVector_NetQuantize10>(0x0070, false);    // 0x0070(0x000C) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FVector_NetQuantizeNormal>          _offNormal                                                     = new ExternalOffset<FVector_NetQuantizeNormal>(0x007C, false); // 0x007C(0x000C) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TWeakObjectPtr<AActor>>             _offInstigator                                                 = new ExternalOffset<TWeakObjectPtr<AActor>>(0x0088, false);   // 0x0088(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TWeakObjectPtr<AActor>>             _offEffectCauser                                               = new ExternalOffset<TWeakObjectPtr<AActor>>(0x0090, false);   // 0x0090(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TWeakObjectPtr<UObject>>            _offSourceObject                                               = new ExternalOffset<TWeakObjectPtr<UObject>>(0x0098, false);  // 0x0098(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TWeakObjectPtr<UPhysicalMaterial>>  _offPhysicalMaterial                                           = new ExternalOffset<TWeakObjectPtr<UPhysicalMaterial>>(0x00A0, false); // 0x00A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offGameplayEffectLevel                                        = new ExternalOffset<int>(0x00A8);                             // 0x00A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offAbilityLevel                                               = new ExternalOffset<int>(0x00AC);                             // 0x00AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TWeakObjectPtr<USceneComponent>>    _offTargetAttachComponent                                      = new ExternalOffset<TWeakObjectPtr<USceneComponent>>(0x00B0, false); // 0x00B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               NormalizedMagnitude                                            => _offNormalizedMagnitude.GetValue();
	public float                                               RawMagnitude                                                   => _offRawMagnitude.GetValue();
	public FGameplayEffectContextHandle                        EffectContext                                                  => _offEffectContext.GetValue();
	public FGameplayTag                                        MatchedTagName                                                 => _offMatchedTagName.GetValue();
	public FGameplayTag                                        OriginalTag                                                    => _offOriginalTag.GetValue();
	public FGameplayTagContainer                               AggregatedSourceTags                                           => _offAggregatedSourceTags.GetValue();
	public FGameplayTagContainer                               AggregatedTargetTags                                           => _offAggregatedTargetTags.GetValue();
	public FVector_NetQuantize10                               Location                                                       => _offLocation.GetValue();
	public FVector_NetQuantizeNormal                           Normal                                                         => _offNormal.GetValue();
	public TWeakObjectPtr<AActor>                              Instigator                                                     => _offInstigator.GetValue();
	public TWeakObjectPtr<AActor>                              EffectCauser                                                   => _offEffectCauser.GetValue();
	public TWeakObjectPtr<UObject>                             SourceObject                                                   => _offSourceObject.GetValue();
	public TWeakObjectPtr<UPhysicalMaterial>                   PhysicalMaterial                                               => _offPhysicalMaterial.GetValue();
	public int                                                 GameplayEffectLevel                                            => _offGameplayEffectLevel.GetValue();
	public int                                                 AbilityLevel                                                   => _offAbilityLevel.GetValue();
	public TWeakObjectPtr<USceneComponent>                     TargetAttachComponent                                          => _offTargetAttachComponent.GetValue();
	#endregion

	public FGameplayCueParameters(float c_NormalizedMagnitude, float c_RawMagnitude, FGameplayEffectContextHandle c_EffectContext, FGameplayTag c_MatchedTagName, FGameplayTag c_OriginalTag, FGameplayTagContainer c_AggregatedSourceTags, FGameplayTagContainer c_AggregatedTargetTags, FVector_NetQuantize10 c_Location, FVector_NetQuantizeNormal c_Normal, TWeakObjectPtr<AActor> c_Instigator, TWeakObjectPtr<AActor> c_EffectCauser, TWeakObjectPtr<UObject> c_SourceObject, TWeakObjectPtr<UPhysicalMaterial> c_PhysicalMaterial, int c_GameplayEffectLevel, int c_AbilityLevel, TWeakObjectPtr<USceneComponent> c_TargetAttachComponent) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offNormalizedMagnitude.SetValue(c_NormalizedMagnitude);
		_offRawMagnitude.SetValue(c_RawMagnitude);
		_offEffectContext.SetValue(c_EffectContext);
		_offMatchedTagName.SetValue(c_MatchedTagName);
		_offOriginalTag.SetValue(c_OriginalTag);
		_offAggregatedSourceTags.SetValue(c_AggregatedSourceTags);
		_offAggregatedTargetTags.SetValue(c_AggregatedTargetTags);
		_offLocation.SetValue(c_Location);
		_offNormal.SetValue(c_Normal);
		_offInstigator.SetValue(c_Instigator);
		_offEffectCauser.SetValue(c_EffectCauser);
		_offSourceObject.SetValue(c_SourceObject);
		_offPhysicalMaterial.SetValue(c_PhysicalMaterial);
		_offGameplayEffectLevel.SetValue(c_GameplayEffectLevel);
		_offAbilityLevel.SetValue(c_AbilityLevel);
		_offTargetAttachComponent.SetValue(c_TargetAttachComponent);
	}
}
// ScriptStruct GameplayAbilities.GameplayEffectSpecForRPC
// 0x0078
public class FGameplayEffectSpecForRPC : ExternalClass
{
	#region Offsets
	private ExternalOffset<UGameplayEffect>                    _offDef                                                        = new ExternalOffset<UGameplayEffect>(0x0000, true);           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FGameplayEffectModifiedAttribute>> _offModifiedAttributes                                         = new ExternalOffset<TArray<FGameplayEffectModifiedAttribute>>(0x0008, false); // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayEffectContextHandle>       _offEffectContext                                              = new ExternalOffset<FGameplayEffectContextHandle>(0x0018, false); // 0x0018(0x0018) (NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTagContainer>              _offAggregatedSourceTags                                       = new ExternalOffset<FGameplayTagContainer>(0x0030, false);    // 0x0030(0x0020) (NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTagContainer>              _offAggregatedTargetTags                                       = new ExternalOffset<FGameplayTagContainer>(0x0050, false);    // 0x0050(0x0020) (NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offLevel                                                      = new ExternalOffset<float>(0x0070);                           // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offAbilityLevel                                               = new ExternalOffset<float>(0x0074);                           // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UGameplayEffect                                     Def                                                            => _offDef.GetValue();
	public TArray<FGameplayEffectModifiedAttribute>            ModifiedAttributes                                             => _offModifiedAttributes.GetValue();
	public FGameplayEffectContextHandle                        EffectContext                                                  => _offEffectContext.GetValue();
	public FGameplayTagContainer                               AggregatedSourceTags                                           => _offAggregatedSourceTags.GetValue();
	public FGameplayTagContainer                               AggregatedTargetTags                                           => _offAggregatedTargetTags.GetValue();
	public float                                               Level                                                          => _offLevel.GetValue();
	public float                                               AbilityLevel                                                   => _offAbilityLevel.GetValue();
	#endregion

	public FGameplayEffectSpecForRPC(UGameplayEffect c_Def, TArray<FGameplayEffectModifiedAttribute> c_ModifiedAttributes, FGameplayEffectContextHandle c_EffectContext, FGameplayTagContainer c_AggregatedSourceTags, FGameplayTagContainer c_AggregatedTargetTags, float c_Level, float c_AbilityLevel) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDef.SetValue(c_Def);
		_offModifiedAttributes.SetValue(c_ModifiedAttributes);
		_offEffectContext.SetValue(c_EffectContext);
		_offAggregatedSourceTags.SetValue(c_AggregatedSourceTags);
		_offAggregatedTargetTags.SetValue(c_AggregatedTargetTags);
		_offLevel.SetValue(c_Level);
		_offAbilityLevel.SetValue(c_AbilityLevel);
	}
}
// ScriptStruct GameplayAbilities.ServerAbilityRPCBatch
// 0x0050
public class FGameplayAbilities_FServerAbilityRPCBatch : ExternalClass
{
	#region Offsets
	private ExternalOffset<FGameplayAbilitySpecHandle>         _offAbilitySpecHandle                                          = new ExternalOffset<FGameplayAbilitySpecHandle>(0x0000, false); // 0x0000(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FPredictionKey>                     _offPredictionKey                                              = new ExternalOffset<FPredictionKey>(0x0008, false);           // 0x0008(0x0018) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayAbilityTargetDataHandle>   _offTargetData                                                 = new ExternalOffset<FGameplayAbilityTargetDataHandle>(0x0020, false); // 0x0020(0x0028) (NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offInputPressed                                               = new ExternalOffset<byte/*(bool)*/>(0x0048);                  // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offEnded                                                      = new ExternalOffset<byte/*(bool)*/>(0x0049);                  // 0x0049(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offStarted                                                    = new ExternalOffset<byte/*(bool)*/>(0x004A);                  // 0x004A(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGameplayAbilitySpecHandle                          AbilitySpecHandle                                              => _offAbilitySpecHandle.GetValue();
	public FPredictionKey                                      PredictionKey                                                  => _offPredictionKey.GetValue();
	public FGameplayAbilityTargetDataHandle                    TargetData                                                     => _offTargetData.GetValue();
	public byte/*(bool)*/                                      InputPressed                                                   => _offInputPressed.GetValue();
	public byte/*(bool)*/                                      Ended                                                          => _offEnded.GetValue();
	public byte/*(bool)*/                                      Started                                                        => _offStarted.GetValue();
	#endregion

	public FServerAbilityRPCBatch(FGameplayAbilitySpecHandle c_AbilitySpecHandle, FPredictionKey c_PredictionKey, FGameplayAbilityTargetDataHandle c_TargetData, byte/*(bool)*/ c_InputPressed, byte/*(bool)*/ c_Ended, byte/*(bool)*/ c_Started) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAbilitySpecHandle.SetValue(c_AbilitySpecHandle);
		_offPredictionKey.SetValue(c_PredictionKey);
		_offTargetData.SetValue(c_TargetData);
		_offInputPressed.SetValue(c_InputPressed);
		_offEnded.SetValue(c_Ended);
		_offStarted.SetValue(c_Started);
	}
}
// ScriptStruct GameplayAbilities.GameplayTargetDataFilter
// 0x0028
public class FGameplayTargetDataFilter : ExternalClass
{
	#region Offsets
	private ExternalOffset<AActor>                             _offSelfActor                                                  = new ExternalOffset<AActor>(0x0008, true);                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<ETargetDataFilterSelf>> _offSelfFilter                                                 = new ExternalOffset<TEnumAsByte<ETargetDataFilterSelf>>(0x0010, false); // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                             _offRequiredActorClass                                         = new ExternalOffset<UClass>(0x0018, true);                    // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbReverseFilter                                             = new ExternalOffset<byte/*(bool)*/>(0x0020);                  // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public AActor                                              SelfActor                                                      => _offSelfActor.GetValue();
	public TEnumAsByte<ETargetDataFilterSelf>                  SelfFilter                                                     => _offSelfFilter.GetValue();
	public UClass                                              RequiredActorClass                                             => _offRequiredActorClass.GetValue();
	public byte/*(bool)*/                                      bReverseFilter                                                 => _offbReverseFilter.GetValue();
	#endregion

	public FGameplayTargetDataFilter(AActor c_SelfActor, TEnumAsByte<ETargetDataFilterSelf> c_SelfFilter, UClass c_RequiredActorClass, byte/*(bool)*/ c_bReverseFilter) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSelfActor.SetValue(c_SelfActor);
		_offSelfFilter.SetValue(c_SelfFilter);
		_offRequiredActorClass.SetValue(c_RequiredActorClass);
		_offbReverseFilter.SetValue(c_bReverseFilter);
	}
}
// ScriptStruct GameplayAbilities.GameplayTargetDataFilterHandle
// 0x0010
public class FGameplayTargetDataFilterHandle : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FGameplayTargetDataFilterHandle() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct GameplayAbilities.ReplicatedPredictionKeyItem
// 0x001C (0x0028 - 0x000C)
public class FReplicatedPredictionKeyItem : FFastArraySerializerItem
{
	#region Offsets
	private ExternalOffset<FPredictionKey>                     _offPredictionKey                                              = new ExternalOffset<FPredictionKey>(0x0010, false);           // 0x0010(0x0018) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FPredictionKey                                      PredictionKey                                                  => _offPredictionKey.GetValue();
	#endregion

	public FReplicatedPredictionKeyItem(FPredictionKey c_PredictionKey) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPredictionKey.SetValue(c_PredictionKey);
	}
}
// ScriptStruct GameplayAbilities.ReplicatedPredictionKeyMap
// 0x0010 (0x0118 - 0x0108)
public class FReplicatedPredictionKeyMap : FFastArraySerializer
{
	#region Offsets
	private ExternalOffset<TArray<FReplicatedPredictionKeyItem>> _offPredictionKeys                                             = new ExternalOffset<TArray<FReplicatedPredictionKeyItem>>(0x0108, false); // 0x0108(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FReplicatedPredictionKeyItem>                PredictionKeys                                                 => _offPredictionKeys.GetValue();
	#endregion

	public FReplicatedPredictionKeyMap(TArray<FReplicatedPredictionKeyItem> c_PredictionKeys) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPredictionKeys.SetValue(c_PredictionKeys);
	}
}
// ScriptStruct GameplayAbilities.MinimalReplicationTagCountMap
// 0x0060
public class FMinimalReplicationTagCountMap : ExternalClass
{
	#region Offsets
	private ExternalOffset<UAbilitySystemComponent>            _offOwner                                                      = new ExternalOffset<UAbilitySystemComponent>(0x0050, true);   // 0x0050(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UAbilitySystemComponent                             Owner                                                          => _offOwner.GetValue();
	#endregion

	public FMinimalReplicationTagCountMap(UAbilitySystemComponent c_Owner) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offOwner.SetValue(c_Owner);
	}
}
// ScriptStruct GameplayAbilities.ActiveGameplayCue
// 0x00E4 (0x00F0 - 0x000C)
public class FActiveGameplayCue : FFastArraySerializerItem
{
	#region Offsets
	private ExternalOffset<FGameplayTag>                       _offGameplayCueTag                                             = new ExternalOffset<FGameplayTag>(0x000C, false);             // 0x000C(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FPredictionKey>                     _offPredictionKey                                              = new ExternalOffset<FPredictionKey>(0x0018, false);           // 0x0018(0x0018) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayCueParameters>             _offParameters                                                 = new ExternalOffset<FGameplayCueParameters>(0x0030, false);   // 0x0030(0x00B8) (ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbPredictivelyRemoved                                       = new ExternalOffset<byte/*(bool)*/>(0x00E8);                  // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGameplayTag                                        GameplayCueTag                                                 => _offGameplayCueTag.GetValue();
	public FPredictionKey                                      PredictionKey                                                  => _offPredictionKey.GetValue();
	public FGameplayCueParameters                              Parameters                                                     => _offParameters.GetValue();
	public byte/*(bool)*/                                      bPredictivelyRemoved                                           => _offbPredictivelyRemoved.GetValue();
	#endregion

	public FActiveGameplayCue(FGameplayTag c_GameplayCueTag, FPredictionKey c_PredictionKey, FGameplayCueParameters c_Parameters, byte/*(bool)*/ c_bPredictivelyRemoved) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offGameplayCueTag.SetValue(c_GameplayCueTag);
		_offPredictionKey.SetValue(c_PredictionKey);
		_offParameters.SetValue(c_Parameters);
		_offbPredictivelyRemoved.SetValue(c_bPredictivelyRemoved);
	}
}
// ScriptStruct GameplayAbilities.ActiveGameplayCueContainer
// 0x0020 (0x0128 - 0x0108)
public class FActiveGameplayCueContainer : FFastArraySerializer
{
	#region Offsets
	private ExternalOffset<TArray<FActiveGameplayCue>>         _offGameplayCues                                               = new ExternalOffset<TArray<FActiveGameplayCue>>(0x0108, false); // 0x0108(0x0010) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<UAbilitySystemComponent>            _offOwner                                                      = new ExternalOffset<UAbilitySystemComponent>(0x0120, true);   // 0x0120(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<FActiveGameplayCue>                          GameplayCues                                                   => _offGameplayCues.GetValue();
	public UAbilitySystemComponent                             Owner                                                          => _offOwner.GetValue();
	#endregion

	public FActiveGameplayCueContainer(TArray<FActiveGameplayCue> c_GameplayCues, UAbilitySystemComponent c_Owner) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offGameplayCues.SetValue(c_GameplayCues);
		_offOwner.SetValue(c_Owner);
	}
}
// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureDefinition
// 0x0028
public class FGameplayEffectAttributeCaptureDefinition : ExternalClass
{
	#region Offsets
	private ExternalOffset<FGameplayAttribute>                 _offAttributeToCapture                                         = new ExternalOffset<FGameplayAttribute>(0x0000, false);       // 0x0000(0x0020) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EGameplayEffectAttributeCaptureSource> _offAttributeSource                                            = new ExternalOffset<EGameplayEffectAttributeCaptureSource>(0x0020, false); // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbSnapshot                                                  = new ExternalOffset<byte/*(bool)*/>(0x0021);                  // 0x0021(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGameplayAttribute                                  AttributeToCapture                                             => _offAttributeToCapture.GetValue();
	public EGameplayEffectAttributeCaptureSource               AttributeSource                                                => _offAttributeSource.GetValue();
	public byte/*(bool)*/                                      bSnapshot                                                      => _offbSnapshot.GetValue();
	#endregion

	public FGameplayEffectAttributeCaptureDefinition(FGameplayAttribute c_AttributeToCapture, EGameplayEffectAttributeCaptureSource c_AttributeSource, byte/*(bool)*/ c_bSnapshot) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAttributeToCapture.SetValue(c_AttributeToCapture);
		_offAttributeSource.SetValue(c_AttributeSource);
		_offbSnapshot.SetValue(c_bSnapshot);
	}
}
// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpec
// 0x0038
public class FGameplayEffectAttributeCaptureSpec : ExternalClass
{
	#region Offsets
	private ExternalOffset<FGameplayEffectAttributeCaptureDefinition> _offBackingDefinition                                          = new ExternalOffset<FGameplayEffectAttributeCaptureDefinition>(0x0000, false); // 0x0000(0x0028) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FGameplayEffectAttributeCaptureDefinition           BackingDefinition                                              => _offBackingDefinition.GetValue();
	#endregion

	public FGameplayEffectAttributeCaptureSpec(FGameplayEffectAttributeCaptureDefinition c_BackingDefinition) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBackingDefinition.SetValue(c_BackingDefinition);
	}
}
// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
// 0x0028
public class FGameplayEffectAttributeCaptureSpecContainer : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FGameplayEffectAttributeCaptureSpec>> _offSourceAttributes                                           = new ExternalOffset<TArray<FGameplayEffectAttributeCaptureSpec>>(0x0000, false); // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<FGameplayEffectAttributeCaptureSpec>> _offTargetAttributes                                           = new ExternalOffset<TArray<FGameplayEffectAttributeCaptureSpec>>(0x0010, false); // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<byte/*(bool)*/>                     _offbHasNonSnapshottedAttributes                               = new ExternalOffset<byte/*(bool)*/>(0x0020);                  // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<FGameplayEffectAttributeCaptureSpec>         SourceAttributes                                               => _offSourceAttributes.GetValue();
	public TArray<FGameplayEffectAttributeCaptureSpec>         TargetAttributes                                               => _offTargetAttributes.GetValue();
	public byte/*(bool)*/                                      bHasNonSnapshottedAttributes                                   => _offbHasNonSnapshottedAttributes.GetValue();
	#endregion

	public FGameplayEffectAttributeCaptureSpecContainer(TArray<FGameplayEffectAttributeCaptureSpec> c_SourceAttributes, TArray<FGameplayEffectAttributeCaptureSpec> c_TargetAttributes, byte/*(bool)*/ c_bHasNonSnapshottedAttributes) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSourceAttributes.SetValue(c_SourceAttributes);
		_offTargetAttributes.SetValue(c_TargetAttributes);
		_offbHasNonSnapshottedAttributes.SetValue(c_bHasNonSnapshottedAttributes);
	}
}
// ScriptStruct GameplayAbilities.GameplayTagRequirements
// 0x0040
public class FGameplayTagRequirements : ExternalClass
{
	#region Offsets
	private ExternalOffset<FGameplayTagContainer>              _offRequireTags                                                = new ExternalOffset<FGameplayTagContainer>(0x0000, false);    // 0x0000(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTagContainer>              _offIgnoreTags                                                 = new ExternalOffset<FGameplayTagContainer>(0x0020, false);    // 0x0020(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGameplayTagContainer                               RequireTags                                                    => _offRequireTags.GetValue();
	public FGameplayTagContainer                               IgnoreTags                                                     => _offIgnoreTags.GetValue();
	#endregion

	public FGameplayTagRequirements(FGameplayTagContainer c_RequireTags, FGameplayTagContainer c_IgnoreTags) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRequireTags.SetValue(c_RequireTags);
		_offIgnoreTags.SetValue(c_IgnoreTags);
	}
}
// ScriptStruct GameplayAbilities.TagContainerAggregator
// 0x0088
public class FTagContainerAggregator : ExternalClass
{
	#region Offsets
	private ExternalOffset<FGameplayTagContainer>              _offCapturedActorTags                                          = new ExternalOffset<FGameplayTagContainer>(0x0000, false);    // 0x0000(0x0020) (NativeAccessSpecifierPrivate)
	private ExternalOffset<FGameplayTagContainer>              _offCapturedSpecTags                                           = new ExternalOffset<FGameplayTagContainer>(0x0020, false);    // 0x0020(0x0020) (NativeAccessSpecifierPrivate)
	private ExternalOffset<FGameplayTagContainer>              _offScopedTags                                                 = new ExternalOffset<FGameplayTagContainer>(0x0040, false);    // 0x0040(0x0020) (NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public FGameplayTagContainer                               CapturedActorTags                                              => _offCapturedActorTags.GetValue();
	public FGameplayTagContainer                               CapturedSpecTags                                               => _offCapturedSpecTags.GetValue();
	public FGameplayTagContainer                               ScopedTags                                                     => _offScopedTags.GetValue();
	#endregion

	public FTagContainerAggregator(FGameplayTagContainer c_CapturedActorTags, FGameplayTagContainer c_CapturedSpecTags, FGameplayTagContainer c_ScopedTags) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offCapturedActorTags.SetValue(c_CapturedActorTags);
		_offCapturedSpecTags.SetValue(c_CapturedSpecTags);
		_offScopedTags.SetValue(c_ScopedTags);
	}
}
// ScriptStruct GameplayAbilities.ModifierSpec
// 0x0004
public class FModifierSpec : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offEvaluatedMagnitude                                         = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public float                                               EvaluatedMagnitude                                             => _offEvaluatedMagnitude.GetValue();
	#endregion

	public FModifierSpec(float c_EvaluatedMagnitude) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offEvaluatedMagnitude.SetValue(c_EvaluatedMagnitude);
	}
}
// ScriptStruct GameplayAbilities.ScalableFloat
// 0x0020
public class FScalableFloat : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offValue                                                      = new ExternalOffset<float>(0x0000);                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FCurveTableRowHandle>               _offCurve                                                      = new ExternalOffset<FCurveTableRowHandle>(0x0008, false);     // 0x0008(0x0010) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               Value                                                          => _offValue.GetValue();
	public FCurveTableRowHandle                                Curve                                                          => _offCurve.GetValue();
	#endregion

	public FScalableFloat(float c_Value, FCurveTableRowHandle c_Curve) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offValue.SetValue(c_Value);
		_offCurve.SetValue(c_Curve);
	}
}
// ScriptStruct GameplayAbilities.GameplayAbilitySpecDef
// 0x0090
public class FGameplayAbilitySpecDef : ExternalClass
{
	#region Offsets
	private ExternalOffset<UClass>                             _offAbility                                                    = new ExternalOffset<UClass>(0x0000, true);                    // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScalableFloat>                     _offLevelScalableFloat                                         = new ExternalOffset<FScalableFloat>(0x0008, false);           // 0x0008(0x0020) (Edit, DisableEditOnInstance, RepSkip, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offInputID                                                    = new ExternalOffset<int>(0x0028);                             // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EGameplayEffectGrantedAbilityRemovePolicy> _offRemovalPolicy                                              = new ExternalOffset<EGameplayEffectGrantedAbilityRemovePolicy>(0x002C, false); // 0x002C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UObject>                            _offSourceObject                                               = new ExternalOffset<UObject>(0x0030, true);                   // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayAbilitySpecHandle>         _offAssignedHandle                                             = new ExternalOffset<FGameplayAbilitySpecHandle>(0x0088, false); // 0x0088(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                              Ability                                                        => _offAbility.GetValue();
	public FScalableFloat                                      LevelScalableFloat                                             => _offLevelScalableFloat.GetValue();
	public int                                                 InputID                                                        => _offInputID.GetValue();
	public EGameplayEffectGrantedAbilityRemovePolicy           RemovalPolicy                                                  => _offRemovalPolicy.GetValue();
	public UObject                                             SourceObject                                                   => _offSourceObject.GetValue();
	public FGameplayAbilitySpecHandle                          AssignedHandle                                                 => _offAssignedHandle.GetValue();
	#endregion

	public FGameplayAbilitySpecDef(UClass c_Ability, FScalableFloat c_LevelScalableFloat, int c_InputID, EGameplayEffectGrantedAbilityRemovePolicy c_RemovalPolicy, UObject c_SourceObject, FGameplayAbilitySpecHandle c_AssignedHandle) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAbility.SetValue(c_Ability);
		_offLevelScalableFloat.SetValue(c_LevelScalableFloat);
		_offInputID.SetValue(c_InputID);
		_offRemovalPolicy.SetValue(c_RemovalPolicy);
		_offSourceObject.SetValue(c_SourceObject);
		_offAssignedHandle.SetValue(c_AssignedHandle);
	}
}
// ScriptStruct GameplayAbilities.GameplayAbilityTargetingLocationInfo
// 0x0070
public class FGameplayAbilityTargetingLocationInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<TEnumAsByte<EGameplayAbilityTargetingLocationType>> _offLocationType                                               = new ExternalOffset<TEnumAsByte<EGameplayAbilityTargetingLocationType>>(0x0010, false); // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FTransform>                         _offLiteralTransform                                           = new ExternalOffset<FTransform>(0x0020, false);               // 0x0020(0x0030) (BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	private ExternalOffset<AActor>                             _offSourceActor                                                = new ExternalOffset<AActor>(0x0050, true);                    // 0x0050(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UMeshComponent>                     _offSourceComponent                                            = new ExternalOffset<UMeshComponent>(0x0058, true);            // 0x0058(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UGameplayAbility>                   _offSourceAbility                                              = new ExternalOffset<UGameplayAbility>(0x0060, true);          // 0x0060(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offSourceSocketName                                           = new ExternalOffset<FName>(0x0068, false);                    // 0x0068(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TEnumAsByte<EGameplayAbilityTargetingLocationType>  LocationType                                                   => _offLocationType.GetValue();
	public FTransform                                          LiteralTransform                                               => _offLiteralTransform.GetValue();
	public AActor                                              SourceActor                                                    => _offSourceActor.GetValue();
	public UMeshComponent                                      SourceComponent                                                => _offSourceComponent.GetValue();
	public UGameplayAbility                                    SourceAbility                                                  => _offSourceAbility.GetValue();
	public FName                                               SourceSocketName                                               => _offSourceSocketName.GetValue();
	#endregion

	public FGameplayAbilityTargetingLocationInfo(TEnumAsByte<EGameplayAbilityTargetingLocationType> c_LocationType, FTransform c_LiteralTransform, AActor c_SourceActor, UMeshComponent c_SourceComponent, UGameplayAbility c_SourceAbility, FName c_SourceSocketName) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLocationType.SetValue(c_LocationType);
		_offLiteralTransform.SetValue(c_LiteralTransform);
		_offSourceActor.SetValue(c_SourceActor);
		_offSourceComponent.SetValue(c_SourceComponent);
		_offSourceAbility.SetValue(c_SourceAbility);
		_offSourceSocketName.SetValue(c_SourceSocketName);
	}
}
// ScriptStruct GameplayAbilities.GameplayEffectSpec
// 0x0298
public class FGameplayEffectSpec : ExternalClass
{
	#region Offsets
	private ExternalOffset<UGameplayEffect>                    _offDef                                                        = new ExternalOffset<UGameplayEffect>(0x0000, true);           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FGameplayEffectModifiedAttribute>> _offModifiedAttributes                                         = new ExternalOffset<TArray<FGameplayEffectModifiedAttribute>>(0x0008, false); // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayEffectAttributeCaptureSpecContainer> _offCapturedRelevantAttributes                                 = new ExternalOffset<FGameplayEffectAttributeCaptureSpecContainer>(0x0018, false); // 0x0018(0x0028) (RepSkip, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offDuration                                                   = new ExternalOffset<float>(0x0050);                           // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPeriod                                                     = new ExternalOffset<float>(0x0054);                           // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offChanceToApplyToTarget                                      = new ExternalOffset<float>(0x0058);                           // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FTagContainerAggregator>            _offCapturedSourceTags                                         = new ExternalOffset<FTagContainerAggregator>(0x0060, false);  // 0x0060(0x0088) (RepSkip, NativeAccessSpecifierPublic)
	private ExternalOffset<FTagContainerAggregator>            _offCapturedTargetTags                                         = new ExternalOffset<FTagContainerAggregator>(0x00E8, false);  // 0x00E8(0x0088) (RepSkip, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTagContainer>              _offDynamicGrantedTags                                         = new ExternalOffset<FGameplayTagContainer>(0x0170, false);    // 0x0170(0x0020) (NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTagContainer>              _offDynamicAssetTags                                           = new ExternalOffset<FGameplayTagContainer>(0x0190, false);    // 0x0190(0x0020) (NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FModifierSpec>>              _offModifiers                                                  = new ExternalOffset<TArray<FModifierSpec>>(0x01B0, false);    // 0x01B0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offStackCount                                                 = new ExternalOffset<int>(0x01C0);                             // 0x01C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbCompletedSourceAttributeCapture                           = new ExternalOffset<char>(0x01C4, false);                     // 0x01C4(0x0001) BIT_FIELD (RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbCompletedTargetAttributeCapture                           = new ExternalOffset<char>(0x01C4, false);                     // 0x01C4(0x0001) BIT_FIELD (RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbDurationLocked                                            = new ExternalOffset<char>(0x01C4, false);                     // 0x01C4(0x0001) BIT_FIELD (RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FGameplayAbilitySpecDef>>    _offGrantedAbilitySpecs                                        = new ExternalOffset<TArray<FGameplayAbilitySpecDef>>(0x01C8, false); // 0x01C8(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayEffectContextHandle>       _offEffectContext                                              = new ExternalOffset<FGameplayEffectContextHandle>(0x0278, false); // 0x0278(0x0018) (NativeAccessSpecifierPrivate)
	private ExternalOffset<float>                              _offLevel                                                      = new ExternalOffset<float>(0x0290);                           // 0x0290(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UGameplayEffect                                     Def                                                            => _offDef.GetValue();
	public TArray<FGameplayEffectModifiedAttribute>            ModifiedAttributes                                             => _offModifiedAttributes.GetValue();
	public FGameplayEffectAttributeCaptureSpecContainer        CapturedRelevantAttributes                                     => _offCapturedRelevantAttributes.GetValue();
	public float                                               Duration                                                       => _offDuration.GetValue();
	public float                                               Period                                                         => _offPeriod.GetValue();
	public float                                               ChanceToApplyToTarget                                          => _offChanceToApplyToTarget.GetValue();
	public FTagContainerAggregator                             CapturedSourceTags                                             => _offCapturedSourceTags.GetValue();
	public FTagContainerAggregator                             CapturedTargetTags                                             => _offCapturedTargetTags.GetValue();
	public FGameplayTagContainer                               DynamicGrantedTags                                             => _offDynamicGrantedTags.GetValue();
	public FGameplayTagContainer                               DynamicAssetTags                                               => _offDynamicAssetTags.GetValue();
	public TArray<FModifierSpec>                               Modifiers                                                      => _offModifiers.GetValue();
	public int                                                 StackCount                                                     => _offStackCount.GetValue();
	public TArray<FGameplayAbilitySpecDef>                     GrantedAbilitySpecs                                            => _offGrantedAbilitySpecs.GetValue();
	public FGameplayEffectContextHandle                        EffectContext                                                  => _offEffectContext.GetValue();
	public float                                               Level                                                          => _offLevel.GetValue();
	#endregion

	public FGameplayEffectSpec(UGameplayEffect c_Def, TArray<FGameplayEffectModifiedAttribute> c_ModifiedAttributes, FGameplayEffectAttributeCaptureSpecContainer c_CapturedRelevantAttributes, float c_Duration, float c_Period, float c_ChanceToApplyToTarget, FTagContainerAggregator c_CapturedSourceTags, FTagContainerAggregator c_CapturedTargetTags, FGameplayTagContainer c_DynamicGrantedTags, FGameplayTagContainer c_DynamicAssetTags, TArray<FModifierSpec> c_Modifiers, int c_StackCount, TArray<FGameplayAbilitySpecDef> c_GrantedAbilitySpecs, FGameplayEffectContextHandle c_EffectContext, float c_Level) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDef.SetValue(c_Def);
		_offModifiedAttributes.SetValue(c_ModifiedAttributes);
		_offCapturedRelevantAttributes.SetValue(c_CapturedRelevantAttributes);
		_offDuration.SetValue(c_Duration);
		_offPeriod.SetValue(c_Period);
		_offChanceToApplyToTarget.SetValue(c_ChanceToApplyToTarget);
		_offCapturedSourceTags.SetValue(c_CapturedSourceTags);
		_offCapturedTargetTags.SetValue(c_CapturedTargetTags);
		_offDynamicGrantedTags.SetValue(c_DynamicGrantedTags);
		_offDynamicAssetTags.SetValue(c_DynamicAssetTags);
		_offModifiers.SetValue(c_Modifiers);
		_offStackCount.SetValue(c_StackCount);
		_offGrantedAbilitySpecs.SetValue(c_GrantedAbilitySpecs);
		_offEffectContext.SetValue(c_EffectContext);
		_offLevel.SetValue(c_Level);
	}
}
// ScriptStruct GameplayAbilities.ActiveGameplayEffect
// 0x0364 (0x0370 - 0x000C)
public class FActiveGameplayEffect : FFastArraySerializerItem
{
	#region Offsets
	private ExternalOffset<FGameplayEffectSpec>                _offSpec                                                       = new ExternalOffset<FGameplayEffectSpec>(0x0018, false);      // 0x0018(0x0298) (NativeAccessSpecifierPublic)
	private ExternalOffset<FPredictionKey>                     _offPredictionKey                                              = new ExternalOffset<FPredictionKey>(0x02B0, false);           // 0x02B0(0x0018) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offStartServerWorldTime                                       = new ExternalOffset<float>(0x02C8);                           // 0x02C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offCachedStartServerWorldTime                                 = new ExternalOffset<float>(0x02CC);                           // 0x02CC(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offStartWorldTime                                             = new ExternalOffset<float>(0x02D0);                           // 0x02D0(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIsInhibited                                               = new ExternalOffset<byte/*(bool)*/>(0x02D4);                  // 0x02D4(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGameplayEffectSpec                                 Spec                                                           => _offSpec.GetValue();
	public FPredictionKey                                      PredictionKey                                                  => _offPredictionKey.GetValue();
	public float                                               StartServerWorldTime                                           => _offStartServerWorldTime.GetValue();
	public float                                               CachedStartServerWorldTime                                     => _offCachedStartServerWorldTime.GetValue();
	public float                                               StartWorldTime                                                 => _offStartWorldTime.GetValue();
	public byte/*(bool)*/                                      bIsInhibited                                                   => _offbIsInhibited.GetValue();
	#endregion

	public FActiveGameplayEffect(FGameplayEffectSpec c_Spec, FPredictionKey c_PredictionKey, float c_StartServerWorldTime, float c_CachedStartServerWorldTime, float c_StartWorldTime, byte/*(bool)*/ c_bIsInhibited) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSpec.SetValue(c_Spec);
		_offPredictionKey.SetValue(c_PredictionKey);
		_offStartServerWorldTime.SetValue(c_StartServerWorldTime);
		_offCachedStartServerWorldTime.SetValue(c_CachedStartServerWorldTime);
		_offStartWorldTime.SetValue(c_StartWorldTime);
		_offbIsInhibited.SetValue(c_bIsInhibited);
	}
}
// ScriptStruct GameplayAbilities.ActiveGameplayEffectsContainer
// 0x0378 (0x0480 - 0x0108)
public class FActiveGameplayEffectsContainer : FFastArraySerializer
{
	#region Offsets
	private ExternalOffset<TArray<FActiveGameplayEffect>>      _offGameplayEffects_Internal                                   = new ExternalOffset<TArray<FActiveGameplayEffect>>(0x0138, false); // 0x0138(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<TArray<UGameplayEffect>>            _offApplicationImmunityQueryEffects                            = new ExternalOffset<TArray<UGameplayEffect>>(0x0458, false);  // 0x0458(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<FActiveGameplayEffect>                       GameplayEffects_Internal                                       => _offGameplayEffects_Internal.GetValue();
	public TArray<UGameplayEffect>                             ApplicationImmunityQueryEffects                                => _offApplicationImmunityQueryEffects.GetValue();
	#endregion

	public FActiveGameplayEffectsContainer(TArray<FActiveGameplayEffect> c_GameplayEffects_Internal, TArray<UGameplayEffect> c_ApplicationImmunityQueryEffects) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offGameplayEffects_Internal.SetValue(c_GameplayEffects_Internal);
		_offApplicationImmunityQueryEffects.SetValue(c_ApplicationImmunityQueryEffects);
	}
}
// ScriptStruct GameplayAbilities.GameplayAbilityLocalAnimMontage
// 0x0030
public class FGameplayAbilityLocalAnimMontage : ExternalClass
{
	#region Offsets
	private ExternalOffset<UAnimMontage>                       _offAnimMontage                                                = new ExternalOffset<UAnimMontage>(0x0000, true);              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offPlayBit                                                    = new ExternalOffset<byte/*(bool)*/>(0x0008);                  // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FPredictionKey>                     _offPredictionKey                                              = new ExternalOffset<FPredictionKey>(0x0010, false);           // 0x0010(0x0018) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UGameplayAbility>                   _offAnimatingAbility                                           = new ExternalOffset<UGameplayAbility>(0x0028, true);          // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UAnimMontage                                        AnimMontage                                                    => _offAnimMontage.GetValue();
	public byte/*(bool)*/                                      PlayBit                                                        => _offPlayBit.GetValue();
	public FPredictionKey                                      PredictionKey                                                  => _offPredictionKey.GetValue();
	public UGameplayAbility                                    AnimatingAbility                                               => _offAnimatingAbility.GetValue();
	#endregion

	public FGameplayAbilityLocalAnimMontage(UAnimMontage c_AnimMontage, byte/*(bool)*/ c_PlayBit, FPredictionKey c_PredictionKey, UGameplayAbility c_AnimatingAbility) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAnimMontage.SetValue(c_AnimMontage);
		_offPlayBit.SetValue(c_PlayBit);
		_offPredictionKey.SetValue(c_PredictionKey);
		_offAnimatingAbility.SetValue(c_AnimatingAbility);
	}
}
// ScriptStruct GameplayAbilities.GameplayAbilityRepAnimMontage
// 0x0030
public class FGameplayAbilityRepAnimMontage : ExternalClass
{
	#region Offsets
	private ExternalOffset<UAnimMontage>                       _offAnimMontage                                                = new ExternalOffset<UAnimMontage>(0x0000, true);              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPlayRate                                                   = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offPosition                                                   = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offBlendTime                                                  = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offNextSectionID                                              = new ExternalOffset<char>(0x0014, false);                     // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offIsStopped                                                  = new ExternalOffset<char>(0x0015, false);                     // 0x0015(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offForcePlayBit                                               = new ExternalOffset<char>(0x0015, false);                     // 0x0015(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offSkipPositionCorrection                                     = new ExternalOffset<char>(0x0015, false);                     // 0x0015(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//	private ExternalOffset<char>                               _offbSkipPlayRate                                              = new ExternalOffset<char>(0x0015, false);                     // 0x0015(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FPredictionKey>                     _offPredictionKey                                              = new ExternalOffset<FPredictionKey>(0x0018, false);           // 0x0018(0x0018) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UAnimMontage                                        AnimMontage                                                    => _offAnimMontage.GetValue();
	public float                                               PlayRate                                                       => _offPlayRate.GetValue();
	public float                                               Position                                                       => _offPosition.GetValue();
	public float                                               BlendTime                                                      => _offBlendTime.GetValue();
	public FPredictionKey                                      PredictionKey                                                  => _offPredictionKey.GetValue();
	#endregion

	public FGameplayAbilityRepAnimMontage(UAnimMontage c_AnimMontage, float c_PlayRate, float c_Position, float c_BlendTime, FPredictionKey c_PredictionKey) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAnimMontage.SetValue(c_AnimMontage);
		_offPlayRate.SetValue(c_PlayRate);
		_offPosition.SetValue(c_Position);
		_offBlendTime.SetValue(c_BlendTime);
		_offPredictionKey.SetValue(c_PredictionKey);
	}
}
// ScriptStruct GameplayAbilities.GameplayAbilitySpecContainer
// 0x0018 (0x0120 - 0x0108)
public class FGameplayAbilitySpecContainer : FFastArraySerializer
{
	#region Offsets
	private ExternalOffset<TArray<FGameplayAbilitySpec>>       _offItems                                                      = new ExternalOffset<TArray<FGameplayAbilitySpec>>(0x0108, false); // 0x0108(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<UAbilitySystemComponent>            _offOwner                                                      = new ExternalOffset<UAbilitySystemComponent>(0x0118, true);   // 0x0118(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FGameplayAbilitySpec>                        Items                                                          => _offItems.GetValue();
	public UAbilitySystemComponent                             Owner                                                          => _offOwner.GetValue();
	#endregion

	public FGameplayAbilitySpecContainer(TArray<FGameplayAbilitySpec> c_Items, UAbilitySystemComponent c_Owner) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offItems.SetValue(c_Items);
		_offOwner.SetValue(c_Owner);
	}
}
// ScriptStruct GameplayAbilities.AttributeMetaData
// 0x0028 (0x0030 - 0x0008)
public class FAttributeMetaData : FTableRowBase
{
	#region Offsets
	private ExternalOffset<float>                              _offBaseValue                                                  = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMinValue                                                   = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMaxValue                                                   = new ExternalOffset<float>(0x0010);                           // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offDerivedAttributeInfo                                       = new ExternalOffset<FString>(0x0018, false);                  // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbCanStack                                                  = new ExternalOffset<byte/*(bool)*/>(0x0028);                  // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public float                                               BaseValue                                                      => _offBaseValue.GetValue();
	public float                                               MinValue                                                       => _offMinValue.GetValue();
	public float                                               MaxValue                                                       => _offMaxValue.GetValue();
	public FString                                             DerivedAttributeInfo                                           => _offDerivedAttributeInfo.GetValue();
	public byte/*(bool)*/                                      bCanStack                                                      => _offbCanStack.GetValue();
	#endregion

	public FAttributeMetaData(float c_BaseValue, float c_MinValue, float c_MaxValue, FString c_DerivedAttributeInfo, byte/*(bool)*/ c_bCanStack) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBaseValue.SetValue(c_BaseValue);
		_offMinValue.SetValue(c_MinValue);
		_offMaxValue.SetValue(c_MaxValue);
		_offDerivedAttributeInfo.SetValue(c_DerivedAttributeInfo);
		_offbCanStack.SetValue(c_bCanStack);
	}
}
// ScriptStruct GameplayAbilities.GameplayAttributeData
// 0x0010
public class FGameplayAttributeData : ExternalClass
{
	#region Offsets
	private ExternalOffset<float>                              _offBaseValue                                                  = new ExternalOffset<float>(0x0008);                           // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<float>                              _offCurrentValue                                               = new ExternalOffset<float>(0x000C);                           // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public float                                               BaseValue                                                      => _offBaseValue.GetValue();
	public float                                               CurrentValue                                                   => _offCurrentValue.GetValue();
	#endregion

	public FGameplayAttributeData(float c_BaseValue, float c_CurrentValue) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offBaseValue.SetValue(c_BaseValue);
		_offCurrentValue.SetValue(c_CurrentValue);
	}
}
// ScriptStruct GameplayAbilities.AbilityTriggerData
// 0x000C
public class FAbilityTriggerData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FGameplayTag>                       _offTriggerTag                                                 = new ExternalOffset<FGameplayTag>(0x0000, false);             // 0x0000(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EGameplayAbilityTriggerSource>> _offTriggerSource                                              = new ExternalOffset<TEnumAsByte<EGameplayAbilityTriggerSource>>(0x0008, false); // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGameplayTag                                        TriggerTag                                                     => _offTriggerTag.GetValue();
	public TEnumAsByte<EGameplayAbilityTriggerSource>          TriggerSource                                                  => _offTriggerSource.GetValue();
	#endregion

	public FAbilityTriggerData(FGameplayTag c_TriggerTag, TEnumAsByte<EGameplayAbilityTriggerSource> c_TriggerSource) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTriggerTag.SetValue(c_TriggerTag);
		_offTriggerSource.SetValue(c_TriggerSource);
	}
}
// ScriptStruct GameplayAbilities.GameplayAbilityBindInfo
// 0x0010
public class FGameplayAbilityBindInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<TEnumAsByte<EGameplayAbilityInputBinds>> _offCommand                                                    = new ExternalOffset<TEnumAsByte<EGameplayAbilityInputBinds>>(0x0000, false); // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                             _offGameplayAbilityClass                                       = new ExternalOffset<UClass>(0x0008, true);                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TEnumAsByte<EGameplayAbilityInputBinds>             Command                                                        => _offCommand.GetValue();
	public UClass                                              GameplayAbilityClass                                           => _offGameplayAbilityClass.GetValue();
	#endregion

	public FGameplayAbilityBindInfo(TEnumAsByte<EGameplayAbilityInputBinds> c_Command, UClass c_GameplayAbilityClass) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offCommand.SetValue(c_Command);
		_offGameplayAbilityClass.SetValue(c_GameplayAbilityClass);
	}
}
// ScriptStruct GameplayAbilities.GameplayAbilityTargetData
// 0x0008
public class FGameplayAbilityTargetData : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FGameplayAbilityTargetData() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
// 0x0090 (0x0098 - 0x0008)
public class FGameplayAbilityTargetData_SingleTargetHit : FGameplayAbilityTargetData
{
	#region Offsets
	private ExternalOffset<FHitResult>                         _offHitResult                                                  = new ExternalOffset<FHitResult>(0x0008, false);               // 0x0008(0x0088) (IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbHitReplaced                                               = new ExternalOffset<byte/*(bool)*/>(0x0090);                  // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FHitResult                                          HitResult                                                      => _offHitResult.GetValue();
	public byte/*(bool)*/                                      bHitReplaced                                                   => _offbHitReplaced.GetValue();
	#endregion

	public FGameplayAbilityTargetData_SingleTargetHit(FHitResult c_HitResult, byte/*(bool)*/ c_bHitReplaced) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offHitResult.SetValue(c_HitResult);
		_offbHitReplaced.SetValue(c_bHitReplaced);
	}
}
// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_ActorArray
// 0x0088 (0x0090 - 0x0008)
public class FGameplayAbilityTargetData_ActorArray : FGameplayAbilityTargetData
{
	#region Offsets
	private ExternalOffset<FGameplayAbilityTargetingLocationInfo> _offSourceLocation                                             = new ExternalOffset<FGameplayAbilityTargetingLocationInfo>(0x0010, false); // 0x0010(0x0070) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<TWeakObjectPtr<AActor>>>     _offTargetActorArray                                           = new ExternalOffset<TArray<TWeakObjectPtr<AActor>>>(0x0080, false); // 0x0080(0x0010) (Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGameplayAbilityTargetingLocationInfo               SourceLocation                                                 => _offSourceLocation.GetValue();
	public TArray<TWeakObjectPtr<AActor>>                      TargetActorArray                                               => _offTargetActorArray.GetValue();
	#endregion

	public FGameplayAbilityTargetData_ActorArray(FGameplayAbilityTargetingLocationInfo c_SourceLocation, TArray<TWeakObjectPtr<AActor>> c_TargetActorArray) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSourceLocation.SetValue(c_SourceLocation);
		_offTargetActorArray.SetValue(c_TargetActorArray);
	}
}
// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_LocationInfo
// 0x00E8 (0x00F0 - 0x0008)
public class FGameplayAbilityTargetData_LocationInfo : FGameplayAbilityTargetData
{
	#region Offsets
	private ExternalOffset<FGameplayAbilityTargetingLocationInfo> _offSourceLocation                                             = new ExternalOffset<FGameplayAbilityTargetingLocationInfo>(0x0010, false); // 0x0010(0x0070) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayAbilityTargetingLocationInfo> _offTargetLocation                                             = new ExternalOffset<FGameplayAbilityTargetingLocationInfo>(0x0080, false); // 0x0080(0x0070) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGameplayAbilityTargetingLocationInfo               SourceLocation                                                 => _offSourceLocation.GetValue();
	public FGameplayAbilityTargetingLocationInfo               TargetLocation                                                 => _offTargetLocation.GetValue();
	#endregion

	public FGameplayAbilityTargetData_LocationInfo(FGameplayAbilityTargetingLocationInfo c_SourceLocation, FGameplayAbilityTargetingLocationInfo c_TargetLocation) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSourceLocation.SetValue(c_SourceLocation);
		_offTargetLocation.SetValue(c_TargetLocation);
	}
}
// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
// 0x0008
public class FGameplayAbilitySpecHandleAndPredictionKey : ExternalClass
{
	#region Offsets
	private ExternalOffset<FGameplayAbilitySpecHandle>         _offAbilityHandle                                              = new ExternalOffset<FGameplayAbilitySpecHandle>(0x0000, false); // 0x0000(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offPredictionKeyAtCreation                                    = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGameplayAbilitySpecHandle                          AbilityHandle                                                  => _offAbilityHandle.GetValue();
	public int                                                 PredictionKeyAtCreation                                        => _offPredictionKeyAtCreation.GetValue();
	#endregion

	public FGameplayAbilitySpecHandleAndPredictionKey(FGameplayAbilitySpecHandle c_AbilityHandle, int c_PredictionKeyAtCreation) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAbilityHandle.SetValue(c_AbilityHandle);
		_offPredictionKeyAtCreation.SetValue(c_PredictionKeyAtCreation);
	}
}
// ScriptStruct GameplayAbilities.AbilityTaskDebugMessage
// 0x0018
public class FAbilityTaskDebugMessage : ExternalClass
{
	#region Offsets
	private ExternalOffset<UGameplayTask>                      _offFromTask                                                   = new ExternalOffset<UGameplayTask>(0x0000, true);             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offMessage                                                    = new ExternalOffset<FString>(0x0008, false);                  // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UGameplayTask                                       FromTask                                                       => _offFromTask.GetValue();
	public FString                                             Message                                                        => _offMessage.GetValue();
	#endregion

	public FAbilityTaskDebugMessage(UGameplayTask c_FromTask, FString c_Message) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offFromTask.SetValue(c_FromTask);
		_offMessage.SetValue(c_Message);
	}
}
// ScriptStruct GameplayAbilities.AbilityEndedData
// 0x0010
public class FAbilityEndedData : ExternalClass
{
	#region Offsets
	private ExternalOffset<UGameplayAbility>                   _offAbilityThatEnded                                           = new ExternalOffset<UGameplayAbility>(0x0000, true);          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayAbilitySpecHandle>         _offAbilitySpecHandle                                          = new ExternalOffset<FGameplayAbilitySpecHandle>(0x0008, false); // 0x0008(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbReplicateEndAbility                                       = new ExternalOffset<byte/*(bool)*/>(0x000C);                  // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbWasCancelled                                              = new ExternalOffset<byte/*(bool)*/>(0x000D);                  // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UGameplayAbility                                    AbilityThatEnded                                               => _offAbilityThatEnded.GetValue();
	public FGameplayAbilitySpecHandle                          AbilitySpecHandle                                              => _offAbilitySpecHandle.GetValue();
	public byte/*(bool)*/                                      bReplicateEndAbility                                           => _offbReplicateEndAbility.GetValue();
	public byte/*(bool)*/                                      bWasCancelled                                                  => _offbWasCancelled.GetValue();
	#endregion

	public FAbilityEndedData(UGameplayAbility c_AbilityThatEnded, FGameplayAbilitySpecHandle c_AbilitySpecHandle, byte/*(bool)*/ c_bReplicateEndAbility, byte/*(bool)*/ c_bWasCancelled) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAbilityThatEnded.SetValue(c_AbilityThatEnded);
		_offAbilitySpecHandle.SetValue(c_AbilitySpecHandle);
		_offbReplicateEndAbility.SetValue(c_bReplicateEndAbility);
		_offbWasCancelled.SetValue(c_bWasCancelled);
	}
}
// ScriptStruct GameplayAbilities.GameplayAbilityActorInfo
// 0x0040
public class FGameplayAbilityActorInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<TWeakObjectPtr<AActor>>             _offOwnerActor                                                 = new ExternalOffset<TWeakObjectPtr<AActor>>(0x0008, false);   // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TWeakObjectPtr<AActor>>             _offAvatarActor                                                = new ExternalOffset<TWeakObjectPtr<AActor>>(0x0010, false);   // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TWeakObjectPtr<APlayerController>>  _offPlayerController                                           = new ExternalOffset<TWeakObjectPtr<APlayerController>>(0x0018, false); // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TWeakObjectPtr<UAbilitySystemComponent>> _offAbilitySystemComponent                                     = new ExternalOffset<TWeakObjectPtr<UAbilitySystemComponent>>(0x0020, false); // 0x0020(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TWeakObjectPtr<USkeletalMeshComponent>> _offSkeletalMeshComponent                                      = new ExternalOffset<TWeakObjectPtr<USkeletalMeshComponent>>(0x0028, false); // 0x0028(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TWeakObjectPtr<UAnimInstance>>      _offAnimInstance                                               = new ExternalOffset<TWeakObjectPtr<UAnimInstance>>(0x0030, false); // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TWeakObjectPtr<UMovementComponent>> _offMovementComponent                                          = new ExternalOffset<TWeakObjectPtr<UMovementComponent>>(0x0038, false); // 0x0038(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TWeakObjectPtr<AActor>                              OwnerActor                                                     => _offOwnerActor.GetValue();
	public TWeakObjectPtr<AActor>                              AvatarActor                                                    => _offAvatarActor.GetValue();
	public TWeakObjectPtr<APlayerController>                   PlayerController                                               => _offPlayerController.GetValue();
	public TWeakObjectPtr<UAbilitySystemComponent>             AbilitySystemComponent                                         => _offAbilitySystemComponent.GetValue();
	public TWeakObjectPtr<USkeletalMeshComponent>              SkeletalMeshComponent                                          => _offSkeletalMeshComponent.GetValue();
	public TWeakObjectPtr<UAnimInstance>                       AnimInstance                                                   => _offAnimInstance.GetValue();
	public TWeakObjectPtr<UMovementComponent>                  MovementComponent                                              => _offMovementComponent.GetValue();
	#endregion

	public FGameplayAbilityActorInfo(TWeakObjectPtr<AActor> c_OwnerActor, TWeakObjectPtr<AActor> c_AvatarActor, TWeakObjectPtr<APlayerController> c_PlayerController, TWeakObjectPtr<UAbilitySystemComponent> c_AbilitySystemComponent, TWeakObjectPtr<USkeletalMeshComponent> c_SkeletalMeshComponent, TWeakObjectPtr<UAnimInstance> c_AnimInstance, TWeakObjectPtr<UMovementComponent> c_MovementComponent) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offOwnerActor.SetValue(c_OwnerActor);
		_offAvatarActor.SetValue(c_AvatarActor);
		_offPlayerController.SetValue(c_PlayerController);
		_offAbilitySystemComponent.SetValue(c_AbilitySystemComponent);
		_offSkeletalMeshComponent.SetValue(c_SkeletalMeshComponent);
		_offAnimInstance.SetValue(c_AnimInstance);
		_offMovementComponent.SetValue(c_MovementComponent);
	}
}
// ScriptStruct GameplayAbilities.WorldReticleParameters
// 0x000C
public class FWorldReticleParameters : ExternalClass
{
	#region Offsets
	private ExternalOffset<FVector>                            _offAOEScale                                                   = new ExternalOffset<FVector>(0x0000, false);                  // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FVector                                             AOEScale                                                       => _offAOEScale.GetValue();
	#endregion

	public FWorldReticleParameters(FVector c_AOEScale) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAOEScale.SetValue(c_AOEScale);
	}
}
// ScriptStruct GameplayAbilities.PreallocationInfo
// 0x0068
public class FPreallocationInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<UClass>>                     _offClassesNeedingPreallocation                                = new ExternalOffset<TArray<UClass>>(0x0050, false);           // 0x0050(0x0010) (ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<UClass>                                      ClassesNeedingPreallocation                                    => _offClassesNeedingPreallocation.GetValue();
	#endregion

	public FPreallocationInfo(TArray<UClass> c_ClassesNeedingPreallocation) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offClassesNeedingPreallocation.SetValue(c_ClassesNeedingPreallocation);
	}
}
// ScriptStruct GameplayAbilities.GameplayCuePendingExecute
// 0x0170
public class FGameplayCuePendingExecute : ExternalClass
{
	#region Offsets
	private ExternalOffset<FPredictionKey>                     _offPredictionKey                                              = new ExternalOffset<FPredictionKey>(0x0018, false);           // 0x0018(0x0018) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EGameplayCuePayloadType>            _offPayloadType                                                = new ExternalOffset<EGameplayCuePayloadType>(0x0030, false);  // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UAbilitySystemComponent>            _offOwningComponent                                            = new ExternalOffset<UAbilitySystemComponent>(0x0038, true);   // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayEffectSpecForRPC>          _offFromSpec                                                   = new ExternalOffset<FGameplayEffectSpecForRPC>(0x0040, false); // 0x0040(0x0078) (NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayCueParameters>             _offCueParameters                                              = new ExternalOffset<FGameplayCueParameters>(0x00B8, false);   // 0x00B8(0x00B8) (ContainsInstancedReference, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FPredictionKey                                      PredictionKey                                                  => _offPredictionKey.GetValue();
	public EGameplayCuePayloadType                             PayloadType                                                    => _offPayloadType.GetValue();
	public UAbilitySystemComponent                             OwningComponent                                                => _offOwningComponent.GetValue();
	public FGameplayEffectSpecForRPC                           FromSpec                                                       => _offFromSpec.GetValue();
	public FGameplayCueParameters                              CueParameters                                                  => _offCueParameters.GetValue();
	#endregion

	public FGameplayCuePendingExecute(FPredictionKey c_PredictionKey, EGameplayCuePayloadType c_PayloadType, UAbilitySystemComponent c_OwningComponent, FGameplayEffectSpecForRPC c_FromSpec, FGameplayCueParameters c_CueParameters) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPredictionKey.SetValue(c_PredictionKey);
		_offPayloadType.SetValue(c_PayloadType);
		_offOwningComponent.SetValue(c_OwningComponent);
		_offFromSpec.SetValue(c_FromSpec);
		_offCueParameters.SetValue(c_CueParameters);
	}
}
// ScriptStruct GameplayAbilities.MinimalGameplayCueReplicationProxy
// 0x01C0
public class FMinimalGameplayCueReplicationProxy : ExternalClass
{
	#region Offsets
	private ExternalOffset<UAbilitySystemComponent>            _offOwner                                                      = new ExternalOffset<UAbilitySystemComponent>(0x01B0, true);   // 0x01B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public UAbilitySystemComponent                             Owner                                                          => _offOwner.GetValue();
	#endregion

	public FMinimalGameplayCueReplicationProxy(UAbilitySystemComponent c_Owner) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offOwner.SetValue(c_Owner);
	}
}
// ScriptStruct GameplayAbilities.GameplayCueTag
// 0x0008
public class FGameplayCueTag : ExternalClass
{
	#region Offsets
	private ExternalOffset<FGameplayTag>                       _offGameplayCueTag                                             = new ExternalOffset<FGameplayTag>(0x0000, false);             // 0x0000(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGameplayTag                                        GameplayCueTag                                                 => _offGameplayCueTag.GetValue();
	#endregion

	public FGameplayCueTag(FGameplayTag c_GameplayCueTag) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offGameplayCueTag.SetValue(c_GameplayCueTag);
	}
}
// ScriptStruct GameplayAbilities.GameplayCueObjectLibrary
// 0x0050
public class FGameplayCueObjectLibrary : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FString>>                    _offPaths                                                      = new ExternalOffset<TArray<FString>>(0x0000, false);          // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<UObjectLibrary>                     _offActorObjectLibrary                                         = new ExternalOffset<UObjectLibrary>(0x0030, true);            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UObjectLibrary>                     _offStaticObjectLibrary                                        = new ExternalOffset<UObjectLibrary>(0x0038, true);            // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UGameplayCueSet>                    _offCueSet                                                     = new ExternalOffset<UGameplayCueSet>(0x0040, true);           // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbShouldSyncScan                                            = new ExternalOffset<byte/*(bool)*/>(0x004C);                  // 0x004C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbShouldAsyncLoad                                           = new ExternalOffset<byte/*(bool)*/>(0x004D);                  // 0x004D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbShouldSyncLoad                                            = new ExternalOffset<byte/*(bool)*/>(0x004E);                  // 0x004E(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbHasBeenInitialized                                        = new ExternalOffset<byte/*(bool)*/>(0x004F);                  // 0x004F(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FString>                                     Paths                                                          => _offPaths.GetValue();
	public UObjectLibrary                                      ActorObjectLibrary                                             => _offActorObjectLibrary.GetValue();
	public UObjectLibrary                                      StaticObjectLibrary                                            => _offStaticObjectLibrary.GetValue();
	public UGameplayCueSet                                     CueSet                                                         => _offCueSet.GetValue();
	public byte/*(bool)*/                                      bShouldSyncScan                                                => _offbShouldSyncScan.GetValue();
	public byte/*(bool)*/                                      bShouldAsyncLoad                                               => _offbShouldAsyncLoad.GetValue();
	public byte/*(bool)*/                                      bShouldSyncLoad                                                => _offbShouldSyncLoad.GetValue();
	public byte/*(bool)*/                                      bHasBeenInitialized                                            => _offbHasBeenInitialized.GetValue();
	#endregion

	public FGameplayCueObjectLibrary(TArray<FString> c_Paths, UObjectLibrary c_ActorObjectLibrary, UObjectLibrary c_StaticObjectLibrary, UGameplayCueSet c_CueSet, byte/*(bool)*/ c_bShouldSyncScan, byte/*(bool)*/ c_bShouldAsyncLoad, byte/*(bool)*/ c_bShouldSyncLoad, byte/*(bool)*/ c_bHasBeenInitialized) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPaths.SetValue(c_Paths);
		_offActorObjectLibrary.SetValue(c_ActorObjectLibrary);
		_offStaticObjectLibrary.SetValue(c_StaticObjectLibrary);
		_offCueSet.SetValue(c_CueSet);
		_offbShouldSyncScan.SetValue(c_bShouldSyncScan);
		_offbShouldAsyncLoad.SetValue(c_bShouldAsyncLoad);
		_offbShouldSyncLoad.SetValue(c_bShouldSyncLoad);
		_offbHasBeenInitialized.SetValue(c_bHasBeenInitialized);
	}
}
// ScriptStruct GameplayAbilities.GameplayCueNotifyData
// 0x0030
public class FGameplayCueNotifyData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FGameplayTag>                       _offGameplayCueTag                                             = new ExternalOffset<FGameplayTag>(0x0000, false);             // 0x0000(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSoftObjectPath>                    _offGameplayCueNotifyObj                                       = new ExternalOffset<FSoftObjectPath>(0x0008, false);          // 0x0008(0x0018) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                             _offLoadedGameplayCueClass                                     = new ExternalOffset<UClass>(0x0020, true);                    // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGameplayTag                                        GameplayCueTag                                                 => _offGameplayCueTag.GetValue();
	public FSoftObjectPath                                     GameplayCueNotifyObj                                           => _offGameplayCueNotifyObj.GetValue();
	public UClass                                              LoadedGameplayCueClass                                         => _offLoadedGameplayCueClass.GetValue();
	#endregion

	public FGameplayCueNotifyData(FGameplayTag c_GameplayCueTag, FSoftObjectPath c_GameplayCueNotifyObj, UClass c_LoadedGameplayCueClass) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offGameplayCueTag.SetValue(c_GameplayCueTag);
		_offGameplayCueNotifyObj.SetValue(c_GameplayCueNotifyObj);
		_offLoadedGameplayCueClass.SetValue(c_LoadedGameplayCueClass);
	}
}
// ScriptStruct GameplayAbilities.GameplayCueTranslationLink
// 0x0018
public class FGameplayCueTranslationLink : ExternalClass
{
	#region Offsets
	private ExternalOffset<UGameplayCueTranslator>             _offRulesCDO                                                   = new ExternalOffset<UGameplayCueTranslator>(0x0000, true);    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UGameplayCueTranslator                              RulesCDO                                                       => _offRulesCDO.GetValue();
	#endregion

	public FGameplayCueTranslationLink(UGameplayCueTranslator c_RulesCDO) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offRulesCDO.SetValue(c_RulesCDO);
	}
}
// ScriptStruct GameplayAbilities.GameplayCueTranslatorNodeIndex
// 0x0004
public class FGameplayCueTranslatorNodeIndex : ExternalClass
{
	#region Offsets
	private ExternalOffset<int>                                _offIndex                                                      = new ExternalOffset<int>(0x0000);                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public int                                                 Index                                                          => _offIndex.GetValue();
	#endregion

	public FGameplayCueTranslatorNodeIndex(int c_Index) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offIndex.SetValue(c_Index);
	}
}
// ScriptStruct GameplayAbilities.GameplayCueTranslatorNode
// 0x0078
public class FGameplayCueTranslatorNode : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FGameplayCueTranslationLink>> _offLinks                                                      = new ExternalOffset<TArray<FGameplayCueTranslationLink>>(0x0000, false); // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayCueTranslatorNodeIndex>    _offCachedIndex                                                = new ExternalOffset<FGameplayCueTranslatorNodeIndex>(0x0010, false); // 0x0010(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTag>                       _offCachedGameplayTag                                          = new ExternalOffset<FGameplayTag>(0x0014, false);             // 0x0014(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offCachedGameplayTagName                                      = new ExternalOffset<FName>(0x001C, false);                    // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FGameplayCueTranslationLink>                 Links                                                          => _offLinks.GetValue();
	public FGameplayCueTranslatorNodeIndex                     CachedIndex                                                    => _offCachedIndex.GetValue();
	public FGameplayTag                                        CachedGameplayTag                                              => _offCachedGameplayTag.GetValue();
	public FName                                               CachedGameplayTagName                                          => _offCachedGameplayTagName.GetValue();
	#endregion

	public FGameplayCueTranslatorNode(TArray<FGameplayCueTranslationLink> c_Links, FGameplayCueTranslatorNodeIndex c_CachedIndex, FGameplayTag c_CachedGameplayTag, FName c_CachedGameplayTagName) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offLinks.SetValue(c_Links);
		_offCachedIndex.SetValue(c_CachedIndex);
		_offCachedGameplayTag.SetValue(c_CachedGameplayTag);
		_offCachedGameplayTagName.SetValue(c_CachedGameplayTagName);
	}
}
// ScriptStruct GameplayAbilities.GameplayCueTranslationManager
// 0x0080
public class FGameplayCueTranslationManager : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FGameplayCueTranslatorNode>> _offTranslationLUT                                             = new ExternalOffset<TArray<FGameplayCueTranslatorNode>>(0x0000, false); // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
//	private TMap<struct FName, struct FGameplayCueTranslatorNodeIndex> _offTranslationNameToIndexMap                                  = new ExternalOffset<TMap<FGameplayCueTranslatorNodeIndex>>(0x0010, false); // 0x0010(0x0050) (ZeroConstructor, NativeAccessSpecifierPrivate)
	private ExternalOffset<UGameplayTagsManager>               _offTagManager                                                 = new ExternalOffset<UGameplayTagsManager>(0x0060, true);      // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<FGameplayCueTranslatorNode>                  TranslationLUT                                                 => _offTranslationLUT.GetValue();
	public UGameplayTagsManager                                TagManager                                                     => _offTagManager.GetValue();
	#endregion

	public FGameplayCueTranslationManager(TArray<FGameplayCueTranslatorNode> c_TranslationLUT, UGameplayTagsManager c_TagManager) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTranslationLUT.SetValue(c_TranslationLUT);
		_offTagManager.SetValue(c_TagManager);
	}
}
// ScriptStruct GameplayAbilities.ActiveGameplayEffectQuery
// 0x0070
public class FActiveGameplayEffectQuery : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FActiveGameplayEffectQuery() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct GameplayAbilities.InheritedTagContainer
// 0x0060
public class FInheritedTagContainer : ExternalClass
{
	#region Offsets
	private ExternalOffset<FGameplayTagContainer>              _offCombinedTags                                               = new ExternalOffset<FGameplayTagContainer>(0x0000, false);    // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTagContainer>              _offAdded                                                      = new ExternalOffset<FGameplayTagContainer>(0x0020, false);    // 0x0020(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTagContainer>              _offRemoved                                                    = new ExternalOffset<FGameplayTagContainer>(0x0040, false);    // 0x0040(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGameplayTagContainer                               CombinedTags                                                   => _offCombinedTags.GetValue();
	public FGameplayTagContainer                               Added                                                          => _offAdded.GetValue();
	public FGameplayTagContainer                               Removed                                                        => _offRemoved.GetValue();
	#endregion

	public FInheritedTagContainer(FGameplayTagContainer c_CombinedTags, FGameplayTagContainer c_Added, FGameplayTagContainer c_Removed) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offCombinedTags.SetValue(c_CombinedTags);
		_offAdded.SetValue(c_Added);
		_offRemoved.SetValue(c_Removed);
	}
}
// ScriptStruct GameplayAbilities.GameplayEffectCue
// 0x0048
public class FGameplayEffectCue : ExternalClass
{
	#region Offsets
	private ExternalOffset<FGameplayAttribute>                 _offMagnitudeAttribute                                         = new ExternalOffset<FGameplayAttribute>(0x0000, false);       // 0x0000(0x0020) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMinLevel                                                   = new ExternalOffset<float>(0x0020);                           // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMaxLevel                                                   = new ExternalOffset<float>(0x0024);                           // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTagContainer>              _offGameplayCueTags                                            = new ExternalOffset<FGameplayTagContainer>(0x0028, false);    // 0x0028(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGameplayAttribute                                  MagnitudeAttribute                                             => _offMagnitudeAttribute.GetValue();
	public float                                               MinLevel                                                       => _offMinLevel.GetValue();
	public float                                               MaxLevel                                                       => _offMaxLevel.GetValue();
	public FGameplayTagContainer                               GameplayCueTags                                                => _offGameplayCueTags.GetValue();
	#endregion

	public FGameplayEffectCue(FGameplayAttribute c_MagnitudeAttribute, float c_MinLevel, float c_MaxLevel, FGameplayTagContainer c_GameplayCueTags) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMagnitudeAttribute.SetValue(c_MagnitudeAttribute);
		_offMinLevel.SetValue(c_MinLevel);
		_offMaxLevel.SetValue(c_MaxLevel);
		_offGameplayCueTags.SetValue(c_GameplayCueTags);
	}
}
// ScriptStruct GameplayAbilities.AttributeBasedFloat
// 0x00E0
public class FAttributeBasedFloat : ExternalClass
{
	#region Offsets
	private ExternalOffset<FScalableFloat>                     _offCoefficient                                                = new ExternalOffset<FScalableFloat>(0x0000, false);           // 0x0000(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<FScalableFloat>                     _offPreMultiplyAdditiveValue                                   = new ExternalOffset<FScalableFloat>(0x0020, false);           // 0x0020(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<FScalableFloat>                     _offPostMultiplyAdditiveValue                                  = new ExternalOffset<FScalableFloat>(0x0040, false);           // 0x0040(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayEffectAttributeCaptureDefinition> _offBackingAttribute                                           = new ExternalOffset<FGameplayEffectAttributeCaptureDefinition>(0x0060, false); // 0x0060(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FCurveTableRowHandle>               _offAttributeCurve                                             = new ExternalOffset<FCurveTableRowHandle>(0x0088, false);     // 0x0088(0x0010) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EAttributeBasedFloatCalculationType> _offAttributeCalculationType                                   = new ExternalOffset<EAttributeBasedFloatCalculationType>(0x0098, false); // 0x0098(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<EGameplayModEvaluationChannel>      _offFinalChannel                                               = new ExternalOffset<EGameplayModEvaluationChannel>(0x0099, false); // 0x0099(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTagContainer>              _offSourceTagFilter                                            = new ExternalOffset<FGameplayTagContainer>(0x00A0, false);    // 0x00A0(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTagContainer>              _offTargetTagFilter                                            = new ExternalOffset<FGameplayTagContainer>(0x00C0, false);    // 0x00C0(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FScalableFloat                                      Coefficient                                                    => _offCoefficient.GetValue();
	public FScalableFloat                                      PreMultiplyAdditiveValue                                       => _offPreMultiplyAdditiveValue.GetValue();
	public FScalableFloat                                      PostMultiplyAdditiveValue                                      => _offPostMultiplyAdditiveValue.GetValue();
	public FGameplayEffectAttributeCaptureDefinition           BackingAttribute                                               => _offBackingAttribute.GetValue();
	public FCurveTableRowHandle                                AttributeCurve                                                 => _offAttributeCurve.GetValue();
	public EAttributeBasedFloatCalculationType                 AttributeCalculationType                                       => _offAttributeCalculationType.GetValue();
	public EGameplayModEvaluationChannel                       FinalChannel                                                   => _offFinalChannel.GetValue();
	public FGameplayTagContainer                               SourceTagFilter                                                => _offSourceTagFilter.GetValue();
	public FGameplayTagContainer                               TargetTagFilter                                                => _offTargetTagFilter.GetValue();
	#endregion

	public FAttributeBasedFloat(FScalableFloat c_Coefficient, FScalableFloat c_PreMultiplyAdditiveValue, FScalableFloat c_PostMultiplyAdditiveValue, FGameplayEffectAttributeCaptureDefinition c_BackingAttribute, FCurveTableRowHandle c_AttributeCurve, EAttributeBasedFloatCalculationType c_AttributeCalculationType, EGameplayModEvaluationChannel c_FinalChannel, FGameplayTagContainer c_SourceTagFilter, FGameplayTagContainer c_TargetTagFilter) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offCoefficient.SetValue(c_Coefficient);
		_offPreMultiplyAdditiveValue.SetValue(c_PreMultiplyAdditiveValue);
		_offPostMultiplyAdditiveValue.SetValue(c_PostMultiplyAdditiveValue);
		_offBackingAttribute.SetValue(c_BackingAttribute);
		_offAttributeCurve.SetValue(c_AttributeCurve);
		_offAttributeCalculationType.SetValue(c_AttributeCalculationType);
		_offFinalChannel.SetValue(c_FinalChannel);
		_offSourceTagFilter.SetValue(c_SourceTagFilter);
		_offTargetTagFilter.SetValue(c_TargetTagFilter);
	}
}
// ScriptStruct GameplayAbilities.CustomCalculationBasedFloat
// 0x0078
public class FCustomCalculationBasedFloat : ExternalClass
{
	#region Offsets
	private ExternalOffset<UClass>                             _offCalculationClassMagnitude                                  = new ExternalOffset<UClass>(0x0000, true);                    // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScalableFloat>                     _offCoefficient                                                = new ExternalOffset<FScalableFloat>(0x0008, false);           // 0x0008(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<FScalableFloat>                     _offPreMultiplyAdditiveValue                                   = new ExternalOffset<FScalableFloat>(0x0028, false);           // 0x0028(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<FScalableFloat>                     _offPostMultiplyAdditiveValue                                  = new ExternalOffset<FScalableFloat>(0x0048, false);           // 0x0048(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<FCurveTableRowHandle>               _offFinalLookupCurve                                           = new ExternalOffset<FCurveTableRowHandle>(0x0068, false);     // 0x0068(0x0010) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                              CalculationClassMagnitude                                      => _offCalculationClassMagnitude.GetValue();
	public FScalableFloat                                      Coefficient                                                    => _offCoefficient.GetValue();
	public FScalableFloat                                      PreMultiplyAdditiveValue                                       => _offPreMultiplyAdditiveValue.GetValue();
	public FScalableFloat                                      PostMultiplyAdditiveValue                                      => _offPostMultiplyAdditiveValue.GetValue();
	public FCurveTableRowHandle                                FinalLookupCurve                                               => _offFinalLookupCurve.GetValue();
	#endregion

	public FCustomCalculationBasedFloat(UClass c_CalculationClassMagnitude, FScalableFloat c_Coefficient, FScalableFloat c_PreMultiplyAdditiveValue, FScalableFloat c_PostMultiplyAdditiveValue, FCurveTableRowHandle c_FinalLookupCurve) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offCalculationClassMagnitude.SetValue(c_CalculationClassMagnitude);
		_offCoefficient.SetValue(c_Coefficient);
		_offPreMultiplyAdditiveValue.SetValue(c_PreMultiplyAdditiveValue);
		_offPostMultiplyAdditiveValue.SetValue(c_PostMultiplyAdditiveValue);
		_offFinalLookupCurve.SetValue(c_FinalLookupCurve);
	}
}
// ScriptStruct GameplayAbilities.SetByCallerFloat
// 0x0010
public class FSetByCallerFloat : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offDataName                                                   = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTag>                       _offDataTag                                                    = new ExternalOffset<FGameplayTag>(0x0008, false);             // 0x0008(0x0008) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               DataName                                                       => _offDataName.GetValue();
	public FGameplayTag                                        DataTag                                                        => _offDataTag.GetValue();
	#endregion

	public FSetByCallerFloat(FName c_DataName, FGameplayTag c_DataTag) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offDataName.SetValue(c_DataName);
		_offDataTag.SetValue(c_DataTag);
	}
}
// ScriptStruct GameplayAbilities.GameplayEffectModifierMagnitude
// 0x0190
public class FGameplayEffectModifierMagnitude : ExternalClass
{
	#region Offsets
	private ExternalOffset<EGameplayEffectMagnitudeCalculation> _offMagnitudeCalculationType                                   = new ExternalOffset<EGameplayEffectMagnitudeCalculation>(0x0000, false); // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<FScalableFloat>                     _offScalableFloatMagnitude                                     = new ExternalOffset<FScalableFloat>(0x0008, false);           // 0x0008(0x0020) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FAttributeBasedFloat>               _offAttributeBasedMagnitude                                    = new ExternalOffset<FAttributeBasedFloat>(0x0028, false);     // 0x0028(0x00E0) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FCustomCalculationBasedFloat>       _offCustomMagnitude                                            = new ExternalOffset<FCustomCalculationBasedFloat>(0x0108, false); // 0x0108(0x0078) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	private ExternalOffset<FSetByCallerFloat>                  _offSetByCallerMagnitude                                       = new ExternalOffset<FSetByCallerFloat>(0x0180, false);        // 0x0180(0x0010) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public EGameplayEffectMagnitudeCalculation                 MagnitudeCalculationType                                       => _offMagnitudeCalculationType.GetValue();
	public FScalableFloat                                      ScalableFloatMagnitude                                         => _offScalableFloatMagnitude.GetValue();
	public FAttributeBasedFloat                                AttributeBasedMagnitude                                        => _offAttributeBasedMagnitude.GetValue();
	public FCustomCalculationBasedFloat                        CustomMagnitude                                                => _offCustomMagnitude.GetValue();
	public FSetByCallerFloat                                   SetByCallerMagnitude                                           => _offSetByCallerMagnitude.GetValue();
	#endregion

	public FGameplayEffectModifierMagnitude(EGameplayEffectMagnitudeCalculation c_MagnitudeCalculationType, FScalableFloat c_ScalableFloatMagnitude, FAttributeBasedFloat c_AttributeBasedMagnitude, FCustomCalculationBasedFloat c_CustomMagnitude, FSetByCallerFloat c_SetByCallerMagnitude) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offMagnitudeCalculationType.SetValue(c_MagnitudeCalculationType);
		_offScalableFloatMagnitude.SetValue(c_ScalableFloatMagnitude);
		_offAttributeBasedMagnitude.SetValue(c_AttributeBasedMagnitude);
		_offCustomMagnitude.SetValue(c_CustomMagnitude);
		_offSetByCallerMagnitude.SetValue(c_SetByCallerMagnitude);
	}
}
// ScriptStruct GameplayAbilities.GameplayModEvaluationChannelSettings
// 0x0001
public class FGameplayModEvaluationChannelSettings : ExternalClass
{
	#region Offsets
	private ExternalOffset<EGameplayModEvaluationChannel>      _offChannel                                                    = new ExternalOffset<EGameplayModEvaluationChannel>(0x0000, false); // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public EGameplayModEvaluationChannel                       Channel                                                        => _offChannel.GetValue();
	#endregion

	public FGameplayModEvaluationChannelSettings(EGameplayModEvaluationChannel c_Channel) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offChannel.SetValue(c_Channel);
	}
}
// ScriptStruct GameplayAbilities.GameplayModifierInfo
// 0x0260
public class FGameplayModifierInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<FGameplayAttribute>                 _offAttribute                                                  = new ExternalOffset<FGameplayAttribute>(0x0000, false);       // 0x0000(0x0020) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EGameplayModOp>>        _offModifierOp                                                 = new ExternalOffset<TEnumAsByte<EGameplayModOp>>(0x0020, false); // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FScalableFloat>                     _offMagnitude                                                  = new ExternalOffset<FScalableFloat>(0x0028, false);           // 0x0028(0x0020) (NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayEffectModifierMagnitude>   _offModifierMagnitude                                          = new ExternalOffset<FGameplayEffectModifierMagnitude>(0x0048, false); // 0x0048(0x0190) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayModEvaluationChannelSettings> _offEvaluationChannelSettings                                  = new ExternalOffset<FGameplayModEvaluationChannelSettings>(0x01D8, false); // 0x01D8(0x0001) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTagRequirements>           _offSourceTags                                                 = new ExternalOffset<FGameplayTagRequirements>(0x01E0, false); // 0x01E0(0x0040) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTagRequirements>           _offTargetTags                                                 = new ExternalOffset<FGameplayTagRequirements>(0x0220, false); // 0x0220(0x0040) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGameplayAttribute                                  Attribute                                                      => _offAttribute.GetValue();
	public TEnumAsByte<EGameplayModOp>                         ModifierOp                                                     => _offModifierOp.GetValue();
	public FScalableFloat                                      Magnitude                                                      => _offMagnitude.GetValue();
	public FGameplayEffectModifierMagnitude                    ModifierMagnitude                                              => _offModifierMagnitude.GetValue();
	public FGameplayModEvaluationChannelSettings               EvaluationChannelSettings                                      => _offEvaluationChannelSettings.GetValue();
	public FGameplayTagRequirements                            SourceTags                                                     => _offSourceTags.GetValue();
	public FGameplayTagRequirements                            TargetTags                                                     => _offTargetTags.GetValue();
	#endregion

	public FGameplayModifierInfo(FGameplayAttribute c_Attribute, TEnumAsByte<EGameplayModOp> c_ModifierOp, FScalableFloat c_Magnitude, FGameplayEffectModifierMagnitude c_ModifierMagnitude, FGameplayModEvaluationChannelSettings c_EvaluationChannelSettings, FGameplayTagRequirements c_SourceTags, FGameplayTagRequirements c_TargetTags) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAttribute.SetValue(c_Attribute);
		_offModifierOp.SetValue(c_ModifierOp);
		_offMagnitude.SetValue(c_Magnitude);
		_offModifierMagnitude.SetValue(c_ModifierMagnitude);
		_offEvaluationChannelSettings.SetValue(c_EvaluationChannelSettings);
		_offSourceTags.SetValue(c_SourceTags);
		_offTargetTags.SetValue(c_TargetTags);
	}
}
// ScriptStruct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
// 0x0248
public class FGameplayEffectExecutionScopedModifierInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<FGameplayEffectAttributeCaptureDefinition> _offCapturedAttribute                                          = new ExternalOffset<FGameplayEffectAttributeCaptureDefinition>(0x0000, false); // 0x0000(0x0028) (Edit, DisableEditOnInstance, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EGameplayModOp>>        _offModifierOp                                                 = new ExternalOffset<TEnumAsByte<EGameplayModOp>>(0x0028, false); // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayEffectModifierMagnitude>   _offModifierMagnitude                                          = new ExternalOffset<FGameplayEffectModifierMagnitude>(0x0030, false); // 0x0030(0x0190) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayModEvaluationChannelSettings> _offEvaluationChannelSettings                                  = new ExternalOffset<FGameplayModEvaluationChannelSettings>(0x01C0, false); // 0x01C0(0x0001) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTagRequirements>           _offSourceTags                                                 = new ExternalOffset<FGameplayTagRequirements>(0x01C8, false); // 0x01C8(0x0040) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTagRequirements>           _offTargetTags                                                 = new ExternalOffset<FGameplayTagRequirements>(0x0208, false); // 0x0208(0x0040) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGameplayEffectAttributeCaptureDefinition           CapturedAttribute                                              => _offCapturedAttribute.GetValue();
	public TEnumAsByte<EGameplayModOp>                         ModifierOp                                                     => _offModifierOp.GetValue();
	public FGameplayEffectModifierMagnitude                    ModifierMagnitude                                              => _offModifierMagnitude.GetValue();
	public FGameplayModEvaluationChannelSettings               EvaluationChannelSettings                                      => _offEvaluationChannelSettings.GetValue();
	public FGameplayTagRequirements                            SourceTags                                                     => _offSourceTags.GetValue();
	public FGameplayTagRequirements                            TargetTags                                                     => _offTargetTags.GetValue();
	#endregion

	public FGameplayEffectExecutionScopedModifierInfo(FGameplayEffectAttributeCaptureDefinition c_CapturedAttribute, TEnumAsByte<EGameplayModOp> c_ModifierOp, FGameplayEffectModifierMagnitude c_ModifierMagnitude, FGameplayModEvaluationChannelSettings c_EvaluationChannelSettings, FGameplayTagRequirements c_SourceTags, FGameplayTagRequirements c_TargetTags) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offCapturedAttribute.SetValue(c_CapturedAttribute);
		_offModifierOp.SetValue(c_ModifierOp);
		_offModifierMagnitude.SetValue(c_ModifierMagnitude);
		_offEvaluationChannelSettings.SetValue(c_EvaluationChannelSettings);
		_offSourceTags.SetValue(c_SourceTags);
		_offTargetTags.SetValue(c_TargetTags);
	}
}
// ScriptStruct GameplayAbilities.ConditionalGameplayEffect
// 0x0028
public class FConditionalGameplayEffect : ExternalClass
{
	#region Offsets
	private ExternalOffset<UClass>                             _offEffectClass                                                = new ExternalOffset<UClass>(0x0000, true);                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTagContainer>              _offRequiredSourceTags                                         = new ExternalOffset<FGameplayTagContainer>(0x0008, false);    // 0x0008(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                              EffectClass                                                    => _offEffectClass.GetValue();
	public FGameplayTagContainer                               RequiredSourceTags                                             => _offRequiredSourceTags.GetValue();
	#endregion

	public FConditionalGameplayEffect(UClass c_EffectClass, FGameplayTagContainer c_RequiredSourceTags) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offEffectClass.SetValue(c_EffectClass);
		_offRequiredSourceTags.SetValue(c_RequiredSourceTags);
	}
}
// ScriptStruct GameplayAbilities.GameplayEffectExecutionDefinition
// 0x0058
public class FGameplayEffectExecutionDefinition : ExternalClass
{
	#region Offsets
	private ExternalOffset<UClass>                             _offCalculationClass                                           = new ExternalOffset<UClass>(0x0000, true);                    // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTagContainer>              _offPassedInTags                                               = new ExternalOffset<FGameplayTagContainer>(0x0008, false);    // 0x0008(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FGameplayEffectExecutionScopedModifierInfo>> _offCalculationModifiers                                       = new ExternalOffset<TArray<FGameplayEffectExecutionScopedModifierInfo>>(0x0028, false); // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UClass>>                     _offConditionalGameplayEffectClasses                           = new ExternalOffset<TArray<UClass>>(0x0038, false);           // 0x0038(0x0010) (ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FConditionalGameplayEffect>> _offConditionalGameplayEffects                                 = new ExternalOffset<TArray<FConditionalGameplayEffect>>(0x0048, false); // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UClass                                              CalculationClass                                               => _offCalculationClass.GetValue();
	public FGameplayTagContainer                               PassedInTags                                                   => _offPassedInTags.GetValue();
	public TArray<FGameplayEffectExecutionScopedModifierInfo>  CalculationModifiers                                           => _offCalculationModifiers.GetValue();
	public TArray<UClass>                                      ConditionalGameplayEffectClasses                               => _offConditionalGameplayEffectClasses.GetValue();
	public TArray<FConditionalGameplayEffect>                  ConditionalGameplayEffects                                     => _offConditionalGameplayEffects.GetValue();
	#endregion

	public FGameplayEffectExecutionDefinition(UClass c_CalculationClass, FGameplayTagContainer c_PassedInTags, TArray<FGameplayEffectExecutionScopedModifierInfo> c_CalculationModifiers, TArray<UClass> c_ConditionalGameplayEffectClasses, TArray<FConditionalGameplayEffect> c_ConditionalGameplayEffects) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offCalculationClass.SetValue(c_CalculationClass);
		_offPassedInTags.SetValue(c_PassedInTags);
		_offCalculationModifiers.SetValue(c_CalculationModifiers);
		_offConditionalGameplayEffectClasses.SetValue(c_ConditionalGameplayEffectClasses);
		_offConditionalGameplayEffects.SetValue(c_ConditionalGameplayEffects);
	}
}
// ScriptStruct GameplayAbilities.GameplayModifierEvaluatedData
// 0x0038
public class FGameplayModifierEvaluatedData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FGameplayAttribute>                 _offAttribute                                                  = new ExternalOffset<FGameplayAttribute>(0x0000, false);       // 0x0000(0x0020) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TEnumAsByte<EGameplayModOp>>        _offModifierOp                                                 = new ExternalOffset<TEnumAsByte<EGameplayModOp>>(0x0020, false); // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offMagnitude                                                  = new ExternalOffset<float>(0x0024);                           // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FActiveGameplayEffectHandle>        _offHandle                                                     = new ExternalOffset<FActiveGameplayEffectHandle>(0x0028, false); // 0x0028(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offIsValid                                                    = new ExternalOffset<byte/*(bool)*/>(0x0030);                  // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGameplayAttribute                                  Attribute                                                      => _offAttribute.GetValue();
	public TEnumAsByte<EGameplayModOp>                         ModifierOp                                                     => _offModifierOp.GetValue();
	public float                                               Magnitude                                                      => _offMagnitude.GetValue();
	public FActiveGameplayEffectHandle                         Handle                                                         => _offHandle.GetValue();
	public byte/*(bool)*/                                      IsValid                                                        => _offIsValid.GetValue();
	#endregion

	public FGameplayModifierEvaluatedData(FGameplayAttribute c_Attribute, TEnumAsByte<EGameplayModOp> c_ModifierOp, float c_Magnitude, FActiveGameplayEffectHandle c_Handle, byte/*(bool)*/ c_IsValid) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offAttribute.SetValue(c_Attribute);
		_offModifierOp.SetValue(c_ModifierOp);
		_offMagnitude.SetValue(c_Magnitude);
		_offHandle.SetValue(c_Handle);
		_offIsValid.SetValue(c_IsValid);
	}
}
// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionOutput
// 0x0018
public class FGameplayEffectCustomExecutionOutput : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FGameplayModifierEvaluatedData>> _offOutputModifiers                                            = new ExternalOffset<TArray<FGameplayModifierEvaluatedData>>(0x0000, false); // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
//	private ExternalOffset<char>                               _offbTriggerConditionalGameplayEffects                         = new ExternalOffset<char>(0x0010, false);                     // 0x0010(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
//	private ExternalOffset<char>                               _offbHandledStackCountManually                                 = new ExternalOffset<char>(0x0010, false);                     // 0x0010(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
//	private ExternalOffset<char>                               _offbHandledGameplayCuesManually                               = new ExternalOffset<char>(0x0010, false);                     // 0x0010(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<FGameplayModifierEvaluatedData>              OutputModifiers                                                => _offOutputModifiers.GetValue();
	#endregion

	public FGameplayEffectCustomExecutionOutput(TArray<FGameplayModifierEvaluatedData> c_OutputModifiers) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offOutputModifiers.SetValue(c_OutputModifiers);
	}
}
// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionParameters
// 0x00A8
public class FGameplayEffectCustomExecutionParameters : ExternalClass
{
	#region Offsets
	#endregion

	#region Props
	#endregion

	public FGameplayEffectCustomExecutionParameters() : base(Sdk.MainEms, UIntPtr.Zero)
	{
	}
}
// ScriptStruct GameplayAbilities.GameplayTagBlueprintPropertyMapping
// 0x0030
public class FGameplayTagBlueprintPropertyMapping : ExternalClass
{
	#region Offsets
	private ExternalOffset<FGameplayTag>                       _offTagToMap                                                   = new ExternalOffset<FGameplayTag>(0x0000, false);             // 0x0000(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UProperty>                          _offPropertyToEdit                                             = new ExternalOffset<UProperty>(0x0008, true);                 // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FName>                              _offPropertyName                                               = new ExternalOffset<FName>(0x0010, false);                    // 0x0010(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGuid>                              _offPropertyGuid                                               = new ExternalOffset<FGuid>(0x0018, false);                    // 0x0018(0x0010) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGameplayTag                                        TagToMap                                                       => _offTagToMap.GetValue();
	public UProperty                                           PropertyToEdit                                                 => _offPropertyToEdit.GetValue();
	public FName                                               PropertyName                                                   => _offPropertyName.GetValue();
	public FGuid                                               PropertyGuid                                                   => _offPropertyGuid.GetValue();
	#endregion

	public FGameplayTagBlueprintPropertyMapping(FGameplayTag c_TagToMap, UProperty c_PropertyToEdit, FName c_PropertyName, FGuid c_PropertyGuid) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTagToMap.SetValue(c_TagToMap);
		_offPropertyToEdit.SetValue(c_PropertyToEdit);
		_offPropertyName.SetValue(c_PropertyName);
		_offPropertyGuid.SetValue(c_PropertyGuid);
	}
}
// ScriptStruct GameplayAbilities.GameplayTagBlueprintPropertyMap
// 0x0020
public class FGameplayTagBlueprintPropertyMap : ExternalClass
{
	#region Offsets
	private ExternalOffset<TArray<FGameplayTagBlueprintPropertyMapping>> _offPropertyMappings                                           = new ExternalOffset<TArray<FGameplayTagBlueprintPropertyMapping>>(0x0010, false); // 0x0010(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public TArray<FGameplayTagBlueprintPropertyMapping>        PropertyMappings                                               => _offPropertyMappings.GetValue();
	#endregion

	public FGameplayTagBlueprintPropertyMap(TArray<FGameplayTagBlueprintPropertyMapping> c_PropertyMappings) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPropertyMappings.SetValue(c_PropertyMappings);
	}
}
// ScriptStruct GameplayAbilities.GameplayEffectContext
// 0x0070
public class FGameplayEffectContext : ExternalClass
{
	#region Offsets
	private ExternalOffset<TWeakObjectPtr<AActor>>             _offInstigator                                                 = new ExternalOffset<TWeakObjectPtr<AActor>>(0x0008, false);   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TWeakObjectPtr<AActor>>             _offEffectCauser                                               = new ExternalOffset<TWeakObjectPtr<AActor>>(0x0010, false);   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TWeakObjectPtr<UGameplayAbility>>   _offAbilityCDO                                                 = new ExternalOffset<TWeakObjectPtr<UGameplayAbility>>(0x0018, false); // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TWeakObjectPtr<UGameplayAbility>>   _offAbilityInstanceNotReplicated                               = new ExternalOffset<TWeakObjectPtr<UGameplayAbility>>(0x0020, false); // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<int>                                _offAbilityLevel                                               = new ExternalOffset<int>(0x0028);                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TWeakObjectPtr<UObject>>            _offSourceObject                                               = new ExternalOffset<TWeakObjectPtr<UObject>>(0x002C, false);  // 0x002C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TWeakObjectPtr<UAbilitySystemComponent>> _offInstigatorAbilitySystemComponent                           = new ExternalOffset<TWeakObjectPtr<UAbilitySystemComponent>>(0x0034, false); // 0x0034(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	private ExternalOffset<TArray<TWeakObjectPtr<AActor>>>     _offActors                                                     = new ExternalOffset<TArray<TWeakObjectPtr<AActor>>>(0x0040, false); // 0x0040(0x0010) (ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	private ExternalOffset<FVector>                            _offWorldOrigin                                                = new ExternalOffset<FVector>(0x0060, false);                  // 0x0060(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                               _offbHasWorldOrigin                                            = new ExternalOffset<char>(0x006C, false);                     // 0x006C(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
//	private ExternalOffset<char>                               _offbReplicateSourceObject                                     = new ExternalOffset<char>(0x006C, false);                     // 0x006C(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public TWeakObjectPtr<AActor>                              Instigator                                                     => _offInstigator.GetValue();
	public TWeakObjectPtr<AActor>                              EffectCauser                                                   => _offEffectCauser.GetValue();
	public TWeakObjectPtr<UGameplayAbility>                    AbilityCDO                                                     => _offAbilityCDO.GetValue();
	public TWeakObjectPtr<UGameplayAbility>                    AbilityInstanceNotReplicated                                   => _offAbilityInstanceNotReplicated.GetValue();
	public int                                                 AbilityLevel                                                   => _offAbilityLevel.GetValue();
	public TWeakObjectPtr<UObject>                             SourceObject                                                   => _offSourceObject.GetValue();
	public TWeakObjectPtr<UAbilitySystemComponent>             InstigatorAbilitySystemComponent                               => _offInstigatorAbilitySystemComponent.GetValue();
	public TArray<TWeakObjectPtr<AActor>>                      Actors                                                         => _offActors.GetValue();
	public FVector                                             WorldOrigin                                                    => _offWorldOrigin.GetValue();
	#endregion

	public FGameplayEffectContext(TWeakObjectPtr<AActor> c_Instigator, TWeakObjectPtr<AActor> c_EffectCauser, TWeakObjectPtr<UGameplayAbility> c_AbilityCDO, TWeakObjectPtr<UGameplayAbility> c_AbilityInstanceNotReplicated, int c_AbilityLevel, TWeakObjectPtr<UObject> c_SourceObject, TWeakObjectPtr<UAbilitySystemComponent> c_InstigatorAbilitySystemComponent, TArray<TWeakObjectPtr<AActor>> c_Actors, FVector c_WorldOrigin) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offInstigator.SetValue(c_Instigator);
		_offEffectCauser.SetValue(c_EffectCauser);
		_offAbilityCDO.SetValue(c_AbilityCDO);
		_offAbilityInstanceNotReplicated.SetValue(c_AbilityInstanceNotReplicated);
		_offAbilityLevel.SetValue(c_AbilityLevel);
		_offSourceObject.SetValue(c_SourceObject);
		_offInstigatorAbilitySystemComponent.SetValue(c_InstigatorAbilitySystemComponent);
		_offActors.SetValue(c_Actors);
		_offWorldOrigin.SetValue(c_WorldOrigin);
	}
}
// ScriptStruct GameplayAbilities.GameplayTagReponsePair
// 0x0028
public class FGameplayTagReponsePair : ExternalClass
{
	#region Offsets
	private ExternalOffset<FGameplayTag>                       _offTag                                                        = new ExternalOffset<FGameplayTag>(0x0000, false);             // 0x0000(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClass>                             _offResponseGameplayEffect                                     = new ExternalOffset<UClass>(0x0008, true);                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<UClass>>                     _offResponseGameplayEffects                                    = new ExternalOffset<TArray<UClass>>(0x0010, false);           // 0x0010(0x0010) (Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offSoftCountCap                                               = new ExternalOffset<int>(0x0020);                             // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGameplayTag                                        Tag                                                            => _offTag.GetValue();
	public UClass                                              ResponseGameplayEffect                                         => _offResponseGameplayEffect.GetValue();
	public TArray<UClass>                                      ResponseGameplayEffects                                        => _offResponseGameplayEffects.GetValue();
	public int                                                 SoftCountCap                                                   => _offSoftCountCap.GetValue();
	#endregion

	public FGameplayTagReponsePair(FGameplayTag c_Tag, UClass c_ResponseGameplayEffect, TArray<UClass> c_ResponseGameplayEffects, int c_SoftCountCap) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offTag.SetValue(c_Tag);
		_offResponseGameplayEffect.SetValue(c_ResponseGameplayEffect);
		_offResponseGameplayEffects.SetValue(c_ResponseGameplayEffects);
		_offSoftCountCap.SetValue(c_SoftCountCap);
	}
}
// ScriptStruct GameplayAbilities.GameplayTagResponseTableEntry
// 0x0050
public class FGameplayTagResponseTableEntry : ExternalClass
{
	#region Offsets
	private ExternalOffset<FGameplayTagReponsePair>            _offPositive                                                   = new ExternalOffset<FGameplayTagReponsePair>(0x0000, false);  // 0x0000(0x0028) (Edit, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayTagReponsePair>            _offNegative                                                   = new ExternalOffset<FGameplayTagReponsePair>(0x0028, false);  // 0x0028(0x0028) (Edit, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FGameplayTagReponsePair                             Positive                                                       => _offPositive.GetValue();
	public FGameplayTagReponsePair                             Negative                                                       => _offNegative.GetValue();
	#endregion

	public FGameplayTagResponseTableEntry(FGameplayTagReponsePair c_Positive, FGameplayTagReponsePair c_Negative) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offPositive.SetValue(c_Positive);
		_offNegative.SetValue(c_Negative);
	}
}
// ScriptStruct GameplayAbilities.GameplayEffectRemovalInfo
// 0x0020
public class FGameplayEffectRemovalInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                     _offbPrematureRemoval                                          = new ExternalOffset<byte/*(bool)*/>(0x0000);                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                                _offStackCount                                                 = new ExternalOffset<int>(0x0004);                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGameplayEffectContextHandle>       _offEffectContext                                              = new ExternalOffset<FGameplayEffectContextHandle>(0x0008, false); // 0x0008(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                      bPrematureRemoval                                              => _offbPrematureRemoval.GetValue();
	public int                                                 StackCount                                                     => _offStackCount.GetValue();
	public FGameplayEffectContextHandle                        EffectContext                                                  => _offEffectContext.GetValue();
	#endregion

	public FGameplayEffectRemovalInfo(byte/*(bool)*/ c_bPrematureRemoval, int c_StackCount, FGameplayEffectContextHandle c_EffectContext) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offbPrematureRemoval.SetValue(c_bPrematureRemoval);
		_offStackCount.SetValue(c_StackCount);
		_offEffectContext.SetValue(c_EffectContext);
	}
}

}